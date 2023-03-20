#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

#define MaxLen 100
typedef int elementType;

typedef struct List {
	elementType data[MaxLen];
	int listLen;
}seqList;//˳���

void initialList(seqList* L) {
	L->listLen = 0;
}

int listLength(seqList L) {
	return L.listLen;
}

//��ֵ��Ԫ��
int listLocate(seqList* L, elementType x) {
	int i = 0;
	for (i = 0; i < L->listLen - 1; i++) {//�����˿ձ�����
		if (L->data[i] == x)
			return i + 1;
	}
	return 0;//ֵ������
}

//�������Ԫ��
int getElement(seqList* L, int i, elementType& x) {
	if (i<1 || i>L->listLen)//��Ų��Ϸ�
		return 0;
	x = L->data[i - 1];//��źϷ���ȡֵ
	return 1;
}

//��������
int listInsert(seqList* L, int i, elementType x) {
	//��������źϷ���
	if (L->listLen == MaxLen)
		return 0;//����������ʧ��
	if (i<1 || i>L->listLen + 1)
		return 1;//���Υ��������ʧ��
	int j = 0;
	for (j = L->listLen; j >= i; j--) {
		L->data[j] = L->data[j-1];
	}
	L->data[i - 1] = x;
	L->listLen++;
	return 2;
}


//ɾ������
int listDelete(seqList* L, int i) {
	if (L->listLen == 0)//���
		return 0;
	if (i<1 || i>L->listLen)//���Υ��
		return 1;
	int j = 0;
	for (j = i; j < L->listLen; j++) {
		L->data[j - 1] = L->data[j];
	}
	L->listLen--;
	return 2;
}

//��������Ԫ�����룬�����������
void listset(seqList* L) {
	//�ж��Ƿ��Ѵ���ֵ
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����" << endl;
		return;
	}

	elementType x;
	cout << "������Ԫ��ֵ��-9999Ϊ������־��" << endl;
	cout << "x=";
	cin >> x;
	while (x != -9999  && L->listLen<MaxLen) {
		L->data[L->listLen] = x;
		L->listLen++;
		cout << "x=";
		cin >> x;
	}

}



//������������Ԫ�أ�ָ�����ݸ���
void listset2(seqList* L) {
	//�жϱ��Ƿ��Ѹ�ֵ
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ȳ�ʼ����" << endl;
		return;
	}
		
	int n = 0, i = 0;
	cout << "���������ݸ�����n<=MaxLen����" << endl;
	cin >> n;
	cout << "����������Ԫ��ֵ��" << endl;
	for (i = 0; i < n; i++) {
		cin>>L->data[i];
		L->listLen++;
	}
}

//��������������Ԫ��
void listset(seqList* L, elementType arr[], int n) {
	//�ж�˳����Ƿ��Ѵ���
	if (L->listLen > 0) {
		cout << "˳����Ѵ��ڣ����ʼ����" << endl;
		return;
	}

	int i = 0;
	for (i = 0; i < n; i++) {
		L->data[L->listLen] = arr[i];
		L->listLen++;
	}
}


//���ļ�����Ԫ��
int listInputFile(char fileName[], seqList* pL)
{
	FILE* pFile;     //����˳�����ļ�ָ��
	char str[1000];  //��Ŷ���һ���ı����ַ���
	char strTemp[10]; //�ж��Ƿ�ע����
	char* ss; 

	pFile=fopen(fileName,"r");
	if(!pFile)
	{
		cout<<"�ļ�"<<fileName<<"��ʧ�ܡ�"<<endl;//printf("�ļ�CBiTree.CBT��ʧ�ܣ�\n");
		return false;
	}
	
	ss=fgets(str,1000,pFile);
	strncpy(strTemp,str,2);
	while((ss!=NULL) && (strstr(strTemp,"//")!=NULL) )  //����ע����
	{
		ss=fgets(str,1000,pFile);
		strncpy(strTemp,str,2);
		//cout<<strTemp<<endl;
	}
	    //ѭ��������str��Ӧ���Ѿ����ļ���ʶ���ж��ļ���ʽ
	//cout<<str<<endl;
	if(strstr(str,"seqList")==NULL)
	{
		printf("�򿪵��ļ���ʽ����\n");
		fclose(pFile); //�ر��ļ�
		return false;
	}

	//���¿�ʼ��ȡԪ�����ݣ�һ��һ��Ԫ������
	while(fgets(str,1000,pFile)!=NULL)
	{
		pL->data[pL->listLen]=atoi(str);//(elementType)str;
		pL->listLen++;
	}
	fclose(pFile); //�ر��ļ�
	return true;

}



//���������˳���
void randsetlist(seqList* L) {
	int i = 0;//Ԫ���±�
	int n = 0;//���������
	int m = 0;//�����������С�Ĳ���
	if (L->listLen > 0) {
		cout << "˳����Ѵ��������ʼ����" << endl;
		return;
	}

	cout << "������Ҫ����������ĸ�����" << endl;
	cin >> n;
	if (n > MaxLen - 1) {//Ϊʲô���ܵ���MaxLen
		cout << "�����������ȣ�����ʧ�ܣ�" << endl;
		return;
	}

	cout << "����������������С�Ĳ�������100���ڵ�����������100��m=" ;
	cin >> m;
	srand((unsigned)time(NULL));//�������������
	//ͬsrand((unsigned)GetTickCount)
	for (i = 0; i < n; i++) {
		L->data[i] = rand() % m;
	}
	L->listLen = n;
}















int main() {
	seqList a;
	initialList(&a);
	listset(&a);
	cout << a.listLen;
	return 0;
}