
#define _CRT_SECURE_NO_WARNINGS 1

//存储结构为 带尾指针的单循环链表（带头结点） 的队列

#define MaxLen 100
typedef int elementType;

struct Node {
	elementType data;
	struct Node* next;
}node,*linkedQueue;

//尾指针Q

//链队初始化
void initialLinkedQueue(linkedQueue &Q) {
	Q = new node;
	Q->next = Q;
}

//判队空
bool queueEmpty(linkedQueue &Q) {
	return (Q->next == Q);
}

//取队头元素
bool getFront(linkedQueue& Q, elementType &x) {
	if (Q->next == Q)
		return false;//队空
	else {
		x = Q->next->next->data;
		return true;
	}
}

//入队
void enQueue(linkedQueue& Q, elementType x) {
	node* u;
	u = new node;//动态申请新结点
	u->data = x;//赋值
	u->next = Q->next;//尾元素next指向头结点
	Q->next = u;//与原尾元素创建链接
	Q = u;//尾指针指向新的尾元素
}

//出队
bool outQueue(linkedQueue& Q, elementType& x) {
	if (Q->next == Q)
		return false;
	else {
		node* u = Q->next->next;//u指向首元素
		x = u->data;//取头元素值
		Q->next->next = u->next;//头结点链接到新的头元素，包含变成空队列的情况：Q=Q->next;
		//若只有一个元素（有头结点），Q->next->next和Q等价吗
		delete u;//删除头元素
		return true;
	}
}

//销毁链队
void destroyLinkedQueue(linkedQueue& Q) {
	node* p, * m;
	p = Q->next;//p指向头结点
	while (p!=NULL) {//结点不为空，销毁
		m = p;
		p = p->next;
		if (m == Q)
			Q = NULL;//如果销毁到尾结点，尾指针置为NULL
		delete m;
	}
}