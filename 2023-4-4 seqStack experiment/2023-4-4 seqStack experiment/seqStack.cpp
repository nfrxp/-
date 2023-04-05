#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"seqStack.h"
using namespace std;

void printBoard() {
	cout << "********************顺序栈****************" << endl;
	cout << "*11-初始化                               *" << endl;
	cout << "*12-判栈空                               *" << endl;
	cout << "*13-判栈满                               *" << endl;
	cout << "*14-取栈顶                               *" << endl;
	cout << "*15-入栈                                 *" << endl;
	cout << "*16-出栈                                 *" << endl;
	cout << "*17-打印栈                               *" << endl;
	cout << "*18-交互循环入栈                         *" << endl;
	cout << "*-1-退出                                 *" << endl;
	cout << "******************************************" << endl;
	cout << "*1 -十进制转换为x进制                    *" << endl;
	cout << "*2 -判断括号是否匹配                     *" << endl;
	cout << "*3 -求出所有可能的出栈序列               *" << endl;
	cout << "******************************************" << endl;


}
int main() {
	seqStack S;
	elementType temp;
	int choice = 0;
	int x = 0;//进制
	int a = 0;//十进制数 
	string str;

	printBoard();
	while (choice != -1) {
		cout << "请输入操作序号：";
		cin >> choice;
		switch (choice) {
		case 11:
			initialStack(S);
			cout << "初始化顺序栈成功！" << endl << endl;
			break;
		case 12:
			if (stackEmpty(S))
				cout << "栈空！" << endl << endl;
			else
				cout << "栈非空！" << endl << endl;
			break;
		case 13:
			if (stackFull(S))
				cout << "栈满！" << endl << endl;
			else
				cout << "栈非满！" << endl << endl;
			break;
		case 14:
			if (getTop(S, temp))
				cout << "取栈顶成功,为" << temp << endl << endl;
			else
				cout << "栈空！" << endl << endl;
			break;
		case 15:
			cout << "请输入值：";
			cin >> temp;
			if (push(S, temp))
				cout << "入栈成功！" << endl << endl;
			else
				cout << "栈满！" << endl << endl;
			break;
		case 16:
			if (pop(S))
				cout << "出栈成功！" << endl << endl;
			else
				cout << "栈空！" << endl << endl;
			break;
		case 17:
			printStack(S);
			break;
		case 18:
			creatSeqStack(S);
			cout << "创建顺序栈成功！" << endl;
			printStack(S);
			break;
		case 1:

			cout << "进制x（2<=x<=36）：";
			cin >> x;
			if (x < 2 || x>36)	{
				cout << "进制超出范围！" << endl << endl;
				break;
			}
			cout << "十进制数a=";
			cin >> a;
			baseChangeStack(S, x, a);
			cout << endl << endl;
			break;
		case 2:
			cout << "请输入表达式：";
			cin >> str;
			if (judge(S, str)) {
				cout << "括号匹配！" << endl << endl;
			}
			else
				cout << "匹配失败！" << endl << endl;
			break;
		default:
			cout << "非法操作！" << endl << endl;
			break;
		}
	}
	return 0;
}

