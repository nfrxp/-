#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#define ManLen 100
typedef int elementType;
//创建单链表
typedef struct Node {
	elementType data;
	Node* next;
}node;

//尾插法实现创建单链表

//算法删除值为x的所有结点


void listDeleteX(node* L,elementType x) {
	node* p = L;
	while (p ->next!= NULL) {
		if (p->next->data == x) {
			p->next = p->next->next;
			delete p->next;
		}
		else
			p = p->next;
	}
}
//时间复杂度O(n)


//合并两个表示集合的递增有序，且带有头结点的单循环链表，A=A∪B
void Insert(node* L, node* L2) {
	node* s;
	s = new node;
	s->data = L2->data;
	s->next = L->next;
	L->next = s;
}
void uniScLinkedList(node* A, node* B) {
	if ( B == NULL)
		return;
	node* L1 = A; node* L2 = B->next;
	while (L1->next != A && L2 != B) {
		if (L1->next->data == L2->data) {
			L1 = L1->next;L2 = L2->next;
		}
		else if (L1->next->data > L2->data) {
			Insert(L1, L2);
			L2 = L2->next;
		}
		else {
			L1 = L1->next;
		}
	}
	while (L2 != B) {//B链表仍未结束
		Insert(L1, L2);
		L2 = L2->next;
	}
}//时间复杂度O(|A|+|B|)


 
 
 //C严格递减,头插法
void Insert2(node* C, node* LL) {
	node* s;
	s = new node;
	s->data = LL->data;
	s->next = C->next;
	C->next = s;
}
void uniLinkedLIst(node* A, node* B, node* C) {
	node* L1 = A->next; node* L2 = B->next; node* L3 = C;
	while (L1 != NULL && L2 != NULL) {
		if (L1->data <= L2->data) {
			Insert2(C, L1);
			if (L1->data == L2->data)
				L2 = L2->next;
			L1 = L1->next;
			L3 = L3->next;
		}
		else {
			Insert2(C, L2);
			L2 = L2->next;
			L3 = L3->next;
		}
	}
	while (L1 != NULL) {//A仍未结束
		Insert2(C, L1);
		L1 = L1->next;
	}
	while (L2 != NULL) {//B仍未结束
		Insert2(C, L2);
		L2 = L2->next;
	}
}
//时间复杂度：O(|A|+|B|)

////双循环链表逆置
//node* invert(node* head)
//{
//	node* p = head, * q, * s;
//	if (p != NULL)
//	{
//		q = p->next;
//		head->next = head->left; // 逆置头结点
//		head->left = p->next;
//		while (q != head)
//		{
//			s = q->next;
//			q->left = q->next;
//			q->next = p;
//			p = q;
//			q = s;
//		}
//	}
//	return head;
//}

int main() {


	return 0;
}