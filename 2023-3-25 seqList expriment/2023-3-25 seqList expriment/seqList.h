#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
#include<iostream>
using namespace std;
typedef int elementType;
typedef struct {
	elementType data[MaxLen];
	int listLen;
}seqList;

//��ʼ��˳���
void initialList(seqList* L) {
	L->listLen = 0;
}

//��˳�����
int getLength(seqList* L) {
	return L->listLen;
}

//��ֵ����Ԫ��
int listLocate(seqList* L, elementType x) {
	int i = 0;
	for (i = 0; i < L->listLen; i++) {
		if (L->data[i] == x)
			return i + 1;
	}
	return 0;//����ʧ�ܣ�������ֵ
}

//�����ȡԪ��
bool getElement(seqList* L, int i, elementType* x) {
	if (i<1 || i>L->listLen)
		return 0;//��ŷǷ�
	*x = L->data[i - 1];
	return 1;
}

//��Ŵ�С�����������˳���Ԫ��
void showList(seqList* L) {
	int i;
	for (i = 0; i < L->listLen; i++) {
		cout << L->data[i] << ' ';
	}
	cout << endl;
}

//����Ԫ��
//����ֵΪ0������   ����ֵΪ1����Ų��Ϸ�   ����ֵΪ2������ɹ�
int listInsert(seqList* L, int i, elementType x) {
	if (L->listLen == MaxLen)
		return 0;
	else if (i<1 || i>L->listLen + 1)
		return 1;
	else {
		int j;
		for (j = L->listLen + 1; j > i; j--) {
			L->data[j - 1] = L->data[j - 2];
		}
		L->data[j - 1] = x;
		L->listLen++;
		return 2;
	}
}

//����Ԫ��2���ڵ���������в���x
//����ֵΪ0������   ����ֵΪ1������ɹ�
bool listInsert2(seqList* L, elementType x) {
	if (L->listLen == MaxLen)
		return 0;
	else {
		int i, j=0;
		for (i = L->listLen; L->data[i-1]>x; i--) {
			L->data[i] = L->data[i - 1];
		}
		L->data[i] = x;
		L->listLen++;
		return 1;
	}
}


//ɾ������
//����ֵΪ0�����   ����ֵΪ1����ŷǷ�   ����ֵΪ2��ɾ���ɹ�
bool listDelete(seqList* L, int i) {
	if (L->listLen==0)//���
		return 0;
	else if (i<1 || i>L->listLen)//��ŷǷ�
		return 1;
	else {
		int j ,count=0;
		for (j = i; j < L->listLen; j++) {
			L->data[j - 1] = L->data[j];
			count++;
		}
		L->listLen--;
		return 2;
	}
}



//�ֽ���ż���㣨ֵ����ż�ԣ�
bool listDivide(seqList* L) {
	if (L->listLen == 0)
		return 0;
	seqList L1, L2;//L1�������,L2���ż��
	initialList(&L1);
	initialList(&L2);
	int i, j1, j2;
	//elementType temp;
	for (i = 0, j1 = 0, j2 = 0; i < L->listLen; i++) {
		if (L->data[i] % 2 == 0) {
			L2.data[j2] = L->data[i];
			j2++;
			continue;
		}
		else {
			L1.data[j1] = L->data[i];
			j1++;
			continue;
		}
	}
	cout << "ԭ��";
	showList(L);
	cout << "���";
	showList(&L1);
	cout << "ż��";
	showList(&L2);
	return 1;
}


//�������������˳���Ĺ���Ԫ�ص���˳���L3��
bool sameToList(seqList* L1, seqList* L2, seqList* L3) {
	if (L1->listLen == 0 || L2->listLen == 0)
		return 0;
	int i=0, j=0, k=0;//iΪL1Ԫ���±ꣻjΪL2Ԫ���±ꣻkΪL3Ԫ���±�
	while (i < L1->listLen && j < L2->listLen) {
		if (L1->data[i] == L2->data[j]) {
			L3->data[k] = L1->data[i];
			i++;
			j++;
		}
		else if (L1->data[i] > L2->data[j])
			j++;
		else
			i++;
	}
	cout << "L1˳���";
	showList(L1);
	cout << "L2˳���";
	showList(L2);
	cout << "L3˳���";
	showList(L3);
	return 1;
}


//ɾ����������˳������ظ�Ԫ�أ���ͳ���ƶ�����
bool sameDelete(seqList* L) {
	if (L->listLen == 0)
		return 0;
	else {
		cout << "L˳���";
		showList(L);
		int i;
		for (i = 1; i <= L->listLen; i++) {
			if (L->data[i - 1] == L->data[i - 2]) {
				listDelete(L, i);
				i--;
			}
		}
		cout << "Lɾ����";
		showList(L);
		return 1;
	}
}



