#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef struct node {
	int data;
	node* firstChild;
	node* nextChild;
}Node;

//�������ɭ�ֽ��ֵ�Լ����
void preOrder(Node* T, int level) {
	if (T) {
		cout << T->data << ' ' << level << endl;
		preOrder(T->firstChild, level + 1);
		preOrder(T->nextChild, level);
	}
}

//��ɭ�ָ߶ȣ�ɭ�ֲ��ö�������洢���������ֵ������ʾ
int fHeight(Node* T) {
	int a = 0, b = 0;
	if (T) {
		a = 1 + fHeight(T->firstChild);
		b = fHeight(T->nextChild);
		return (a > b ? a : b);
	}
	return 0;
}