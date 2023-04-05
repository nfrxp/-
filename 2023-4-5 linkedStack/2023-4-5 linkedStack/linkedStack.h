#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

typedef int elementType;

typedef struct Node {
	elementType data;
	Node* next;
}node,*linkedStack;

//带头结点
//11初始化
void initialStack(node* top) {
	top->next = NULL;
}

//12判栈空
bool stackEmpty(node* top) {
	if (top->next == NULL)
		return true;
	return false;
}

//13取栈顶元素
bool getTop(node* top, elementType& x) {
	if (stackEmpty(top))
		return false;
	x = top->next->data;
	return true;
}

//14入栈
void push(node* top, elementType x) {
	node* temp1 = new node;
	temp1->data = x;
	temp1->next = top->next;
	top->next = temp1;
	temp1 = NULL;
}

//15出栈
bool pop(node* top, elementType& x) {
	node* temp;
	if (stackEmpty(top))
		return false;
	temp = top->next;
	x = temp->data;
	top->next = temp->next;
	delete temp;
	return true;
}

bool pop(node* top) {
	node* temp;
	if (stackEmpty(top))
		return false;
	temp = top->next;
	top->next = temp->next;
	delete temp;
	return true;
}

//16销毁
void destroyStack(node*& top) {
	node* temp1 = top;
	node* temp2;
	while (temp1 != NULL) {
		temp2 = temp1;
		temp1 = temp1->next;
		delete temp2;
	}
	top = NULL;
}

//17交互循环入栈
void creatLinkedStack(node* top) {
	elementType x;
	cout << "请输入值（-99999为结束标志）：";
	cin >> x;
	while (x != -99999) {
		push(top, x);
		cout << "x=";
		cin >> x;
	}
}

//1. 链栈实现十进制数转换为x进制数（2<=x<=36）
void baseChangeStack(node* top, int x, int a) {
	elementType temp;
	while(a>0){
		push(top, a % x);
		a /= x;
	}
	cout << "转换为" << x << "进制：";
	while (!stackEmpty(top)) {
		pop(top, temp);
		if (temp >= 10)
			printf("%c", temp + 55);
		else
			printf("%d", temp);
	}
}

//2. 链栈判断括号是否匹配
bool judge(node* top, string str) {
	int len = str.length();
	int i = 0;
	elementType x = 0;
	char arr[] = { '{','[','(',')',']','}' };
	for (i = 0; i < len; i++) {//排除匹配错误以及右括号多于左括号的情况
		if (str[i] == arr[0] || str[i] == arr[1] || str[i] == arr[2])
			push(top, str[i]);
		else if (str[i] == arr[3]) {
			if (getTop(top, x) && x == arr[2]) {
				pop(top);
				continue;
			}
			return false;
		}
		else if (str[i] == arr[4]) {
			if (getTop(top, x) && x == arr[1]) {
				pop(top);
				continue;
			}
			return false;
		}
		else if (str[i] == arr[5]) {
			if (getTop(top, x) && x == arr[0]) {
				pop(top);
				continue;
			}
			return false;
		}
		else continue;
	}
	if (!stackEmpty(top))//排除左括号比右括号多的情况
		return false;
	return true;
}

//3. 链栈实现输出所有可能出栈可能
