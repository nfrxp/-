//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>										//交换两个整数
//
//void func(int* i, int* j)
//{
//	int temp = *i;
//	*i = *j;
//	*j = temp;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	printf("请输入两个数:>");
//	scanf("%d %d", &a, &b);
//	printf("交换前：a=%d,b=%d\n", a, b);
//	func(&a, &b);
//	printf("交换后：a=%d,b=%d\n", a, b);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>											//判断是否为润年
//
//int func(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	printf("请输入年份:>");
//	scanf("%d", &year);
//	if(func(year)!=0)
//		printf("%d年是润年\n", year);
//	else
//		printf("%d年不是润年\n", year);
//
//	return 0;
//}



#include<stdio.h>										//判断是否为素数
#include<math.h>
int func(int a)
{
	int i = 0, j = 0;
	if (a == 1)
		return 0;
	else if (a == 2)
		return 1;
	else
	{
		if (a / 2 == 0)
			return 0;
		else
		{
			for (j = 3; j <= sqrt(a); j += 2)
			{
				if (a % j == 0)
					return 0;
			}
			if (j > sqrt(a))
				return 1;
		}
	}
}

int main()
{
	int i = 100;
	for (i = 100; i <= 200; i++)
	{
		if (func(i))
			printf("%d ", i);
	}
	return 0;
}