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

//1.�ݹ�������������㼰����
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

//2.��Ҷ�ӽ������1�ȵĽ����
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
//���㷨˼�롿������������������βΣ�����㣬����ı�����һ��bool���͵�����������־�Ƿ���ҵ���
// ������T->lChild != NULL && T->lChild->data == x��˵�����ֻ�����ֵܣ�һ�������
// ����ϸ�ж��Ƿ���˫�׽�㣬�����Һ��ӣ�����f��־Ϊtrue��
// ֮��T->rChild != NULL && T->rChild->data == xʱ˵�����ֻ�����ֵܣ�һ�����������ϸ�ж��Ƿ���˫�׽�㣬�����Һ��ӣ�
// ����f��־Ϊtrue��������T->data == x��
//��˵���Ǹ��ڵ㣬û��˫�׽����ֵܽڵ㣬ֻ���ж��Ƿ��к��ӽڵ㼴�ɡ�֮���ٷֱ�ݹ����������������
void getx(biNode* T, char x, bool& f) {
	if (T) {
		if (T->lChild != NULL && T->lChild->data == x) {
			cout << "x��˫�׽���ֵΪ��" << T->data << endl;
			if (T->rChild != NULL) {
				cout << "x���ֵܽ��Ϊ���ֵܣ���ֵΪ��" << T->rChild->data << endl;
			}
			if (T->lChild->lChild != NULL) {
				cout << "x�����ӽ���ֵΪ��" << T->lChild->lChild->data << endl;
			}
			else {
				cout << "û������" << endl;
			}
			if (T->lChild->rChild != NULL) {
				cout << "x���Һ��ӽ���ֵΪ��" << T->lChild->rChild->data << endl;
			}
			else {
				cout << "û���Һ���" << endl;
			}
			f = true;
			return;
		}
		else if (T->rChild != NULL && T->rChild->data == x) {
			cout << "x��˫�׽���ֵΪ��" << T->data << endl;
			if (T->lChild != NULL) {
				cout << "x���ֵܽ��Ϊ���ֵܣ���ֵΪ��" << T->lChild->data << endl;
			}
			if (T->rChild->lChild != NULL) {
				cout << "x�����ӽ���ֵΪ��" << T->rChild->lChild->data << endl;
			}
			else {
				cout << "û������" << endl;
			}
			if (T->rChild->rChild != NULL) {
				cout << "x���Һ��ӽ���ֵΪ��" << T->rChild->rChild->data << endl;
			}
			else {
				cout << "û���Һ���" << endl;
			}
			f = true;
			return;
		}
		else if (T->data == x) {
			cout << "xû��˫�׽��" << endl;
			cout << "xû���ֵܽ��" << endl;
			if (T->lChild != NULL) {
				cout << "x�����ӽ���ֵΪ��" << T->lChild->data << endl;
			}
			else {
				cout << "û������" << endl;
			}
			if (T->rChild != NULL) {
				cout << "x���Һ��ӽ���ֵΪ��" << T->rChild->data << endl;
			}
			else {
				cout << "û���Һ���" << endl;
			}
			f = true;
			return;
		}
		getx(T->lChild, x, f);
		getx(T->rChild, x, f);
	}
}

