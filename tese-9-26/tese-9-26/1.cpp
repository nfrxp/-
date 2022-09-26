//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>//三个数按大小顺序排列,固定a>b>c
//int main()
//
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	if (a < b)
//	{
//		int e = a;
//		a = b;
//		b = e;
//	}
//	if (a < c)
//	{
//		int e = a;
//		a = c;
//		c = e;
//
//	}
//	if (b < c)
//	{
//		int e = b;
//		b = c;
//		c = e;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




//#include <stdio.h>//求1到100内3的公倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>//求最大公倍数，辗转相除法

int main()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	while (m%n )
	{
		int a = m % n;
		m = n;
		n = a;
	}
	printf("最大公约数为%d", n);
	return 0;
}