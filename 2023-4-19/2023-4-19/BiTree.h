#define _CRT_SECURE_NO_WARNINGS 1

typedef char elementType;
#include<iostream>
using namespace std;
extern int n1;
extern int n2;

typedef struct blNode {
	elementType data;
	blNode* lChild, * rChild;//指针指向左右孩子
}biNode,*BiTree;



//读文件按先序创建二叉链表
//【算法思想】从文件中读取数据到二维数组中，再从数组中读取数据进行二叉树的创建

//从文件中读数据到二维数组中
bool ReadFileToArray(char fileName[], char strLine[100][3], int& nArrLen) {
	//filename存放文件名；strLen存放数据；nArrLen返回结点个数
	FILE* pFile;//文件指针
	char str[1000];//存放一行字符串
	//char strTemp[10];//判断是否注释行

	int i = 0;
	int tag = 0;
	pFile = fopen(fileName, "r");
	if (!pFile) {
		cout << "错误：文件" << fileName << "打开失败！\n";
		return false;
	}
	//打开成功
	
	while (fgets(str, 1000, pFile) != NULL) {//跳过空行、注释行

		if (str[0] == '\n')//跳过空行
			continue;
		if (str[0] == '/' && str[1] == '/')//跳过注释行
			continue;
		if (str[0] == ' ') { //空格开头
			//判断是否为带空格的注释行
			for (i = 1; i < 1000; i++) {
				if (str[i] == '/' && str[i] == str[i + 1]) {
					tag = 0;//跳过注释行
					break;
				}
				else if (str[i] == 'B') {
					//默认标识符匹配，则跳过该行
					tag = 0;
					break;
				}
			}
			if (tag == 0)
				continue;//跳过带空格的注释行
			//不是带空格的注释行,则判断标识符，若匹配，则进入下一步传入数据，此时str存储的是标识符行
			break;

		}
		else {//可能为标识符行
			if (strcmp(str, "BinaryTree\n") != 0)
			{
				printf("打开的文件格式错误！\n");
				fclose(pFile);     //关闭文件
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
		//文件格式正确,开始取数据到数组中
		//fscanf(pFile, "%c  %c  %c\n", &strLine[nArrLen][0], &strLine[nArrLen][1], &strLine[nArrLen][2]);
		strLine[nArrLen][0] = str[0];
		strLine[nArrLen][1] = str[2];
		strLine[nArrLen][2] = str[4];

		//按行取数据，结点+1
		nArrLen++;
		
	} while (fgets(str, 1000, pFile) != NULL);


	fclose(pFile);//关闭文件
	return true;
}

//从数组中读取数据按先序进行二叉树的创建
bool CreateBiTreeFromFile(biNode*& pBT, char strLine[100][3], int nLen, int nRow) {
	//nLen结点个数；nRow数组行号
	if (nRow >= nLen || nLen == 0) {
		return false;
		//无数据或数据已经处理完毕，结束
	}
	//创建二叉树
	pBT = new biNode;//创建根结点
	pBT->data = strLine[nRow][0];
	pBT->lChild = NULL;
	pBT->rChild = NULL;
	int nRowNext = nRow;//存储本次递归的行号
	if (strLine[nRowNext][1] == '1') {
		//左子树存在，创建左子树
		nRow++;
		CreateBiTreeFromFile(pBT->lChild, strLine, nLen, nRow);
	}
	if (strLine[nRowNext][2] == '1') {
		//右子树存在，创建右子树
		nRow++;
		CreateBiTreeFromFile(pBT->rChild, strLine, nLen, nRow);
	}
	return true;
}

//————————————————————————————————

//递归先序遍历
void preOrder(biNode* pBT) {
	if (pBT) {
		cout << pBT->data << ' ';
		preOrder(pBT->lChild);
		preOrder(pBT->rChild);
	}
}

//递归中序遍历
void inOrder(biNode* pBT) {
	if (pBT) {
		inOrder(pBT->lChild);
		cout << pBT->data << ' ';
		inOrder(pBT->rChild);
	}
}

//递归后序遍历
void postOrder(biNode* pBT) {
	if (pBT) {
		postOrder(pBT->lChild);
		postOrder(pBT->rChild);
		cout << pBT->data << ' ';
	}
}

//1.递归中序遍历输出结点及其层次
//【算法思想】基于中序遍历，使用全局变量计数，每成功访问一个结点，计数加一，访问完左右孩子结点后，计数减一
void inOrderLevel(biNode* pBT) {
	if (pBT) {
		n1++;
		inOrderLevel(pBT->lChild);
		cout << pBT->data << '-' << n1 << ' ';
		inOrderLevel(pBT->rChild);
		n1--;
	}
}

//2.求叶子结点数和1度的结点数
//【算法思想】全局变量n1存储叶子结点数，全局变量n2存储1度结点数
//递归先序遍历，若结点存在判断左右孩子是否都不存在，若是，则n1++；否则，判断是否为1度结点，利用异或判断，若是，则n2++。
// 判断结束后先序遍历左孩子，先序遍历右孩子
void preOrderCount01(biNode* pBT) {
	if (pBT) {
		if ((!pBT->lChild) && (!pBT->rChild))//叶子结点
			n1++;
		else if (((pBT->lChild) && (!pBT->rChild)) || ((!pBT->lChild) && (pBT->rChild)))//注意：异或，判断1度
			n2++;
		preOrderCount01(pBT->lChild);
		preOrderCount01(pBT->rChild);
	}
}

//3. 输入x，求父节点、兄弟结点、子结点的值
//【算法思想】采用先序遍历，三个形参，数结点，输入的变量，一个bool类型的数据用来标志是否查找到。
// 首先是T->lChild != NULL && T->lChild->data == x，说明最多只有右兄弟，一种情况，
// 再仔细判断是否有双亲结点，左孩子右孩子，最后把f标志为true。
// 之后当T->rChild != NULL && T->rChild->data == x时说明最多只有左兄弟，一种情况，再仔细判断是否有双亲结点，左孩子右孩子，
// 最后把f标志为true。做后是T->data == x，
//这说明是根节点，没有双亲结点和兄弟节点，只需判断是否有孩子节点即可。之后再分别递归调用左子树右子树
void getx(biNode* T, char x, bool& f) {
	if (T) {
		if (T->lChild != NULL && T->lChild->data == x) {
			cout << "x的双亲结点的值为：" << T->data << endl;
			if (T->rChild != NULL) {
				cout << "x的兄弟结点为右兄弟，其值为：" << T->rChild->data << endl;
			}
			if (T->lChild->lChild != NULL) {
				cout << "x的左孩子结点的值为：" << T->lChild->lChild->data << endl;
			}
			else {
				cout << "没有左孩子" << endl;
			}
			if (T->lChild->rChild != NULL) {
				cout << "x的右孩子结点的值为：" << T->lChild->rChild->data << endl;
			}
			else {
				cout << "没有右孩子" << endl;
			}
			f = true;
			return;
		}
		else if (T->rChild != NULL && T->rChild->data == x) {
			cout << "x的双亲结点的值为：" << T->data << endl;
			if (T->lChild != NULL) {
				cout << "x的兄弟结点为左兄弟，其值为：" << T->lChild->data << endl;
			}
			if (T->rChild->lChild != NULL) {
				cout << "x的左孩子结点的值为：" << T->rChild->lChild->data << endl;
			}
			else {
				cout << "没有左孩子" << endl;
			}
			if (T->rChild->rChild != NULL) {
				cout << "x的右孩子结点的值为：" << T->rChild->rChild->data << endl;
			}
			else {
				cout << "没有右孩子" << endl;
			}
			f = true;
			return;
		}
		else if (T->data == x) {
			cout << "x没有双亲结点" << endl;
			cout << "x没有兄弟结点" << endl;
			if (T->lChild != NULL) {
				cout << "x的左孩子结点的值为：" << T->lChild->data << endl;
			}
			else {
				cout << "没有左孩子" << endl;
			}
			if (T->rChild != NULL) {
				cout << "x的右孩子结点的值为：" << T->rChild->data << endl;
			}
			else {
				cout << "没有右孩子" << endl;
			}
			f = true;
			return;
		}
		getx(T->lChild, x, f);
		getx(T->rChild, x, f);
	}
}

//4. 求x的层次
//【算法思想】先序遍历，依次计数，若为x，则输出层次。
void preOrderxLevel(biNode* pBT,char x,int& tag) {
	if (pBT&&tag!=1) {
		n1++;
		if (pBT->data == x) {
			cout << x << "的层次为：" << n1 << endl << endl;
			tag = 1;
			return;
		}
		preOrderxLevel(pBT->lChild,x,tag);
		preOrderxLevel(pBT->rChild,x,tag);
		n1--;
	}
}


//5. 将按顺序方式存储在数组中的二叉树转换为二叉链表形式
// 顺序存储在数组中：将二叉树按层次，从上到下，从左到右，依次存储到数组中
//【算法思想】先从文件读入到数组中，且转换为完全二叉树，再创建二叉链表
//若子树不存在，则补上，且保证层次与树的高度一致？？？
void ArrayToBiTree(biNode*& T, char A[], int i, int num) {
	//i 为当前结点编号，从 1 开始
	//num 为最后有效结点编号
	if (i <= num && A[i] != '0') {
		T = new biNode;
		T->data = A[i];
		T->lChild = NULL;
		T->rChild = NULL;
		ArrayToBiTree(T->lChild, A, 2 * i, num);
		ArrayToBiTree(T->rChild, A, 2 * i + 1, num);
	}
}



//6. 输出二叉树从每个叶子结点到根结点的路径
//【算法思想】先序遍历，将结点存入数组，若为叶子结点，则逆序输出数组元素，即为路径，直至访问完所有叶子结点
void pathTree(biNode* pBT, elementType path[], int top) {
	if (pBT) {
		//子树不存在，则为叶子结点，逆序输出数组中存储的路径
		if (pBT->lChild == NULL && pBT->rChild == NULL) {
			cout << pBT->data << ':';
			for (int i = top-1; i >= 0; i--) {
				cout << path[i] << ' ';
			}
			cout << endl;
			
		}
		else {
			//存在子树，将结点值存入数组，递归访问子树
			path[top++] = pBT->data;
			pathTree(pBT->lChild, path, top);
			pathTree(pBT->rChild, path, top);
		}
	}
}




//7. 层次遍历，队列
//层次遍历使用一个队列（先进先出），将根结点入队，出队，然后访问出队结点，若它有左孩子，就将左孩子入队，
//若它有右孩子，就将右孩子入队，然后访问队头结点，如此循环下去，直到队列为空，就结束了。

void LevelOrder(biNode* T)   // 二叉树的层序遍历
{
	biNode* Q[100];   // 数组模拟队列
	int front = 0;
	int rear = 0;
	biNode* p;

	Q[++rear] = T;  // 根结点入队
	while (front != rear) {   // 若队列不为空
		// 队头结点出队，并访问出队结点
		p = Q[++front];
		cout << p->data << " ";
		// 出队结点的非空左右孩子依次入队
		if (p->lChild != NULL) {
			Q[++rear] = p->lChild;
		}
		if (p->rChild != NULL) {
			Q[++rear] = p->rChild;
		}
	}
}


//————————————————————————————————————
//扩展

//21. 复制二叉树
//【算法思想】利用先序遍历，每访问一个结点，则复制一个结点，直至访问结束
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

//22.交换左右子树
//如果某结点左右子树为空，返回，否则交换该结点左右孩子，然后递归交换左右子树。
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
	}//交换左右孩子
	changeLR(T->lChild);  //递归交换左子树
	changeLR(T->rChild);  //递归交换右子树
}

