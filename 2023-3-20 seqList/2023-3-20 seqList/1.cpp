#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#define MaxLen 100
typedef int elementType;

typedef struct List {
	elementType data[MaxLen];
	int listLen;
}seqList;//顺序表

void initialList(seqList* L) {
	L->listLen = 0;
}

int listLength(seqList L) {
	return L.listLen;
}

//按值找元素
int listLocate(seqList* L, elementType x) {
	int i = 0;
	for (i = 0; i < L->listLen - 1; i++) {//包含了空表的情况
		if (L->data[i] == x)
			return i + 1;
	}
	return 0;//值不存在
}

//按序号找元素
int getElement(seqList* L, int i, elementType& x) {
	if (i<1 || i>L->listLen)//序号不合法
		return 0;
	x = L->data[i - 1];//序号合法，取值
	return 1;
}

//插入运算
int listInsert(seqList* L, int i, elementType x) {
	//表满？序号合法？
	if (L->listLen == MaxLen)
		return 0;//表满，插入失败
	if (i<1 || i>L->listLen + 1)
		return 1;//序号违法，插入失败
	int j = 0;
	for (j = L->listLen; j >= i; j--) {
		L->data[j] = L->data[j-1];
	}
	L->data[i - 1] = x;
	L->listLen++;
	return 2;
}


//删除运算
int listDelete(seqList* L, int i) {
	if (L->listLen == 0)//表空
		return 0;
	if (i<1 || i>L->listLen)//序号违法
		return 1;
	int j = 0;
	for (j = i; j < L->listLen; j++) {
		L->data[j - 1] = L->data[j];
	}
	L->listLen--;
	return 2;
}

//交互数据元素输入，特殊输入结束
void listset(seqList* L) {
	//判定是否已存在值
	if (L->listLen > 0) {
		cout << "顺序表已存在，请先初始化！" << endl;
		return;
	}

	elementType x;
	cout << "请输入元素值，-9999为结束标志：" << endl;
	cout << "x=";
	cin >> x;
	while (x != -9999  && L->listLen<MaxLen) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}

}



//交互输入数据元素，指定数据个数
void listset2(seqList* L) {
	//判断表是否已赋值
	if (L->listLen > 0) {
		cout << "顺序表已存在，请先初始化！" << endl;
		return;
	}
		
	int n = 0, i = 0;
	cout << "请输入数据个数（n<=MaxLen）：" << endl;
	cin >> n;
	cout << "请输入数据元素值：" << endl;
	for (i = 0; i < n; i++) {
		cin>>L->data[i];
		L->listLen++;
	}
}

//从数组输入数据元素
void listset(seqList* L, elementType arr[], int n) {
	//判断顺序表是否已存在
	if (L->listLen > 0) {
		cout << "顺序表已存在，请初始化！" << endl;
		return;
	}

	int i = 0;
	for (i = 0; i < n; i++) {
		L->data[L->listLen] = arr[i];
		L->listLen++;
	}
}


//从文件输入元素
int listInputFile(char fileName[], seqList* pL)
{
	FILE* pFile;     //定义顺序表的文件指针
	char str[1000];  //存放读出一行文本的字符串
	char strTemp[10]; //判断是否注释行
	char* ss; 

	pFile=fopen(fileName,"r");
	if(!pFile)
	{
		cout<<"文件"<<fileName<<"打开失败。"<<endl;//printf("文件CBiTree.CBT打开失败！\n");
		return false;
	}
	
	ss=fgets(str,1000,pFile);
	strncpy(strTemp,str,2);
	while((ss!=NULL) && (strstr(strTemp,"//")!=NULL) )  //跳过注释行
	{
		ss=fgets(str,1000,pFile);
		strncpy(strTemp,str,2);
		//cout<<strTemp<<endl;
	}
	    //循环结束，str中应该已经是文件标识，判断文件格式
	//cout<<str<<endl;
	if(strstr(str,"seqList")==NULL)
	{
		printf("打开的文件格式错误！\n");
		fclose(pFile); //关闭文件
		return false;
	}

	//以下开始读取元素数据，一行一个元素数据
	while(fgets(str,1000,pFile)!=NULL)
	{
		pL->data[pL->listLen]=atoi(str);//(elementType)str;
		pL->listLen++;
	}
	fclose(pFile); //关闭文件
	return true;

}



//随机数创建顺序表
void randsetlist(seqList* L) {
	int i = 0;//元素下标
	int n = 0;//随机数个数
	int m = 0;//控制随机数大小的参数
	if (L->listLen > 0) {
		cout << "顺序表已创建，请初始化！" << endl;
		return;
	}

	cout << "请输入要产生随机数的个数：" << endl;
	cin >> n;
	if (n > MaxLen - 1) {//为什么不能等于MaxLen
		cout << "个数超出表长度，创建失败！" << endl;
		return;
	}

	cout << "请输入控制随机数大小的参数，如100以内的数，请输入100，m=" ;
	cin >> m;
	srand((unsigned)time(NULL));//产生随机数种子
	//同srand((unsigned)GetTickCount)
	for (i = 0; i < n; i++) {
		L->data[i] = rand() % m;
	}
	L->listLen = n;
}















int main() {
	seqList a;
	initialList(&a);
	listset(&a);
	cout << a.listLen;
	return 0;
}