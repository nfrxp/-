#define _CRT_SECURE_NO_WARNINGS 1

#include"BiTree.h"
#include<iostream>
using namespace std;

int nRow = 0;
int n1 = 0;//ȫ�ֱ���
int n2 = 0;
char x = '0';
bool f = 0;

void printBoard() {
	cout << "********************������*********************" << endl;
	cout << "*1. ������������㼰���                    *" << endl;
	cout << "*2. Ҷ�ӽڵ�����1�Ƚ����                     *" << endl;
	cout << "*3. ����x���󸸽ڵ㡢�ֵܽ�㡢�ӽ���ֵ     *" << endl;
	cout << "*4. ��x�Ĳ��                                 *" << endl;
	cout << "*5  ת��Ϊ����������ʽ                        *" << endl;
	cout << "*6. �����������ÿ��Ҷ�ӽ�㵽������·��    *" << endl;
	cout << "*7. ��α���                                  *" << endl;
	cout << "*21.���ƶ�����                                *" << endl;
	cout << "*22.������������                              *" << endl;
	cout << "*23.���Ҷ��������Ĺ������ڵ�                *" << endl;
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

	printBoard();
	while (choice != -1) {
		cout << "�����������ţ�";
		cin >> choice;
		switch (choice) {
		case 1:
			//1. ������������㼰���
				n1 = 0;
				inOrderLevel(pBT);
				cout << endl<<endl;
			
			cout << endl << endl;
			break;
		case 2:
			//2. Ҷ�ӽڵ�����1�Ƚ����
			n1 = 0, n2 = 0;
			preOrderCount01(pBT);
			cout << "Ҷ�ӽڵ�����" << n1 << endl;
			cout << "1�Ƚ������" << n2 << endl << endl;
			break;
		case 3:
			//3.����x���󸸽ڵ㡢�ֵܽ�㡢�ӽ���ֵ
			x = 'a';
			getx(pBT, x, f);
			cout << endl << endl;

			break;
		case 4:
			//4. ��x�Ĳ��
			n1 = 0;
			cout << "������x��ֵ��";
			cin >> x;
			preOrderxLevel(pBT, x, tag);
			if (tag == 0)
				cout << x << "�����ڣ�" << endl << endl;

			break;
		case 5:
			//5
			ArrayToBiTree(pBT, A, n1, n2);
			cout << endl << endl;

			break;
		case 6:
			//6. �����������ÿ��Ҷ�ӽ�㵽������·��
			cout << "6. �����������ÿ��Ҷ�ӽ�㵽������·��" << endl;
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
			//21.���ƶ�����
			copyTree(pBT, pBT2);
			cout << "pBT";
			preOrder(pBT);
			cout << endl;
			cout << "pBT2";
			preOrder(pBT2);
			cout << endl << endl;

			break;
		case 22:
			//22.������������
			cout << "����ǰ";
			preOrder(pBT);
			cout << endl;
			changeLR(pBT);
			cout << "������";
			preOrder(pBT);
			cout << endl << endl;

			break;
		case 23:
			//23.���Ҷ��������Ĺ������ڵ�
			p = 'a';
			q = 'b';
			cout << LowestCommonAncestorInBinaryTree(pBT, p, q)->data;
			cout << endl << endl;

			break;
		default:
			cout << "�Ƿ�������" << endl << endl;

			break;
		}
	}





	


	







}