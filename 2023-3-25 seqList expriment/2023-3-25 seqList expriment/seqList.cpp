#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
#include<iostream>
using namespace std;
#include "seqList.h"
#include<windows.h>
void printBoard()
{
	//打印主菜单
	cout << "************************顺序表测试程序************************" << endl;
	cout << "*0  -退出                                                    *" << endl;
	cout << "*111-初始化顺序表L1                                          *" << endl;
	cout << "*112-初始化顺序表L2                                          *" << endl;
	cout << "*113-初始化顺序表L3                                          *" << endl;
	cout << "*121-创建顺序表L1                                            *" << endl;
	cout << "*122-创建顺序表L2                                            *" << endl;
	cout << "*123-创建顺序表L3                                            *" << endl;
	cout << "*13 -打印顺序表                                              *" << endl;
	cout << "———————————————————————————————" << endl;
	cout << "*1  -在第i个结点位置插入值为x的结点                          *" << endl;
	cout << "*2  -删除顺序表中第i个元素结点                               *" << endl;
	cout << "*3  -在递增有序顺序表中插入一个值为x的元素                   *" << endl;
	cout << "*4  -将顺序表Ｌ中的奇数项和偶数项结点分解开                  *" << endl;
	cout << "*5  -存放两递增有序顺序表的公共元素到新顺序表L3中            *" << endl;
	cout << "*6  -删除递增有序顺序表中的重复元素，并统计移动元素次数      *" << endl;
	cout << "*71 -递增有序顺序表C=A∪B                                    *" << endl;
	cout << "*72 -递增有序顺序表C=A∩B                                    *" << endl;
	cout << "*73 -递增有序顺序表C=A-B                                     *" << endl;
	cout << "*74 -递增有序顺序表A=A∪B                                    *" << endl;
	cout << "*75 -递增有序顺序表A=A∩B                                    *" << endl;
	cout << "*76 -递增有序顺序表A=A-B                                     *" << endl;
	cout << "*8  -递增有序顺序表表示集合A、B，判定A是否B的子集            *" << endl;
	cout << "*9   -求升序列的中位数                                       *" << endl;
	cout << "**************************************************************" << endl;
}


