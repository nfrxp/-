//#include<stdio.h>
//#include<string>
//int main()
//{
//	int arr[10] = { 1,2,3 };
//	char arr2[10] = { 'a',98 };
//	char arr3[10] = "ab";
//	char arr4[] = "abcdef";
//	
//	printf("%d ", sizeof(arr4));	//7
//	printf("%d ", strlen(arr4));	//6
//	return 0;
//}

//#include<stdio.h>
//#include<string>
//int main()
//{
//	char arr1[] = "abc";			//数组（字符串）
//	char arr2[] = { 'a','b','c' };	//数组
//	printf("%d ", sizeof(arr1));		//4
//	printf("%d ", sizeof(arr2));		//3
//	printf("%d ", strlen(arr1));		//3
//	printf("%d ", strlen(arr2));		//随机值
//
//	return 0;
//}


//#include<stdio.h>
//#include<string>
//int main()
//{
//	char arr[] = "abdcdef";
//	int i;
//	int sz = sizeof(arr) - 1;
//	int len = strlen(arr);
//
//	for (i = 0; i < len; i++)
//	{
//		printf("%c ", arr[i]);
//
//	}
//	return 0;
//}


//#include<stdio.h>							//一维数组中各元素的存储地址是连续的
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i;
//	int sz = sizeof(arr)/sizeof(arr[0]) - 1;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p \n", i, &arr[i]);
//
//	}
//	return 0;
//}


//#include<stdio.h>							//二维数组中各元素的存储地址是连续的
//int main()
//{
//	int arr[][4] = { 1,2,4,5,6,7 };
//	int i, j;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p \n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[5][7] = { "yellow","blue","white"};
//	int i;				//第一行，第二行，第三行
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", arr[i]);				//i为行号
//	}
//	return 0;
//}



//#include<stdio.h>							//冒泡函数排序
//
//void bubble_sort(int arr[], int sz)
//{
//	//冒泡的趟数
//	int a;
//	int flag = 1;
//	for (a = 0; a < sz-1; a++)
//	{
//		//每一趟比较的次数
//		int b=0;
//		for (b = 0; b < sz - 1 - a; b++)
//		{
//			//每一次比较
//			if (arr[b] > arr[b + 1])
//			{
//				int tem = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = tem;
//				flag = 0;
//			}
//
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//int main()
//{
//	int arr[] = { 10,1,2,3,4,5,6,7,8,9 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);			//数组传参，传首元素的地址&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}





//#include<stdio.h>					//数组名
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p \n", arr);
//	printf("%p \n", &arr[0]);
//	printf("%p \n", &arr);			//此处的数组名表示整个数组
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	printf("%p \n", arr);
//	printf("%p \n\n", arr + 1);
//	
//	printf("%p \n", &arr[0]);
//	printf("%p \n\n", &arr[0] + 1);
//	
//	printf("%p \n", &arr);
//	printf("%p \n\n", &arr + 1);
//	return 0;
//}