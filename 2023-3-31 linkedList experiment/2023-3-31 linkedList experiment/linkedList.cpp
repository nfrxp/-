#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"linkedList.h"
using namespace std;

void printBoard() {
	cout << "****************************�����������****************************" << endl;
	cout << "************************δָ��������Ĭ�ϲ���L1**********************" << endl;
	cout << "*0  -��ӡ�����������                                              *" << endl;
	cout << "*111-��ʼ��������L1                                                *" << endl;
	cout << "*112-��ʼ��������L2                                                *" << endl;
	cout << "*121-���쵥����L1                                                  *" << endl;
	cout << "*122-���쵥����L2                                                  *" << endl;
	cout << "*123-���쵥����L3                                                  *" << endl;
	cout << "*13 -��������                                                    *" << endl;
	cout << "*14 -�����ȡԪ��                                                  *" << endl;
	cout << "*15 -��ֵ����Ԫ��                                                  *" << endl;
	cout << "*16 -��ӡ����                                                      *" << endl;
	cout << "*17 -��������                                                      *" << endl;
	cout << "*18 -����                                                          *" << endl;
	cout << "*-1 -�˳�                                                          *" << endl;
	cout << "********************************************************************" << endl;
	cout << "*1  -������                                                      *" << endl;
	cout << "*2  -ɾ�����                                                      *" << endl;
	cout << "*3  -���������������x                                           *" << endl;
	cout << "*4  -��ֵ�������ż�Ԫ��ֵ����ż��                              *" << endl;
	cout << "*5  -����������������Ԫ�ط����µĵ�����L3��                    *" << endl;
	cout << "*6  -ɾ�����������������ظ�Ԫ��                                  *" << endl;
	cout << "*7  -�������½�㣬�����������������ظ�Ԫ�أ�ֱ�Ӻϲ�����Ϊ����*" << endl;
	cout << "*81 -������������C=A��B                                          *" << endl;
	cout << "*82 -������������C=A��B                                          *" << endl;
	cout << "*83 -������������C=A-B                                           *" << endl;
	cout << "*84 -������������A=A��B                                          *" << endl;
	cout << "*85 -������������A=A��B                                          *" << endl;
	cout << "*86 -������������A=A-B                                           *" << endl;
	cout << "*9  -ͷָ��listָ���������ҵ�����k��λ���ϵĽ�㣬���ֵ       *" << endl;
	cout << "********************************************************************" << endl << endl;

}

