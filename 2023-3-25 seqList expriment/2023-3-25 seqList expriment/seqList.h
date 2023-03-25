#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
typedef int elementType;
typedef struct {
	elementType data[MaxLen];
	int listLen;
}seqList;

//��ʼ��˳���
void initial(seqList* L) {
	L->listLen = 0;
}

//��˳�����
int getLength(seqList* L) {
	return L->listLen;
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