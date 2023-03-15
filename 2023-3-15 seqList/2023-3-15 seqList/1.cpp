#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
//创建顺序表
#define MaxLen 100
typedef int elementType;

typedef struct {
	elementType data[MaxLen];
	int listLen;
}seqList;

//初始化
void initialList(seqList* L) {
	L->listLen = 0;
}

//顺序表赋值
void setList(seqList* L) {
	if (L->listLen != 0) {
		cout << "请先初始化。" << endl;
		return;
	}

	elementType x;
	cout << "请输入x（输入-999结束输入）：" << endl;//不判断是否重复
	cout << "x=";
	cin >> x;
	while (x != -999) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}

}

//实现递增有序顺序表的合并
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
		else {//元素能否重复？
			//不能重复
			//C->data[ic] = A->data[ia];
			//ia++; ib++; ic++;

			//能重复
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
	cout << "合并成功！" << endl;
}

int main() {
	seqList A, B, C;
	initialList(&A);
	initialList(&B);
	initialList(&C);

	cout << "赋值A顺序表：" << endl;
	setList(&A);
	cout << "赋值B顺序表：" << endl;
	setList(&B);
	cout << "赋值C顺序表：" << endl;
	setList(&C);

	cout << "合并递增有序顺序表：" << endl;
	uniList(&A, &B, &C);
	return 0;
}