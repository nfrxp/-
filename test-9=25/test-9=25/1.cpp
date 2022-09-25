//求两个数的较大值

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 10;
	int b = 20;
	scanf("%d%d", &a, &b);
	int max = Max(a, b);
	printf("%d", max);
	return 0;
}