#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


#define INF 65535//定义无穷大
#define MaxVerNum 1000//定义最大顶点个数
typedef char elementType;//定义顶点数据类型
typedef int eInfoType;//定义权值数据类型
typedef enum { UDG, UDN, DG, DN }GraphKind;

//边链表
typedef struct eNode {
	int adjVer;//邻接顶点信息，此处为顶点编号，从1开始
	eInfoType eInfo;//
	struct eNode* next;//指向边链表下一结点
}EdgeNode;//边链表结点类型

//顶点表
typedef struct vNode {
	elementType data;//存放图中顶点数据值
	EdgeNode* firestEdge;//指向顶点对应的第一顶点
}VerNode;//顶点表结点类型

//定义图的整体结构
typedef struct GraphAdjLinkList {
	VerNode VerList[MaxVerNum];//顶点表
	int VerNum;//顶点数
	int ArcNum;//边数
	GraphKind gKind;//图类型：0无向图 ；1无向网；2有向图；3有向网
}Graph;//图的类型名



//已知图G用邻接表存储，设计算法输出其所有边或弧
void showEdge(Graph* G, EdgeNode* A[]) {
	int i = 0;
	EdgeNode* temp;
	for (i = 0; i < G->VerNum; i++) {
		//G->VerList[i].data
		//遍历边链表
		if (A[i + 1] != NULL) {
			temp = A[i + 1];
		}
		else
			continue;
		//邻接点存在，则输出边
		while (temp) {
			cout << G->VerList[i].data << '-' << G->VerList[temp->adjVer].data << endl;
			temp = temp->next;
		}
	}
}



int main() {



	return 0;
}