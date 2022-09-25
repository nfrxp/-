#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int age = 0;
	int age2 = 0;
	int sum = 0;
	printf("请输入两个数字");
	scanf("%d %d", &age, &age2);
	sum = age + age2;
	printf("%d\n", sum);

	return 0;
}