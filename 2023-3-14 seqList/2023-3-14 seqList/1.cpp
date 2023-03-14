#define _CRT_SECURE_NO_WARNINGS 1

//����˳���
#include<iostream>
#define MaxLen 100
typedef int elementType;
using namespace std;

struct list {
	elementType data[MaxLen];
	int listLen;
};
typedef struct list seqList;

//��ʼ��˳���
void initialList(seqList* L) {
	L->listLen = 0;
}

//ͨ�������˳���ֵ
void setList(seqList* L) {
	if (L->listLen != 0) {
		cout << "���ȳ�ʼ����" << endl;
		return;
	}

	elementType x=0;
	cout << "������Ԫ��ֵ��-999����������룺" << endl;
	cout << "x=";
	cin >> x;
	while (x != -999 && L->listLen<=MaxLen) {	//�˴����������ظ�Ԫ��
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}
}

//�ж�A�Ƿ�ΪB���Ӽ�
bool subset(seqList* A, seqList* B) {
	int i = 0, j = 0;
	for (i = 0; i < A->listLen; i++) {
		for (j = 0; j < B->listLen; j++) {
			if (A->data[i] == B->data[j])
				break;
		}
		if (j == B->listLen)
			return false;
	}
	return true;
}

//���������˳���,�ж�A�Ƿ�ΪB���Ӽ�
bool subset2(seqList* A, seqList* B) {
	if (A->listLen == 0)
		return true;
	if (A->data[0]<B->data[0] || A->data[A->listLen - 1]>B->data[B->listLen - 1])
		return false;
	int ia = 0,ib = 0;
	for (ia = 0; ia < A->listLen; ia++) {
		while (ib < B->listLen) {
			if (A->data[ia] < B->data[ib])//��������
				return false;
			if (A->data[ia] == B->data[ib]) {
				ib++;
				break;
			}
			if (A->data[ia] > B->data[ib])
				ib++;
		}
		if (ib == B->listLen)
			return false;
	}
	return true;

}

//���������˳���,�ж�A�Ƿ�ΪB���Ӽ�
bool subset3(seqList* A, seqList* B) {
	if (A->listLen == 0)
		return true;
	if (A->data[0]<B->data[0] || A->data[A->listLen - 1]>B->data[B->listLen - 1])
		return false;
	int ia = 0, ib = 0;
	while (ia < A->listLen && ib < B->listLen) {
		if (A->data[ia] == B->data[ib]) {
			ia++; ib++;
		}
		else if (A->data[ia] > B->data[ib]) {
			ib++;
		}
		else
			return false;
	}
	if (ia == A->listLen)
		return true;
	else
		return false;
}
        
int main() {
	seqList A, B;
	initialList(&A);
	initialList(&B);
	cout << "��˳���A��ֵ��" << endl;
	setList(&A);
	cout << "��˳���B��ֵ��" << endl;
	setList(&B);

	//�ж�A�Ƿ�����B���Ӽ�
	if (subset3(&A, &B))
		cout << "A����B���Ӽ���" << endl;
	else
		cout << "A������B���Ӽ���" << endl;
	return 0;
}