void systemCls() {
	system("cls");
}
int main() {
	node* L1, * L2, * L3;
	L1 = new node;
	L2 = new node;
	L3 = new node;
	int Choice=0;
	int i = 0;
	elementType temp;
	int result=0;
	printBoard();
	do {
		cout << "���������(0��ӡ������)��";
		cin >> Choice;
		switch (Choice) {
		case 0:
			printBoard();
			break;
		case 111:
			initialList(L1);
			cout << "��ʼ��L1�ɹ���" << endl << endl;
			break;
		case 112:
			initialList(L2);
			cout << "��ʼ��L2�ɹ���" << endl << endl;
			break;
		case 113:
			initialList(L3);
			cout << "��ʼ��L3�ɹ���" << endl << endl;
			break;
		case 121:
			creatListR(L1);
			cout << "L1����ɹ���" << endl << endl;
			break;
		case 122:
			creatListR(L2);
			cout << "L2����ɹ���" << endl << endl;
			break;
		case 123:
			creatListR(L3);
			cout << "L3����ɹ���" << endl << endl;
			break;
		case 13:
			cout << "L1������Ϊ��" << listLength(L1) << endl << endl;
			break;
		case 14:
			cout << "������Ԫ����ţ�";
			cin >> i;
			cout << "�����ȡ�õ�Ԫ��ֵΪ��" << getElement(L1, i)->data << endl << endl;
			break;

		case 15:
			cout << "������ֵ��";
			cin >> temp;
			locateElement(L1, temp);
			cout << endl;

			break;
		case 16:
			cout << "����L1��";
			printList(L1);
			cout << endl ;
			break;
		case 17:
			destroyList(L1);
			cout << "����L1����ɹ���" << endl;
			destroyList(L2);
			cout << "����L2����ɹ���" << endl;
			destroyList(L3);
			cout << "����L3����ɹ���" << endl;
			cout << endl;

			break;
		case 18:
			systemCls();
			break;
		case -1:
			cout << "�˳���" << endl << endl;
			break;
		case 1:
			cout << "��������������ţ�";
			cin >> i;
			cout << "������������ֵ��";
			cin >> temp;
			cout << "����ǰ��" << endl;
			printList(L1);
			result=listInsert(L1, i, temp);
			if (result == 0)
				cout << "��ŷǷ���" << endl;
			else {
				cout << "����ɹ���" << endl;
				printList(L1);
			}
			cout << endl;

			break;
		case 2:
			cout << "������ɾ��������ţ�";
			cin >> i;
			cout << "ɾ��ǰ��" << endl;
			printList(L1);
			result=listDelete(L1, i);
			if (result == 0)
				cout << "��ŷǷ���" << endl;
			else {
				cout << "ɾ���ɹ���" << endl;
				printList(L1);
			}
			cout << endl;

			break;
		case 3:
			cout << "����������ֵ��";
			cin >> temp;
			cout << "����ǰ��";
			printList(L1);
			listInsert2(L1,temp);
			cout << "���������������ֵ�ɹ���" << endl;
			cout << "�����";
			printList(L1);
			cout << endl;

			break;
		case 4:
			listDivide(L1, L2, L3);
			cout << "��ֵ�������ż��ɹ���" << endl;
			cout << "������L1��";
			printList(L1);
			cout << "������L2��";
			printList(L2);
			cout << "������L3��";
			printList(L3);
			cout << endl;

			break;
		case  5:
			sameToList(L1, L2, L3);
			cout << "��Ź���Ԫ�سɹ���" << endl;
			cout << "������L1��";
			printList(L1);
			cout << "������L2��";
			printList(L2);
			cout << "������L3��";
			printList(L3);
			cout << endl;

			break;

		case 6:
			cout << "ɾ��ǰ��" << endl;
			printList(L1);
			sameDelete(L1);
			cout << "ɾ���ظ�Ԫ�سɹ���" << endl;
			printList(L1);
			cout << endl;

			break;

		case 7:
			cout << "�ϲ�ǰ��" << endl;
			cout << "������L1��";
			printList(L1);
			cout << "������L2��";
			printList(L2);
			combineList(L1, L2);
			cout << "������ϲ��ɹ����������½�㣡" << endl << endl;
			cout << "�ϲ���";
			printList(L1);
			cout << endl;

			break;

		case 81:
			mergeList(L1, L2, L3);
			cout << "�󲢼�C=A��B�ɹ���" << endl << endl;
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			cout << "������C��";
			printList(L3);
			cout << endl;

			break;
		case 82:
			intersectList(L1, L2, L3);
			cout << "�󽻼�C=A��B�ɹ���" << endl << endl;
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			cout << "������C��";
			printList(L3);
			cout << endl;

			break;
		case 83:
			exceptList(L1, L2, L3);
			cout << "���C=A-B�ɹ���" << endl << endl;
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			cout << "������C��";
			printList(L3);
			cout << endl;
			break;
		case 84:
			cout << "����ǰ��";
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			mergeList2(L1, L2);
			cout << "�󲢼�A=A��B�ɹ���" << endl << endl;
			cout << "������";
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			cout << endl;

			break;
		case 85:
			cout << "����ǰ��";
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			intersectList2(L1, L2);
			cout << "�󽻼�A=A��B�ɹ���" << endl << endl;
			cout << "������";
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			cout << endl;

			break;
		case 86:
			cout << "����ǰ��";
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			exceptList2(L1, L2);
			cout << "���A=A-B�ɹ���" << endl << endl;
			cout << "������";
			cout << "������A��";
			printList(L1);
			cout << "������B��";
			printList(L2);
			cout << endl;

			break;
		case 9:
			cout << "�����뵹����ţ�";
			cin >> i;
			result = getElement2(L1, i);
			if (result == 0)
				cout << "���K�Ƿ���" << endl ;
			cout << endl;

			break;
		default:
			cout << "�����Ƿ���" << endl;
			break;
		}
	} while (Choice != -1);
	return 0;
}