//4. ��x�Ĳ��
//���㷨˼�롿������������μ�������Ϊx���������Ρ�
void preOrderxLevel(biNode* pBT,char x,int& tag) {
	if (pBT&&tag!=1) {
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
void ArrayToBiTree(biNode*& T, char A[], int i, int num) {
	//i Ϊ��ǰ����ţ��� 1 ��ʼ
	//num Ϊ�����Ч�����
	if (i <= num && A[i] != '0') {
		T = new biNode;
		T->data = A[i];
		T->lChild = NULL;
		T->rChild = NULL;
		ArrayToBiTree(T->lChild, A, 2 * i, num);
		ArrayToBiTree(T->rChild, A, 2 * i + 1, num);
	}
}



//6. �����������ÿ��Ҷ�ӽ�㵽������·��
//���㷨˼�롿��������������������飬��ΪҶ�ӽ�㣬�������������Ԫ�أ���Ϊ·����ֱ������������Ҷ�ӽ��
void pathTree(biNode* pBT, elementType path[], int top) {
	if (pBT) {
		//���������ڣ���ΪҶ�ӽ�㣬������������д洢��·��
		if (pBT->lChild == NULL && pBT->rChild == NULL) {
			cout << pBT->data << ':';
			for (int i = top-1; i >= 0; i--) {
				cout << path[i] << ' ';
			}
			cout << endl;
			
		}
		else {
			//���������������ֵ�������飬�ݹ��������
			path[top++] = pBT->data;
			pathTree(pBT->lChild, path, top);
			pathTree(pBT->rChild, path, top);
		}
	}
}




//7. ��α���������
//��α���ʹ��һ�����У��Ƚ��ȳ��������������ӣ����ӣ�Ȼ����ʳ��ӽ�㣬���������ӣ��ͽ�������ӣ�
//�������Һ��ӣ��ͽ��Һ�����ӣ�Ȼ����ʶ�ͷ��㣬���ѭ����ȥ��ֱ������Ϊ�գ��ͽ����ˡ�

void LevelOrder(biNode* T)   // �������Ĳ������
{
	biNode* Q[100];   // ����ģ�����
	int front = 0;
	int rear = 0;
	biNode* p;

	Q[++rear] = T;  // ��������
	while (front != rear) {   // �����в�Ϊ��
		// ��ͷ�����ӣ������ʳ��ӽ��
		p = Q[++front];
		cout << p->data << " ";
		// ���ӽ��ķǿ����Һ����������
		if (p->lChild != NULL) {
			Q[++rear] = p->lChild;
		}
		if (p->rChild != NULL) {
			Q[++rear] = p->rChild;
		}
	}
}


//������������������������������������������������������������������������
//��չ

//21. ���ƶ�����
//���㷨˼�롿�������������ÿ����һ����㣬����һ����㣬ֱ�����ʽ���
void copyCreatTree(biNode* t1, biNode*& t2) {
	if (t1) {
		t2 = new biNode;
		t2->data = t1->data;
		t2->lChild = NULL;
		t2->rChild = NULL;
		copyCreatTree(t1->lChild, t2->lChild);
		copyCreatTree(t1->rChild, t2->rChild);
	}
}

void copyTree(biNode* T1, biNode* T2) {
	if (T1) {
		T2 = new biNode;
		T2->data = T1->data;
		T2->lChild = NULL;
		T2->rChild = NULL;
		copyCreatTree(T1->lChild, T2->lChild);
		copyCreatTree(T1->rChild, T2->rChild);
	}
}

//22.������������
//���ĳ�����������Ϊ�գ����أ����򽻻��ý�����Һ��ӣ�Ȼ��ݹ齻������������
void changeLR(biNode* T)
{
	biNode* temp;
	if (T->lChild == NULL && T->rChild == NULL)
		return;
	else
	{
		temp = T->lChild;
		T->lChild = T->rChild;
		T->rChild = temp;
	}//�������Һ���
	changeLR(T->lChild);  //�ݹ齻��������
	changeLR(T->rChild);  //�ݹ齻��������
}

//23.
//�����ǵݹ���㷨���ڵݹ��㷨���ľ��ǲ��ң����ڵݹ�Ĺ����в��ϲ���Ҫ���ҵĽ���ҵ��ý��ʱ��
//�ͽ��ý�����Ϸ��أ���һ�����Ϊ��Ҫ���ҽ�����С��������ʱ�ͽ��ýڵ����Ϸ��ء�


//���Ҷ��������Ĺ������ڵ�
//�ݹ鷽�����
biNode* LowestCommonAncestorInBinaryTree(biNode* Root, char p, char q) { //��ʵ����ӦΪ(BiTree *Root,BiTree p,BiTree q��
	//����ֻ��Ϊ�˲���
	if (!Root)
		return NULL;
	//if(Root==p||Root==q) //��ʵ����
	//	return Root;

	if (Root->data == p || Root->data == q) //����������p,����q������������
		return Root;

	biNode* left = LowestCommonAncestorInBinaryTree(Root->lChild, p, q); //�������󷽽��в���
	biNode* right = LowestCommonAncestorInBinaryTree(Root->rChild, p, q); //������������в���

	if (left != NULL && right != NULL) //�����������ͼ�е�B��� ��B�������ҵ��� D����left���� ��B�������ҵ���M���� right����
		return Root;			//��B������Ϸ���
	if (left == NULL && right == NULL)	//��һ��B���غ��� ����ȥA���Ҳ���в��ң���ͼ����֪��A���Ҳ෵��ΪNULl  
		return NULL;
	return left == NULL ? right : left; //��ʱ�ݹ����������һ�������Ϊ A��left��Ϊ�� ��������left ���ǽ��								
}

