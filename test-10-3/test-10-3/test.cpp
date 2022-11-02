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



//#include<stdio.h>										//判断是否为素数
//#include<math.h>
//int func(int a)
//{
//	int i = 0, j = 0;
//	if (a == 1)
//		return 0;
//	else if (a == 2)
//		return 1;
//	else
//	{
//		if (a / 2 == 0)
//			return 0;
//		else
//		{
//			for (j = 3; j <= sqrt(a); j += 2)
//			{
//				if (a % j == 0)
//					return 0;
//			}
//			if (j > sqrt(a))
//				return 1;
//		}
//	}
//}
//
//int main()
//{
//	int i = 100;
//	for (i = 100; i <= 200; i++)
//	{
//		if (func(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>										//递归实现n的k次方
//
//int func(int n, int k);
//int main()
//{
//	int n = 0, k = 0;
//	printf("请依次输入n和指数k:>");
//	scanf("%d %d", &n, &k);
//	printf("%d的%d次方为%d\n", n, k, func(n, k));
//	return 0;
//}
//
//int func(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * func(n, k - 1);
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>										//递归求每位之和
//
//int DigitSum(int i)
//{
//	if (i > 0 && i < 10)
//		return i;
//	else
//		return i % 10 + DigitSum(i / 10);
//}
//int main()
//{
//	int i = 0;
//	printf("请输入一个非负整数:>");
//	scanf("%d", &i);
//	printf("该数的每位之和为：%d\n", DigitSum(i));
//	return 0;
//}


//#include<stdio.h>											//strlen递归实现
//
//int func(char* a)
//{
//	if (*a == '\0')
//		return 0;
//	else
//		return 1+func(a + 1);
//}
//int main()
//{
//	char a[66] = "I have a cute dog!";
//	printf("字符串长度为：%d\n",func(a));
//	return 0;
//}


//#include<stdio.h>											//strlen非递归实现
//int func(char* a)
//{
//	int i = 0;
//	for (i = 00; *(a + i) != '\0'; i++) {}
//	return i;
//}
//
//int main()
//{
//	char a[66] = "I have a cute dog!";
//	printf("字符串长度为：%d\n", func(a));
//	return 0;
//}



#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>											//递归打印数的每一位

void func(int i)
{
	if (i > 9)
		func(i / 10);
	printf("%d ", i % 10);
}
int main()
{
	int i = 0;
	printf("请输入一个数:>");
	scanf("%d", &i);
	func(i);
	return 0;
}