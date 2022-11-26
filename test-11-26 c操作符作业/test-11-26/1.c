#define _CRT_SECURE_NO_WARNINGS 1			//统计二进制中1的个数（正数、负数),三种方法
//#include<stdio.h>
//int NumberOf1(int n)
//{
//	int count=0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",NumberOf1(n));
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>						//打印整数二进制中的奇数位和偶数位
//
//void Print(int n)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


//#include<stdio.h>							//两整数的二进制中不同位的个数
//
//int fun(int a, int b)
//{
//	//int count = 0;
//	//int i = 0;
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if (((a >> i)&1) != ((b >> i)&1))
//	//		count++;
//	//}
//	int count = 0;
//	int c = a ^ b;	//按位异或
//	while (c)
//	{
//		c=c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("不同位的个数位：%d",fun(a, b));
//	return 0;
//}


//#include<stdio.h>					//输入年份及月份，求该月天数->数组
//
//int func(int y, int d)
//{
//	switch (d)
//	{
//	case 4:	case 6:	case 9:	case 11:
//		return 30;
//	case 1:	case 3:	case 5:	case 7:	case 8:	case 10:	case 12:
//		return 31;
//	case 2:
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//			return 29;
//		else
//			return 28;
//	}
//	}
//}
//int main()
//{
//	int y, d;
//	scanf("%d %d", &y, &d);
//	printf("%d", func(y, d));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//#include <stdio.h>							//wrong
//void reverse(char* s) {
//	if (*s) 
//		reverse(s + 1);
//    if(*s)
//    printf("%c", *s);
//
//}
//int main() {
//    long n;
//    char p[34]="1";
//    int i = 0;
//    scanf("%ld", &n);
//    for (i = 0; n > 0; i++)
//    {
//        p[i] = (char)n % 6;
//        n /= 6;
//    }
//    reverse(p);
//    return 0;
//}