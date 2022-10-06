#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("****************\n");
	printf("**** 1.Play ****\n");
	printf("**** 0.Exit ****\n");

}

void test()
{
	int i;
	do
	{

		menu();
		scanf("%d", &i);
		if (i == 1)
		{
			printf("开始游戏！");
			game();
		}
		else if (i == 0)
		{
			printf("退出游戏！");
			break;
		}
		else
			printf("输入错误，请重新输入！");
	} while (i);
}


int main()
{
	test();

	return 0;
}