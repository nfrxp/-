#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
#define ElemType int
#define MaxSize 100
using namespace std;
typedef struct {
	ElemType data[MaxSize]; //˳����е����� 
	int length; //˳���ĳ��� 
}SqList;
//˳���ĳ�ʼ��
void IniteList(SqList* L) {
	L->data[0] = 0;
	L->length = 0;
}
//����˳���
bool CreateList(SqList* L, int n) {
	if (n < 1) return false;
	for (int i = 0; i < n; i++) {
		cin >> L->data[i];
		L->length++;
	}
	return true;
}

//ɾ������
bool DeleteList2(SqList* L1, int i1) {
	for (; i1 < L1->length-1; i1++) {
		L1->data[i1] = L1->data[i1 + 1];
	}
	L1->length--;
	return true;
}

//�㷨
//������˳�����ɾ��B��A�е�Ԫ�� 
bool DeleteList1(SqList* L1,SqList* L2) {
	if (L1->length == 0) return false;
	int i, j; 
	if ((L1->data[0] > L2->data[L2->length - 1]) || (L1->data[L1->length - 1] < L2->data[0]))
		return true;
	for (i = 0, j = 0; i < L1->length && j < L2->length; ) {

		if (L1->data[i] > L2->data[j]) 	{
			j++;
		}
		else if (L1->data[i] < L2->data[j]) {
			i++;
		}
		else {
			DeleteList2(L1, i);
			j++;
		}

	}
	return true;
}
//���˳����е�Ԫ�� 
void Printe(SqList& L) {
	cout << "��ǰ˳����е�Ԫ��Ϊ��";
	for (int j = 0; j < L.length; j++) {
		cout << L.data[j] << " ";
	}
	cout << endl;
}
//����
void Create(SqList& L) {
	int n; bool flag;
	cout << "������˳���ĳ��ȣ�";
	cin >> n;
	flag = CreateList(&L, n);
	if (flag) {
		cout << "�����ɹ���";
		Printe(L);
	}
	else cout << "����ʧ�ܣ�";
}
int main() {
	SqList L;
	IniteList(&L);
	Create(L);
	SqList Y;
	IniteList(&Y);
	Create(Y);
	DeleteList1(&L,&Y);
	cout << "ɾ����";
	Printe(L);
	return 0;
}