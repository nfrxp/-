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


//#include<iostream>							//����һ���ַ����ж��ַ�����
//using namespace std;
//void main()
//{
//	char a = 0;
//	cin >> a;
//	if (a >= '0' && a <= '9')
//	{
//		cout << "������";
//	}
//	else if (a >= 'A' && a <= 'Z')
//	{
//		cout << "�Ǵ�д��ĸ";
//	}
//	else if (a >= 'a' && a <= 'z')
//	{
//		cout << "��Сд��ĸ";
//	}
//	else
//	{
//		cout << "�����������ַ�";
//	}
//}



//#include <iostream>							//����һ���ַ����ж��ַ�����
//using namespace std;
//int main() {
//	char a = 0;
//	cin >> a;
//	if (a >= 'a' && a <= 'z') {
//		cout << "lower case";
//	}
//	else if (a >= 'A' && a <= 'Z') {
//		cout << "upper case";
//	}
//	else if (a >= '0' && a <= '9') {
//		cout << "number case";
//	}
//	else {
//		cout << "other case";
//	}
//	return 0;
//}




//#include<iostream>											//�󶩻�Ʊ�Ļ���
//using namespace std;
//int main()
//{
//	int p;//��Ʊ�۸�(Ԫ)
//	int m;//��Ʊʱ��(�·�)
//	int n;//��Ʊ����(��)
//	int sum = 0;
//	int i = 0;
//	cout << "�����������Ʊ�۸�(Ԫ)����Ʊʱ��(�·�)����Ʊ����(��):>";
//
//
//	do
//	{
//		cin >> p;
//		cin >> m;
//		cin >> n;
//		i = 0;
//		if (m == 4 || m == 5 || m == 9 || m == 10)
//		{
//			if (n >= 20)
//			{
//				sum = 0.8 * p * n;
//			}
//			else
//			{
//				sum= 0.9 * p * n;
//			}
//		}
//		else if (m <= 0 || m > 12)
//		{
//			i = 1;
//			cout << "��Ʊʱ������1�µ�12��֮�䣬����������:>";
//		}
//		else
//		{
//			if (n >= 20)
//			{
//				sum = 0.6 * p * n;
//			}
//			else
//			{
//				sum = 0.8 * p * n;
//			}
//		}
//	} while (i);
//	cout << sum;
//	return 0;
//}



//#include<iostream>									//�ж���˼�Ƿ�ϸ�
//using namespace std;
//int main()
//{
//	float sum = 1.0;
//	float a=1.0, b = 1.0, c = 1.0, d = 1.0;
//	int m=1;
//	cout << "������������˼�ܳɼ��͸���������˵������д�ĳɼ�:>";
//	cin >> sum;	 cin >> a; 	cin >> b; 	cin >> c; 	cin >> d;
//	float arr[] = { a,b,c,d };
//	int i = 0;
//	if (sum >= 6.0)
//	{
//		for (i = 0; i < 4; i++)
//		{
//			if (arr[i] < 5.0)
//			{
//				m = 0;
//				cout << "���ϸ�";
//				break;
//			}
//		}
//		if (m == 1)
//			cout << "�ϸ�";
//	}
//	else
//		cout << "���ϸ�";
//	return 0;
//}


//#include<iostream>							//һ��forѭ��
//using namespace std;
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 10000; i++)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	cout << sum;
//	return 0;
//}


//#include<iostream>							//����do-whileѭ��
//using namespace std;
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	do {
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//		i++;
//	} while (i <= 10000);
//	cout << sum;
//	return 0;
//}


//#include<iostream>							//����whileѭ��
//using namespace std;
//int main()
//{
//	int i = 1;
//	int sum = 0;
//	while (i <= 10000)
//	{
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//		i++;
//	}
//	cout << sum;
//	return 0;
//}



//#include<iostream>
//using namespace std;								//ASCII�� 95��
//int main()
//{
//	char a = 32;
//	for (a = 32; a <= 126; a++)
//	{
//		cout << a<<' ';
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int i = 1, j = 1;
//	for (i = 2; i <= 10;i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			cout << '<' << i << ',' << j << '>'<<' ';
//		}
//	}
//	return 0;
//}



//#include<iostream>								//���10000���ڸ�λ����ʮλ����Ϊ���ڡ�������
//using namespace std;
//int main()
//{
//	int i = 1;
//	int a(0), b(0), c(0), d(0);
//	int e(0), f(0), g(0);
//	for (i = 1; i <= 10000; i++)
//	{
//		a = i % 10;
//		e = i / 10;
//		b = e % 10;
//		f = e / 10;
//		c = f % 10;
//		g = f / 10;
//		d = g % 10;
//		if (i < 100)
//		{
//			if (a > b)
//				cout << i<<' ';
//		}
//		else
//		{
//			if (a > b && b > c && c > d)
//				cout << i<<' ';
//		}
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 122;
//	int b = 0;
//	b = a % 100;
//	cout << b;
//	return 0;
//}



//#include< iostream>								//����һ����N�ı�׼�ֽ�ʽ
//using namespace std;
//int main()
//{
//	int n, i = 2, k = 1;
//	cin >> n;
//	while (i <= n)
//	{
//		while (n % i == 0)
//		{
//			if (k)k = 0;
//			else cout << '*';
//			cout << i;
//			n /= i;
//		}
//		i++;
//	}
//			return 0;	
//}


#include<iostream>								//����һ����N�ı�׼�ֽ�ʽ
using namespace std;
int main()
{
	int N, n, i;
	cout << "����N: ";
	cin >> N;
	n = N;
	cout << N << "=";
	for (i = 2; i <= sqrt(n);)
	{
		if (n % i==0)
		{
			cout << i << "*"; 
			n /= i;
		}
		else i++;
	}
	cout << n << endl;
	return 0;
}
