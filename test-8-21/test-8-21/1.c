
#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	printf("\n");
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++);
//	{
//		printf("%d ", arr[i]);
//
//	}
//	printf("\n");
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个数据>:");
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int ADD(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum = ADD(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	//int a = 5 / 2;
//	//int a = 5 % 2;
//	int a = 2;
//	int b = a<<1;
//	printf("%d\n", b);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int arr[10]={0};
//	printf("%d\n", sizeof(arr));//4*10=40字节
//	printf("%d\n", sizeof(arr[0]));//4*1=4字节
//	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));//10个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//10个数
//	return 0;
//}

#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
		{
			printf("%d ", i);
		}
		i++;
	}
	return 0;
}