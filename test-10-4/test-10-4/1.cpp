//#include<stdio.h>								//�Զ��庯�������
//int ADD(int x, int y)
//{
//	int z;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a(10), b(5);
//	int sum = ADD(a, b);
//	printf("%d", sum);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<string.h>
//#include<stdio.h>											//�⺯���������ַ�
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[] = "*******";
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>										//�⺯����memset
//int main()
//{
//	char arr1[] = "Hello world!";
//	memset(arr1, '*', 5);			//'*'��Ӧ��ASCII��Ϊ����
//	printf("%s", arr1);
//	return 0;
//}




//#include<stdio.h>								//�Զ��庯���������ֵ
//int get_max(int x, int y)	
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a(10), b(22);
//	int max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//}



//#include<stdio.h>							//�Զ��庯����������������ֵ
//void Swap(int* x, int* y)
//{
//	int tem = *x;
//	*x = *y;
//	*y = tem;
//}
//
//
//int main()
//{
//	int a(10), b(22);
//	printf("a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}




//#include<stdio.h>									//�Զ��庯�����ж��ǲ�������
//#include<math.h>
//
//int is_prime(int x)
//{
//	int b;
//	for (b = 2; b <=sqrt(x); b++)
//	{
//		if (x % b == 0)
//			return 0;
//	}
//	//if (b == x)			//	�����ٴ��ж�
//		return 1;
//
//}
//
//int main()
//{
//	int i;
//	int count(0);
//	for (i = 100; i <= 200; i++) 
//	{
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n��������%d", count);
//	return 0;
//}





//#include<stdio.h>								//�Զ��庯�����ж��ǲ�������
//
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year;
//	int count(0);
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\n�������Ϊ%d", count);
//	return 0;
//}



#include<stdio.h>								//�Զ��庯�����������飬���ֲ���

int binary_search( int arr2[], int a,int sz)
{
	int m(0);
	int n = sz - 1;
	int mid(0);
	while (m <=n)
	{
		mid = (m + n) / 2;
		if (arr2[mid] > arr2[a])
			n = mid - 1;
		else if (arr2[mid] < arr2[a])
			m = mid + 1;
		else

			return	mid;
	}
	return -1;

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k(5);
	int sz=sizeof arr/sizeof arr[0];
	int ret = binary_search(arr, k, sz);
	if ( ret== -1)
		printf("�Ҳ����G��");
	else
		printf("�ҵ��ˣ��±�Ϊ%d",ret);
	return 0;
}