//��������˳���C=A��B
bool mergeList(seqList L1, seqList L2, seqList* L3) {
	int i = 0, j = 0, k = 0;
	while (i < L1.listLen && j < L2.listLen && k<=MaxLen) {
		if (L1.data[i] == L2.data[j]) {
			L3->data[k] = L1.data[i];//listInsert�����������
			i++;
			j++;
			k++;
			L3->listLen++;

		}
		else if (L1.data[i] < L2.data[j]) {
			L3->data[k] = L1.data[i];
			i++;
			k++;
			L3->listLen++;

		}
		else {
			L3->data[k] = L2.data[j];
			j++;
			k++;
			L3->listLen++;

		}
	}
	if (k == MaxLen){
		cout << "L1˳���";
		showList(&L1);
		cout << "L2˳���";
		showList(&L2);
		cout << "L3˳���";
		showList(L3);
		return 0;
	}
	while (i < L1.listLen) {
		L3->data[k] = L1.data[i];
		i++;
		k++;
		L3->listLen++;
	}
	while (j < L2.listLen) {
		L3->data[k] = L2.data[j];
		j++;
		k++;
		L3->listLen++;
	}
	cout << "L1˳���";
	showList(&L1);
	cout << "L2˳���";
	showList(&L2);
	cout << "L3˳���";
	showList(L3);
	return 1;
}

//��������˳���C=A��B
void intersectList(seqList L1, seqList L2, seqList* L3) {
	int i = 0, j = 0, k = 0;
	while (i < L1.listLen && j < L2.listLen) {//k�����ܴ��ڵ���MaxLen
		if (L1.data[i] == L2.data[j]) {
			L3->data[k] = L1.data[i];
			i++;
			j++;
			k++;
			L3->listLen++;
		}
		else if (L1.data[i] < L2.data[j])
			i++;
		else
			j++;
	}
	cout << "L1˳���";
	showList(&L1);
	cout << "L2˳���";
	showList(&L2);
	cout << "L3˳���";
	showList(L3);
}


//��������˳���C=A-B
void exceptList(seqList L1, seqList L2, seqList* L3) {
	int i = 0, j = 0, k = 0;
	while (i < L1.listLen && j < L2.listLen) {//k�����ܴ��ڵ���MaxLen
		if (L1.data[i] == L2.data[j]) {
			i++;
			j++;
		}
		else if (L1.data[i] < L2.data[j]) {
			L3->data[k] = L1.data[i];
			i++;
			k++; L3->listLen++;
		}
		else {
			j++;
		}
	}
	cout << "L1˳���";
	showList(&L1);
	cout << "L2˳���";
	showList(&L2);
	cout << "L3˳���";
	showList(L3);
}

//��������˳���A=A��B
bool mergeList2(seqList*L1,seqList L2){
	int i = 0, j = 0;
	while (i < L1->listLen && i < MaxLen && j < L2.listLen) {
		if (L1->data[i] == L2.data[j]) {
			i++;
			j++;
		}
		else if (L1->data[i] < L2.data[j]) {
			i++;
		}
		else {
			listInsert(L1, i + 1, L2.data[j]);
			i++;
			j++;
		}
	}
	if (i == MaxLen) {
		cout << "L1˳���";
		showList(L1);
		cout << "L2˳���";
		showList(&L2);
		return 0;
	}
	while (j < L2.listLen) {
		listInsert(L1, i + 1, L2.data[j]);
		i++;
		j++;
	}
	cout << "L1˳���";
	showList(L1);
	cout << "L2˳���";
	showList(&L2);
	return 1;
}

//��������˳���A=A��B
void intersectList2(seqList* L1, seqList L2) {
	int i = 0, j = 0;
	while (i < L1->listLen && j < L2.listLen) {
		if (L1->data[i] == L2.data[j]) {
			i++;
			j++;
		}
		else if (L1->data[i] < L2.data[j])
			listDelete(L1, i + 1);
		else
			j++;
	}
	cout << "L1˳���";
	showList(L1);
	cout << "L2˳���";
	showList(&L2);
}



//��������˳���A=A-B
void exceptList2(seqList *L1, seqList L2) {
	int i = 0, j = 0, k = 0;
	while (i < L1->listLen && j < L2.listLen) {//k�����ܴ��ڵ���MaxLen
		if (L1->data[i] == L2.data[j]) {
			listDelete(L1, i + 1);
		}
		else if (L1->data[i] < L2.data[j]) {
			i++;
		}
		else {
			j++;
		}
	}
	cout << "L1˳���";
	showList(L1);
	cout << "L2˳���";
	showList(&L2);
}

//��������˳����ʾ����A��B���ж�A�Ƿ�B���Ӽ�
bool subset(seqList L1, seqList L2) {
	int i = 0, j = 0;
	while (i < L1.listLen && j < L2.listLen) {
		if (L1.data[i] == L2.data[j]) {
			i++;
			j++;
		}
		else if (L1.data[i] < L2.data[j]) {
			return 0;
		}
		else{
			j++;
		}
	}
	return 1;
}

//9. �������е���λ��
void midList(seqList L1, seqList L2,seqList*L3) {
	mergeList(L1, L2, L3);//�ϲ�������
	int i = L3->listLen/2;
	cout << "��λ��Ϊ" << L3->data[i-1];
}

