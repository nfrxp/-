#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include"grpAdjMatrix.h"
using namespace std;


//����Dijkstra�㷨ʵ�֣����·��
//���㷨˼�롿�����ڽӾ���ʵ��
// ����path[]�洢�㵽ָ������·��
// ����dist[]�洢��Ӧ�ĳ���
// vlDΪ��ʼ����,��vi
// ����solved[]��Ƕ����Ƿ�����⣬1Ϊ�ѽ⣬0Ϊδ��
// ��δ�������������distֵ��С�ĵ㣬��Ϊ��һ����ⶥ��v
// �����������Ķ���v��δ���ڽӶ�������·��������
// ֱ�����ж���������
// �ٵ���PrintDijkstraʵ�����
// �Դ�vj��ʼ�������ֱ��ǰ��vPre = path[vj]
// ��ѭ�������ǰ����ǰ��vPre = path[vPre]
// ֱ��vID��vi��û��ǰ��������vPre=-1
//

//���㷨������
void Dijkstra(Graph& G, int path[], int dist[], int vlD) {
	int solved[MaxVerNum];//��Ƕ����Ƿ��Ѿ�������·��
	int i, j, v;// ������̾��������������̾���ֵ
	cellType minDist;//	llcellTypeΪ�Զ�����ڽӾ�����Ԫ�ص���������
	//��ʼ��solved[]��path[]��dist[T
	for(i = 1; i <= G.VerNum; i++){
		solved[i] = 0;// I������ж����δ���
		//��ʼ������i�����vID�ľ���
		// ������(vID, i)��<vID, i>�������ʼ��Ϊ�ߵ�Ȩֵ
		//��vID��i�����ڣ������ʼ��Ϊ�����
		dist[i] = G.AdjMatrix[vlD][i];
		if (dist[i] != INF)
			path[i] = vlD;  // ��i�����ǰ��ΪvlD
		else
			path[i] = -1;//��ǰ����i��ǰ��
	}

	solved[vlD] = 1;// ��Ƕ���vlD�����
	dist[vlD] = 0;//vlD������ľ���Ϊ0
	path[vlD] = -1;	//vlDΪ��ʼ���㣬��ǰ��
	//�����ҳ�����n - 1�������������⼯��S
	for (i = 1; i < G.VerNum; i++) {
		minDist = INF;
		//��δ�ⶥ����Ѱ�Ҿ�vID��������Ķ��㣬��ű��浽v��
		for (j = 1; j <= G.VerNum; j++) {
			//jĿǰ����V-S�У�Ϊδ�ⶥ��
			if (solved[j] == 0 && dist[j] < minDist) {
				v = j;
				minDist = dist[j];
			}
		}
	}
	if (minDist == INF)
		return;
	//�������ѡ��Ķ������
	cout << "ѡ�񶥵㣺" << G.Data[v] << "--���룺" << minDist << endl;
	solved[v] = 1;
	//����v���ҵ���̾��룬���Ϊ�ѽⶥ��
	//��ѡ�еĶ���V������δ�ⶥ�㼯V-S��
	//v���ڽӶ��㣨ֱ�Ӻ�̣�������vID�ľ���
	for (j = 1; j <= G.VerNum; j++) {
		if (solved[j] == 0 && (minDist + G.AdjMatrix[v][j]) < dist[j]){
			//���¶���j������vID����̾���
			dist[j] = minDist + G.AdjMatrix[v][j];
			path[j] = v; // ���¶���j��ֱ��ǰ��Ϊ����V
		}
	}
}


void PrintDijkstra(Graph& G, int path[], int dist[], int vi,int vj){
	// ����sPath[]����vID��Ŀ�궥��i�����·������
	int sPath[MaxVerNum];
	int vPre;//ǰ�������
	int top = -1;// �������·���ϵĶ���������Կ���������·��
	int j;
	top++;
	sPath[top] = vj;
		//sPath[]����Ŀ�궥����i
	vPre = path[vj];//ȡ�ö���i��ֱ��ǰ����ţ�����vPre
		//�ӵ�i�����㣬������ǰ������
		//ֱ��vID���������·����sPathT
	while (vPre != -1) {
		top++;
		sPath[top] = vPre;
		vPre = path[vPre];
	}
	//������·������
	//���δ�ӡ��vlD��i��������·����������
	if (dist[vj] != INF){
		//sPath[top]Ϊָ������ʼ����vID
		for(j = top; j >= 0; j--){
			cout << G.Data[sPath[j]] << " ";
		}
	}
	top = -1;//��ʼ��top���Դ�����һ��Ŀ�궥��
	cout << endl;
	
	}




//����㷨��������v0��Զ��һ������
// ���㷨˼�롿
//��ͼΪ����Ȩ��������ͨͼ����һ���߳��ȼ�Ϊ 1��
// �������붥�� v ����Զ�Ķ��㼴����붥�� v �ı������Ķ��㡣
// ����ͼ�Ĺ����������������ʽ����������ͼ����ĳ�����㿪ʼ��
// �Խ���Զ��չ�ķ�ʽ����ͼ�н��Ĺ��̡�
// �Ӷ��� v �������й�����ȱ��������ڴӶ���v ����һ��һ���������չ��
//���ﶥ�� j����������󵽴��һ������k ��Ϊ����v ��Զ�Ķ��㡣

//���㷨������

int maxdist(AGraph* G, int v)
{
	ArcNode* p;
	int Qu[MAXV], front = 0, rear = 0; //���м��ס�βָ��
	int visited[MAXV], i, j, k;
	for (i = 0; i < G->n; i++) //��ʼ�����ʱ�־����
		visited[i] = 0;
	rear++; Qu[rear] = v; //��� v ����
	visited[v] = 1; //��� v �ѷ���
	while (rear != front)
	{
		front = (front + 1) % MAXV;
		k = Qu[front]; //�������
		p = G->adjlist[k].firstarc; //�ҵ� 1 ���ڽӵ�
		while (p!= NULL) //����δ���ʹ����ڽӵ����
		{
			j = p->adjvex;
			if (visited[j] == 0) //�� j δ���ʹ�
			{
				visited[j] = 1; //������ j ����
				rear = (rear + 1) % MAXV; Qu[rear] = j;
			}
			p = p->nextarc; //����һ���ڽӵ�
		}
	}
	return k;
}

