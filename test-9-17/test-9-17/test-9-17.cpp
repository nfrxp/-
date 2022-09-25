#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int age = 9909;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)
//		printf("青年\n");
//	else if (age >= 28 && age < 60)
//		printf("壮年\n");
//	else if (age >= 60 && age < 100)
//		printf("老不死\n");
//	else if (age >= 100 && age < 999)
//		printf("妖精\n");
//	else
//		printf("老妖精\n");
//	return 0;
//}



//int main()//同上
//{
//	int age = 9909;
//	if (age < 18)
//		printf("未成年\n");
//	else 
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 60)
//			printf("壮年\n");
//		else if (age >= 60 && age < 100)
//			printf("老不死\n");
//		else if (age >= 100 && age < 999)
//			printf("妖精\n");
//		else
//			printf("老妖精\n");
//	}
//	return 0;
//}



//int main()
//{
//	int age = 10;
//	if (age < 18) 
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//
//	else
//		printf("成年\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	while(i<=100)
//	{
//		
//		if (i % 2 == 1)//if(i % 2 !=0)等效
//			printf("%d\n", i);
//		else
//			printf("偶数\n");
//		i++;
//                //printf("%d\n",i); i+=2;
//	}
//	
//
//	return 0;
//}


//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}



//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf ("%d", &day);
//	if (1 == day)
//		printf("星期一\n");
//	else if (2 == day)
//		printf("星期二\n");
//	else if (3 == day)
//		printf("星期三\n");
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //switch语句需要break(出口)真正的分支
//	{
//		case 1:
//			printf("星期一");
//		case 2:
//			printf("星期二");
//			break;
//		case 3:
//			printf("星期三");
//		case 4:
//			printf("星期四");
//		case 5:
//			printf("星期五");
//		case 6:
//			printf("星期六");
//		case 7:
//			printf("星期日");
//
//
//	}
//	
//	return 0;
//}

//int main()
//{
//	int day = 0;//定义变量
//	scanf("%d", &day);//输入变量
//	switch(day) //switch(整形表达式)
//	{
//	case 1:
//		printf("工作日");
//		break;
//	case 2:
//		printf("工作日");
//		break;
//	case 3:
//		printf("工作日");
//		break;
//	case 4:
//		printf("工作日");
//		break;
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//		printf("工作日");
//		break;
//	case 7:
//		printf("休息日");
//		break;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //根据day的值判断从哪个case进入
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//		printf("工作日");
//		break;
//	case 7:
//		printf("休息日");
//		break;
//	default:  //其余情况
//		printf("输入错误\n");
//		break;//default与case不分顺序
//	}
//	
//	return 0;
//}

int main()//练习
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期一");
		break;
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	default:
		printf("疯狂加班日");
	}
	return 0;
}