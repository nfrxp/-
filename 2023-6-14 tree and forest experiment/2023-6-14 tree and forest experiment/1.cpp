#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include"tree.h"
#include"functions.h"
using namespace std;

int main() {
	pTree T1;//��
	csNode* T;
	int i;
	char fileName[100];//���ļ���
	int high=0;//�����ĸ߶�
	int LN=0;//��Ҷ�ӽ����
	int level = 0;//����

	cout << "������򿪵��ļ�����";
	cin >> fileName;
	CreateTreeFromFile(fileName, T1);//����˫�ױ�ʾ������ɭ�֣�T1
	createCsTree(T, T1);//ת��Ϊ���������ʾ������ɭ�֣�T
	cout << "������T�ɹ���" << endl << endl;

	cout << "���������";
	preOrder(T);
	cout << endl << endl;

	cout << "���������";
	postOrder(T);
	cout << endl << endl;

	cout << "��α�����";
	levelOrder(T);
	cout << endl << endl;

	cout << "�߶ȣ�" << height(T) << endl << endl;

	cout << "ɭ��Ҷ�ӽ������";
	leafNodeNum(T, LN);
	cout << LN << endl << endl;

	cout << "��ɭ�ֵĶȣ�" << Du(T) << endl << endl;

	cout << "���������㼰��Σ�";
	level = 1;
	outPreOrder(T, level);
	cout << endl << endl;

	cout << "�����(";
	outGList(T);
	cout << endl << endl;

	return 0;
}

