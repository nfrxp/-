#define _CRT_SECURE_NO_WARNINGS 1

//˳����ʵ���Լ���������

#include <iostream>
using namespace std;
#include<stdio.h>
#define MaxLen 100//�������������
typedef int elementType;//ʹ��typedefҪ�����ĩβ��ӷֺ�

struct list {
	elementType data[MaxLen];
	int listLen;
};

typedef struct list seqList;//����Ϊ��������seqList

//����
//typedef struct {
//	elementType data[MaxLen];
//	int listLen;
//}seqList;


//1.��ʼ����
//���ܣ���ʼ��˳���
//������seqList����ָ�룬ָ��˳���
//����ֵ����
void initialList(seqList* L) {
	L->listLen = 0;
}

//2.�����
//���ܣ���˳���ĳ���
//������seqList���ͱ���
//����ֵ�����ͣ�����
int getLen(seqList L) {
	return L.listLen;
}

//3.��ȡԪ��
//���ܣ�������ţ���˳�����ȡ��Ԫ��ֵ
//������seqList����ָ�룬ָ��˳�����ţ����ֵ��elementTypeָ�����
//����ֵ��bool��ȡԪ��ֵʧ��0��ȡԪ��ֵ�ɹ�1
bool getelementType(seqList* L, int i, elementType* x) {
	if (i >= 1 && i <= L->listLen) {
		*x = L->data[i - 1];
		return 1;
	}
	return 0;
}

//4.��λԪ��
//���ܣ�����Ԫ��ֵ����ȡ����˳����е����
//������seqList���ͱ�����elementType x ����Ԫ��
//����ֵ��Ԫ����ţ�����0�����ڱ���
int listLocate(seqList L, elementType x) {
	int i = 0;
	for (i = 0; i < L.listLen; i++) {
		if (L.data[i] == x)
			return i + 1;
	}
	return 0;
}

//5.����Ԫ��
//���ܣ��ڸ���λ�ò������Ԫ��
//������seqListָ����������i��elementType x����Ԫ��ֵ
//����ֵ�����ͣ�����0��λ�÷Ƿ�1������ɹ�2
int listInsert(seqList* L, int i, elementType x) {
	int j = L->listLen + 1;//���
	if (L->listLen == MaxLen)
		return 0;
	else if (i<1 || i>L->listLen + 1)
		return 1;
	else
		while (j > i) {
			L->data[j-1] = L->data[j - 2];
			j--;
		}
	L->data[i - 1] = x;
	L->listLen++;
	return 2;
}

//6.ɾ��Ԫ��
//���ܣ�ɾ��˳����и�����ŵ�Ԫ��
//������seqListָ�룬iԪ�����
//����ֵ�����ͣ��ձ�1����ŷǷ�1��ɾ���ɹ�2
int listDelete(seqList* L, int i) {
	int j = i-1;
	if (L->listLen <= 0)
		return 0;
	else if (i<1 || i>L->listLen)
		return 1;
	while (j < L->listLen - 1) {
		L->data[j] = L->data[j+1];
		j++;
	}
	L->listLen--;
	return 2;
}

//7.��ӡ˳����е�����Ԫ��
void listPrint(seqList L) {
	int i = 0;
	for (i = 0; i < L.listLen; i++) {
		cout<< L.data[i]<<' ';
	}
	cout << endl;
}

//8.������������Ԫ�أ����������������
void listInput(seqList* L) {
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����������Ԫ�ء�" << endl;
		return;
	}
	elementType x;
	cout << "������Ԫ��ֵ��������-999�˳�����" << endl;
	cout << "x=";
	cin >> x;
	while (x != -999) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}
}

//9.������������Ԫ�ء���ָ��Ԫ�ظ���
void listInputC(seqList* L) {
	if (L->listLen < 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����������Ԫ�ء�" << endl;
		return;
	}
	int i = 0, n;
	cout << "������Ԫ�ظ�����n=";
	cin >> n;
	cout << "������Ԫ��ֵ��" << endl;
	for (; i < n; i++) {
		cin >> L->data[i];
		L->listLen++;
	}
}

//10.����������Ԫ��ֵ
void listInputArr(seqList* L) {
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����������Ԫ�ء�" << endl;
		return;
	}
	int i, n;
	elementType arr[6] = { 2,4,5,77,99,100 };
	n = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < n; i++) {
		L->data[i] = arr[i];
		L->listLen++;
	}
}

//11. ���ļ���������Ԫ��
int listInputFile(char fileName[], seqList* pL)
{
	FILE* pFile;     //����˳�����ļ�ָ��
	char str[1000];  //��Ŷ���һ���ı����ַ���
	char strTemp[10]; //�ж��Ƿ�ע����
	char* ss;

	pFile = fopen(fileName, "r");
	if (!pFile)
	{
		cout << "�ļ�" << fileName << "��ʧ�ܡ�" << endl;//printf("�ļ�CBiTree.CBT��ʧ�ܣ�\n");
		return false;
	}

	ss = fgets(str, 1000, pFile);
	strncpy(strTemp, str, 2);
	while ((ss != NULL) && (strstr(strTemp, "//") != NULL))  //����ע����
	{
		ss = fgets(str, 1000, pFile);
		strncpy(strTemp, str, 2);
		//cout<<strTemp<<endl;
	}
	//ѭ��������str��Ӧ���Ѿ����ļ���ʶ���ж��ļ���ʽ
//cout<<str<<endl;
	if (strstr(str, "seqList") == NULL)
	{
		printf("�򿪵��ļ���ʽ����\n");
		fclose(pFile); //�ر��ļ�
		return false;
	}

	//���¿�ʼ��ȡԪ�����ݣ�һ��һ��Ԫ������
	while (fgets(str, 1000, pFile) != NULL)
	{
		pL->data[pL->listLen] = atoi(str);//(elementType)str;
		pL->listLen++;
	}
	fclose(pFile); //�ر��ļ�
	return true;

}



//��������봴�����ұ�ʼ------------------------------------------------------------------
//���������˳���
void rndCList(seqList& L)
{
	int i;
	int n, m;

	L.listLen = 0;
	cout << "������Ҫ�����������������n=";
	cin >> n;

	if (n > MaxLen - 1)
	{
		cout << "��Ҫ���������������������˲��ұ���" << MaxLen - 1 << "������˳���ʧ�ܡ�" << endl;
		return;

	}
	cout << "����������������С����������100��������������100��m=";
	cin >> m;

	srand((unsigned)time(NULL));	//�������������
	//srand((unsigned)GetTickCount());	//�������������
	for (i = 0; i < n; i++)                //�����д�������A[]
		L.data[i] = rand() % m;
	L.listLen = n;                      //����Ϊn
	cout << endl;
}
//��������봴�����ұ����------------------------------------------------------------------
