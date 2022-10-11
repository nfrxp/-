//#include<iostream>							//辗转相除法，求最大公约数
//using namespace std;
//
//int MAX(int m, int n)
//{
//
//	while (m % n != 0)
//	{
//		int tem = m % n;
//		m = n;
//		n = tem;
//	}
//	if (m % n == 0)
//	{
//		return n;
//	}
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	cin >> m >> n;
//	int max=MAX(m, n);
//	cout << max;
//	return 0;
//}



//#include<iostream>								//试除法，求最大公约数
//using namespace std;
//int main()
//{
//	int m = 0;
//	int n = 0;
//	cin >> m >> n;
//	int min = (m > n) ? n : m;
//	for (;; min--)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			break;
//		}
//	}
//	cout << min;
//
//	return 0;
//}






//#include<iostream>									//输出m，需满足m，m的平方，三次方均为回文数
//using namespace std;
//bool Huishu(unsigned n)		//回文数
//{
//	unsigned i = n;
//	unsigned j = 0;		//变序后的数
//	while (i > 0)
//	{
//
//		j = j * 10 + i % 10;
//		i /= 10;
//	}
//
//	return j==n;
//}
//
//
//int main()
//{
//	unsigned m = 11;
//
//	for (m = 11; m < 1000; m++)
//	{
//		if (Huishu(m) && Huishu(m * m) && Huishu(m * m * m))
//		{
//			cout << "m=" << m << "m*m=" << m * m << "m*m*m=" << m * m * m << endl;
//		}											//可将判断直接方自定义函数中
//	}
//	return 0;
//}


//#include<iostream>									//pow求x的y次方
//using namespace std;
//int main()
//{
//	int i = 0;
//	double j = 0;
//	cin >> i >> j;
//	double z = pow(i, j);
//	cout << z;
//	return 0;
//}



//#include<iostream>								//自定义函数，求x的y次方
//using namespace std;
//
//double power(double x, int  y)
//{
//	int i;
//	double z = 1;
//	for (i = 1; i <= y; i++)
//	{
//		z *= x;
//	}
//	return z;
//}
//
//int main()
//{
//	double x = 0;
//	int y = 1;
//	cin >> x >> y;
//	double z=power(x, y);
//	cout << z;
//	return 0;
//}



//#include<iostream>									//自定义函数，输入8位二进制，输出十进制
//using namespace std;
//
//int Tran(int i)
//{
//	int j = 0;
//	int y = 0;
//	int sum = 0;
//	for (y = 0; y < 8; y++)
//	{
//		int m = i % 10;
//		sum += m*pow(2, y);
//		i /= 10;
//	}
//	return sum;
//
//}
//
//int main()
//{
//	int i = 0;
//	cin >> i;
//	int j = Tran(i);
//	cout <<"二进制"<<i<<"转为十进制为"<< j;
//	return 0;
//}



#include<iostream>									//例3-5，分段函数，正弦函数、阶乘、n次方
using namespace std;
#include<math.h>

double sin_(double x)//自定义正弦函数
{
	double temp = x;
	int n = 1;
	double sum = 0;
	do{
		sum += temp;
		n++;
		temp = temp * (-x * x) / (2 * n - 1) / (2 * n - 2);
		
	} while (fabs(temp) >= 1e-10);
	return sum;
}
int main()
{
	double r(0), s(0);
	double a = 0;
	double k = 0;
	cin >> r >> s;

	if (r * r <= s * s)
	{
		double sum = sin_(r)*sin_(r) + sin_(s)*sin_(s);//正弦平方再求和
		k = pow(sum, 0.5);
	}
	else
	{
		k = 0.5 * sin_(r*s);
	}
	cout << k;
	return 0;
}



//#include <iostream>
//#include <cmath>  /*对C++标准库中数学函数的说明*/
//using namespace std;
//
//const double TINY_VALUE = 1e-10;
//
//double tsin(double x) {
//	double g = 0;
//	double t = x;
//	int n = 1;
//	do {
//		g += t;
//		n++;
//		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
//	} while (fabs(t) >= TINY_VALUE);
//	return g;
//}
//
//
//
//int main() {
//	double k, r, s;
//	cout << "r = ";
//	cin >> r;
//	cout << "s = ";
//	cin >> s;
//	if (r * r <= s * s)
//		k = sqrt(tsin(r) * tsin(r) + tsin(s) * tsin(s));
//	else
//		k = tsin(r * s) / 2;
//	cout << k << endl;
//	return 0;
//}
