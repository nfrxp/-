#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#define MaxLen 100
typedef int elementType;

typedef struct List {
	elementType data[MaxLen];
	int listLen;
}seqList;//˳���

void initialList(seqList* L) {
	L->listLen = 0;
}

int listLength(seqList L) {
	return L.listLen;
}

//��ֵ��Ԫ��
int listLocate(seqList* L, elementType x) {
	int i = 0;
	for (i = 0; i < L->listLen - 1; i++) {//�����˿ձ�����
		if (L->data[i] == x)
			return i + 1;
	}
	return 0;//ֵ������
}

//�������Ԫ��
int getElement(seqList* L, int i, elementType& x) {
	if (i<1 || i>L->listLen)//��Ų��Ϸ�
		return 0;
	x = L->data[i - 1];//��źϷ���ȡֵ
	return 1;
}

//��������
int listInsert(seqList* L, int i, elementType x) {
	//��������źϷ���
	if (L->listLen == MaxLen)
		return 0;//����������ʧ��
	if (i<1 || i>L->listLen + 1)
		return 1;//���Υ��������ʧ��
	int j = 0;
	for (j = L->listLen; j >= i; j--) {
		L->data[j] = L->data[j-1];
	}
	L->data[i - 1] = x;
	L->listLen++;
	return 2;
}


//ɾ������
int listDelete(seqList* L, int i) {
	if (L->listLen == 0)//���
		return 0;
	if (i<1 || i>L->listLen)//���Υ��
		return 1;
	int j = 0;
	for (j = i; j < L->listLen; j++) {
		L->data[j - 1] = L->data[j];
	}
	L->listLen--;
	return 2;
}

//��������Ԫ�����룬�����������
void listset(seqList* L) {
	//�ж��Ƿ��Ѵ���ֵ
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����" << endl;
		return;
	}

	elementType x;
	cout << "������Ԫ��ֵ��-9999Ϊ������־��" << endl;
	cout << "x=";
	cin >> x;
	while (x != -9999  && L->listLen<MaxLen) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}

}

int main() {
	seqList a;
	initialList(&a);
	listset(&a);
	cout << a.listLen;
	return 0;
}


//������������Ԫ�أ�ָ�����ݸ���
void listset2(seqList* L) {
	//�жϱ��Ƿ��Ѹ�ֵ
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����" << endl;
		return;
	}
		
	int n = 0, i = 0;
	cout << "���������ݸ�����n<=MaxLen����" << endl;
	cin >> n;
	cout << "����������Ԫ��ֵ��" << endl;
	for (i = 0; i < n; i++) {
		cin>>L->data[i];
		L->listLen++;
	}
}

//��������������Ԫ��
void listset(seqList* L, elementType arr[], int n) {
	//�ж�˳����Ƿ��Ѵ���
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ʼ����" << endl;
		return;
	}

	int i = 0;
	for (i = 0; i < n; i++) {
		L->data[L->listLen] = arr[i];
		L->listLen++;
	}
}


//���ļ�����Ԫ��
