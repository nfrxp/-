//#include<stdio.h>					//������������%��������
//int main()
//{
//	int i = 5;
//	int j = i % 2;
//	printf("%d", j);
//	return 0;
//}


//#include<stdio.h>									//��λ���������ƣ�1��.���ƣ�2����ֻ��������
//int main()										//�����ƣ�����
//{
//	int i = -1073741824;
//	int j = i << 2;
//	printf("%d", j);	//j=0
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = -2;
//	int j = i >> 2;
//	printf("%d", j);
//	return 0;
//}

//#include<stdio.h>										//λ��������������
//int main()
//{
//	int i = 3;
//	int j = 5;
//	printf("%d\n", i & j);			//��λ��
//	printf("%d\n", i | j);			//��λ��
//	printf("%d\n", i ^ j);			//��λ�������Ϊ��
//	return 0;
//}


//#include<stdio.h>								//�����⣬��������ʱ������ʵ���������Ľ���
//int main()				//1.�Ӽ������������
//{
//	int i = 3;
//	int j = 5;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	i = i + j;
//	j = i - j;
//	i = i - j;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//
//	return 0;
//}


//int main()					//2.��λ���
//{
//	int i = 3;
//	int j = 5;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	i = i ^ j;
//	j = i ^ j;
//	i = i ^ j;
//	printf("i=%d\n", i);
//	printf("j=%d\n", j);
//	return 0;
//}


#include<stdio.h>							//��һ�����Ķ�������ʽ��1�ĸ���
//int main()						//ģʮ����ʮ��ģ����������(��������)
//{
//	int i = 3;
//	int count = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//			count++;
//		i /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}

int main()									//��λȡ��
{
	int i = -1;
	int j = 0;
	int count = 0;
	while (j<32)
	{
		if (i & (1 << j))
		{
			count++;
		}
		j++;
	}
	printf("%d", count);
	return 0;
}