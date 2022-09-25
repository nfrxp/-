//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	while (i < 10)
//	{	
//	int a = i + 1;
//		printf("第%d位数的值为%d\n", a, arr[i]);
//		i++;
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int Add(int x,int y)//声明Add函数求加法
//{
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d", sum);
//
//	return 0;
//}


#include<stdio.h>//求100以内的奇数
int main()
{
	int a = 1;
	while (a < 101)
	{
		if(a%2==1)
			printf("%d\n", a);
		a++;
	
	}
	return 0;
}