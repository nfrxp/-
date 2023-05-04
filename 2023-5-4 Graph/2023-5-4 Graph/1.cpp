#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#define MaxVerNum 1000
typedef char elementType;//����
typedef int cellType;//����Ԫ��
typedef struct GraphAdjMatrix {
	elementType data[MaxVerNum];
	cellType AdjMatrix[MaxVerNum][MaxVerNum];
	int VerNum;//������
	int ArcNum;//����
}Graph;












//��֪����ͼG���ڽӾ���洢������㷨�Էֱ���ⶥ��vi����ȡ����ȺͶȡ�
//���㷨˼�롿��������������ͼ������vi�����a������b����c
//����vi��ֵ���ڶ�����в��ұ��j�����ݱ��ͳ�Ƶ�j����1�ĸ�������Ϊ���a��
//���ݱ��ͳ�Ƶ�j����1�ĸ�������Ϊ����b������Ⱥͳ�����ӣ��õ��ȡ�

void coutDegressGraph(Graph* G,char vi,int& a,int& b,int& c){
	char value = vi;
	int i = 0,j=-1;
	//�������飬����
	for (i = 0; i < G->VerNum; i++) {
		if (value == G->data[i]) {
			j = i;
			break;
		}
	}
	if (j == -1) {
		cout << "�����ڣ�" << endl;
		return;
	}
	//�����b,��j��
	for (i = 0; i < G->VerNum; i++) {
		if (G->AdjMatrix[j][i] == 1)
			b++;
	}
	//�����a����j��
	for (i = 0; i < G->VerNum; i++) {
		if (G->AdjMatrix[i][j] == 1)
			a++;
	}
	//���
	c = a + b;
}

//��firstAdj()�㷨������
//�󶥵� v �ĵ�һ���ڽӵ�
int firstadj(Graph* G, int v)
{
	int w;
	for (w = 1; w <= G->VerNum; w++){
		if ((G->AdjMatrix[v][w] == 1))
			return w; //���ص�һ���ڽӵ���
	}
	return 0; //������
}


//��nextAdj()�㷨������
//�󶥵� v ��λ���ڽӵ� w �����һ���ڽӵ�
int nextadj(Graph* G, int v, int w)
{
	int k;
	for (k = w + 1; k <= G->VerNum; k++){
		if ((G->AdjMatrix[v][k] >= 1))
			return k; 
	}
	return 0; //������
}

//��ͼ G ���ڽӾ��� A[n + 1, n + 1]��ʾ������㷨���ж� G �Ƿ�������ͼ��
//����ͼ���ж��������ڽӾ���������Խ��߶Գƣ��ұ���С�ڵ��� n(n - 1) / 2��
//��Ϊ��������ȫͼ���ڽӾ���Ҳ�ǶԳƵģ����������ﵽ��n(n - 1)��Ҫ�ų����������
bool judegUDG(Graph* G)
{
	int i, j;
	for (i = 1; i <= G->VerNum; i++)
		for (j = 1; j <= G->VerNum; j++)
		{
			if (G->AdjMatrix[i][j] != G->AdjMatrix[j][i])
				return false; //���Գƣ�����false
		}
	//���ж������Ƿ�С�ڵ��� n(n-1)/2
	if (G->ArcNum <= G->VerNum * (G->VerNum - 1) / 2)
		return true; //����С�ڵ��� n(n-1)/2
	else
		return false;
}



int main() {



	return 0;
}