#include<iostream>
#include<string.h>
#define ElemType int
#define MaxSize 100
using namespace std;
typedef struct {
public:
	ElemType data[MaxSize]; //顺序表中的数据 
	int length; //顺序表的长度 
}SqList;
//顺序表的初始化
void IniteList(SqList* L) {
	memset(L->data, 0, L->length);
	L->length = 0;
}
//创建顺序表
bool CreateList(SqList* L, int n) {
	if (n < 1) return false;
	for (int i = 0; i < n; i++) {
		cin >> L->data[i];
		L->length++;
	}
	return true;
}
//从有序顺序表中删除其值重复的元素 
bool DeleteList(SqList* L) {
	if (L->length == 0) return false;
	int i, j, k = 0; //i存储第一个不相同的元素，j为工作指针,k为元素移动次数
	for (i = 0, j = 1; j < L->length; j++)
		if (L->data[i] != L->data[j]) //查找下一个与上个元素值不同的元素 
		{
			L->data[++i] = L->data[j];  //找到后就将元素前移 
			k++;
		}
	L->length = i + 1; //因为i是从0开始的 
	return true;
}
//输出顺序表中的元素 
void Printe(SqList* L) {
	cout << "当前顺序表中的元素为：";
	for (int j = 0; j < L->length; j++) {
		cout << L->data[j] << " ";
	}
	cout << endl;
}
//创建
void Create(SqList* L) {
	int n; bool flag;
	cout << "请输入顺序表的长度：";
	cin >> n;
	flag = CreateList(L, n);
	if (flag) {
		cout << "创建成功！";
		Printe(L);
	}
	else cout << "创建失败！";
}
int main() {
	SqList L;
	IniteList(&L);
	Create(&L);
	DeleteList(&L);
	cout << "删除后";
	Printe(&L);
	return 0;
}
