#define _CRT_SECURE_NO_WARNINGS 1
void BFArr(btNode*& T, elementType A[], int low, int high)
{
	int mid;
	if (low <= high)
	{
		mid = (low + high) / 2;  
		T = new btNode;         //�����½��
		T->data = A[mid];
		T->lChild = NULL;
		T->rChild = NULL;

		BFArr(T->lChild, A, low, mid - 1);   //�ݹ鴴��T������
		BFArr(T->rChild, A, mid + 1, high);  //�ݹ鴴��T������			
	}
}


���㷨˼�롿�����������н��Ĳ��ҳ��Ⱦ��Ǵ˽��Ĳ�Ρ��㷨���Ը����������һ�ֱ�����ͳ�����н��Ĳ����֮��sum����ͳ�Ƴ��������n����ASL = sum / n��
�����㷨�����������ʵ�֡�levΪ�����ֵ��nͳ�ƽ������sum�ۼƲ������

void inSum(btNode * T, int lev, int& n, int& sum)
{
	if (T)
	{
		inSum(T->lChild, lev + 1, n, sum);   //�ۼ�������
		n++;            //�ۼƽ����
		sum = sum + lev;    //�ۼƽ������
		inSum(T->rChild, lev + 1, n, sum);   //�ۼ�������	
	}
}

//�㷨������ʼ����lev = 1��n = 0��wum = 0����ʼ���ã�inSum(T, 1, n, sum)






int Search(elementType A[],int n, keyType x)
{
	int p, h, i;
	int sn;      //������Ҵ���
	if (n == 0)        //nΪʵ��Ԫ����
		return -1;   //�ձ�����ʧ��
	h = x % p;        //�������ؼ���x�Ĺ�ϣֵ��p=11
	if (A[h].key == x)
		return h;   //���ҳɹ�������Ԫ���±�
	else{
		i = (h + 1) % MaxLen;   //����һ��Ԫ�ؿ�ʼ����̽����ң�MaxLen=11
		while (i != h){
			if (A[i].key == x)  //̽����ҳɹ�������Ԫ���±�
				return i;
			i = (i + 1) % MaxLen;		//����ѭ������̽�⣬MaxLen=11
		}
		return -1;    //Ԫ�ز��ڱ���	
	}
}



