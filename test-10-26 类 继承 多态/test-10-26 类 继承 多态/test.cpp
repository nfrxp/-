//#include<iostream>										//选择排序
//using namespace std;
//int main()
//{
//	int a[5] = { 5,24,1,4,23 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 5-1; i++)//次数
//	{
//		for (j = i + 1; j < 5; j++)//单次，一个值与剩余的比较
//		{
//			if (a[i] > a[j])
//			{
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//	//输出
//	for (i = 0; i < 5; i++)
//	{
//		cout << a[i] << " " ;
//	}
//	return 0;
//}


//#include<iostream>											//冒泡排序
//using namespace std;
//int main()
//{
//	int a[5] = { 42,2,3,1,99 };
//	int i = 0;
//	int j = 0;
//	for (j = 1; j < 5; j++)//次数
//	{
//		for (i=0;i<5-1-j;i++)//单次，相邻比较
//		{
//			if (a[i] > a[i + 1])
//			{
//				int temp = a[i];
//				a[i] = a[i + 1];
//				a[i + 1] = temp;
//			}
//		}
//	}
//	//输出
//	for (i = 0; i < 5; i++)
//	{
//		cout << a[i] << " ";
//	}
//	return 0;
//}


#include<iostream>									//数组和指针
using namespace std;
int main()
{
	int a[2][3] = {3,52,432,2,66,99};
	cout << *(a + 1) << endl;
	cout << *(*(a + 1) + 2) << endl;

	int b[5]= { 2,44,33,67,32 };
	cout << *(b + 1) << endl;
	return 0;
}