#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#define MaxVerNum 1000
typedef char elementType;//顶点
typedef int cellType;//矩阵元素
typedef struct GraphAdjMatrix {
	elementType data[MaxVerNum];
	cellType AdjMatrix[MaxVerNum][MaxVerNum];
	int VerNum;//顶点数
	int ArcNum;//边数
}Graph;












//已知有向图G用邻接矩阵存储，设计算法以分别求解顶点vi的入度、出度和度。
//【算法思想】参数：传入有向图，顶点vi，入度a，出度b，度c
//根据vi的值，在顶点表中查找编号j，根据编号统计第j列中1的个数，即为入度a；
//根据编号统计第j行中1的个数，即为出度b，将入度和出度相加，得到度。

void coutDegressGraph(Graph* G,char vi,int& a,int& b,int& c){
	char value = vi;
	int i = 0,j=-1;
	//遍历数组，求编号
	for (i = 0; i < G->VerNum; i++) {
		if (value == G->data[i]) {
			j = i;
			break;
		}
	}
	if (j == -1) {
		cout << "不存在！" << endl;
		return;
	}
	//求出度b,第j行
	for (i = 0; i < G->VerNum; i++) {
		if (G->AdjMatrix[j][i] == 1)
			b++;
	}
	//求入度a，第j列
	for (i = 0; i < G->VerNum; i++) {
		if (G->AdjMatrix[i][j] == 1)
			a++;
	}
	//求度
	c = a + b;
}

//【firstAdj()算法描述】
//求顶点 v 的第一个邻接点
int firstadj(Graph* G, int v)
{
	int w;
	for (w = 1; w <= G->VerNum; w++){
		if ((G->AdjMatrix[v][w] == 1))
			return w; //返回第一个邻接点编号
	}
	return 0; //不存在
}


//【nextAdj()算法描述】
//求顶点 v 的位于邻接点 w 后的下一个邻接点
int nextadj(Graph* G, int v, int w)
{
	int k;
	for (k = w + 1; k <= G->VerNum; k++){
		if ((G->AdjMatrix[v][k] >= 1))
			return k; 
	}
	return 0; //不存在
}

//设图 G 用邻接矩阵 A[n + 1, n + 1]表示，设计算法以判断 G 是否是无向图。
//无向图的判定条件：邻接矩阵关于主对角线对称，且边数小于等于 n(n - 1) / 2。
//因为，有向完全图的邻接矩阵也是对称的，但边数将达到：n(n - 1)，要排除这种情况。
bool judegUDG(Graph* G)
{
	int i, j;
	for (i = 1; i <= G->VerNum; i++)
		for (j = 1; j <= G->VerNum; j++)
		{
			if (G->AdjMatrix[i][j] != G->AdjMatrix[j][i])
				return false; //不对称，返回false
		}
	//再判定边数是否小于等于 n(n-1)/2
	if (G->ArcNum <= G->VerNum * (G->VerNum - 1) / 2)
		return true; //边数小于等于 n(n-1)/2
	else
		return false;
}



int main() {



	return 0;
}