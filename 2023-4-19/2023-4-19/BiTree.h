#define _CRT_SECURE_NO_WARNINGS 1

typedef char elementType;
#include<iostream>
using namespace std;


typedef struct blNode {
	elementType data;
	blNode* lChild, * rChild;//指针指向左右孩子
}biNode,*BiTree;

//读文件按先序创建二叉链表
//【算法思想】从文件中读取数据到二维数组中，再从数组中读取数据进行二叉树的创建

//从文件中读数据到二维数组中
bool ReadFileToArray(char fileName[], char strLine[100][3], int& nArrLen) {
	//filename存放文件名；strLen存放数据；nArrLen返回结点个数
	FILE* pFile;//文件指针
	char str[1000];//存放一行字符串
	//char strTemp[10];//判断是否注释行

	int i = 0;
	int tag = 0;
	pFile = fopen(fileName, "r");
	if (!pFile) {
		cout << "错误：文件" << fileName << "打开失败！\n";
		return false;
	}
	//打开成功
	
	while (fgets(str, 1000, pFile) != NULL) {//跳过空行、注释行
		//删除字符串左边空格
		//strTemp(str);
		if (str[0] == '\n')//空行，读下一行
			continue;
		if (str[0] == '/' && str[1] == '/')//跳过注释行
			continue;
		if (str[0] == ' ') { //空格开头
			//判断是否为带空格的注释行
			for (i = 1; i < 1000; i++) {
				if (str[i] == '/' && str[i] == str[i + 1]) {
					tag = 0;//跳过注释行
					break;
				}
				else if (str[i] == 'B') {
					//默认标识符匹配，则跳过该行
					tag = 0;
					break;
				}
			}
			if (tag == 0)
				continue;//跳过带空格的注释行
			//不是带空格的注释行,则判断标识符，若匹配，则进入下一步传入数据，此时str存储的是标识符行
			break;

		}
		else {
			if (strcmp(str, "BinaryTree\n") != 0)
			{
				printf("打开的文件格式错误！\n");
				fclose(pFile);     //关闭文件
				return false;
			}
			else {
				break;
			}
		}
	}
	fgets(str, 1000, pFile);
	do{
		if (str[0] == '\n')
			continue;
		if (str[0] == '/' && str[1] == '/')
			continue;
		//文件格式正确,开始取数据到数组中
		//fscanf(pFile, "%c  %c  %c\n", &strLine[nArrLen][0], &strLine[nArrLen][1], &strLine[nArrLen][2]);
		strLine[nArrLen][0] = str[0];
		strLine[nArrLen][1] = str[2];
		strLine[nArrLen][2] = str[4];

		//按行取数据，结点+1
		nArrLen++;
		
	} while (fgets(str, 1000, pFile) != NULL);


	fclose(pFile);//关闭文件
	return true;
}

//从数组中读取数据按先序进行二叉树的创建
bool CreateBiTreeFromFile(biNode*& pBT, char strLine[100][3], int nLen, int nRow) {
	//nLen结点个数；nRow数组行号
	if (nRow >= nLen || nLen == 0) {
		return false;
		//无数据或数据已经处理完毕，结束
	}
	//创建二叉树
	pBT = new biNode;//创建根结点
	pBT->data = strLine[nRow][0];
	pBT->lChild = NULL;
	pBT->rChild = NULL;
	int nRowNext = nRow;//存储本次递归的行号
	if (strLine[nRowNext][1] == '1') {
		//左子树存在，创建左子树
		nRow++;
		CreateBiTreeFromFile(pBT->lChild, strLine, nLen, nRow);
	}
	if (strLine[nRowNext][2] == '1') {
		//右子树存在，创建右子树
		nRow++;
		CreateBiTreeFromFile(pBT->rChild, strLine, nLen, nRow);
	}
	return true;
}