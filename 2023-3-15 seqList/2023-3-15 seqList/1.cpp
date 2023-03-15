#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//����˳���
#define MaxLen 100
typedef int elementType;

typedef struct {
	elementType data[MaxLen];
	int listLen;
}seqList;

//��ʼ��
void initialList(seqList* L) {
	L->listLen = 0;
}

//˳���ֵ
void setList(seqList* L) {
	if (L->listLen != 0) {
		cout << "���ȳ�ʼ����" << endl;
		return;
	}

	elementType x;
	cout << "������x������-999�������룩��" << endl;//���ж��Ƿ��ظ�
	cout << "x=";
	cin >> x;
	while (x != -999) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}

}

//ʵ�ֵ�������˳���ĺϲ�
void uniList(seqList* A, seqList* B, seqList* C) {
	int ia = 0, ib = 0,ic=0;
	while (ia < A->listLen && ib < B->listLen) {
		if (A->data[ia] < B->data[ib]) {
			C->data[ic] = A->data[ia];
			ia++; ic++;
		}
		else if (A->data[ia] > B->data[ib]) {
			C->data[ic] = B->data[ib];
			ic++; ib++;
		}
		else {//Ԫ���ܷ��ظ���
			//�����ظ�
			//C->data[ic] = A->data[ia];
			//ia++; ib++; ic++;

			//���ظ�
			C->data[ic++] = A->data[ia];
			C->data[ic] = A->data[ia];
			ia++; ib++; ic++;
		}
	}
	if (ia == A->listLen) {
		while (ib < B->listLen) {
			C->data[ic] = B->data[ib];
			ic++; ib++;
		}
	}
	else {
		while (ia < A->listLen) {
			C->data[ic] = A->data[ia];
			ic++; ia++;
		}
	}
	cout << "�ϲ��ɹ���" << endl;
}

int main() {
	seqList A, B, C;
	initialList(&A);
	initialList(&B);
	initialList(&C);

	cout << "��ֵA˳���" << endl;
	setList(&A);
	cout << "��ֵB˳���" << endl;
	setList(&B);
	cout << "��ֵC˳���" << endl;
	setList(&C);

	cout << "�ϲ���������˳���" << endl;
	uniList(&A, &B, &C);
	return 0;
}