#define _CRT_SECURE_NO_WARNINGS 1

#include"tree.h"
#include <queue>
using namespace std;

//先序遍历森林

void preOrder(csNode *T) {
	if (T) {
		cout << T->data << " ";//访问结点
		preOrder(T->firstChild);//遍历左子树
		preOrder(T->nextSibling);//遍历右子树
	}
}

//后序遍历森林
//注：森林的后序遍历，对应其二叉树的中序遍历
void postOrder(csNode* T) {
	if (T) {
		postOrder(T->firstChild);//遍历左子树
		cout << T->data << " ";//访问结点
		postOrder(T->nextSibling);//遍历右子树

	}
}

//层次遍历
//层次遍历森林
void levelOrder(csNode* T) {
	queue<csNode*> q;
	csNode* u, * n, * p;
	if (!T)
		return;
	n = T;
	while (n) {//n指向每一棵树的根结点
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
		n = n->nextSibling;//n指向下一颗树的根结点
	}
}

//求森林的高度

int height(csNode* T) {
	int h1, h2;
	if (!T)//不存在，则返回高度0
		return 0;
	else {//存在，则返回其左右子树中最高的一个高度（需先分别求出左右子树的高度）
		h1 = 1 + height(T->firstChild);
		h2 = height(T->nextSibling);
		return h1 > h2 ? h1: h2;
	}
}


//求森林叶子结点数

void leafNodeNum(csNode* T, int &LN) {
	if (T) {
		if (T->firstChild == NULL)
			LN++;
		leafNodeNum(T->firstChild, LN);//递归孩子子树叶子结点
		leafNodeNum(T->nextSibling, LN);//递归兄弟树叶子结点
	}
}



//森林的度
int Du(csNode* T) {
	csNode* Q[100];   // 数组模拟队列
	int front = 0;
	int rear = 0;
	csNode* p;
	int min = 0;
	int max = 0;
	while (T) {
		Q[++rear] = T;  // 根结点入队
		while (front != rear) {   // 若队列不为空
			// 队头结点出队，并访问出队结点
			p = Q[++front];
			//cout << p->data << " ";
			// 出队结点的非空左右孩子依次入队
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


//5 先序输出结点及层次
void outPreOrder(csNode* T, int level) {
	if (T) {
		cout << "(" << T->data << "," << level << ") "; //访问根结点
		outPreOrder(T->firstChild, level + 1); //孩子层次为 T 的层次加 1	
		outPreOrder(T->nextSibling,level); //兄弟层次与 T 相同
	}
}

//输出广义表表示的树
void outGList(csNode* T)
{
	if (T)
	{
		cout << T->data;//访问根结点
		if (T->firstChild)//T有孩子结点，打印子表
		{
			cout << "(";
			outGList(T->firstChild);
		}
		if (T->nextSibling)//T有兄弟结点，打印","
		{
			cout << ",";
			outGList(T->nextSibling);
		}
		else {//遍历完所有兄弟结点，打印子表结束
			cout << ")";
		}
	}
}




