//#include<iostream>									//由大到小排序
//using namespace std;											//选择排序
//int main()
//{
//	int i[5];
//	int j = 0, k = 0;
//	for (j = 0; j < 5; j++)
//	{
//		cin >> i[j];
//	}
//
//	for (j = 0; j < 5; j++)
//	{
//		for (k = j+1; k < 5; k++)
//		{
//			if (i[j] < i[k])
//			{
//				int temp = i[j];
//				i[j] = i[k];
//				i[k] = temp;
//			}
//		}
//	}
//
//	for (j = 0; j < 5; j++)
//	{
//		cout << i[j] << ' ';
//	}
//	return 0;
//}



//#include<iostream>									//由大到小排序
//using namespace std;									//冒泡排序
//int main()	
//{
//	int i[5];
//	int j = 0;
//	int k = 0;
//	for (j = 0; j < 5; j++)
//	{
//		cin >> i[j];
//	}
//
//	for (j = 0; j < 5; j++)
//	{
//		for (k = 0; k < 5 - j-1; k++)
//		{
//			if (i[k] < i[k + 1])
//			{
//				int temp = i[k];
//				i[k] = i[k + 1];
//				i[k + 1] = temp;
//			}
//		}
//	}
//
//	for (j = 0; j < 5; j++)
//	{
//		cout << i[j] << ' ';
//	}
//	return 0;
//}