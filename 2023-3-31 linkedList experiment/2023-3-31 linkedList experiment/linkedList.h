#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
typedef int elementType;
typedef struct Node {
	elementType data;
	Node* next;
}node,*linkedList;


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
	if (u->next == NULL) {//δ��λ����x�ĵ�Ԫ��
		temp->next = NULL;
		u->next = temp;
		return ;
	}
	temp->next = u->next;//��λ����x���Ԫ��
	u->next = temp;
}

//4. ��ֵ�������ż�Ԫ��ֵ����ż��
void listDivide(node* L1, node* L2, node* L3) {
	int j = 1, k = 1;//L2��L3��Ԫ�����
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
		if (u1->data == u2->data) {//Ԫ����ͬ������L3
			listInsert(L3, i, u1->data);
			i++;
			u1 = u1->next;
			u2 = u2->next;
		}
		else if (u1->data < u2->data) {//������һ��L1
			u1 = u1->next;
		}
		else//������һ��L2
			u2 = u2->next;
	}
}

//6. ɾ�����������������ظ�Ԫ�أ�ʱ������
void sameDelete(node* L) {
	node* u = L->next;
	node* temp;
	while (u != NULL && u->next != NULL) {
		if (u->data == u->next->data) {//�ظ�Ԫ�أ�ɾ��
			temp = u->next;//������listDelete��Ҫ��ͷ��ʼ������ɾ����ʱ�����ܵ�
			u->next = temp->next;
			delete temp;
		}
		else {//���ظ�Ԫ�أ�������һ��Ԫ��
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
void mergeList(node* L1,node* L2, node* L3) {
	int j = 1;
	node* u1 = L1->next, * u2 = L2->next, * R = L3;
	node* temp;
	while(u1!=NULL && u2!=NULL) {//�Ƚϣ�����С��ֵ����L3
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
//82.������������C=A��B
void intersectList(node* L1, node* L2, node* L3) {
	int j = 1;
	node* u1 = L1->next, * u2 = L2->next, * R = L3;
	node* temp;
	while (u1 != NULL && u2 != NULL) {//�Ƚϣ�������ȵ�ֵ����L3
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

//83.������������C=A-B
void exceptList(node* L1, node* L2, node* L3) {
	int j = 1;
	node* u1 = L1->next, * u2 = L2->next, * R = L3;
	node* temp;
	while (u1 != NULL && u2 != NULL) {//�Ƚϣ�B��A�к��е�ֵ������L3
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

//84.������������A=A��B
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
	u1->next = NULL;//β���next��Ϊ��
}

//85.������������A=A��B
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
			u1->next = temp->next;//����ΪNULL
			delete temp;
		}
		else {
			u2 = u2->next;
		}
	}
}


//86.������������A=A-B
void exceptList2(node* L1, node* L2) {
	int j = 0;
	node* u1 = L1, * u2 = L2;
	node* temp;
	while (u1->next != NULL && u2->next != NULL) {
		if (u1->next->data == u2->next->data) {
			temp = u1->next;
			u1->next = temp->next;//����ΪNULL
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

//9. ͷָ��listָ���������ҵ�����k��λ���ϵĽ�㣬���ֵ
bool getElement2(node* list, int k) {
	int i = 0;
	int length = listLength(list);//��������
	if (k < 0 || k>length) {
		cout << "k�Ƿ���" << endl;
		return 0;
	}
	i = length - k + 1;//���˳������
	cout << "ֵΪ��" << getElement(list, i)->data;//���ֵ
	return 1;
}