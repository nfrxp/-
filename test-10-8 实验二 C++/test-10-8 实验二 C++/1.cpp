//#include<iostream>							//������жϹ���
//using namespace std;
//void main()
//{
//	int m, n;
//	m = 1000;
//	n = 850;
//	cout << "\n(" << m << ',' << n << ')';
//	while (m != n)
//	{
//		while (m > n)
//		{
//			m = m - n;
//			cout << '(' << m << ',' << n << ')';
//		}
//		while (m < n)
//		{
//			n = n - m;
//			cout << '(' << m << ',' << n << ')';
//		}
//
//	}
//	cout << "\n" << m;
//}


//#include<iostream>							//������жϹ���
//using namespace std;
//void main()
//{
//	int m, n, k;
//	m = 1000;
//	n = 45;
//	cout << "\n(" << m << ',' << n << ')';
//	k = 0;
//	while (m >= n)
//	{
//		m = m - n;
//		k = k - 1;
//	}
//	cout << k << "---" << m << endl;
//}


//#include<iostream>							//������жϹ���
//using namespace std;
//void main()
//{
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		if (i % 2)
//			cout << '*';
//		else
//
//			continue;
//		cout << '#';
//	}
//	cout<<"$\n";
//}


//#include<iostream>							//������жϹ���
//using namespace std;
//void main()
//{
//	int a = 1, b = 10;
//	do
//	{
//		b -= a;
//		a++;
//	} while (b-- <= 0);
//	cout << "a=" << a << "b=" << b << endl;
//}


//#include<iostream>								//1��7�Ľ׳�֮��
//using namespace std;
//void main()
//{
//	int i = 1;
//	int j = 1;
//	int a = 1;
//	int sum = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		a = 1;
//		for (j = 1; j <= i; j++)
//		{
//			a *= j;
//		}
//		sum += a;
//	}
//	cout << sum;
//}


//#include<iostream>						//���ʽֵ
//using namespace std;
//void main()
//{
//	float X = 1;
//	float Y = 0;
//	int i = 1;
//	int j = 1;
//	int n = 1;
//	float b = 0;
//	float k = 1;
//	cout << "����������X��n�Ĵ�С:>";
//	cin >> X;
//	cin >> n;
//
//	for (i = 1; i <= (2 * n - 1); i += 2)
//	{
//		float a = 1;
//		for (j = 1; j <= i; j++)
//		{
//			a *= j;
//		}
//		b = k * (X / a);
//		k = -k;
//
//		Y += b;
//	}
//	cout << Y;
//}

//#include<iostream>								//��ӡͼ��
//#include<iomanip>
//using namespace std;
//void main()
//{
//	int k = 0;
//	cout << "���������ӡ������:>";
//	cin >> k;
//	int i = 1;
//	int j = 0;
//
//	
//	for (i = 1; i <= k; i++)
//	{
//		//����
//		int mid = 2 * i - 1;
//		int a =k-i;
//		for (a = 1; a <= k-i; a++)//�հײ���
//		{
//			cout << setw(3) << ' ';
//		}
//		
//		for (j = 1; j <= mid; j += 2)//���ֲ���
//		{
//			cout << setw(3) << j;
//		}
//
//		for (j = mid - 2; j >= 1; j -= 2)
//		{
//			cout << setw(3) << j;
//		}
//		cout << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//void main()
//{
//	char a;
//	cout << "�����������ַ�' '�ڵ�����:>";
//	cin >> a;
//	int c = 0;
//	c = a - '0';
//	cout << c;
//}


#include<iostream>							//����һ���ַ����ж��ַ�����
using namespace std;
void main()
{
	char a = 0;
	cin >> a;
	if (a >= '0' && a >= '9')
		cout<< "������";
	else if (a >= 65 && a <= 90)
		cout << a << "�Ǵ�д��ĸ";
	else if (a >= 97 && a <= 122)
		cout << a << "��Сд��ĸ";
	else
		cout << a << "�����������ַ�";
}