#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
typedef int elementType;
typedef struct Node {
	elementType data;
	Node* next;
}node,*linkedList;


//初始化
void initialList(node*& L) {
	L = new node;//动态申请产生头结点
	L->next = NULL;//next域为空
}

//链表的构造：尾插法
void creatListR(node* L) {
	node* u, * R;
	R = L;
	elementType temp;
	cout << "请输入元素值（-99999为结束标志）：";
	cin >> temp;
	while (temp != -99999) {
		u = new node;
		u->data = temp;//给新结点赋值
		R->next = u;//将结点接入链表
		R = u;//尾指针指向新的尾结点
		cin >> temp;
	}
	R->next = NULL;//尾结点next置为空
}

//求链表长度（不计入头结点）
int listLength(node* L) {
	int i = 0;
	while (L->next != NULL)
		i++;
	return i;
}

//按序号取元素
node* getElement(node* L, int i) {
	node* p = L->next;
	int j = 1;
	while (j < i && p != NULL) {
		p = p->next;
		j++;
	}
	return p;//j==i，为目标结点
}

//按值查找元素
node* locateElement(node* L,elementType x) {
	node* u = L->next;
	while (u != NULL) {
		if (u->data == x)
			return u;
		u = u->next;
	}
	return NULL;
}

//销毁链表
void destroyList(node*& L) {
	node* temp;
	node* u = L;
	while (u != NULL) {
		temp = u;
		u = u->next;
		delete temp;
	}
	L = NULL;
}


//1. 插入结点
bool listInsert(node* L, int i, elementType x) {
	node* f = L;
	node* temp;
	int j = 0;
	while (j < i-1 && f != NULL) {
		f = f->next;
		j++;
	}
	if (f == NULL)
		return 0;//序号非法
	temp = new node;
	temp->data = x;
	temp->next = f->next;
	f->next = temp;
	return 1;//插入成功
}

//2. 删除结点
bool listDelete(node* L, int i) {
	node* f = L;
	node* temp;
	int j = 0;
	while (j < i - 1 && f->next != NULL) {
		j++;
		f = f->next;
	}
	if (f->next == NULL)//序号非法
		return 0;
	temp = f->next;
	f->next = temp->next;
	delete temp;
	return 1;
}



//3. 递增有序单链表插入x
void listInsert2(node* L, elementType x) {
	node* u = L;
	node* temp;
	while (u->next->data < x && u->next!= NULL) {
		u = u->next;
	}
	temp = new node;
	temp->data = x;
	if (u->next == NULL) {//未定位到比x的的元素
		temp->next = NULL;
		u->next = temp;
		return ;
	}
	temp->next = u->next;//定位到比x大的元素
	u->next = temp;
}

//4. 拆分单链表奇偶项（元素值的奇偶）
void listDivide(node* L1, node* L2, node* L3) {
	int j = 1, k = 1;//L2和L3的元素序号
	node* u1 = L1->next;
	while (u1 != NULL) {
		if (u1->data % 2 != 0) {//奇数存L2
			listInsert(L2, j, u1->data);
			j++;
			u1 = u1->next;
		}
		else {//偶数存L3
			listInsert(L3, k, u1->data);
			k++;
			u1 = u1->next;
		}
	}	
}

//5. 将递增有序单链表公共元素放入新的单链表L3中
void sameToList(node* L1, node* L2, node* L3) {
	int i = 1;//新单链表L3的结点序号
	node* u1 = L1->next, * u2 = L2->next;
	while (u1 != NULL && u2 != NULL) {
		if (u1->data == u2->data) {//元素相同，存入L3
			listInsert(L3, i, u1->data);
			i++;
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->data < u2->data) {//访问下一个L1
			u1 = u1->next;
		}
		else//访问下一个L2
			u2 = u2->next;
	}
}

//6. 删除递增有序单链表中重复元素，时间性能
void sameDelete(node* L) {
	node* u = L->next;
	node* temp;
	while (u != NULL && u->next != NULL) {
		if (u->data == u->next->data) {//重复元素，删除
			temp = u->next;//若调用listDelete需要从头开始查找再删除，时间性能低
			u->next = temp->next;
			delete temp;
		}
		else {//非重复元素，访问下一个元素
			u = u->next;
		}
	}
}

//7. 不申请新结点，将递增有序单链表（无重复元素）直接合并（合并后不为递增有序），成为集合
void combineList(node*& L1, node*& L2) {
	node* u1 = L1, * u2 = L2, * temp;//temp用于删除重复的结点
	while (u1->next != NULL && u2->next != NULL) {//1.先查找并删除两链表重复的结点
		if (u1->next->data == u2->next->data) {//两单链表元素值相等，删除一个
			temp = u2->next;
			u2->next = temp->next;
			delete temp;
			u1 = u1->next;
		}
		else if (u1->next->data < u2->next->data)
			u1 = u1->next;
		else
			u2 = u2->next;
	}
	while (u1->next != NULL)//2.确保指针指向L1尾结点（包含空链表）
		u1 = u1->next;
	u1->next = L2->next;//3.将L1尾结点接到L2的新第一元素结点
	delete L2;
	L2 = NULL;
}

