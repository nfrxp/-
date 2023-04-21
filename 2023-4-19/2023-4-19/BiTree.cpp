#define _CRT_SECURE_NO_WARNINGS 1

#include"BiTree.h"
#include<iostream>
using namespace std;

int nRow = 0;
int n1 = 0;//全局变量
int n2 = 0;
char x = '0';


int main() {
	biNode* pBT;
	char strLine[100][3];
	int nArrLen = 0;
	char fileName[] = "bt151.btr";
	
	//读文件先序创建二叉链表
	ReadFileToArray(fileName, strLine, nArrLen);
	CreateBiTreeFromFile(pBT, strLine, nArrLen, nRow);
	//遍历输出
	preOrder(pBT);
	cout << endl;
	inOrder(pBT);
	cout << endl;
	postOrder(pBT);
	cout << endl;

	//中序遍历输出结点及层次
	n1 = 0;
	inOrderLevel(pBT);
	cout << endl<<endl;

	//叶子节点数和1度结点数
	n1 = 0, n2 = 0;
	preOrderCount01(pBT);
	cout << "叶子节点数：" << n1 << endl;
	cout << "1度结点数：" << n2 << endl << endl;

	//输入x，求父节点、兄弟结点、子结点的值

	return 0;
}