#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"linkedList.h"
using namespace std;

void printBoard() {
	cout << "****************************单链表操作表****************************" << endl;
	cout << "************************未指明单链表默认操作L1**********************" << endl;
	cout << "*0  -打印单链表操作表                                              *" << endl;
	cout << "*111-初始化单链表L1                                                *" << endl;
	cout << "*112-初始化单链表L2                                                *" << endl;
	cout << "*121-构造单链表L1                                                  *" << endl;
	cout << "*122-构造单链表L2                                                  *" << endl;
	cout << "*123-构造单链表L3                                                  *" << endl;
	cout << "*13 -求链表长度                                                    *" << endl;
	cout << "*14 -按序号取元素                                                  *" << endl;
	cout << "*15 -按值查找元素                                                  *" << endl;
	cout << "*16 -打印链表                                                      *" << endl;
	cout << "*17 -销毁链表                                                      *" << endl;
	cout << "*18 -清屏                                                          *" << endl;
	cout << "*-1 -退出                                                          *" << endl;
	cout << "********************************************************************" << endl;
	cout << "*1  -插入结点                                                      *" << endl;
	cout << "*2  -删除结点                                                      *" << endl;
	cout << "*3  -递增有序单链表插入x                                           *" << endl;
	cout << "*4  -拆分单链表奇偶项（元素值的奇偶）                              *" << endl;
	cout << "*5  -将递增有序单链表公共元素放入新的单链表L3中                    *" << endl;
	cout << "*6  -删除递增有序单链表中重复元素                                  *" << endl;
	cout << "*7  -不申请新结点，将递增有序单链表（无重复元素）直接合并，成为集合*" << endl;
	cout << "*81 -递增有序单链表C=A∪B                                          *" << endl;
	cout << "*82 -递增有序单链表C=A∩B                                          *" << endl;
	cout << "*83 -递增有序单链表C=A-B                                           *" << endl;
	cout << "*84 -递增有序单链表A=A∪B                                          *" << endl;
	cout << "*85 -递增有序单链表A=A∩B                                          *" << endl;
	cout << "*86 -递增有序单链表A=A-B                                           *" << endl;
	cout << "*9  -头指针list指向单链表，查找倒数第k个位置上的结点，输出值       *" << endl;
	cout << "********************************************************************" << endl << endl;

}

