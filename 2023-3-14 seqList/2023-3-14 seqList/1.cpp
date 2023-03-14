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
	while (x != -999 && L->listLen<=MaxLen) {	//此处不考虑有重复元素
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

//递增有序的顺序表,判断A是否为B的子集
bool subset2(seqList* A, seqList* B) {
	if (A->listLen == 0)
		return true;
	if (A->data[0]<B->data[0] || A->data[A->listLen - 1]>B->data[B->listLen - 1])
		return false;
	int ia = 0,ib = 0;
	for (ia = 0; ia < A->listLen; ia++) {
		while (ib < B->listLen) {
			if (A->data[ia] < B->data[ib])//有问题吗？
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

//递增有序的顺序表,判断A是否为B的子集
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
	cout << "给顺序表A赋值：" << endl;
	setList(&A);
	cout << "给顺序表B赋值：" << endl;
	setList(&B);

	//判断A是否属于B的子集
	if (subset3(&A, &B))
		cout << "A属于B的子集！" << endl;
	else
		cout << "A不属于B的子集！" << endl;
	return 0;
}