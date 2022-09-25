#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int input = 0;
	printf("加入我们\n");
	printf("你会好好学习吗？(1/0)>:");
	scanf("%d", &input);
	if(input== 1)
		printf("拿到好offer\n");
	else
		printf("卖红薯");
	return 0;
}