//#include<iostream>							//输入一个整数，使其等于素因数之积
//using namespace std;
//int main()
//{
//	int n;
//	cout << "请输入一个大于一的整数:>";
//	cin >> n;
//	int i = 2;
//	cout << n << "=";
//	for (i = 2; i <= n / 2;)
//	{
//		if (n % i == 0)
//		{
//			cout << i << "*";
//			n /= i;
//		}
//		else
//			i++;
//	}
//	cout << n;
//	return 0;
//}

//#include<iostream>									//分段函数
//#include<math.h>
//using namespace std;
//int main()
//{
//	double x, y,z;
//	cout << "请依次输入x，y:>";
//	cin >> x>>y;
//
//	double sum = x + y;
//	if (x < 0 && y < 0)
//		z = exp(sum);
//	else if (sum >= 1 && sum < 10)
//		z = log(sum);
//	else
//		z = log10(abs(sum) + 1);
//	cout << "z="<<z;
//
//	return 0;
//}