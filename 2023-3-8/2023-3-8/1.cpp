#include<iostream>
#include<string.h>
#define ElemType int
#define MaxSize 100
using namespace std;
typedef struct {
public:
	ElemType data[MaxSize]; //˳����е����� 
	int length; //˳���ĳ��� 
}SqList;
//˳���ĳ�ʼ��
void IniteList(SqList* L) {
	memset(L->data, 0, L->length);
	L->length = 0;
}
//����˳���
bool CreateList(SqList* L, int n) {
	if (n < 1) return false;
	for (int i = 0; i < n; i++) {
		cin >> L->data[i];
		L->length++;
	}
	return true;
}
//������˳�����ɾ����ֵ�ظ���Ԫ�� 
bool DeleteList(SqList* L) {
	if (L->length == 0) return false;
	int i, j, k = 0; //i�洢��һ������ͬ��Ԫ�أ�jΪ����ָ��,kΪԪ���ƶ�����
	for (i = 0, j = 1; j < L->length; j++)
		if (L->data[i] != L->data[j]) //������һ�����ϸ�Ԫ��ֵ��ͬ��Ԫ�� 
		{
			L->data[++i] = L->data[j];  //�ҵ���ͽ�Ԫ��ǰ�� 
			k++;
		}
	L->length = i + 1; //��Ϊi�Ǵ�0��ʼ�� 
	return true;
}
//���˳����е�Ԫ�� 
void Printe(SqList* L) {
	cout << "��ǰ˳����е�Ԫ��Ϊ��";
	for (int j = 0; j < L->length; j++) {
		cout << L->data[j] << " ";
	}
	cout << endl;
}
//����
void Create(SqList* L) {
	int n; bool flag;
	cout << "������˳���ĳ��ȣ�";
	cin >> n;
	flag = CreateList(L, n);
	if (flag) {
		cout << "�����ɹ���";
		Printe(L);
	}
	else cout << "����ʧ�ܣ�";
}
int main() {
	SqList L;
	IniteList(&L);
	Create(&L);
	DeleteList(&L);
	cout << "ɾ����";
	Printe(&L);
	return 0;
}
