#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#define ManLen 100
typedef int elementType;
//����������
typedef struct Node {
	elementType data;
	Node* next;
}node;

//β�巨ʵ�ִ���������

//�㷨ɾ��ֵΪx�����н��


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
//ʱ�临�Ӷ�O(n)


//�ϲ�������ʾ���ϵĵ��������Ҵ���ͷ���ĵ�ѭ������A=A��B
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
	while (L2 != B) {//B������δ����
		Insert(L1, L2);
		L2 = L2->next;
	}
}//ʱ�临�Ӷ�O(|A|+|B|)


 
 
 //C�ϸ�ݼ�,ͷ�巨
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
	while (L1 != NULL) {//A��δ����
		Insert2(C, L1);
		L1 = L1->next;
	}
	while (L2 != NULL) {//B��δ����
		Insert2(C, L2);
		L2 = L2->next;
	}
}
//ʱ�临�Ӷȣ�O(|A|+|B|)

////˫ѭ����������
//node* invert(node* head)
//{
//	node* p = head, * q, * s;
//	if (p != NULL)
//	{
//		q = p->next;
//		head->next = head->left; // ����ͷ���
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