//#include<stdio.h>							//ð�ݺ�������
//
//void bubble_sort(int arr[], int sz)
//{
//	//ð�ݵ�����
//	int a;
//
//	for (a = 0; a < sz-1; a++)
//	{
//		//ÿһ�˱ȽϵĴ���
//		int b=0;
//		int flag = 1;
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






//#include<stdio.h>							//ð������-��ϰ
//
//void Bubble_sort(int arr[], int sz)
//{
//	int t = 0;//��
//	int f = 0;//��
//	for (t = 0;t < sz - 1; t++)
//	{
//		int flag = 1;
//		for (f=0; f < sz - 1 - t; f++)	//ÿһ��
//		{
//			if (arr[f] > arr[f + 1])
//			{
//				int tem = arr[f];
//				arr[f] = arr[f + 1];
//				arr[f + 1] = tem;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//
//int main()
//{
//
//	int arr[] = { 98,67,44,32,55,88,99 };
//	int sz=0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble_sort(arr,sz);
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//		if (i < sz - 1)
//		{
//			printf("<");
//		}
//
//	}
//	return 0;
//}





