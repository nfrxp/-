#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#define MaxLen 100
typedef int elementType;
using namespace std;

typedef struct stack {
	elementType data[MaxLen];
	int top;
}seqStack;

//11��ʼ��
void initialStack(seqStack& S) {
	S.top = -1;
}

//12��ջ��
bool stackEmpty(seqStack& S) {
	if (S.top == -1)
		return true;
	return false;
}

//13��ջ��
bool stackFull(seqStack& S) {
	if (S.top == MaxLen - 1)
		return true;
	return false;
}

//14ȡջ��Ԫ��
bool getTop(seqStack& S, elementType& x) {
	if (stackEmpty(S))
		return false;
	x = S.data[S.top];
	return true;
}

//15��ջ
bool push(seqStack& S, elementType x) {
	if (stackFull(S))
		return false;
	//S.top++;
	S.data[++S.top] = x;
	return true;
}


//16��ջ
bool pop(seqStack& S, elementType& x) {
	if (stackEmpty(S))
		return false;
	x = S.data[S.top--];
	return true;
}

bool pop(seqStack& S) {
	if (stackEmpty(S))
		return false;
	S.top--;
	return true;
}

//17��ӡջԪ��
void printStack(seqStack& S) {
	int i = 0;
	if (stackEmpty(S)) {
		cout << "ջ�գ�" << endl;
		return;
	}
	cout << "ջԪ�أ��ұ�Ϊջ������";
	while (i <= S.top) {
		cout << S.data[i] << ' ';
		i ++ ;
	}
	cout << endl << endl;
}

//18����ѭ����ջ
void creatSeqStack(seqStack& S) {
	elementType x;
	cout << "������ֵ��-99999Ϊ��ֹ��־����" << endl;
	cout << "x=";
	cin >> x;
	while (S.top != MaxLen - 1 && x != -99999) {
		S.data[++S.top] = x;
		cout << "x=";
		cin >> x;
	}
	if (S.top == MaxLen - 1)
		cout << "ջ����" << endl << endl;
}

//1 ʮ����ת��Ϊx���ƣ�2 <= x <= 36
void baseChangeStack(seqStack& S, int x, int a) {
	int temp = 0;
	while (a > 0) {
		push(S, a % x);
		a /= x;
	}
	cout << "ת��Ϊ" << x << "���ƣ�";
	while (!stackEmpty(S)) {
		pop(S, temp);
		if (temp >= 10)
			printf("%c", temp + 55);
		else
			printf("%d", temp);
	}
}

//2 �ж������Ƿ�ƥ��
bool judge(seqStack& S, string str) {
	int len = str.length();
	int i = 0;
	elementType x = 0;
	char arr[] = { '{','[','(',')',']','}' };
	for (i = 0; i < len; i++) {//�ų�ƥ������Լ������Ŷ��������ŵ����
		if (str[i] == arr[0] || str[i] == arr[1] || str[i] == arr[2])
			push(S, str[i]);
		else if (str[i] == arr[3]) {
			if (getTop(S, x) && x == arr[2]) {
				pop(S);
				continue;
			}
			return false;
		}
		else if (str[i] == arr[4]) {
			if (getTop(S, x) && x == arr[1]) {
				pop(S);
				continue;
			}
			return false;
		}
		else if (str[i] == arr[5]) {
			if (getTop(S, x) && x == arr[0]) {
				pop(S);
				continue;
			}
			return false;
		}
		else continue;
	}
	if (!stackEmpty(S))//�ų������ű������Ŷ�����
		return false;
	return true;
}

//3 ������п��ܵĳ�ջ����
