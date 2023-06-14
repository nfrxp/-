#define _CRT_SECURE_NO_WARNINGS 1

#include"tree.h"
#include <queue>
using namespace std;

//�������ɭ��

void preOrder(csNode *T) {
	if (T) {
		cout << T->data << " ";//���ʽ��
		preOrder(T->firstChild);//����������
		preOrder(T->nextSibling);//����������
	}
}

//�������ɭ��
//ע��ɭ�ֵĺ����������Ӧ����������������
void postOrder(csNode* T) {
	if (T) {
		postOrder(T->firstChild);//����������
		cout << T->data << " ";//���ʽ��
		postOrder(T->nextSibling);//����������

	}
}

//��α���
//��α���ɭ��
void levelOrder(csNode* T) {
	queue<csNode*> q;
	csNode* u, * n, * p;
	if (!T)
		return;
	n = T;
	while (n) {//nָ��ÿһ�����ĸ����
		p = n;
		q.push(p);
		while (!q.empty()) {
			p = q.front();
			cout << p->data << " ";
			u = p->firstChild;
			while (u) {
				p = u;
				q.push(p);
				u = u->nextSibling;
			}
			q.pop();
		}
		n = n->nextSibling;//nָ����һ�����ĸ����
	}
}

//��ɭ�ֵĸ߶�

int height(csNode* T) {
	int h1, h2;
	if (!T)//�����ڣ��򷵻ظ߶�0
		return 0;
	else {//���ڣ��򷵻���������������ߵ�һ���߶ȣ����ȷֱ�������������ĸ߶ȣ�
		h1 = 1 + height(T->firstChild);
		h2 = height(T->nextSibling);
		return h1 > h2 ? h1: h2;
	}
}


//��ɭ��Ҷ�ӽ����

void leafNodeNum(csNode* T, int &LN) {
	if (T) {
		if (T->firstChild == NULL)
			LN++;
		leafNodeNum(T->firstChild, LN);//�ݹ麢������Ҷ�ӽ��
		leafNodeNum(T->nextSibling, LN);//�ݹ��ֵ���Ҷ�ӽ��
	}
}



//ɭ�ֵĶ�
int Du(csNode* T) {
	csNode* Q[100];   // ����ģ�����
	int front = 0;
	int rear = 0;
	csNode* p;
	int min = 0;
	int max = 0;
	while (T) {
		Q[++rear] = T;  // ��������
		while (front != rear) {   // �����в�Ϊ��
			// ��ͷ�����ӣ������ʳ��ӽ��
			p = Q[++front];
			//cout << p->data << " ";
			// ���ӽ��ķǿ����Һ����������
			while (p->firstChild != NULL) {
				Q[++rear] = p->firstChild;
				p->firstChild = p->firstChild->nextSibling;
				min++;
			}
			if (min > max) {
				max = min;
			}
			min = 0;
		}
		T = T->nextSibling;
	}
	return max;

}


//5 ���������㼰���
void outPreOrder(csNode* T, int level) {
	if (T) {
		cout << "(" << T->data << "," << level << ") "; //���ʸ����
		outPreOrder(T->firstChild, level + 1); //���Ӳ��Ϊ T �Ĳ�μ� 1	
		outPreOrder(T->nextSibling,level); //�ֵܲ���� T ��ͬ
	}
}

//���������ʾ����
void outGList(csNode* T)
{
	if (T)
	{
		cout << T->data;//���ʸ����
		if (T->firstChild)//T�к��ӽ�㣬��ӡ�ӱ�
		{
			cout << "(";
			outGList(T->firstChild);
		}
		if (T->nextSibling)//T���ֵܽ�㣬��ӡ","
		{
			cout << ",";
			outGList(T->nextSibling);
		}
		else {//�����������ֵܽ�㣬��ӡ�ӱ����
			cout << ")";
		}
	}
}




