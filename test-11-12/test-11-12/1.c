//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>		//�ݹ�쳲���������
//
//long long fib(long long n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int main()
//{
//	long long n = 0;
//	while (scanf("%lld", &n) != EOF)
//	{
//		printf("�����%lld\n", fib(n));
//	}
//	return 0;
//}



//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>		//�ǵݹ�쳲���������
//
//long long fib(long long n)
//{
//	long long sum;
//	long long a = 0, b = 1;
//	int i = 2;
//	sum = 0, a = 0, b = 1;
//	if (n < 2)
//		sum = n;
//	else
//	{
//		for (i = 2; i <= n; i++)
//		{
//			sum = a + b;
//			a = b;
//			b = sum;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	long long n = 0;
//	while (scanf("%lld", &n) != EOF)
//	{
//		printf("�����%lld\n", fib(n));
//	}
//	return 0;
//}


//#include<stdio.h>				//�ַ�������洢
//int main()
//{
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>			//�ݹ�׳�
//int func(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * func(n - 1);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("��׳�Ϊ��%d\n", func(i));
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>		//�ǵݹ�׳�
//int func(int n)
//{
//	int i, sum = 2;
//	if (n < 3)
//		return n;
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			sum *= i;
//		}
//		return sum;
//	}
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("��׳�Ϊ��%d\n", func(i));
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g'};
//	printf("sizeof(acX)=%d\n", sizeof(acX));
//	printf("sizeof(acY)=%d\n", sizeof(acY));
//	//printf("sizeof(acX)=%d\n", strlen(acX));
//	//printf("sizeof(acY)=%d\n", strlen(acY));
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int A[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int B[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int C[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		C[i] = A[i];
//		A[i] = B[i];
//		B[i] = C[i];
//	}
//	printf("�滻��\nA���飺");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", A[i]);
//	}
//	printf("\nB���飺");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", B[i]);
//	}
//	return 0;
//}