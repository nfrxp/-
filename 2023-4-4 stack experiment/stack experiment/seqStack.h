#define _CRT_SECURE_NO_WARNINGS 1

#define MaxLen 100
typedef int elementType;

typedef struct stack {
	elementType data[MaxLen];
	int top;
}seqStack;

//��ʼ��
void initialSatck(seqStack &S) {
	S.top = -1;
}

//��ջ��
bool stackEmpty(seqStack& S) {
	if (S.top == -1)
		return true;
	return false;
}

//��ջ��
bool stackFull(seqStack& S) {
	if (S.top == MaxLen - 1)
		return true;
	return false;
}

//ȡջ��Ԫ��
bool getTop(seqStack& S, elementType& x) {
	if (stackEmpty(S))
		return false;
	x = S.data[S.top];
	return true;
}

//��ջ
bool push(seqStack& S, elementType x) {
	if (stackFull(S))
		return false;
	//S.top++;
	S.data[++S.top] == x;
	return true;
}

//��ջ
bool pop(seqStack& S, elementType& x) {
	if (stackEmpty(S))
		return false;
	x = S.data[S.top--];
	return true;
}