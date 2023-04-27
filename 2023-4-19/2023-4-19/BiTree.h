#define _CRT_SECURE_NO_WARNINGS 1

typedef char elementType;
#include<iostream>
using namespace std;
extern int n1;
extern int n2;

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

		if (str[0] == '\n')//��������
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
		else {//����Ϊ��ʶ����
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

//����������������������������������������������������������������

//�ݹ��������
void preOrder(biNode* pBT) {
	if (pBT) {
		cout << pBT->data << ' ';
		preOrder(pBT->lChild);
		preOrder(pBT->rChild);
	}
}

//�ݹ��������
void inOrder(biNode* pBT) {
	if (pBT) {
		inOrder(pBT->lChild);
		cout << pBT->data << ' ';
		inOrder(pBT->rChild);
	}
}

//�ݹ�������
void postOrder(biNode* pBT) {
	if (pBT) {
		postOrder(pBT->lChild);
		postOrder(pBT->rChild);
		cout << pBT->data << ' ';
	}
}

//�ݹ�������������㼰����
//���㷨˼�롿�������������ʹ��ȫ�ֱ���������ÿ�ɹ�����һ����㣬������һ�����������Һ��ӽ��󣬼�����һ
void inOrderLevel(biNode* pBT) {
	if (pBT) {
		n1++;
		inOrderLevel(pBT->lChild);
		cout << pBT->data << '-' << n1 << ' ';
		inOrderLevel(pBT->rChild);
		n1--;
	}
}

//��Ҷ�ӽ������1�ȵĽ����
//���㷨˼�롿ȫ�ֱ���n1�洢Ҷ�ӽ������ȫ�ֱ���n2�洢1�Ƚ����
//�ݹ�������������������ж����Һ����Ƿ񶼲����ڣ����ǣ���n1++�������ж��Ƿ�Ϊ1�Ƚ�㣬��������жϣ����ǣ���n2++��
// �жϽ���������������ӣ���������Һ���
void preOrderCount01(biNode* pBT) {
	if (pBT) {
		if ((!pBT->lChild) && (!pBT->rChild))//Ҷ�ӽ��
			n1++;
		else if (((pBT->lChild) && (!pBT->rChild)) || ((!pBT->lChild) && (pBT->rChild)))//ע�⣺����ж�1��
			n2++;
		preOrderCount01(pBT->lChild);
		preOrderCount01(pBT->rChild);
	}
}

//3. ����x���󸸽ڵ㡢�ֵܽ�㡢�ӽ���ֵ
void getxRelative(biNode* pBT, char x) {

}


//4. ��x�Ĳ��
void preOrderxLevel(biNode* pBT,char x,int& tag) {
	if (pBT) {
		n1++;
		if (pBT->data == x) {
			cout << x << "�Ĳ��Ϊ��" << n1 << endl << endl;
			tag = 1;
			return;
		}
		preOrderxLevel(pBT->lChild,x,tag);
		preOrderxLevel(pBT->rChild,x,tag);
		n1--;
	}
}


//5. ����˳��ʽ�洢�������еĶ�����ת��Ϊ����������ʽ
// ˳��洢�������У�������������Σ����ϵ��£������ң����δ洢��������
//���㷨˼�롿�ȴ��ļ����뵽�����У���ת��Ϊ��ȫ���������ٴ�����������
//�����������ڣ����ϣ��ұ�֤��������ĸ߶�һ�£�����


