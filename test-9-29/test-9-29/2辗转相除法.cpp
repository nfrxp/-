#define _CRT_SECURE_NO_WARNINGS 1					//求最大公约数(辗转相除法)
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int y = 0;//y为余数
	scanf("%d%d",&a,&b);
	
	while(a%b!=0)
	{
		y = a % b;
		a = b;
		b = y;
		if (a % b == 0)
			printf("最大公约数为%d", b);
	}

	return 0;
}