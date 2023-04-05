#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"linkedStack.h"
using namespace std;

void printBoard() {
	cout << "********************˳��ջ****************" << endl;
	cout << "*11-��ʼ��                               *" << endl;
	cout << "*12-��ջ��                               *" << endl;
	cout << "*13-ȡջ��                               *" << endl;
	cout << "*14-��ջ                                 *" << endl;
	cout << "*15-��ջ                                 *" << endl;
	cout << "*16-����                                 *" << endl;
	cout << "*17-����ѭ����ջ                         *" << endl;
	cout << "*-1-�˳�                                 *" << endl;
	cout << "******************************************" << endl;
	cout << "*1 -ʮ����ת��Ϊx����                    *" << endl;
	cout << "*2 -�ж������Ƿ�ƥ��                     *" << endl;
	cout << "*3 -������п��ܵĳ�ջ����               *" << endl;
	cout << "******************************************" << endl;


}
int main() {
	node* top=new node;
	elementType temp;
	int choice = 0;
	int x = 0;//����
	int a = 0;//ʮ������
	string str;

	int len = 0;
	elementType In[]={1,2,3,4,5,6,7,8,9,10};
	elementType Out[]= { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0, j = 0;

	printBoard();
	while (choice != -1) {
		cout << "�����������ţ�";
		cin >> choice;
		switch (choice) {
		case 11:
			initialStack(top);
			cout << "��ʼ��˳��ջ�ɹ���" << endl << endl;
			break;
		case 12:
			if (stackEmpty(top))
				cout << "ջ�գ�" << endl << endl;
			else
				cout << "ջ�ǿգ�" << endl << endl;
			break;
		case 13:
			if (getTop(top, temp))
				cout << "ȡջ���ɹ�,Ϊ" << temp << endl << endl;
			else
				cout << "ջ�գ�" << endl << endl;
			break;
		case 14:
			cout << "������ֵ��";
			cin >> temp;
			push(top, temp);
			cout << "��ջ�ɹ���" << endl << endl;
			break;
		case 15:
			if (pop(top))
				cout << "��ջ�ɹ���" << endl << endl;
			else
				cout << "ջ�գ�" << endl << endl;
			break;
		case 16:
			destroyStack(top);
			cout << "���ٳɹ���" << endl << endl;
			break;
		case 17:
			creatLinkedStack(top);
			cout << "����˳��ջ�ɹ���" << endl;
			break;
		case -1:
			cout << "�˳���" << endl << endl;
			break;
		case 1:
			cout << "����x��2<=x<=36����";
			cin >> x;
			if (x < 2 || x>36) {
				cout << "���Ƴ�����Χ��" << endl << endl;
				break;
			}
			cout << "ʮ������a=";
			cin >> a;
			baseChangeStack(top, x, a);
			cout << endl << endl;
			break;
		case 2:
			cout << "��������ʽ��";
			cin >> str;
			if (judge(top, str)) {
				cout << "����ƥ�䣡" << endl << endl;
			}
			else
				cout << "ƥ��ʧ�ܣ�" << endl << endl;
			break;
		case 3:
			cout << "ѡ�񳤶ȣ�0<=len<=10����";
			cin >> len;
			legalSequence(top, In, Out, len, i, j);
			cout << endl;
			break;
		default:
			cout << "�Ƿ�������" << endl << endl;
			break;
		}
	}
	return 0;
}

