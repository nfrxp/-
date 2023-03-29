#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
#include<iostream>
using namespace std;
typedef int elementType;
typedef struct {
	elementType data[MaxLen];
	int listLen;
}seqList;

//初始化顺序表
void initialList(seqList* L) {
	L->listLen = 0;
}

//求顺序表长度
int getLength(seqList* L) {
	return L->listLen;
}

//按值查找元素
int listLocate(seqList* L, elementType x) {
	int i = 0;
	for (i = 0; i < L->listLen; i++) {
		if (L->data[i] == x)
			return i + 1;
	}
	return 0;//查找失败，不存在值
}

//按序号取元素
bool getElement(seqList* L, int i, elementType* x) {
	if (i<1 || i>L->listLen)
		return 0;//序号非法
	*x = L->data[i - 1];
	return 1;
}

//序号从小到大依次输出顺序表元素
void showList(seqList* L) {
	int i;
	for (i = 0; i < L->listLen; i++) {
		cout << L->data[i] << ' ';
	}
	cout << endl;
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

//插入元素2，在递增有序表中插入x
//返回值为0：表满   返回值为1：插入成功
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


//删除运算
//返回值为0：表空   返回值为1：序号非法   返回值为2：删除成功
bool listDelete(seqList* L, int i) {
	if (L->listLen==0)//表空
		return 0;
	else if (i<1 || i>L->listLen)//序号非法
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



//分解奇偶项结点（值的奇偶性）
bool listDivide(seqList* L) {
	if (L->listLen == 0)
		return 0;
	seqList L1, L2;//L1存放奇项,L2存放偶项
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
	cout << "原表：";
	showList(L);
	cout << "奇表：";
	showList(&L1);
	cout << "偶表：";
	showList(&L2);
	return 1;
}


//存放两递增有序顺序表的公共元素到新顺序表L3中
bool sameToList(seqList* L1, seqList* L2, seqList* L3) {
	if (L1->listLen == 0 || L2->listLen == 0)
		return 0;
	int i=0, j=0, k=0;//i为L1元素下标；j为L2元素下标；k为L3元素下标
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
	cout << "L1顺序表：";
	showList(L1);
	cout << "L2顺序表：";
	showList(L2);
	cout << "L3顺序表：";
	showList(L3);
	return 1;
}


//删除递增有序顺序表中重复元素，并统计移动次数
bool sameDelete(seqList* L) {
	if (L->listLen == 0)
		return 0;
	else {
		cout << "L顺序表：";
		showList(L);
		int i;
		for (i = 1; i <= L->listLen; i++) {
			if (L->data[i - 1] == L->data[i - 2]) {
				listDelete(L, i);
				i--;
			}
		}
		cout << "L删除后：";
		showList(L);
		return 1;
	}
}



//递增有序顺序表C=A∪B
bool mergeList(seqList L1, seqList L2, seqList* L3) {
	int i = 0, j = 0, k = 0;
	while (i < L1.listLen && j < L2.listLen && k<=MaxLen) {
		if (L1.data[i] == L2.data[j]) {
			L3->data[k] = L1.data[i];//listInsert函数插入亦可
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
		cout << "L1顺序表：";
		showList(&L1);
		cout << "L2顺序表：";
		showList(&L2);
		cout << "L3顺序表：";
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
	cout << "L1顺序表：";
	showList(&L1);
	cout << "L2顺序表：";
	showList(&L2);
	cout << "L3顺序表：";
	showList(L3);
	return 1;
}

//递增有序顺序表C=A∩B
void intersectList(seqList L1, seqList L2, seqList* L3) {
	int i = 0, j = 0, k = 0;
	while (i < L1.listLen && j < L2.listLen) {//k不可能大于等于MaxLen
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
	cout << "L1顺序表：";
	showList(&L1);
	cout << "L2顺序表：";
	showList(&L2);
	cout << "L3顺序表：";
	showList(L3);
}


//递增有序顺序表C=A-B
void exceptList(seqList L1, seqList L2, seqList* L3) {
	int i = 0, j = 0, k = 0;
	while (i < L1.listLen && j < L2.listLen) {//k不可能大于等于MaxLen
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
	cout << "L1顺序表：";
	showList(&L1);
	cout << "L2顺序表：";
	showList(&L2);
	cout << "L3顺序表：";
	showList(L3);
}

//递增有序顺序表A=A∪B
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
		cout << "L1顺序表：";
		showList(L1);
		cout << "L2顺序表：";
		showList(&L2);
		return 0;
	}
	while (j < L2.listLen) {
		listInsert(L1, i + 1, L2.data[j]);
		i++;
		j++;
	}
	cout << "L1顺序表：";
	showList(L1);
	cout << "L2顺序表：";
	showList(&L2);
	return 1;
}

//递增有序顺序表A=A∩B
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
	cout << "L1顺序表：";
	showList(L1);
	cout << "L2顺序表：";
	showList(&L2);
}



//递增有序顺序表A=A-B
void exceptList2(seqList *L1, seqList L2) {
	int i = 0, j = 0, k = 0;
	while (i < L1->listLen && j < L2.listLen) {//k不可能大于等于MaxLen
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
	cout << "L1顺序表：";
	showList(L1);
	cout << "L2顺序表：";
	showList(&L2);
}

//递增有序顺序表表示集合A、B，判定A是否B的子集
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

//9. 求升序列的中位数
void midList(seqList L1, seqList L2,seqList*L3) {
	mergeList(L1, L2, L3);//合并升序列
	int i = L3->listLen/2;
	cout << "中位数为" << L3->data[i-1];
}

