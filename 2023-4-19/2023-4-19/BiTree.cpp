#define _CRT_SECURE_NO_WARNINGS 1

#include"BiTree.h"
#include<iostream>
using namespace std;

int nRow = 0;

int main() {
	biNode* pBT;
	char strLine[100][3];
	int nArrLen = 0;
	char fileName[] = "bt4.btr";
	ReadFileToArray(fileName, strLine, nArrLen);
	CreateBiTreeFromFile(pBT, strLine, nArrLen, nRow);
	return 0;
}