//81.递增有序单链表C=A∪B
void mergeList(node* L1,node* L2, node* L3) {
	int j = 1;
	node* u1 = L1->next, * u2 = L2->next, * R = L3;
	node* temp;
	while(u1!=NULL && u2!=NULL) {//比较，并把小的值赋给L3
		if (u1->data == u2->data) {
			temp = new node;
			temp->data = u1->data;
			R->next = temp;
			R = temp;
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->data < u2->data) {
			temp = new node;
			temp->data = u1->data;
			R->next = temp;
			R = temp;
			u1 = u1->next;
		}
		else {
			temp = new node;
			temp->data = u2->data;
			R->next = temp;
			R = temp;
			u2 = u2->next;
		}
	}
	while (u1 != NULL) {
		temp = new node;
		temp->data = u1->data;
		R->next = temp;
		R = temp;
		u1 = u1->next;
	}
	while (u2 != NULL) {
		temp = new node;
		temp->data = u2->data;
		R->next = temp;
		R = temp;
		u2 = u2->next;
	}
	R->next = NULL;
}
//82.递增有序单链表C=A∩B
void intersectList(node* L1, node* L2, node* L3) {
	int j = 1;
	node* u1 = L1->next, * u2 = L2->next, * R = L3;
	node* temp;
	while (u1 != NULL && u2 != NULL) {//比较，并把相等的值赋给L3
		if (u1->data == u2->data) {
			temp = new node;
			temp->data = u1->data;
			R->next = temp;
			R = temp;
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->data < u2->data)
			u1 = u1->next;
		else
			u2 = u2->next;
	}
	R->next = NULL;
}

//83.递增有序单链表C=A-B
void exceptList(node* L1, node* L2, node* L3) {
	int j = 1;
	node* u1 = L1->next, * u2 = L2->next, * R = L3;
	node* temp;
	while (u1 != NULL && u2 != NULL) {//比较，B在A中含有的值不赋给L3
		if (u1->data == u2->data) {
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->data < u2->data){
			temp = new node;
			temp->data = u1->data;
			R->next = temp;
			R = temp;
			u1 = u1->next;
		}
		else
			u2 = u2->next;
	}
	R->next = NULL;
}

//84.递增有序单链表A=A∪B
void mergeList2(node* L1, node* L2) {
	int j = 0;
	node* u1 = L1, * u2 = L2;
	node* temp;
	while (u1->next!= NULL && u2->next != NULL) {
		if (u1->next->data == u2->next->data) {
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->next->data > u2->next->data) {
			temp = new node;
			temp->data = u2->next->data;
			temp->next = u1->next;
			u1->next = temp;
			u1 = u1->next;
			u2 = u2->next;
		}
		else {
			u1 = u1->next;
		}
	}
	while (u2->next != NULL) {
		temp = new node;
		temp->data = u2->next->data;
		temp->next = u1->next;
		u1->next = temp;
		u1 = u1->next;
	}
	u1->next = NULL;//尾结点next置为空
}

//85.递增有序单链表A=A∩B
void intersectList2(node* L1, node* L2) {
	int j = 0;
	node* u1 = L1, * u2 = L2;
	node* temp;
	while (u1->next != NULL && u2->next != NULL) {
		if (u1->next->data == u2->next->data) {
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->next->data < u2->next->data) {
			temp = u1->next;
			u1->next = temp->next;//可能为NULL
			delete temp;
		}
		else {
			u2 = u2->next;
		}
	}
}


//86.递增有序单链表A=A-B
void exceptList2(node* L1, node* L2) {
	int j = 0;
	node* u1 = L1, * u2 = L2;
	node* temp;
	while (u1->next != NULL && u2->next != NULL) {
		if (u1->next->data == u2->next->data) {
			temp = u1->next;
			u1->next = temp->next;//可能为NULL
			delete temp;
			u2 = u2->next;
		}
		else if (u1->next->data < u2->next->data) {
			u1 = u1->next;
		}
		else {
			u2 = u2->next;
		}
	}
}

//9. 头指针list指向单链表，查找倒数第k个位置上的结点，输出值
bool getElement2(node* list, int k) {
	int i = 0;
	int length = listLength(list);//求单链表长度
	if (k < 0 || k>length) {
		cout << "k非法！" << endl;
		return 0;
	}
	i = length - k + 1;//算出顺序坐标
	cout << "值为：" << getElement(list, i)->data;//输出值
	return 1;
}