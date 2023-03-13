#define _CRT_SECURE_NO_WARNINGS 1

//˳���

#include<iostream>
#define MaxLen 100//�������������
typedef int elementType;//ʹ��typedefҪ�����ĩβ��ӷֺ�

struct list {
	elementType data[MaxLen];
	int listLen;
};

typedef struct list seqList;//����Ϊ��������seqList

//����
//typedef struct {
//	elementType data[MaxLen];
//	int listLen;
//}seqList;


//1.��ʼ����
//���ܣ���ʼ��˳���
//������seqList����ָ�룬ָ��˳���
//����ֵ����
void initialList(seqList* L) {
	L->listLen = 0;
}

//2.�����
//���ܣ���˳���ĳ���
//������seqList���ͱ���
//����ֵ�����ͣ�����
int getLen(seqList L) {
	return L.listLen;
}

//3.��ȡԪ��
//���ܣ�������ţ���˳�����ȡ��Ԫ��ֵ
//������seqList����ָ�룬ָ��˳�����ţ����ֵ��elementTypeָ�����
//����ֵ��bool��ȡԪ��ֵʧ��0��ȡԪ��ֵ�ɹ�1
bool getelementType(seqList* L, int i, elementType* x) {
	if (i >= 1 && i <= L->listLen) {
		*x = L->data[i - 1];
		return 1;
	}
	return 0;
}

//4.��λԪ��
//���ܣ�����Ԫ��ֵ����ȡ����˳����е����
//������seqList���ͱ�����elementType x ����Ԫ��
//����ֵ��Ԫ����ţ�����0�����ڱ���
int listLocate(seqList L, elementType x) {
	int i = 0;
	for (i = 0; i < L.listLen; i++) {
		if (L.data[i] == x)
			return i + 1;
	}
	return 0;
}

//5.����Ԫ��
//���ܣ��ڸ���λ�ò������Ԫ��
//������seqListָ����������i��elementType x����Ԫ��ֵ
//����ֵ�����ͣ�����0��λ�÷Ƿ�1������ɹ�2
int listInsert(seqList* L, int i, elementType x) {
	int j = L->listLen + 1;//���
	if (L->listLen == MaxLen)
		return 0;
	else if (i<1 || i>L->listLen + 1)
		return 1;
	else
		while (j > i) {
			L->data[j-1] = L->data[j - 2];
			j--;
		}
	L->data[i - 1] = x;
	L->listLen++;
	return 2;
}

//6.ɾ��Ԫ��
//���ܣ�ɾ��˳����и�����ŵ�Ԫ��
//������seqListָ�룬iԪ�����
//����ֵ�����ͣ��ձ�1����ŷǷ�1��ɾ���ɹ�2
int listDelete(seqList* L, int i) {
	int j = i-1;
	if (L->listLen <= 0)
		return 0;
	else if (i<1 || i>L->listLen)
		return 1;
	while (j < L->listLen - 1) {
		L->data[j] = L->data[j+1];
		j++;
	}
	L->listLen--;
	return 2;
}