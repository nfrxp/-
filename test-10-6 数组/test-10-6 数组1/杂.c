#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	int i;
	int j;
	int t = 0;
	int sum = 0;
	printf("请输入一个正整数！>:");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		for (j = i; j <= i; j++)
			t = t + j;
		sum = sum + t;
	}
	printf("1+(1+2)+(1+2+3)+…+(1+2+3+4+5+6+…+n)=%d", sum);
	return 0;
}