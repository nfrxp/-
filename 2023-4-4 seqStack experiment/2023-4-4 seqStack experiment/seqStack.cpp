#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"seqStack.h"
using namespace std;

void printBoard() {
	cout << "********************˳��ջ****************" << endl;
	cout << "*11-��ʼ��                               *" << endl;
	cout << "*12-��ջ��                               *" << endl;
	cout << "*13-��ջ��                               *" << endl;
	cout << "*14-ȡջ��                               *" << endl;
	cout << "*15-��ջ                                 *" << endl;
	cout << "*16-��ջ                                 *" << endl;
	cout << "*17-��ӡջ                               *" << endl;
	cout << "*18-����ѭ����ջ                         *" << endl;
	cout << "*-1-�˳�                                 *" << endl;
	cout << "******************************************" << endl;
	cout << "*1 -ʮ����ת��Ϊx����                    *" << endl;
	cout << "*2 -�ж������Ƿ�ƥ��                     *" << endl;
	cout << "*3 -������п��ܵĳ�ջ����               *" << endl;
	cout << "******************************************" << endl;


}
int main() {
	seqStack S;
	elementType temp;
	int choice = 0;
	int x = 0;//����
	int a = 0;//ʮ������ 
	string str;

	printBoard();
	while (choice != -1) {
		cout << "�����������ţ�";
		cin >> choice;
		switch (choice) {
		case 11:
			initialStack(S);
			cout << "��ʼ��˳��ջ�ɹ���" << endl << endl;
			break;
		case 12:
			if (stackEmpty(S))
				cout << "ջ�գ�" << endl << endl;
			else
				cout << "ջ�ǿգ�" << endl << endl;
			break;
		case 13:
			if (stackFull(S))
				cout << "ջ����" << endl << endl;
			else
				cout << "ջ������" << endl << endl;
			break;
		case 14:
			if (getTop(S, temp))
				cout << "ȡջ���ɹ�,Ϊ" << temp << endl << endl;
			else
				cout << "ջ�գ�" << endl << endl;
			break;
		case 15:
			cout << "������ֵ��";
			cin >> temp;
			if (push(S, temp))
				cout << "��ջ�ɹ���" << endl << endl;
			else
				cout << "ջ����" << endl << endl;
			break;
		case 16:
			if (pop(S))
				cout << "��ջ�ɹ���" << endl << endl;
			else
				cout << "ջ�գ�" << endl << endl;
			break;
		case 17:
			printStack(S);
			break;
		case 18:
			creatSeqStack(S);
			cout << "����˳��ջ�ɹ���" << endl;
			printStack(S);
			break;
		case 1:

			cout << "����x��2<=x<=36����";
			cin >> x;
			if (x < 2 || x>36)	{
				cout << "���Ƴ�����Χ��" << endl << endl;
				break;
			}
			cout << "ʮ������a=";
			cin >> a;
			baseChangeStack(S, x, a);
			cout << endl << endl;
			break;
		case 2:
			cout << "��������ʽ��";
			cin >> str;
			if (judge(S, str)) {
				cout << "����ƥ�䣡" << endl << endl;
			}
			else
				cout << "ƥ��ʧ�ܣ�" << endl << endl;
			break;
		default:
			cout << "�Ƿ�������" << endl << endl;
			break;
		}
	}
	return 0;
}

