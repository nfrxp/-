#define _CRT_SECURE_NO_WARNINGS 1

//顺序表

#include<iostream>
#define MaxLen 100//定义表的最大容量
typedef int elementType;//使用typedef要在语句末尾添加分号

struct list {
	elementType data[MaxLen];
	int listLen;
};

typedef struct list seqList;//定义为数据类型seqList

//或者
//typedef struct {
//	elementType data[MaxLen];
//	int listLen;
//}seqList;


//1.初始化表
//功能：初始化顺序表
//参数：seqList类型指针，指向顺序表
//返回值：无
void initialList(seqList* L) {
	L->listLen = 0;
}

//2.求表长度
//功能：求顺序表的长度
//参数：seqList类型变量
//返回值：整型，表长度
int getLen(seqList L) {
	return L.listLen;
}

//3.获取元素
//功能：给定序号，从顺序表中取出元素值
//参数：seqList类型指针，指向顺序表，序号，存放值的elementType指针变量
//返回值：bool，取元素值失败0，取元素值成功1
bool getelementType(seqList* L, int i, elementType* x) {
	if (i >= 1 && i <= L->listLen) {
		*x = L->data[i - 1];
		return 1;
	}
	return 0;
}

//4.定位元素
//功能：给定元素值，获取其在顺序表中的序号
//参数：seqList类型变量，elementType x 给定元素
//返回值：元素序号，返回0代表不在表中
int listLocate(seqList L, elementType x) {
	int i = 0;
	for (i = 0; i < L.listLen; i++) {
		if (L.data[i] == x)
			return i + 1;
	}
	return 0;
}

//5.插入元素
//功能：
//参数：
//返回值：