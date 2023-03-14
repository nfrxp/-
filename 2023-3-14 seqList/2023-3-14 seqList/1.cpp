#define _CRT_SECURE_NO_WARNINGS 1

//创建顺序表
#include<iostream>
#define MaxLen 100
typedef int elementType;
using namespace std;

struct list {
	elementType data[MaxLen];
	int listLen;
};
typedef struct list seqList;

//初始化顺序表
void initialList(seqList* L) {
	L->listLen = 0;
}

//通过输入给顺序表赋值
void setList(seqList* L) {
	if (L->listLen != 0) {
		cout << "请先初始化。" << endl;
		return;
	}

	elementType x=0;
	cout << "请输入元素值，-999代表结束输入：" << endl;
	cout << "x=";
	cin >> x;
	while (x != -999 && L->listLen<=MaxLen) {	//是否需要判断有重复的元素
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}
}

//判断A是否为B的子集
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





int main() {
	seqList A, B;
	initialList(&A);
	initialList(&B);
	cout << "给顺序表A赋值：" << endl;
	setList(&A);
	cout << "给顺序表B赋值：" << endl;
	setList(&B);

	//判断A是否属于B的子集
	if (subset(&A, &B))
		cout << "A属于B的子集！" << endl;
	else
		cout << "A不属于B的子集！" << endl;
	return 0;
}