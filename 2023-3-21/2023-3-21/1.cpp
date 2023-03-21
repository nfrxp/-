#define _CRT_SECURE_NO_WARNINGS 1

typedef int elementType;
#include<iostream>
using namespace std;

//判断输出序列是否合法
//bool legalOut(elementType InStack[], elementType OutStack[], int len)
//{
//	//InStack[]保存入栈序列
//	//OutStack[]保存输出序列
//	//len代表序列长度
//	int i = 0, j = 0; //i 为入栈序列指针； j 为输出序列指针
//	elementType x;
//	Stack<int, 100> S; //初始化顺序栈
//	while (j < len)
//	{
//		S.getTop(x); 
//			if (InStack[i] < OutStack[j] && i < len) //入栈序列元素小于输出序列元素
//			{
//				S.push(InStack[i]); //入栈（当前入栈序列的元素）
//				i++; //入栈序列指针后移
//			}
//			else if (InStack[i] == OutStack[j]) //入栈序列元素等于输出序列元素
//			{
//				i++; //指针同时后移
//				j++;
//			}
//			else if (x == OutStack[j]) //栈顶元素等于输出序列当前元素
//			{
//				S.pop(); //出栈
//				j++; //输出序列指针后移
//			}
//			else
//				break;
//	}
//	if (S.empty() && i >= len) //栈空，且入栈序列处理完毕，输出序列合法
//		return true;
//	else
//		return false;
//}




//判断括号是否匹配
bool bracketMatch2(string str)
{
	Stack<char, 100> S; //初始化一个字符串顺序栈
	int len=str.length();//字符串长度
	char x; //保存栈顶字符（左括号）
	int i = 0;
	char all[6] = { '(','[','{','}',']',')' };

	for (i=0;i < len ;i++)
	{
		if (str[i] == all[0] || str[i] == all[1] || str[i] == all[2]) {
			S.push(str[i]);
		}
		else if (str[i] == all[5]) {
			if (S.empty()) {
				return false;
			}
			S.getTop(x);//取栈顶
			if (x == all[0]) {
				S.pop();
				continue;
			}
			else {
				return false;
			}
		}
		else if (str[i] == all[4]) {
			if (S.emtpy()) {
				return false;
			}
			S.getTop(x);//取栈顶
			if (x == all[1]) {
				S.pop();
				continue;
			}
			else {
				return false;
			}
		}
		else if (str[i] == all[3]) {
			if (S.empty()) {
				return false;
			}
			S.getTop(x);//取栈顶
			if (x == all[2]) {
				S.pop();
				continue;
			}
			else {
				return false;
			}
		}
		else {
			continue;
		}
	}
	//表达式已扫描完，排除了配对不正确、右括号比左括号多的情况
	if (S.empty()){//排除左括号比右括号多的情况
		return true;
	}
	else
		return false;
}