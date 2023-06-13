#define _CRT_SECURE_NO_WARNINGS 1

#include"BiTree.h"
#include<iostream>
using namespace std;

int nRow = 0;
int n1 = 0;//全局变量
int n2 = 0;
char x = '0';
bool f = 0;

void printBoard() {
	cout << "********************二叉树*********************" << endl;
	cout << "*1. 中序遍历输出结点及层次                    *" << endl;
	cout << "*2. 叶子节点数和1度结点数                     *" << endl;
	cout << "*3. 输入x，求父节点、兄弟结点、子结点的值     *" << endl;
	cout << "*4. 求x的层次                                 *" << endl;
	cout << "*5  转换为二叉链表形式                        *" << endl;
	cout << "*6. 输出二叉树从每个叶子结点到根结点的路径    *" << endl;
	cout << "*7. 层次遍历                                  *" << endl;
	cout << "*21.复制二叉树                                *" << endl;
	cout << "*22.交换左右子树                              *" << endl;
	cout << "*23.查找二叉树结点的公共父节点                *" << endl;
	cout << "***********************************************" << endl;


}
int main() {
	int choice = 0;
	biNode* pBT;
	biNode* pBT2;
	pBT2 = new biNode;
	char strLine[100][3];
	int nArrLen = 0;
	char fileName[] = "bt21.btr";
	int tag = 0;
	char A[100];

	elementType path[100];
	int top = 0;

	char p = 0;
	char q = 0;

	
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

	printBoard();
	while (choice != -1) {
		cout << "请输入操作序号：";
		cin >> choice;
		switch (choice) {
		case 1:
			//1. 中序遍历输出结点及层次
				n1 = 0;
				inOrderLevel(pBT);
				cout << endl<<endl;
			
			cout << endl << endl;
			break;
		case 2:
			//2. 叶子节点数和1度结点数
			n1 = 0, n2 = 0;
			preOrderCount01(pBT);
			cout << "叶子节点数：" << n1 << endl;
			cout << "1度结点数：" << n2 << endl << endl;
			break;
		case 3:
			//3.输入x，求父节点、兄弟结点、子结点的值
			x = 'a';
			getx(pBT, x, f);
			cout << endl << endl;

			break;
		case 4:
			//4. 求x的层次
			n1 = 0;
			cout << "请输入x的值：";
			cin >> x;
			preOrderxLevel(pBT, x, tag);
			if (tag == 0)
				cout << x << "不存在！" << endl << endl;

			break;
		case 5:
			//5
			ArrayToBiTree(pBT, A, n1, n2);
			cout << endl << endl;

			break;
		case 6:
			//6. 输出二叉树从每个叶子结点到根结点的路径
			cout << "6. 输出二叉树从每个叶子结点到根结点的路径" << endl;
			pathTree(pBT, path, top);
			cout << endl << endl;

			break;
		case 7:
			//7
			cout << "7" << endl;
			LevelOrder(pBT);
			cout << endl << endl;

			break;
		case 21:
			//21.复制二叉树
			copyTree(pBT, pBT2);
			cout << "pBT";
			preOrder(pBT);
			cout << endl;
			cout << "pBT2";
			preOrder(pBT2);
			cout << endl << endl;

			break;
		case 22:
			//22.交换左右子树
			cout << "交换前";
			preOrder(pBT);
			cout << endl;
			changeLR(pBT);
			cout << "交换后";
			preOrder(pBT);
			cout << endl << endl;

			break;
		case 23:
			//23.查找二叉树结点的公共父节点
			p = 'a';
			q = 'b';
			cout << LowestCommonAncestorInBinaryTree(pBT, p, q)->data;
			cout << endl << endl;

			break;
		default:
			cout << "非法操作！" << endl << endl;

			break;
		}
	}





	


	







}