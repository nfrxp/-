#define _CRT_SECURE_NO_WARNINGS 1

//顺序表的实现以及基本运算

#include <iostream>
using namespace std;
#include<stdio.h>
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
//功能：在给定位置插入给定元素
//参数：seqList指针变量，序号i，elementType x给定元素值
//返回值：整型，表满0，位置非法1，插入成功2
int listInsert(seqList* L, int i, elementType x) {
	int j = L->listLen + 1;//序号
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

//6.删除元素
//功能：删除顺序表中给定序号的元素
//参数：seqList指针，i元素序号
//返回值：整型，空表1，序号非法1，删除成功2
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

//7.打印顺序表中的所有元素
void listPrint(seqList L) {
	int i = 0;
	for (i = 0; i < L.listLen; i++) {
		cout<< L.data[i]<<' ';
	}
	cout << endl;
}

//8.交互输入数据元素，特殊输入结束输入
void listInput(seqList* L) {
	if (L->listLen > 0) {
		cout << "顺序表已存在，请先初始化，再输入元素。" << endl;
		return;
	}
	elementType x;
	cout << "请输入元素值（整数，-999退出）：" << endl;
	cout << "x=";
	cin >> x;
	while (x != -999) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}
}

//9.交互输入数据元素——指定元素个数
void listInputC(seqList* L) {
	if (L->listLen < 0) {
		cout << "顺序表已存在，请先初始化，再输入元素。" << endl;
		return;
	}
	int i = 0, n;
	cout << "请输入元素个数：n=";
	cin >> n;
	cout << "请输入元素值：" << endl;
	for (; i < n; i++) {
		cin >> L->data[i];
		L->listLen++;
	}
}

//10.从数组输入元素值
void listInputArr(seqList* L) {
	if (L->listLen > 0) {
		cout << "顺序表已存在，请先初始化，再输入元素。" << endl;
		return;
	}
	int i, n;
	elementType arr[6] = { 2,4,5,77,99,100 };
	n = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < n; i++) {
		L->data[i] = arr[i];
		L->listLen++;
	}
}

//11. 从文件输入数据元素
int listInputFile(char fileName[], seqList* pL)
{
	FILE* pFile;     //定义顺序表的文件指针
	char str[1000];  //存放读出一行文本的字符串
	char strTemp[10]; //判断是否注释行
	char* ss;

	pFile = fopen(fileName, "r");
	if (!pFile)
	{
		cout << "文件" << fileName << "打开失败。" << endl;//printf("文件CBiTree.CBT打开失败！\n");
		return false;
	}

	ss = fgets(str, 1000, pFile);
	strncpy(strTemp, str, 2);
	while ((ss != NULL) && (strstr(strTemp, "//") != NULL))  //跳过注释行
	{
		ss = fgets(str, 1000, pFile);
		strncpy(strTemp, str, 2);
		//cout<<strTemp<<endl;
	}
	//循环结束，str中应该已经是文件标识，判断文件格式
//cout<<str<<endl;
	if (strstr(str, "seqList") == NULL)
	{
		printf("打开的文件格式错误！\n");
		fclose(pFile); //关闭文件
		return false;
	}

	//以下开始读取元素数据，一行一个元素数据
	while (fgets(str, 1000, pFile) != NULL)
	{
		pL->data[pL->listLen] = atoi(str);//(elementType)str;
		pL->listLen++;
	}
	fclose(pFile); //关闭文件
	return true;

}



//随机数输入创建查找表开始------------------------------------------------------------------
//随机数创建顺序表
void rndCList(seqList& L)
{
	int i;
	int n, m;

	L.listLen = 0;
	cout << "请输入要产生的随机数个数，n=";
	cin >> n;

	if (n > MaxLen - 1)
	{
		cout << "您要求产生的随机数个数超出了查找表长度" << MaxLen - 1 << "，创建顺序表失败。" << endl;
		return;

	}
	cout << "请输入控制随机数大小参数，比如100以内数，请输入100，m=";
	cin >> m;

	srand((unsigned)time(NULL));	//产生随机数种子
	//srand((unsigned)GetTickCount());	//产生随机数种子
	for (i = 0; i < n; i++)                //随机数写入排序表A[]
		L.data[i] = rand() % m;
	L.listLen = n;                      //表长度为n
	cout << endl;
}
//随机数输入创建查找表结束------------------------------------------------------------------