int main() {
	seqList L1, L2, L3;
	int n1 = 0, n2 = 0, n3 = 0;
	int i = 0, temp = 0;
	elementType x = 0;
	int Choice = -1;
	printBoard();
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
			cout << "初始化顺序表L1完成！" << endl << endl;
			break;
		case 112://初始化L2
			//system("cls");//清除屏幕
			initialList(&L2);
			cout << "初始化顺序表L2完成！" << endl << endl;
			break;
		case 113://初始化L3
			//system("cls");//清除屏幕
			initialList(&L3);
			cout << "初始化顺序表L3完成！" << endl << endl;
			break;
		case 121://交互创建L1
			//system("cls");//清除屏幕
			cout << "请输入结点个数n1:";
			cin >> n1;
			creatList(&L1, n1);
			cout << "顺序表L1创建完成！" << endl << endl;

			break;
		case 122://交互创建L2
			//system("cls");//清除屏幕
			cout << "请输入结点个数n2:";
			cin >> n2;
			creatList(&L2, n2);
			cout << "顺序表L2创建完成！" << endl << endl;

			break;
		case 123://交互创建L3
			//system("cls");//清除屏幕
			cout << "请输入结点个数n3:";
			cin >> n3;
			creatList(&L3, n3);
			cout << "顺序表L3创建完成！" << endl << endl;

			break;
		case 1://在i插入x
			cout << "插入前：";
			showList(L1);
			cout << "请输入结点位置i：";
			cin >> i;
			cout << "请输入值x：";
			cin >> x;
			temp=listInsert(&L1, i, x);
			if (temp == 0)
				cout << "表满，插入失败！" << endl;
			else if (temp == 1)
				cout << "序号非法，请重新输入！" << endl;
			else {
				cout << "插入后：";
				showList(L1);
			}
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 2://删除结点i
			cout << "删除前：";
			showList(L1);
			cout << "请输入删除的结点i：";
			cin >> i;
			temp=listDelete(&L1, i);
			if (temp == 0)
				cout << "表空，删除失败！" << endl;
			else if (temp == 1)
				cout << "序号非法，请重新输入！" << endl;
			else {
				cout << "删除后：";
				showList(L1);
			}
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 3://递增有序表中插入x
			cout << "插入前：";
			showList(L1);
			cout << "请输入值x：";
			cin >> x;
			temp=listInsert2(&L1, x);
			if (temp == 0)
				cout << "表满，插入失败！" << endl;
			else {
				cout << "插入后：";
				showList(L1);
			}
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 4://分解奇偶项结点（值的奇偶性）
			temp=listDivide(L1, &L2, &L3);
			if (temp == 0)
				cout << "空表，分解失败！" << endl;
			else {
				cout << "原表：";
				showList(L1);
				cout << "奇表：";
				showList(L2);
				cout << "偶表：";
				showList(L3);
			}
			Sleep(3000);
			system("cls");
			printBoard();

			break;
		case 5://存放两递增有序顺序表的公共元素到新顺序表L3中
			sameToList(L1, L2, &L3);
			cout << "顺序表L1：";
			showList(L1);
			cout << "顺序表L2：";
			showList(L2);
			cout << "存放公共元素的顺序表L3：";
			showList(L3);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 6://删除递增有序顺序表中重复元素，并统计移动次数
			cout << "删除前：";
			showList(L1);
			sameDelete(&L1);
			cout << "删除后：";
			showList(L1);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 71://递增有序顺序表C=A∪B
			cout << "操作前：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			cout << "顺序表C：";
			showList(L3);
			temp=mergeList(L1, L2, &L3);
			cout << "操作后：" << endl;
			if (temp == 0)
				cout << "表C溢出！" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			cout << "顺序表C：";
			showList(L3);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 72://递增有序顺序表C = A∩B
			cout << "操作前：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			cout << "顺序表C：";
			showList(L3);
			intersectList(L1, L2, &L3);
			cout << "操作后：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			cout << "顺序表C：";
			showList(L3);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 73://递增有序顺序表C=A-B
			cout << "操作前：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			cout << "顺序表C：";
			showList(L3);
			exceptList(L1, L2, &L3);
			cout << "操作后：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			cout << "顺序表C：";
			showList(L3);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 74://递增有序顺序表A=A∪B
			cout << "原顺序表A：";
			showList(L1);
			cout << "原顺序表B：";
			showList(L1);
			temp=mergeList2(&L1, L2);
			cout << "操作后：" << endl;
			if (temp == 0)
				cout << "表A溢出！" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 75://递增有序顺序表A=A∩B
			cout << "原顺序表A：";
			showList(L1);
			cout << "原顺序表B：";
			showList(L2);
			intersectList2(&L1, L2);
			cout << "操作后：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 76://递增有序顺序表A=A-B
			cout << "原顺序表A：";
			showList(L1);
			cout << "原顺序表B：";
			showList(L2);
			exceptList2(&L1, L2);
			cout << "操作后：" << endl;
			cout << "顺序表A：";
			showList(L1);
			cout << "顺序表B：";
			showList(L2);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 8://递增有序顺序表表示集合A、B，判定A是否B的子集
			if (subsetList(L1, L2) == 1)
				cout << "A是B的子集！" << endl;
			else
				cout << "A不是B的子集！" << endl;
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		case 9://求两升序列的中位数
			midList(L1, L2, &L3);
			cout << "顺序表L1：";
			showList(L1);
			cout << "顺序表L2：";
			showList(L2);
			cout << "顺序表L3：";
			showList(L3);
			Sleep(3000);
			system("cls");
			printBoard();
			break;
		default:
			cout << "非法操作序号，请重新输入操作序号：";
			break;
		}

	} while (Choice != 0);

	return 0;
}