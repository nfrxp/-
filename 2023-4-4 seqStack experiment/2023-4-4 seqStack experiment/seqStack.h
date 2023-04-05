#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#define MaxLen 100
typedef int elementType;
using namespace std;
int Num = 0;


typedef struct stack {
	elementType data[MaxLen];
	int top;
}seqStack;

//11初始化
void initialStack(seqStack& S) {
	S.top = -1;
}

//12判栈空
bool stackEmpty(seqStack& S) {
	if (S.top == -1)
		return true;
	return false;
}

//13判栈满
bool stackFull(seqStack& S) {
	if (S.top == MaxLen - 1)
		return true;
	return false;
}

//14取栈顶元素
bool getTop(seqStack& S, elementType& x) {
	if (stackEmpty(S))
		return false;
	x = S.data[S.top];
	return true;
}

//15入栈
bool push(seqStack& S, elementType x) {
	if (stackFull(S))
		return false;
	//S.top++;
	S.data[++S.top] = x;
	return true;
}


//16出栈
bool pop(seqStack& S, elementType& x) {
	if (stackEmpty(S))
		return false;
	x = S.data[S.top--];
	return true;
}

bool pop(seqStack& S) {
	if (stackEmpty(S))
		return false;
	S.top--;
	return true;
}

//17打印栈元素
void printStack(seqStack& S) {
	int i = 0;
	if (stackEmpty(S)) {
		cout << "栈空！" << endl;
		return;
	}
	cout << "栈元素（右边为栈顶）：";
	while (i <= S.top) {
		cout << S.data[i] << ' ';
		i ++ ;
	}
	cout << endl << endl;
}

//18交互循环入栈
void creatSeqStack(seqStack& S) {
	elementType x;
	cout << "请输入值（-99999为终止标志）：" << endl;
	cout << "x=";
	cin >> x;
	while (S.top != MaxLen - 1 && x != -99999) {
		S.data[++S.top] = x;
		cout << "x=";
		cin >> x;
	}
	if (S.top == MaxLen - 1)
		cout << "栈满！" << endl << endl;
}

//19打印
void printOut(elementType Out[], int len) {
	int i = 0;
	while (i < len) {
		cout << Out[i] << ' ';
		i++;
	}
	cout << endl;
}

//1 十进制转换为x进制，2 <= x <= 36
void baseChangeStack(seqStack& S, int x, int a) {
	int temp = 0;
	while (a > 0) {
		push(S, a % x);
		a /= x;
	}
	cout << "转换为" << x << "进制：";
	while (!stackEmpty(S)) {
		pop(S, temp);
		if (temp >= 10)
			printf("%c", temp + 55);
		else
			printf("%d", temp);
	}
}

//2 判断括号是否匹配
bool judge(seqStack& S, string str) {
	int len = str.length();
	int i = 0;
	elementType x = 0;
	char arr[] = { '{','[','(',')',']','}' };
	for (i = 0; i < len; i++) {//排除匹配错误以及右括号多于左括号的情况
		if (str[i] == arr[0] || str[i] == arr[1] || str[i] == arr[2])
			push(S, str[i]);
		else if (str[i] == arr[3]) {
			if (getTop(S, x) && x == arr[2]) {
				pop(S);
				continue;
			}
			return false;
		}
		else if (str[i] == arr[4]) {
			if (getTop(S, x) && x == arr[1]) {
				pop(S);
				continue;
			}
			return false;
		}
		else if (str[i] == arr[5]) {
			if (getTop(S, x) && x == arr[0]) {
				pop(S);
				continue;
			}
			return false;
		}
		else continue;
	}
	if (!stackEmpty(S))//排除左括号比右括号多的情况
		return false;
	return true;
}

//3 求出所有可能的出栈序列
void legalSequence(seqStack& S, elementType In[], elementType Out[], int len, int i, int j)
{
	//Num 全局变量，存储可能出栈的序列个数
	elementType x;
	if (stackEmpty(S) && j >= len) //递归出口，入栈序列访问完毕，获得了一个出栈序列
	{
		Num++; //序列数加 1
		cout << Num << "：";
		printOut(Out, len); //打印序列
	}
	else if (!stackEmpty(S) && i < len) //栈不空，入栈序列中还有数据
	{
		//选择出栈
		getTop(S, x);
		pop(S);
		Out[j] = x;
		j++;
		legalSequence(S, In, Out, len, i, j);
		j--; //递归返回，恢复到出栈前的状态
		push(S, x);
		//选择入栈
		push(S, In[i]);
		i++;
		legalSequence(S, In, Out, len, i, j);
		i--; //恢复到入栈前的状态
		pop(S);
	}
	else if (!stackEmpty(S) && i >= len) //栈不空，入栈序列数据已经处理结束
	{
		//此时只能选择出栈操作
		getTop(S, x);
		pop(S);
		Out[j] = x;
		j++;
		legalSequence(S, In, Out, len, i, j);
		j--; //恢复到出栈前状态
		push(S, x);
	}
	else if (stackEmpty(S) && i < len) //栈空，入栈序列未处理结束
	{
		//此时，只能选择入栈操作
		push(S, In[i]);
		i++;
		legalSequence(S, In, Out, len, i, j);
		i--; //恢复到入栈前的状态
		pop(S);
	}
}