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
//	char arr1[] = "abc";			//���飨�ַ�����
//	char arr2[] = { 'a','b','c' };	//����
//	printf("%d ", sizeof(arr1));		//4
//	printf("%d ", sizeof(arr2));		//3
//	printf("%d ", strlen(arr1));		//3
//	printf("%d ", strlen(arr2));		//���ֵ
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


//#include<stdio.h>							//һά�����и�Ԫ�صĴ洢��ַ��������
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


//#include<stdio.h>							//��ά�����и�Ԫ�صĴ洢��ַ��������
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
//	int i;				//��һ�У��ڶ��У�������
//	for (i = 0; i < 5; i++)
//	{
//		printf("%s ", arr[i]);				//iΪ�к�
//	}
//	return 0;
//}



//#include<stdio.h>							//ð�ݺ�������
//
//void bubble_sort(int arr[], int sz)
//{
//	//ð�ݵ�����
//	int a;
//	int flag = 1;
//	for (a = 0; a < sz-1; a++)
//	{
//		//ÿһ�˱ȽϵĴ���
//		int b=0;
//		for (b = 0; b < sz - 1 - a; b++)
//		{
//			//ÿһ�αȽ�
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
//	bubble_sort(arr,sz);			//���鴫�Σ�����Ԫ�صĵ�ַ&arr[0]
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}





//#include<stdio.h>					//������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p \n", arr);
//	printf("%p \n", &arr[0]);
//	printf("%p \n", &arr);			//�˴�����������ʾ��������
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