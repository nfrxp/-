#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include"tree.h"
#include"functions.h"
using namespace std;

int main() {
	pTree T1;//树
	csNode* T;
	int i;
	char fileName[100];//存文件名
	int high=0;//存树的高度
	int LN=0;//存叶子结点数
	int level = 0;//存层次

	cout << "请输入打开的文件名：";
	cin >> fileName;
	CreateTreeFromFile(fileName, T1);//创建双亲表示的树（森林）T1
	createCsTree(T, T1);//转换为二叉链表表示的树（森林）T
	cout << "创建树T成功！" << endl << endl;

	cout << "先序遍历：";
	preOrder(T);
	cout << endl << endl;

	cout << "后序遍历：";
	postOrder(T);
	cout << endl << endl;

	cout << "层次遍历：";
	levelOrder(T);
	cout << endl << endl;

	cout << "高度：" << height(T) << endl << endl;

	cout << "森林叶子结点数：";
	leafNodeNum(T, LN);
	cout << LN << endl << endl;

	cout << "求森林的度：" << Du(T) << endl << endl;

	cout << "先序输出结点及层次：";
	level = 1;
	outPreOrder(T, level);
	cout << endl << endl;

	cout << "广义表：(";
	outGList(T);
	cout << endl << endl;

	return 0;
}

