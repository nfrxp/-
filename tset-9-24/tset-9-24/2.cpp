//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int k = 11;
//
//
//	while (left <= right)
//	{
//	int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>//strlen
//#include <windows.h>//Sleep
//#include <stdlib.h>//cls
//
//
//int main()
//{
//	char arr1[] = "Welcome to bit!!!";
//	char arr2[] = "#################";
//	int left = 0;
//	int right = strlen(arr2);
//	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//char以\0结束
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//默认单位为ms
//		system("cls");//system执行系统命令的函数，cls清空屏幕
//		left++;
//		right--;
//	}
//
//
//	return 0;
//}

//#include<stdio.h>
//#include<windows.h>//strcmp
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf_s("%s", password,20);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登录成功");
//			break;//登录成功时，i<3，出现break，i不再做加法，则不会出现i==3——账号已被冻结
//		}
//		else
//			printf("密码错误\n");
//	}
//	if (3 == i)
//		printf("账号已被冻结");
//	return 0;
//



//练习练习练习


//#include<stdio.h>
//
//int main()
//{
//	int mid = 0;
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0])-1;
//	int a = 4;
//	
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < a)
//			left = mid + 1;
//		else if (arr[mid] > a)
//			right = mid - 1;
//		else
//		{
//			printf("找到了，下标%d", mid);
//			break;
//		}
//
//	}
//	if (left > right)
//		printf("无");
//	return 0;
//}


#include <windows.h>
#include <stdlib.h>
#include<stdio.h>
int main()
{
	char arr1[] = { "abcde" };
	char arr2[] = { "#####" };
	int a = 0;
	int b = sizeof(arr1) / sizeof(arr1[0])-2;
	while (a <= b)
	{

		arr2[a] = arr1[a];
		arr2[b] = arr1[b];
		printf("%s", arr2);
		Sleep(1000);
		system("cls");
		a++;
		b--;

	}

	return 0;
}