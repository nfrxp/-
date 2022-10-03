//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>							//辗转相除法求最大公约数
//int main()
//{
//	int m, n,a,b;
//	scanf("%d%d", &m, &n);
//	while (a = m % n)		//赋值
//	{
//		m = n;
//		n = a;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>						//求1000到2000之间的闰年 for循环
//int main()
//{
//	int y;
//	int cout = 0;
//	for (y = 1000; y < 2001; y++)
//	{
//		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//			cout++;
//		}
//	}
//	printf("%d", cout);
//	return 0;
//}



//#include <stdio.h>							//求素数的n种境界
//#include<math.h>
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数的判断规则
//		//1.试除法
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//			printf("%d", i);
//	}
//	return 0;
//}

#include<stdio.h>
#include<cmath>
int main()
{
	int i, j;
	int count(0);
	for (i = 101; i <= 200; i+=2)		//筛选，偶数不可能为素数
	{
		for (j = 3; j <= sqrt(i); j+=2)	/*i=a*b, a和b中至少有一个数<=i的算术平方根*/
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}





			

//#include <stdio.h>							//求1到100内整数中出现了多少个9
//int main()
//{
//	int a, b, c;
//	int cout(0);
//	for (a = 1; a <= 100; a++)
//	{
//		b = a % 10;
//		c = b % 10;
//		if (b == 9)
//		{
//			cout++;
//		}
//		if (c== 9)
//			cout++;
//
//	}
//	printf("%d", cout);
//	return 0;
//}



//#include<stdio.h>								/*1到100的整数求导再求和
//												奇数位系数为-1，偶数位系数为1*/
//int main()
//{
//	int i(1);
//	float sum(0);
//	int flag(1);
//	for (; i <= 100; i++)
//	{
//		sum += flag*1.0/ i;	
//		flag = -flag;
//		/*若sum+=1.0 / i写成1 / i，则商先去尾，
//		再转为float（精度浮点）			数据类型的转换*/
//	}
//	printf("%f", sum);
//	return 0;
//}

//#include<stdio.h>								//求数组内最大的整数
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i(1);
//	int sz;
//	sz = sizeof arr / sizeof arr[0];
//	for (; i <=sz; i++)
//	{
//		if (max< arr[i])
//			max = arr[i];
//	}
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>							//九九乘法表
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//			//printf("%d*%d=%-2d",i,j,i*j)  两位，左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>										//猜数字游戏
//#include<stdlib.h>
//#include<time.h>
//
//void menu()
//{
//	printf("********************\n");
//	printf("*****  1.Play  *****\n");
//	printf("*****  0.Exit  *****\n");
//}
//
//void game()
//{
//	int random_num=rand()%100+1;
//	int input(0);
//	while (1)									//while(1) scanf 实现循环输入
//	{
//		printf("请输入您猜的数！\n");
//		scanf_s("%d", &input);
//		if (input < random_num)
//		{
//			printf("您猜小了！");
//		}
//		else if (input > random_num)
//		{
//			printf("您猜大了！");
//		}
//		else
//		{
//			printf("恭喜您，您猜对了！\n");
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int input;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入1 or 0\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1						//关机 goto实现循环
//#include<stdio.h>										//电脑cmd  服务
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请输入：“我要学习”，否则电脑将在一分钟后关机！");
//	scanf ("%s", input);
//	if (strcmp(input, "我要学习") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1						//关机 while实现循环
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	system("shutdown -s -t 60");				//系统命令
//	char input[]={0};
//	while(1)
//	{
//		printf("请输入“我要学习”以停止关机，否则电脑将在一分钟后关机！");
//		scanf("%s", &input);
//		if (strcmp(input, "我要学习") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}