
//#include<iostream>									//三种方式输出数组元素
//using namespace std;
//int main()
//{
//	int a[10] = { 3,2,5,3,54,3,24,443,44,3 };
//	//1.数组名和下标
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	//2.数组名和指针
//	for (i = 0; i < 10; i++)
//	{
//		cout << *(a + i) << " ";
//	}
//	cout << endl;
//
//	//3.指针
//	int* p = a;
//	for (i = 0; i < 10; i++)
//	{
//		cout << *(p + i) << " ";
//	}
//	cout << endl;
//
//	return 0;
//}



#include<iostream>									//指针数组，数组元素为指针
using namespace std;
int main()
{
	int a[] = { 1,2,3 };
	int b[] = { 3,4,5 };
	int c[] = { 5,6,7 };
	int* p[] = { a,b,c };
	int i = 0, j = 0;
	for (i=0; i < 3; i++)
	{
		for (j=0; j < 3;j++)
		{
			cout << p[i] << ' ';
			cout << endl;

		}
	}
	for (i=0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << p[i][j] << ' ';
			cout << endl;

		}
	}
	return 0;
}