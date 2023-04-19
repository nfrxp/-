#define _CRT_SECURE_NO_WARNINGS 1

typedef char elementType;
#include<iostream>
using namespace std;


typedef struct blNode {
	elementType data;
	blNode* lChild, * rChild;//ָ��ָ�����Һ���
}biNode,*BiTree;

//���ļ������򴴽���������
//���㷨˼�롿���ļ��ж�ȡ���ݵ���ά�����У��ٴ������ж�ȡ���ݽ��ж������Ĵ���

//���ļ��ж����ݵ���ά������
bool ReadFileToArray(char fileName[], char strLine[100][3], int& nArrLen) {
	//filename����ļ�����strLen������ݣ�nArrLen���ؽ�����
	FILE* pFile;//�ļ�ָ��
	char str[1000];//���һ���ַ���
	//char strTemp[10];//�ж��Ƿ�ע����

	int i = 0;
	int tag = 0;
	pFile = fopen(fileName, "r");
	if (!pFile) {
		cout << "�����ļ�" << fileName << "��ʧ�ܣ�\n";
		return false;
	}
	//�򿪳ɹ�
	
	while (fgets(str, 1000, pFile) != NULL) {//�������С�ע����
		//ɾ���ַ�����߿ո�
		//strTemp(str);
		if (str[0] == '\n')//���У�����һ��
			continue;
		if (str[0] == '/' && str[1] == '/')//����ע����
			continue;
		if (str[0] == ' ') { //�ո�ͷ
			//�ж��Ƿ�Ϊ���ո��ע����
			for (i = 1; i < 1000; i++) {
				if (str[i] == '/' && str[i] == str[i + 1]) {
					tag = 0;//����ע����
					break;
				}
				else if (str[i] == 'B') {
					//Ĭ�ϱ�ʶ��ƥ�䣬����������
					tag = 0;
					break;
				}
			}
			if (tag == 0)
				continue;//�������ո��ע����
			//���Ǵ��ո��ע����,���жϱ�ʶ������ƥ�䣬�������һ���������ݣ���ʱstr�洢���Ǳ�ʶ����
			break;

		}
		else {
			if (strcmp(str, "BinaryTree\n") != 0)
			{
				printf("�򿪵��ļ���ʽ����\n");
				fclose(pFile);     //�ر��ļ�
				return false;
			}
			else {
				break;
			}
		}
	}
	fgets(str, 1000, pFile);
	do{
		if (str[0] == '\n')
			continue;
		if (str[0] == '/' && str[1] == '/')
			continue;
		//�ļ���ʽ��ȷ,��ʼȡ���ݵ�������
		//fscanf(pFile, "%c  %c  %c\n", &strLine[nArrLen][0], &strLine[nArrLen][1], &strLine[nArrLen][2]);
		strLine[nArrLen][0] = str[0];
		strLine[nArrLen][1] = str[2];
		strLine[nArrLen][2] = str[4];

		//����ȡ���ݣ����+1
		nArrLen++;
		
	} while (fgets(str, 1000, pFile) != NULL);


	fclose(pFile);//�ر��ļ�
	return true;
}

//�������ж�ȡ���ݰ�������ж������Ĵ���
bool CreateBiTreeFromFile(biNode*& pBT, char strLine[100][3], int nLen, int nRow) {
	//nLen��������nRow�����к�
	if (nRow >= nLen || nLen == 0) {
		return false;
		//�����ݻ������Ѿ�������ϣ�����
	}
	//����������
	pBT = new biNode;//���������
	pBT->data = strLine[nRow][0];
	pBT->lChild = NULL;
	pBT->rChild = NULL;
	int nRowNext = nRow;//�洢���εݹ���к�
	if (strLine[nRowNext][1] == '1') {
		//���������ڣ�����������
		nRow++;
		CreateBiTreeFromFile(pBT->lChild, strLine, nLen, nRow);
	}
	if (strLine[nRowNext][2] == '1') {
		//���������ڣ�����������
		nRow++;
		CreateBiTreeFromFile(pBT->rChild, strLine, nLen, nRow);
	}
	return true;
}