void systemCls() {
	system("cls");
}
int main() {
	node* L1, * L2, * L3;
	L1 = new node;
	L2 = new node;
	L3 = new node;
	int Choice=0;
	int i = 0;
	elementType temp;
	int result=0;
	printBoard();
	do {
		cout << "请输入操作(0打印操作表)：";
		cin >> Choice;
		switch (Choice) {
		case 0:
			printBoard();
			break;
		case 111:
			initialList(L1);
			cout << "初始化L1成功！" << endl << endl;
			break;
		case 112:
			initialList(L2);
			cout << "初始化L2成功！" << endl << endl;
			break;
		case 113:
			initialList(L3);
			cout << "初始化L3成功！" << endl << endl;
			break;
		case 121:
			creatListR(L1);
			cout << "L1构造成功！" << endl << endl;
			break;
		case 122:
			creatListR(L2);
			cout << "L2构造成功！" << endl << endl;
			break;
		case 123:
			creatListR(L3);
			cout << "L3构造成功！" << endl << endl;
			break;
		case 13:
			cout << "L1链表长度为：" << listLength(L1) << endl << endl;
			break;
		case 14:
			cout << "请输入元素序号：";
			cin >> i;
			cout << "按序号取得的元素值为：" << getElement(L1, i)->data << endl << endl;
			break;

		case 15:
			cout << "请输入值：";
			cin >> temp;
			locateElement(L1, temp);
			cout << endl;

			break;
		case 16:
			cout << "链表L1：";
			printList(L1);
			cout << endl ;
			break;
		case 17:
			destroyList(L1);
			cout << "销毁L1链表成功！" << endl;
			destroyList(L2);
			cout << "销毁L2链表成功！" << endl;
			destroyList(L3);
			cout << "销毁L3链表成功！" << endl;
			cout << endl;

			break;
		case 18:
			systemCls();
			break;
		case -1:
			cout << "退出！" << endl << endl;
			break;
		case 1:
			cout << "请输入插入结点的序号：";
			cin >> i;
			cout << "请输入插入结点的值：";
			cin >> temp;
			cout << "插入前：" << endl;
			printList(L1);
			result=listInsert(L1, i, temp);
			if (result == 0)
				cout << "序号非法！" << endl;
			else {
				cout << "插入成功！" << endl;
				printList(L1);
			}
			cout << endl;

			break;
		case 2:
			cout << "请输入删除结点的序号：";
			cin >> i;
			cout << "删除前：" << endl;
			printList(L1);
			result=listDelete(L1, i);
			if (result == 0)
				cout << "序号非法！" << endl;
			else {
				cout << "删除成功！" << endl;
				printList(L1);
			}
			cout << endl;

			break;
		case 3:
			cout << "请输入插入的值：";
			cin >> temp;
			cout << "插入前：";
			printList(L1);
			listInsert2(L1,temp);
			cout << "递增有序单链表插入值成功！" << endl;
			cout << "插入后：";
			printList(L1);
			cout << endl;

			break;
		case 4:
			listDivide(L1, L2, L3);
			cout << "拆分单链表奇偶项成功！" << endl;
			cout << "单链表L1：";
			printList(L1);
			cout << "单链表L2：";
			printList(L2);
			cout << "单链表L3：";
			printList(L3);
			cout << endl;

			break;
		case  5:
			sameToList(L1, L2, L3);
			cout << "存放公共元素成功！" << endl;
			cout << "单链表L1：";
			printList(L1);
			cout << "单链表L2：";
			printList(L2);
			cout << "单链表L3：";
			printList(L3);
			cout << endl;

			break;

		case 6:
			cout << "删除前：" << endl;
			printList(L1);
			sameDelete(L1);
			cout << "删除重复元素成功！" << endl;
			printList(L1);
			cout << endl;

			break;

		case 7:
			cout << "合并前：" << endl;
			cout << "单链表L1：";
			printList(L1);
			cout << "单链表L2：";
			printList(L2);
			combineList(L1, L2);
			cout << "单链表合并成功，不申请新结点！" << endl << endl;
			cout << "合并后：";
			printList(L1);
			cout << endl;

			break;

		case 81:
			mergeList(L1, L2, L3);
			cout << "求并集C=A∪B成功！" << endl << endl;
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			cout << "单链表C：";
			printList(L3);
			cout << endl;

			break;
		case 82:
			intersectList(L1, L2, L3);
			cout << "求交集C=A∩B成功！" << endl << endl;
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			cout << "单链表C：";
			printList(L3);
			cout << endl;

			break;
		case 83:
			exceptList(L1, L2, L3);
			cout << "求差C=A-B成功！" << endl << endl;
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			cout << "单链表C：";
			printList(L3);
			cout << endl;
			break;
		case 84:
			cout << "操作前：";
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			mergeList2(L1, L2);
			cout << "求并集A=A∪B成功！" << endl << endl;
			cout << "操作后：";
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			cout << endl;

			break;
		case 85:
			cout << "操作前：";
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			intersectList2(L1, L2);
			cout << "求交集A=A∩B成功！" << endl << endl;
			cout << "操作后：";
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			cout << endl;

			break;
		case 86:
			cout << "操作前：";
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			exceptList2(L1, L2);
			cout << "求差A=A-B成功！" << endl << endl;
			cout << "操作后：";
			cout << "单链表A：";
			printList(L1);
			cout << "单链表B：";
			printList(L2);
			cout << endl;

			break;
		case 9:
			cout << "请输入倒序序号：";
			cin >> i;
			result = getElement2(L1, i);
			if (result == 0)
				cout << "序号K非法！" << endl ;
			cout << endl;

			break;
		default:
			cout << "操作非法！" << endl;
			break;
		}
	} while (Choice != -1);
	return 0;
}