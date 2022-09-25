#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 1;
//	do
//	{
//		if (a == 5)
//			break;
//		printf("%d", a);
//		a++;
//	}
//	while (a <= 10);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 1;
//	int ret = 1;
//	int sum = 0;
//
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++) 
//	{
//		ret = 1;
//		for (b = 1; b <= a; b++) 
//		{
//		ret = ret * b;
//		}
//	sum = sum + ret;
//	}
//
//	printf("%d", sum);
//
//	return 0;
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	int a = 7;
	for (i = 0; i < 10; i++)
	{
		if (a == arr[i])
		{
		printf("找到了，下标为%d",i);
			break;
		}

	}
	if (i == 10)
		printf("数组不含该数");
	return 0;
}