
#define _CRT_SECURE_NO_WARNINGS 1

//�洢�ṹΪ ��βָ��ĵ�ѭ��������ͷ��㣩 �Ķ���

#define MaxLen 100
typedef int elementType;

struct Node {
	elementType data;
	struct Node* next;
}node,*linkedQueue;

//βָ��Q

//���ӳ�ʼ��
void initialLinkedQueue(linkedQueue &Q) {
	Q = new node;
	Q->next = Q;
}

//�жӿ�
bool queueEmpty(linkedQueue &Q) {
	return (Q->next == Q);
}

//ȡ��ͷԪ��
bool getFront(linkedQueue& Q, elementType &x) {
	if (Q->next == Q)
		return false;//�ӿ�
	else {
		x = Q->next->next->data;
		return true;
	}
}

//���
void enQueue(linkedQueue& Q, elementType x) {
	node* u;
	u = new node;//��̬�����½��
	u->data = x;//��ֵ
	u->next = Q->next;//βԪ��nextָ��ͷ���
	Q->next = u;//��ԭβԪ�ش�������
	Q = u;//βָ��ָ���µ�βԪ��
}

//����
bool outQueue(linkedQueue& Q, elementType& x) {
	if (Q->next == Q)
		return false;
	else {
		node* u = Q->next->next;//uָ����Ԫ��
		x = u->data;//ȡͷԪ��ֵ
		Q->next->next = u->next;//ͷ������ӵ��µ�ͷԪ�أ�������ɿն��е������Q=Q->next;
		//��ֻ��һ��Ԫ�أ���ͷ��㣩��Q->next->next��Q�ȼ���
		delete u;//ɾ��ͷԪ��
		return true;
	}
}

//��������
void destroyLinkedQueue(linkedQueue& Q) {
	node* p, * m;
	p = Q->next;//pָ��ͷ���
	while (p!=NULL) {//��㲻Ϊ�գ�����
		m = p;
		p = p->next;
		if (m == Q)
			Q = NULL;//������ٵ�β��㣬βָ����ΪNULL
		delete m;
	}
}