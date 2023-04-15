#define _CRT_SECURE_NO_WARNINGS 1

//顺序存储二叉树转二叉链表，虚结点为#
void seqToBiTree(btNode* T, elementType tree[],int i, int num) {
	//传参时，i为第一个结点编号1，num为转换为完全二叉树后最后一个有效结点的编号
	if (tree[i] != '#' && i <= num) {
		T = new btNode;
		T->data = tree[i];
		T->lChild = NULL;
		T->rChild = NULL;
		seqToBiTree(T->lChild, tree, 2 * i, num);
		seqToBiTree(T->rChild, tree, 2 * i + 1, num);
	}
}

//先序遍历非递归
void preNoRecursion(biNode* T) {
	biNode* temp;
	temp = T;
	seqStack S;
	initStack(S);
	
	while (temp|| !stackEmpty(S) {
		if (temp) {
			cout << temp->data << ' ';//访问结点
			pushStack(S, temp);//入栈
			temp = temp->lChild;//遍历左子树
		}
		else {
			popStack(S, temp);//结点空，弹出双亲指针
			temp = temp->rChild;//遍历右子树
		}
	}
}

//中序遍历非递归
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
		else {//temp为空，访问双亲结点，遍历右子树
			popStack(S, temp);//子树根结点出栈
			cout << temp->data << ' ';//访问根结点
			temp = temp->rChild;//遍历右子树
		}
	}
}

//后序遍历非递归
void postNoRecursion(biNode* T) {
	int tag[MaxLen]; //标记左子树、右子树
	biNode* temp;
	temp = T;
	seqStack S;
	initStack(S);

	while (temp || !stackEmpty(S)) {
		if (temp) {
			pushStack(S, temp);
			tag[S.top] = 0;//标记遍历左子树
			temp = temp->lChild;//遍历左子树
		}
		else {
			stackTop(S, temp);//temp指向子树根结点
			if (tag[S.top] == 0) //说明temp的左子树已经遍历，右子树尚未遍历
			{
				tag[S.top] = 1; //设置当前结点遍历右子树标记
				temp = temp->rChild; //遍历右子树
			}
			else {//temp的左右子树均已遍历，
				popStack(S, temp); //退栈
				cout << temp->data << ' '; //访问子树根节点
				temp = NULL; //循环取栈顶的下一个元素
			}
		}
	}
}
