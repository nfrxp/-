#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;


#define INF 65535//���������
#define MaxVerNum 1000//������󶥵����
typedef char elementType;//���嶥����������
typedef int eInfoType;//����Ȩֵ��������
typedef enum { UDG, UDN, DG, DN }GraphKind;

//������
typedef struct eNode {
	int adjVer;//�ڽӶ�����Ϣ���˴�Ϊ�����ţ���1��ʼ
	eInfoType eInfo;//
	struct eNode* next;//ָ���������һ���
}EdgeNode;//������������

//�����
typedef struct vNode {
	elementType data;//���ͼ�ж�������ֵ
	EdgeNode* firestEdge;//ָ�򶥵��Ӧ�ĵ�һ����
}VerNode;//�����������

//����ͼ������ṹ
typedef struct GraphAdjLinkList {
	VerNode VerList[MaxVerNum];//�����
	int VerNum;//������
	int ArcNum;//����
	GraphKind gKind;//ͼ���ͣ�0����ͼ ��1��������2����ͼ��3������
}Graph;//ͼ��������



//��֪ͼG���ڽӱ�洢������㷨��������б߻�
void showEdge(Graph* G, EdgeNode* A[]) {
	int i = 0;
	EdgeNode* temp;
	for (i = 0; i < G->VerNum; i++) {
		//G->VerList[i].data
		//����������
		if (A[i + 1] != NULL) {
			temp = A[i + 1];
		}
		else
			continue;
		//�ڽӵ���ڣ��������
		while (temp) {
			cout << G->VerList[i].data << '-' << G->VerList[temp->adjVer].data << endl;
			temp = temp->next;
		}
	}
}



int main() {



	return 0;
}