//23.
//首先是递归的算法对于递归算法核心就是查找，即在递归的过程中不断查找要查找的结点找到该结点时，
//就将该结点向上返回，当一个结点为需要查找结点的最小公共祖先时就将该节点向上返回。


//查找二叉树结点的公共父节点
//递归方法求解
biNode* LowestCommonAncestorInBinaryTree(biNode* Root, char p, char q) { //真实传参应为(BiTree *Root,BiTree p,BiTree q）
	//这里只是为了测试
	if (!Root)
		return NULL;
	//if(Root==p||Root==q) //真实代码
	//	return Root;

	if (Root->data == p || Root->data == q) //若子身结点是p,或者q。返回自身结点
		return Root;

	biNode* left = LowestCommonAncestorInBinaryTree(Root->lChild, p, q); //在树的左方进行查找
	biNode* right = LowestCommonAncestorInBinaryTree(Root->rChild, p, q); //在树的右面就行查找

	if (left != NULL && right != NULL) //这里可以想象图中的B结点 从B的左面找到了 D所以left不空 从B的右面找到了M所以 right不空
		return Root;			//将B结点向上返回
	if (left == NULL && right == NULL)	//上一层B返回后有 还会去A的右侧进行查找，看图可以知道A的右侧返回为NULl  
		return NULL;
	return left == NULL ? right : left; //此时递归来到了最后一层代码因为 A的left不为空 所以最后的left 就是结果								
}

