#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"linkedStack.h"
using namespace std;

void printBoard() {
	cout << "********************顺序栈****************" << endl;
	cout << "*11-初始化                               *" << endl;
	cout << "*12-判栈空                               *" << endl;
	cout << "*13-取栈顶                               *" << endl;
	cout << "*14-入栈                                 *" << endl;
	cout << "*15-出栈                                 *" << endl;
	cout << "*16-销毁                                 *" << endl;
	cout << "*17-交互循环入栈                         *" << endl;
	cout << "*-1-退出                                 *" << endl;
	cout << "******************************************" << endl;
	cout << "*1 -十进制转换为x进制                    *" << endl;
	cout << "*2 -判断括号是否匹配                     *" << endl;
	cout << "*3 -求出所有可能的出栈序列               *" << endl;
	cout << "******************************************" << endl;


}
int main() {
	node* top=new node;
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
			initialStack(top);
			cout << "初始化顺序栈成功！" << endl << endl;
			break;
		case 12:
			if (stackEmpty(top))
				cout << "栈空！" << endl << endl;
			else
				cout << "栈非空！" << endl << endl;
			break;
		case 13:
			if (getTop(top, temp))
				cout << "取栈顶成功,为" << temp << endl << endl;
			else
				cout << "栈空！" << endl << endl;
			break;
		case 14:
			cout << "请输入值：";
			cin >> temp;
			push(top, temp);
			cout << "入栈成功！" << endl << endl;
			break;
		case 15:
			if (pop(top))
				cout << "出栈成功！" << endl << endl;
			else
				cout << "栈空！" << endl << endl;
			break;
		case 16:
			destroyStack(top);
			cout << "销毁成功！" << endl << endl;
			break;
		case 17:
			creatLinkedStack(top);
			cout << "创建顺序栈成功！" << endl;
			break;
		case -1:
			cout << "退出！" << endl << endl;
			break;
		case 1:
			cout << "进制x（2<=x<=36）：";
			cin >> x;
			if (x < 2 || x>36) {
				cout << "进制超出范围！" << endl << endl;
				break;
			}
			cout << "十进制数a=";
			cin >> a;
			baseChangeStack(top, x, a);
			cout << endl << endl;
			break;
		case 2:
			cout << "请输入表达式！";
			cin >> str;
			if (judge(top, str)) {
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

