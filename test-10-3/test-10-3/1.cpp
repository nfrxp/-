//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>							//շת����������Լ��
//int main()
//{
//	int m, n,a,b;
//	scanf("%d%d", &m, &n);
//	while (a = m % n)		//��ֵ
//	{
//		m = n;
//		n = a;
//	}
//	printf("%d", n);
//	return 0;
//}

//#include <stdio.h>						//��1000��2000֮������� forѭ��
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



//#include <stdio.h>							//��������n�־���
//#include<math.h>
//int main()
//{
//	int i,j;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������жϹ���
//		//1.�Գ���
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
	for (i = 101; i <= 200; i+=2)		//ɸѡ��ż��������Ϊ����
	{
		for (j = 3; j <= sqrt(i); j+=2)	/*i=a*b, a��b��������һ����<=i������ƽ����*/
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





			

//#include <stdio.h>							//��1��100�������г����˶��ٸ�9
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



//#include<stdio.h>								/*1��100�������������
//												����λϵ��Ϊ-1��ż��λϵ��Ϊ1*/
//int main()
//{
//	int i(1);
//	float sum(0);
//	int flag(1);
//	for (; i <= 100; i++)
//	{
//		sum += flag*1.0/ i;	
//		flag = -flag;
//		/*��sum+=1.0 / iд��1 / i��������ȥβ��
//		��תΪfloat�����ȸ��㣩			�������͵�ת��*/
//	}
//	printf("%f", sum);
//	return 0;
//}

//#include<stdio.h>								//����������������
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


//#include<stdio.h>							//�žų˷���
//int main()
//{
//	int i, j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i * j);
//			//printf("%d*%d=%-2d",i,j,i*j)  ��λ�������
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>										//��������Ϸ
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
//	while (1)									//while(1) scanf ʵ��ѭ������
//	{
//		printf("���������µ�����\n");
//		scanf_s("%d", &input);
//		if (input < random_num)
//		{
//			printf("����С�ˣ�");
//		}
//		else if (input > random_num)
//		{
//			printf("���´��ˣ�");
//		}
//		else
//		{
//			printf("��ϲ�������¶��ˣ�\n");
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
//		printf("������1 or 0\n");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1						//�ػ� gotoʵ��ѭ��
//#include<stdio.h>										//����cmd  ����
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("�����룺����Ҫѧϰ����������Խ���һ���Ӻ�ػ���");
//	scanf ("%s", input);
//	if (strcmp(input, "��Ҫѧϰ") == 0)
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

//#define _CRT_SECURE_NO_WARNINGS 1						//�ػ� whileʵ��ѭ��
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	system("shutdown -s -t 60");				//ϵͳ����
//	char input[]={0};
//	while(1)
//	{
//		printf("�����롰��Ҫѧϰ����ֹͣ�ػ���������Խ���һ���Ӻ�ػ���");
//		scanf("%s", &input);
//		if (strcmp(input, "��Ҫѧϰ") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}