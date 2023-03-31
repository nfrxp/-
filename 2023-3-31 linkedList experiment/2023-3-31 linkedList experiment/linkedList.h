#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
typedef int elementType;
typedef struct Node {
	elementType data;
	Node* next;
}node;


//��ʼ��
void initialList(node*& L) {
	L = new node;//��̬�������ͷ���
	L->next = NULL;//next��Ϊ��
}

//����Ĺ��죺β�巨
void creatListR(node* L) {
	node* u, * R;
	R = L;
	elementType temp;
	cout << "������Ԫ��ֵ��-99999Ϊ������־����";
	cin >> temp;
	while (temp != -99999) {
		u = new node;
		u->data = temp;//���½�㸳ֵ
		R->next = u;//������������
		R = u;//βָ��ָ���µ�β���
		cin >> temp;
	}
	R->next = NULL;//β���next��Ϊ��
}

//�������ȣ�������ͷ��㣩
int listLength(node* L) {
	int i = 0;
	while (L->next != NULL)
		i++;
	return i;
}

//�����ȡԪ��
node* getElement(node* L, int i) {
	node* p = L->next;
	int j = 1;
	while (j < i && p != NULL) {
		p = p->next;
		j++;
	}
	return p;//j==i��ΪĿ����
}

//��ֵ����Ԫ��
node* locateElement(node* L,elementType x) {
	node* u = L->next;
	while (u != NULL) {
		if (u->data == x)
			return u;
		u = u->next;
	}
	return NULL;
}

//��������
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


//1. ������
bool listInsert(node* L, int i, elementType x) {
	node* f = L;
	node* temp;
	int j = 0;
	while (j < i-1 && f != NULL) {
		f = f->next;
		j++;
	}
	if (f == NULL)
		return 0;//��ŷǷ�
	temp = new node;
	temp->data = x;
	temp->next = f->next;
	f->next = temp;
	return 1;//����ɹ�
}

//2. ɾ�����
bool listDelete(node* L, int i) {
	node* f = L;
	node* temp;
	int j = 0;
	while (j < i - 1 && f->next != NULL) {
		j++;
		f = f->next;
	}
	if (f->next == NULL)//��ŷǷ�
		return 0;
	temp = f->next;
	f->next = temp->next;
	delete temp;
	return 1;
}



//3. ���������������x
void listInsert2(node* L, elementType x) {
	node* u = L;
	node* temp;
	while (u->next->data < x && u->next!= NULL) {
		u = u->next;
	}
	temp = new node;
	temp->data = x;
	if (u->next == NULL) {
		temp->next = NULL;
		u->next = temp;
		return ;
	}
	temp->next = u->next;
	u->next = temp;
}

//4. ��ֵ�������ż�Ԫ��ֵ����ż��
void listDivide(node* L1, node* L2, node* L3) {
	int j = 1, k = 1;
	node* u1 = L1->next;
	while (u1 != NULL) {
		if (u1->data % 2 != 0) {//������L2
			listInsert(L2, j, u1->data);
			j++;
			u1 = u1->next;
		}
		else {//ż����L3
			listInsert(L3, k, u1->data);
			k++;
			u1 = u1->next;
		}
	}
}

//5. ����������������Ԫ�ط����µĵ�����L3��
void sameToList(node* L1, node* L2, node* L3) {
	int i = 1;//�µ�����L3�Ľ�����
	node* u1 = L1->next, * u2 = L2->next;
	while (u1 != NULL && u2 != NULL) {
		if (u1->data == u2->data) {
			listInsert(L3, i, u1->data);
			i++;
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->data < u2->data) {
			u1 = u1->next;
		}
		else
			u2 = u2->next;
	}
}

//6. ɾ�����������������ظ�Ԫ�أ�ʱ������
void sameDelete(node* L) {
	node* u = L->next;
	node* temp;
	while (u != NULL && u->next != NULL) {
		if (u->data == u->next->data) {
			temp = u->next;//������listDelete��Ҫ��ͷ��ʼ������ɾ����ʱ�����ܵ�
			u->next = temp->next;
			delete temp;
		}
		else {
			u = u->next;
		}
	}
}

//7. �������½�㣬�����������������ظ�Ԫ�أ�ֱ�Ӻϲ����ϲ���Ϊ�������򣩣���Ϊ����
void combineList(node*& L1, node*& L2) {
	node* u1 = L1, * u2 = L2, * temp;//temp����ɾ���ظ��Ľ��
	while (u1->next != NULL && u2->next != NULL) {//1.�Ȳ��Ҳ�ɾ���������ظ��Ľ��
		if (u1->next->data == u2->next->data) {//��������Ԫ��ֵ��ȣ�ɾ��һ��
			temp = u2->next;
			u2->next = temp->next;
			delete temp;
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->next->data < u2->next->data)
			u1 = u1->next;
		else
			u2 = u2->next;
	}
	while (u1->next != NULL)//2.ȷ��ָ��ָ��L1β��㣨����������
		u1 = u1->next;
	u1->next = L2->next;//3.��L1β���ӵ�L2���µ�һԪ�ؽ��
	delete L2;
	L2 = NULL;
}

//81.������������C=A��B

//82.������������C=A��B

//83.������������C=A-B

//84.������������A=A��B


//85.������������A=A��B


//86.������������A=A-B

//9. ͷָ��listָ���������ҵ�����k��λ���ϵĽ�㣬���ֵ
bool getElement2(node* list, int k) {

	cout << "ֵΪ��";
	return 1;
}