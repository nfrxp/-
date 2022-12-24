#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void main()         /* 主函数*/
{
	int act, x;          /*定义整型变量*/
	float num1 = 0, num2 = 0, result;       /*定义浮点型变量*/
	char c;             /*定义字符型变量*/
loop1:scanf("%f%c%f", &num1, &c, &num2);       /*输入*/
	if (c == '+')        /*判断*/
	{
		act = 1;
	}       /*做计算加法标志值*/
	if (c == '-')
	{
		act = 2;
	}       /*做计算减法标志值*/
	if (c == '*')
	{
		act = 3;
	}       /*做计算乘法标志值*/
	if (c == '/')
	{
		act = 4;
	}       /*做计算除法标志值*/
	switch (act)    /*根据运算符号运算*/
	{
	case 1:result = num1 + num2; break;     /*做加法*/
	case 2:result = num1 - num2; break;      /*做减法*/
	case 3:result = num1 * num2; break;      /*做乘法*/
	case 4:result = num1 / num2; break;      /*做除法*/
	}
	printf("%.2f\n", result);        /*输出结果*/
	x = getchar();         /*输入一个字符*/
	if (x == 'c')           /*判断字符*/
		system("CLS");     /*清屏*/
	if (x == 'q')
		goto loop2;        /*跳到loop2（结尾）*/
	goto loop1;        /*跳到loop1（循环）*/
loop2:;           /* 标识符*/
}
