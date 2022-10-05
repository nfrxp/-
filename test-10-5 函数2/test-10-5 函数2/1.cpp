//#define _CRT_SECURE_NO_WARNINGS 1	//递归
//#include<stdio.h>					//自定义函数，输入一个整型，分别打印每个数字，不翻转
//
//void print(int x)					//输出时由内向外，编写时由外向内。
//{									//层层剥开
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//		printf("%d ", x % 10);
//}
//
//
//int main()
//{
//	int a;
//	printf("请输入整型！");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//#include<stdio.h>					//自定义函数，求字符串长度,可创建变量
//
//int my_strlen(char* arr)
//{
//	int count(0);
//	while (*arr != 0)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>				//自定义函数，求字符串长度,不 可创建变量
//
//int my_strlen(char* arr)
//{
//	if (*arr != 0)
//		return 1 + my_strlen(arr + 1);
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}