#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
#include<iostream>
using namespace std;
#include "seqList.h"
void printBoard()
{
	//��ӡ���˵�
	cout << "˳�����Գ���" << endl;
	cout << "*0  -�˳�" << endl;
	cout << "*111-��ʼ��˳���L1" << endl;
	cout << "*112-��ʼ��˳���L2" << endl;
	cout << "*113-��ʼ��˳���L3" << endl;
	cout << "*121-����˳���L1" << endl;
	cout << "*122-����˳���L2" << endl;
	cout << "*123-����˳���L3" << endl;
	cout << "*13 -��ӡ˳���" << endl;
	cout << "��������������������" << endl;
	cout << "*1  -�ڵ�i�����λ�ò���ֵΪx�Ľ��" << endl;
	cout << "*2  -ɾ��˳����е�i��Ԫ�ؽ��" << endl;
	cout << "*3  -�ڵ�������˳����в���һ��ֵΪx��Ԫ��" << endl;
	cout << "*4  -��˳�����е��������ż������ֽ⿪" << endl;
	cout << "*5  -�������������˳���Ĺ���Ԫ�ص���˳���L3��" << endl;
	cout << "*6  -ɾ����������˳����е��ظ�Ԫ�أ���ͳ���ƶ�Ԫ�ش���" << endl;
	cout << "*71 -��������˳���C=A��B" << endl;
	cout << "*72 -��������˳���C=A��B" << endl;
	cout << "*73 -��������˳���C=A-B" << endl;
	cout << "*74 -��������˳���A=A��B" << endl;
	cout << "*75 -��������˳���A=A��B" << endl;
	cout << "*76 -��������˳���A=A-B" << endl;
	cout << "*8  -��������˳����ʾ����A��B���ж�A�Ƿ�B���Ӽ�" << endl;
	cout << "*9   -�������е���λ��" << endl;
}


int main() {
	seqList L1, L2, L3;
	int n1 = 0, n2 = 0, n3 = 0;
	int i = 0;
	elementType x=0;
	int Choice = -1;
	printBoard();
	do {

		cout << "�����������ţ�";
		cin >> Choice;
		switch (Choice) {
		case 0://�˳�
			cout << "�����˳�" << endl;
			break;
		case 111://��ʼ��L1
			//system("cls");//�����Ļ
			initialList(&L1);
			cout << "��ʼ��˳���L1��ɣ�" << endl;
			break;
		case 112://��ʼ��L2
			system("cls");//�����Ļ
			initialList(&L2);
			cout << "��ʼ��˳���L2��ɣ�" << endl;
			break;		
		case 113://��ʼ��L3
			system("cls");//�����Ļ
			initialList(&L3);
			cout << "��ʼ��˳���L3��ɣ�" << endl;
			break;
		case 121://��������L1
			system("cls");//�����Ļ
			cout << "�����������n1:";
			cin >> n1;
			creatList(&L1, n1);
			break;
		case 122://��������L2
			system("cls");//�����Ļ
			cout << "�����������n2:";
			cin >> n2;
			creatList(&L2, n2);
			break;
		case 123://��������L3
			system("cls");//�����Ļ
			cout << "�����������n3:";
			cin >> n3;
			creatList(&L3, n3);
			break;
		case 1://��i����x
			cout << "����ǰ��";
			showList(&L1);
			cout << "��������λ��i��";
			cin >> i;
			cout << "������ֵx��";
			cin >> x;
			listInsert(&L1, i, x);
			cout << "�����";
			showList(&L1);
			break;
		case 2://ɾ�����i
			cout << "ɾ��ǰ��";
			showList(&L1);
			cout << "������ɾ���Ľ��i��";
			cin >> i;
			listDelete(&L1, i);
			cout << "ɾ����";
			showList(&L1);
			break;
		case 3://����������в���x
			cout << "ɾ��ǰ��";
			showList(&L1);
			cout << "������ֵx��";
			cin >> x;
			listInsert2(&L1, x);
			cout << "ɾ����";
			showList(&L1);
			break;
		case 4://�ֽ���ż���㣨ֵ����ż�ԣ�
			listDivide(&L1);
			break;
		case 5://�������������˳���Ĺ���Ԫ�ص���˳���L3��
			sameToList(L1, L2, &L3);
			break;
		case 6://ɾ����������˳������ظ�Ԫ�أ���ͳ���ƶ�����
			sameDelete(&L1);
			break;
		case 71://��������˳���C=A��B
			mergeList(L1, L2, &L3);
			if (mergeList(L1, L2, &L3) == 0)
				cout << "��C�����" << endl;
			break;
		case 72://��������˳���C = A��B
			intersectList(L1, L2, &L3);
			break;
		case 73://��������˳���C=A-B
			exceptList(L1, L2, &L3);
			break;
		case 74://��������˳���A=A��B
			mergeList2(&L1, L2);
			if (mergeList2(&L1, L2) == 0)
				cout << "��A�����" << endl;
			break;
		case 75://��������˳���A=A��B
			intersectList2(&L1, L2);
			break;
		case 76://��������˳���A=A-B
			exceptList2(&L1, L2);
			break;
		case 8://��������˳����ʾ����A��B���ж�A�Ƿ�B���Ӽ�
			if (subsetList(L1, L2) == 1)
				cout << "A��B���Ӽ���" << endl;
			else
				cout << "A����B���Ӽ���" << endl;
			break;
		case 9://���������е���λ��
			midList(L1, L2,&L3);
			break;


		}




	} while (Choice != 0);

	return 0;
}