#define _CRT_SECURE_NO_WARNINGS 1
void BFArr(btNode*& T, elementType A[], int low, int high)
{
	int mid;
	if (low <= high)
	{
		mid = (low + high) / 2;  
		T = new btNode;         //申请新结点
		T->data = A[mid];
		T->lChild = NULL;
		T->rChild = NULL;

		BFArr(T->lChild, A, low, mid - 1);   //递归创建T左子树
		BFArr(T->rChild, A, mid + 1, high);  //递归创建T右子树			
	}
}


【算法思想】二叉排序树中结点的查找长度就是此结点的层次。算法可以改造二叉树的一种遍历，统计所有结点的层次数之和sum，再统计出结点总数n，则ASL = sum / n。
以下算法，用中序遍历实现。lev为结点层次值，n统计结点数，sum累计层次数。

void inSum(btNode * T, int lev, int& n, int& sum)
{
	if (T)
	{
		inSum(T->lChild, lev + 1, n, sum);   //累计左子树
		n++;            //累计结点数
		sum = sum + lev;    //累计结点层次数
		inSum(T->rChild, lev + 1, n, sum);   //累计右子树	
	}
}

//算法参数初始化：lev = 1，n = 0，wum = 0。初始调用：inSum(T, 1, n, sum)






int Search(elementType A[],int n, keyType x)
{
	int p, h, i;
	int sn;      //保存查找次数
	if (n == 0)        //n为实际元素数
		return -1;   //空表，查找失败
	h = x % p;        //计算待查关键字x的哈希值，p=11
	if (A[h].key == x)
		return h;   //查找成功，返回元素下标
	else{
		i = (h + 1) % MaxLen;   //从下一个元素开始线性探测查找，MaxLen=11
		while (i != h){
			if (A[i].key == x)  //探测查找成功，返回元素下标
				return i;
			i = (i + 1) % MaxLen;		//否则，循环线性探测，MaxLen=11
		}
		return -1;    //元素不在表中	
	}
}



