#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
typedef int elementType;
typedef struct {
	elementType data[MaxLen];
	int listLen;
}seqList;

//初始化顺序表
void initial(seqList* L) {
	L->listLen = 0;
}

//求顺序表长度
int getLength(seqList* L) {
	return L->listLen;
}

//插入元素
//返回值为0：表满   返回值为1：序号不合法   返回值为2：插入成功
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