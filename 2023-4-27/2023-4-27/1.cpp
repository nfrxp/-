#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
typedef struct node {
	int data;
	node* firstChild;
	node* nextChild;
}Node;

//先序输出森林结点值以及层次
void preOrder(Node* T, int level) {
	if (T) {
		cout << T->data << ' ' << level << endl;
		preOrder(T->firstChild, level + 1);
		preOrder(T->nextChild, level);
	}
}

//求森林高度，森林采用二叉链表存储，即孩子兄弟链表表示
int fHeight(Node* T) {
	int a = 0, b = 0;
	if (T) {
		a = 1 + fHeight(T->firstChild);
		b = fHeight(T->nextChild);
		return (a > b ? a : b);
	}
	return 0;
}