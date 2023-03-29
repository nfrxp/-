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
bool getElement(seqList L, int i, elementType* x) {
	if (i<1 || i>L.listLen)
		return 0;//序号非法
	*x = L.data[i - 1];
	return 1;
}

//序号从小到大依次输出顺序表元素
void showList(seqList L) {
	int i;
	for (i = 0; i < L.listLen; i++) {
		cout << L.data[i] << ' ';
	}
	cout << endl;
}

//交互创建顺序表
void creatList(seqList* L, int n) {
	if (L->listLen > 0) {
		cout << "顺序表已存在，请先初始化！" << endl;
		return;
	}
	int i = 0;
	cout << "请输入值：";
	while (i < n) {
		cin >> L->data[i];
		i++;
		L->listLen++;
	}
}

//1. 插入元素
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
		L->data[i - 1] = x;
		L->listLen++;
		return 2;
	}
}

//2. 删除运算
//返回值为0：表空   返回值为1：序号非法   返回值为2：删除成功
int listDelete(seqList* L, int i) {
	int j, count = 0;
	if (L->listLen == 0)//表空
		return 0;
	else if (i<1 || i>L->listLen)//序号非法
	{
		return 1;
	}
	else {
		for (j = i; j < L->listLen; j++) {
			L->data[j - 1] = L->data[j];
			count++;
		}
		L->listLen--;
		cout << "移动次数" << count << endl;
		return 2;
	}
}


//3. 插入元素2，在递增有序表中插入x
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


//4. 分解奇偶项结点（值的奇偶性）
bool listDivide(seqList* L1,seqList*L2,seqList*L3) {
	if (L1->listLen == 0)
		return 0;
	int i, j2, j3;
	for (i = 0, j2 = 0, j3 = 0; i < L1->listLen; i++) {
		if (L1->data[i] % 2 == 0) {
			L3->data[j2] = L1->data[i];
			j2++;
			L3->listLen++;
			continue;
		}
		else {
			L2->data[j2] = L1->data[i];
			j2++;
			L2->listLen++;
			continue;
		}
	}

	return 1;
}


//5. 存放两递增有序顺序表的公共元素到新顺序表L3中
void sameToList(seqList L1, seqList L2, seqList* L3) {
	int i=0, j=0, k=0;//i为L1元素下标；j为L2元素下标；k为L3元素下标
	while (i < L1.listLen && j < L2.listLen) {
		if (L1.data[i] == L2.data[j]) {
			L3->data[k] = L1.data[i];
			i++;
			j++;
		}
		else if (L1.data[i] > L2.data[j])
			j++;
		else
			i++;
	}
	cout << "L1顺序表：";
	showList(L1);
	cout << "L2顺序表：";
	showList(L2);
	cout << "L3顺序表：";
	showList(*L3);
}


//6. 删除递增有序顺序表中重复元素，并统计移动次数
void sameDelete(seqList* L) {
	int i;
	for (i = 1; i <= L->listLen; i++) {
		if (L->data[i - 1] == L->data[i - 2]) {
			listDelete(L, i);
			i--;
		}
	}

}



//71.递增有序顺序表C=A∪B
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
	return 1;
}

//72.递增有序顺序表C=A∩B
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

}


//73.递增有序顺序表C=A-B
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
	showList(L1);
	cout << "L2顺序表：";
	showList(L2);
	cout << "L3顺序表：";
	showList(*L3);
}

//74.递增有序顺序表A=A∪B
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
		showList(*L1);
		cout << "L2顺序表：";
		showList(L2);
		return 0;
	}
	while (j < L2.listLen) {
		listInsert(L1, i + 1, L2.data[j]);
		i++;
		j++;
	}
	cout << "L1顺序表：";
	showList(*L1);
	cout << "L2顺序表：";
	showList(L2);
	return 1;
}

//75.递增有序顺序表A=A∩B
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
	showList(*L1);
	cout << "L2顺序表：";
	showList(L2);
}



//76.递增有序顺序表A=A-B
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

}

//8. 递增有序顺序表表示集合A、B，判定A是否B的子集
bool subsetList(seqList L1, seqList L2) {
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

//9. 求两升序列的中位数
void midList(seqList L1, seqList L2,seqList*L3) {
	mergeList(L1, L2, L3);//合并升序列
	int i = L3->listLen/2;
	cout << "中位数为" << L3->data[i-1];
}

