#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

typedef int elementType;

typedef struct Node {
	elementType data;
	Node* next;
}node,*linkedStack;

//��ͷ���
//11��ʼ��
void initialStack(node* top) {
	top->next = NULL;
}

//12��ջ��
bool stackEmpty(node* top) {
	if (top->next == NULL)
		return true;
	return false;
}

//13ȡջ��Ԫ��
bool getTop(node* top, elementType& x) {
	if (stackEmpty(top))
		return false;
	x = top->next->data;
	return true;
}

//14��ջ
void push(node* top, elementType x) {
	node* temp1 = new node;
	temp1->data = x;
	temp1->next = top->next;
	top->next = temp1;
	temp1 = NULL;
}

//15��ջ
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

//16����
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

//17����ѭ����ջ
void creatLinkedStack(node* top) {
	elementType x;
	cout << "������ֵ��-99999Ϊ������־����";
	cin >> x;
	while (x != -99999) {
		push(top, x);
		cout << "x=";
		cin >> x;
	}
}

//1. ��ջʵ��ʮ������ת��Ϊx��������2<=x<=36��
void baseChangeStack(node* top, int x, int a) {
	elementType temp;
	while(a>0){
		push(top, a % x);
		a /= x;
	}
	cout << "ת��Ϊ" << x << "���ƣ�";
	while (!stackEmpty(top)) {
		pop(top, temp);
		if (temp >= 10)
			printf("%c", temp + 55);
		else
			printf("%d", temp);
	}
}

//2. ��ջ�ж������Ƿ�ƥ��
bool judge(node* top, string str) {
	int len = str.length();
	int i = 0;
	elementType x = 0;
	char arr[] = { '{','[','(',')',']','}' };
	for (i = 0; i < len; i++) {//�ų�ƥ������Լ������Ŷ��������ŵ����
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
	if (!stackEmpty(top))//�ų������ű������Ŷ�����
		return false;
	return true;
}

//3. ��ջʵ��������п��ܳ�ջ����
