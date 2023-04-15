#define _CRT_SECURE_NO_WARNINGS 1

//˳��洢������ת������������Ϊ#
void seqToBiTree(btNode* T, elementType tree[],int i, int num) {
	//����ʱ��iΪ��һ�������1��numΪת��Ϊ��ȫ�����������һ����Ч���ı��
	if (tree[i] != '#' && i <= num) {
		T = new btNode;
		T->data = tree[i];
		T->lChild = NULL;
		T->rChild = NULL;
		seqToBiTree(T->lChild, tree, 2 * i, num);
		seqToBiTree(T->rChild, tree, 2 * i + 1, num);
	}
}

//��������ǵݹ�
void preNoRecursion(biNode* T) {
	biNode* temp;
	temp = T;
	seqStack S;
	initStack(S);
	
	while (temp|| !stackEmpty(S) {
		if (temp) {
			cout << temp->data << ' ';//���ʽ��
			pushStack(S, temp);//��ջ
			temp = temp->lChild;//����������
		}
		else {
			popStack(S, temp);//���գ�����˫��ָ��
			temp = temp->rChild;//����������
		}
	}
}

//��������ǵݹ�
void inNoRecursion(biNode* T) {
	biNode* temp;
	temp = T;
	seqStack S;
	initStack(S);

	while (temp || !stackEmpty(S)) {
		if (temp) {
			pushStack(S, temp);
			temp = temp->lChild;
		}
		else {//tempΪ�գ�����˫�׽�㣬����������
			popStack(S, temp);//����������ջ
			cout << temp->data << ' ';//���ʸ����
			temp = temp->rChild;//����������
		}
	}
}

//��������ǵݹ�
void postNoRecursion(biNode* T) {
	int tag[MaxLen]; //�����������������
	biNode* temp;
	temp = T;
	seqStack S;
	initStack(S);

	while (temp || !stackEmpty(S)) {
		if (temp) {
			pushStack(S, temp);
			tag[S.top] = 0;//��Ǳ���������
			temp = temp->lChild;//����������
		}
		else {
			stackTop(S, temp);//tempָ�����������
			if (tag[S.top] == 0) //˵��temp���������Ѿ���������������δ����
			{
				tag[S.top] = 1; //���õ�ǰ���������������
				temp = temp->rChild; //����������
			}
			else {//temp�������������ѱ�����
				popStack(S, temp); //��ջ
				cout << temp->data << ' '; //�����������ڵ�
				temp = NULL; //ѭ��ȡջ������һ��Ԫ��
			}
		}
	}
}
