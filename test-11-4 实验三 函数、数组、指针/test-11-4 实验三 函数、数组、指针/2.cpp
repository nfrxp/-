//#include<iostream>											//1
//using namespace std;
//int main()
//{
//	int a[10];
//	int i = 0;
//	cout << "����������ʮ������:\n";
//	for (i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//
//	int m = 0, n = 0;
//	for (m = 0; m < 10; m++)	//��С��������ѡ������
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
//	cout << "��С���������\n";
//	for (i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	int k = 0;
//	cout << "\n��������Ҫ���ҵ���:>";
//	cin >> k;
//
//	m = 0, n = 9;
//	int mid = 0;
//	while (m<=n)
//	{
//		mid = (m + n) / 2;
//		if (a[mid] == k)
//		{
//			cout << "�ҵ��ˣ��±�Ϊ" << mid << endl;
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
//		cout << "������û�������!\n";
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	char i[30];
//	char* p = i;
//	cout << "������һ���ַ���:>";
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
//	cout << "��д��ĸ�ĸ���Ϊ��" << countA << ',' << "Сд��ĸ�ĸ���Ϊ��" << counta << endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{

	return 0;
}