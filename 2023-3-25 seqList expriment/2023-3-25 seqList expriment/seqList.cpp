#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
#include<iostream>
using namespace std;
#include "seqList.h"

int main() {
	seqList L1, L2, L3;
	int n1 = 0, n2 = 0, n3 = 0;
	int i = 0;
	elementType x=0;
	int Choice = -1;
	//打印主菜单
	cout << "顺序表测试程序" << endl;
	cout << "*0  -退出" << endl;
	cout << "*111-初始化顺序表L1" << endl;
	cout << "*112-初始化顺序表L2" << endl;
	cout << "*113-初始化顺序表L3" << endl;
	cout << "*121-创建顺序表L1" << endl;
	cout << "*122-创建顺序表L2" << endl;
	cout << "*123-创建顺序表L3" << endl;
	cout << "*13 -打印顺序表" << endl;
	cout << "——————————" << endl;
	cout << "*1  -在第i个结点位置插入值为x的结点" << endl;
	cout << "*2  -删除顺序表中第i个元素结点" << endl;
	cout << "*3  -在递增有序顺序表中插入一个值为x的元素" << endl;
	cout << "*4  -将顺序表Ｌ中的奇数项和偶数项结点分解开" << endl;
	cout << "*5  -存放两递增有序顺序表的公共元素到新顺序表L3中" << endl;
	cout << "*6  -删除递增有序顺序表中的重复元素，并统计移动元素次数" << endl;
	cout << "*71 -递增有序顺序表C=A∪B" << endl;
	cout << "*72 -递增有序顺序表C=A∩B" << endl;
	cout << "*73 -递增有序顺序表C=A-B" << endl;
	cout << "*74 -递增有序顺序表A=A∪B" << endl;
	cout << "*75 -递增有序顺序表A=A∩B" << endl;
	cout << "*76 -递增有序顺序表A=A-B" << endl;
	cout << "*8  -递增有序顺序表表示集合A、B，判定A是否B的子集" << endl;
	cout << "*9   -求升序列的中位数" << endl;
	do {

		
		cout << "请输入操作序号：";
		cin >> Choice;
		switch (Choice) {
		case 0://退出
			cout << "程序退出" << endl;
			break;
		case 111://初始化L1
			//system("cls");//清除屏幕
			initialList(&L1);
			cout << "初始化顺序表L1完成！" << endl;
			break;
		case 112://初始化L2
			system("cls");//清除屏幕
			initialList(&L2);
			cout << "初始化顺序表L2完成！" << endl;
			break;		
		case 113://初始化L3
			system("cls");//清除屏幕
			initialList(&L3);
			cout << "初始化顺序表L3完成！" << endl;
			break;
		case 121://交互创建L1
			system("cls");//清除屏幕
			cout << "请输入结点个数n1:";
			cin >> n1;
			creatList(&L1, n1);
			break;
		case 122://交互创建L2
			system("cls");//清除屏幕
			cout << "请输入结点个数n2:";
			cin >> n2;
			creatList(&L2, n2);
			break;
		case 123://交互创建L3
			system("cls");//清除屏幕
			cout << "请输入结点个数n3:";
			cin >> n3;
			creatList(&L3, n3);
			break;
		case 1://在i插入x
			cout << "插入前：";
			showList(&L1);
			cout << "请输入结点位置i：";
			cin >> i;
			cout << "请输入值x：";
			cin >> x;
			listInsert(&L1, i, x);
			cout << "插入后：";
			showList(&L1);
			break;
		case 2://删除结点i
			cout << "删除前：";
			showList(&L1);
			cout << "请输入删除的结点i：";
			cin >> i;
			listDelete(&L1, i);
			cout << "删除后：";
			showList(&L1);
			break;
		case 3://递增有序表中插入x
			cout << "删除前：";
			showList(&L1);
			cout << "请输入值x：";
			cin >> x;
			listInsert2(&L1, x);
			cout << "删除后：";
			showList(&L1);
			break;
		case 4:

		}




	} while (Choice != 0);

	return 0;
}