#define _CRT_SECURE_NO_WARNINGS 1

#include"BiTree.h"
#include<iostream>
using namespace std;

int nRow = 0;
int n1 = 0;//ȫ�ֱ���
int n2 = 0;
char x = '0';


int main() {
	biNode* pBT;
	char strLine[100][3];
	int nArrLen = 0;
	char fileName[] = "bt151.btr";
	int tag = 0;
	
	//���ļ����򴴽���������
	ReadFileToArray(fileName, strLine, nArrLen);
	CreateBiTreeFromFile(pBT, strLine, nArrLen, nRow);
	//�������
	preOrder(pBT);
	cout << endl;
	inOrder(pBT);
	cout << endl;
	postOrder(pBT);
	cout << endl;

	//1. ������������㼰���
	n1 = 0;
	inOrderLevel(pBT);
	cout << endl<<endl;

	//2. Ҷ�ӽڵ�����1�Ƚ����
	n1 = 0, n2 = 0;
	preOrderCount01(pBT);
	cout << "Ҷ�ӽڵ�����" << n1 << endl;
	cout << "1�Ƚ������" << n2 << endl << endl;



	//4. ����x���󸸽ڵ㡢�ֵܽ�㡢�ӽ���ֵ
	n1 = 0;
	cout << "������x��ֵ��";
	cin >> x;
	preOrderxLevel(pBT, x, tag);
	if (tag == 0)
		cout << x << "�����ڣ�" << endl << endl;
	return 0;
}