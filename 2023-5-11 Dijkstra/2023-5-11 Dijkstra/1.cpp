#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include"grpAdjMatrix.h"
using namespace std;


//基于Dijkstra算法实现：最短路径
//【算法思想】基于邻接矩阵实现
// 数组path[]存储点到指定起点的路径
// 数组dist[]存储相应的长度
// vlD为起始顶点,即vi
// 数组solved[]标记顶点是否已求解，1为已解，0为未解
// 在未解项点中搜索出dist值最小的点，作为下一个求解顶点v
// 更新搜索出的顶点v的未解邻接顶点的最短路径及长度
// 直至所有顶点均已求解
// 再调用PrintDijkstra实现输出
// 以从vj开始，求出其直接前驱vPre = path[vj]
// 再循环求出其前驱的前驱vPre = path[vPre]
// 直到vID即vi（没有前驱），即vPre=-1
//

//【算法描述】
void Dijkstra(Graph& G, int path[], int dist[], int vlD) {
	int solved[MaxVerNum];//标记顶点是否已经求出最短路径
	int i, j, v;// 定义最短距离变量，保存最短距离值
	cellType minDist;//	llcellType为自定义的邻接矩阵中元素的数据类型
	//初始化solved[]、path[]和dist[T
	for(i = 1; i <= G.VerNum; i++){
		solved[i] = 0;// I标记所有顶点均未求解
		//初始化顶点i到起点vID的距离
		// 若存在(vID, i)或<vID, i>，距离初始化为边的权值
		//若vID和i不相邻，距离初始化为无穷大
		dist[i] = G.AdjMatrix[vlD][i];
		if (dist[i] != INF)
			path[i] = vlD;  // 第i顶点的前驱为vlD
		else
			path[i] = -1;//当前顶点i无前驱
	}

	solved[vlD] = 1;// 标记顶点vlD已求解
	dist[vlD] = 0;//vlD到自身的距离为0
	path[vlD] = -1;	//vlD为起始顶点，无前驱
	//依次找出其它n - 1个顶点加入已求解集合S
	for (i = 1; i < G.VerNum; i++) {
		minDist = INF;
		//在未解顶点中寻找距vID距离最近的顶点，编号保存到v。
		for (j = 1; j <= G.VerNum; j++) {
			//j目前尚在V-S中，为未解顶点
			if (solved[j] == 0 && dist[j] < minDist) {
				v = j;
				minDist = dist[j];
			}
		}
	}
	if (minDist == INF)
		return;
	//输出本次选择的顶点距离
	cout << "选择顶点：" << G.Data[v] << "--距离：" << minDist << endl;
	solved[v] = 1;
	//顶点v已找到最短距离，标记为已解顶点
	//对选中的顶点V，更新未解顶点集V-S中
	//v的邻接顶点（直接后继）到顶点vID的距离
	for (j = 1; j <= G.VerNum; j++) {
		if (solved[j] == 0 && (minDist + G.AdjMatrix[v][j]) < dist[j]){
			//更新顶点j到顶点vID的最短距离
			dist[j] = minDist + G.AdjMatrix[v][j];
			path[j] = v; // 更新顶点j的直接前驱为顶点V
		}
	}
}


void PrintDijkstra(Graph& G, int path[], int dist[], int vi,int vj){
	// 数组sPath[]保存vID到目标顶点i的最短路径顶点
	int sPath[MaxVerNum];
	int vPre;//前驱结点编号
	int top = -1;// 保存最短路径上的顶点个数，以控制输出最短路径
	int j;
	top++;
	sPath[top] = vj;
		//sPath[]保存目标顶点编号i
	vPre = path[vj];//取得顶点i的直接前驱编号，赋给vPre
		//从第i个顶点，迭代求前驱顶点
		//直到vID，保存最短路径到sPathT
	while (vPre != -1) {
		top++;
		sPath[top] = vPre;
		vPre = path[vPre];
	}
	//如果最短路径存在
	//依次打印从vlD到i顶点的最短路径顶点序列
	if (dist[vj] != INF){
		//sPath[top]为指定的起始顶点vID
		for(j = top; j >= 0; j--){
			cout << G.Data[sPath[j]] << " ";
		}
	}
	top = -1;//初始化top，以处理下一个目标顶点
	cout << endl;
	
	}




//设计算法以求解距离v0最远的一个顶点
// 【算法思想】
//设图为不带权的无向连通图，且一条边长度计为 1，
// 因此求距离顶点 v 的最远的顶点即求距离顶点 v 的边数最多的顶点。
// 基于图的广度优先搜索遍历方式，其体现了图中由某个顶点开始，
// 以近向远扩展的方式遍历图中结点的过程。
// 从顶点 v 出发进行广度优先遍历类似于从顶点v 出发一层一层地向外扩展，
//到达顶点 j，……，最后到达的一个顶点k 即为距离v 最远的顶点。

//【算法描述】

int maxdist(AGraph* G, int v)
{
	ArcNode* p;
	int Qu[MAXV], front = 0, rear = 0; //队列及首、尾指针
	int visited[MAXV], i, j, k;
	for (i = 0; i < G->n; i++) //初始化访问标志数组
		visited[i] = 0;
	rear++; Qu[rear] = v; //项点 v 进队
	visited[v] = 1; //标记 v 已访问
	while (rear != front)
	{
		front = (front + 1) % MAXV;
		k = Qu[front]; //顶点出队
		p = G->adjlist[k].firstarc; //找第 1 个邻接点
		while (p!= NULL) //所有未访问过的邻接点进队
		{
			j = p->adjvex;
			if (visited[j] == 0) //若 j 未访问过
			{
				visited[j] = 1; //将顶点 j 进队
				rear = (rear + 1) % MAXV; Qu[rear] = j;
			}
			p = p->nextarc; //找下一个邻接点
		}
	}
	return k;
}

