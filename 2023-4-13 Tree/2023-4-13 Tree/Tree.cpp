#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
using namespace std;
typedef int elementType;
typedef struct Node {
	elementType data;
	Node* lChild, * rChild;
}btNode;

void createSubTree(btNode*& p, int k) {//pΪ�����
	//k=1������������k=2����������
	btNode* s;
	elementType x;
	cout << "��������Ԫ��ֵ��'/'��ʾ��������";
	cin >> x;
	if (x != '/') {
		s = new btNode;
		s->data = x;
		s->lChild = NULL;
		s->rChild = NULL;
		if (k == 1)
			p->lChild = s;
		if (k == 2)
			p->rChild = s;
		createSubTree(s, 1);//�ݹ鴴��s��������
		createSubTree(s, 2);//�ݹ鴴��s���Һ���
	}
}

//�������������غ���
void createBTConsole(btNode*& T) {
	btNode* p;//�б�Ҫ������
	elementType x;
	cout << "�밴�������������㣬/'��ʾ��";
	cin >> x;
	if(x=='/')
		return;
	else {
		T = new btNode;
		T->data = x;
		T->lChild = NULL;
		T->rChild = NULL;
		createSubTree(T, 1);//�������ڵ��������
		createSubTree(T, 2);//����������������
	}

}

int main() {
	btNode* T=NULL;
	createBTConsole(T);
	return 0;
}