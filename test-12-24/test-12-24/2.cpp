#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void main()         /* ������*/
{
	int act, x;          /*�������ͱ���*/
	float num1 = 0, num2 = 0, result;       /*���帡���ͱ���*/
	char c;             /*�����ַ��ͱ���*/
loop1:scanf("%f%c%f", &num1, &c, &num2);       /*����*/
	if (c == '+')        /*�ж�*/
	{
		act = 1;
	}       /*������ӷ���־ֵ*/
	if (c == '-')
	{
		act = 2;
	}       /*�����������־ֵ*/
	if (c == '*')
	{
		act = 3;
	}       /*������˷���־ֵ*/
	if (c == '/')
	{
		act = 4;
	}       /*�����������־ֵ*/
	switch (act)    /*���������������*/
	{
	case 1:result = num1 + num2; break;     /*���ӷ�*/
	case 2:result = num1 - num2; break;      /*������*/
	case 3:result = num1 * num2; break;      /*���˷�*/
	case 4:result = num1 / num2; break;      /*������*/
	}
	printf("%.2f\n", result);        /*������*/
	x = getchar();         /*����һ���ַ�*/
	if (x == 'c')           /*�ж��ַ�*/
		system("CLS");     /*����*/
	if (x == 'q')
		goto loop2;        /*����loop2����β��*/
	goto loop1;        /*����loop1��ѭ����*/
loop2:;           /* ��ʶ��*/
}
