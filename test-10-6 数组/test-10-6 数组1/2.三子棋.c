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
			printf("��ʼ��Ϸ��");
			game();
		}
		else if (i == 0)
		{
			printf("�˳���Ϸ��");
			break;
		}
		else
			printf("����������������룡");
	} while (i);
}


int main()
{
	test();

	return 0;
}