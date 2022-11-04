//#include<iostream>											//1
//using namespace std;
//int main()
//{
//	int a[10];
//	int i = 0;
//	cout << "请依次输入十个整数:\n";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//	int m = 0, n = 0;
//	for (m = 0; m < 10; m++)	//从小到大排序，选择排序
//	{
//		for (n = m; n < 10 ; n++)
//		{
//			if (a[m] > a[n])
//			{
//				int temp = a[m];
//				a[m] = a[n];
//				a[n] = temp;
//			}
//		}
//	}
//	cout << "从小到大排序后：\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	int k = 0;
//	cout << "\n请输入需要查找的数:>";
//	cin >> k;
//
//	m = 0, n = 9;
//	int mid = 0;
//	while (m<=n)
//	{
//		mid = (m + n) / 2;
//		if (a[mid] == k)
//		{
//			cout << "找到了，下标为" << mid << endl;
//			break;
//		}
//		else if (a[mid] > k)
//		{
//			n = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			m = mid + 1;
//		}
//	}
//	if (m > n)
//		cout << "数组中没有这个数!\n";
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char i[30];
//	char* p = i;
//	cout << "请输入一个字符串:>";
//	gets_s(i);
//	
//	int j = 0;
//	int countA = 0, counta = 0;
//	for (j = 0; j < 30; j++)
//	{
//		if (*(p + j) >= 'A' && *(p + j) <= 'Z')
//			countA++;
//		else if (*(p + j) >= 'a' && *(p + j) <= 'z')
//			counta++;
//	}
//	cout << "大写字母的个数为：" << countA << ',' << "小写字母的个数为：" << counta << endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{

	return 0;
}