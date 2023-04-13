#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<stdlib.h>
using namespace std;
typedef int elementType;
typedef struct Node {
	elementType data;
	Node* lChild, * rChild;
}btNode;

void createSubTree(btNode*& p, int k) {//p为根结点
	//k=1创建做子树，k=2创建右子树
	btNode* s;
	elementType x;
	cout << "请输入结点元素值，'/'表示无子树：";
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
		createSubTree(s, 1);//递归创建s的左子树
		createSubTree(s, 2);//递归创建s的右孩子
	}
}

//创建二叉树主控函数
void createBTConsole(btNode*& T) {
	btNode* p;//有必要创建吗？
	elementType x;
	cout << "请按先序序列输入结点，/'表示空";
	cin >> x;
	if(x=='/')
		return;
	else {
		T = new btNode;
		T->data = x;
		T->lChild = NULL;
		T->rChild = NULL;
		createSubTree(T, 1);//创建根节点的左子树
		createSubTree(T, 2);//创建根结点的右子树
	}

}

int main() {
	btNode* T=NULL;
	createBTConsole(T);
	return 0;
}