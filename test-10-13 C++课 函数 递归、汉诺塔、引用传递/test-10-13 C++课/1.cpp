//#include <iostream>										//��ŵ������
//using namespace std;
//void move(char x,char z)
//{
//	cout << x << "����>" << z<<endl;
//}
//
//
//void hanoi(int n, char x, char y, char z)
//{
//	if (n == 1)
//	{
//		move(x, z);
//	}
//	else
//	{
//		hanoi(n - 1, x, z, y);
//		move(x, z);
//		hanoi(n - 1, y, x, z);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	char x = 'X', y = 'Y', z = 'Z';
//	hanoi(n, x, y, z);
//
//	return 0;
//}


//#include<iostream>										//��ַ��ָ��
//using namespace std;
//
//void swap1(int* px,int* py)
//{
//	int tmp = 0; 
//	tmp = *px; 
//	*px = *py; 
//	*py = tmp;
//}
//
//int main()
//{
//	int num1 = 1; int num2 = 2;
//	swap1(&num1, &num2);
//	printf("swap2 : : num1 = %d num2 = %d\n",num1,num2); 
//
//	return 0;
//}




//#include<iostream>										//���ô���
//using namespace std;
//
//void func(int& b)
//{
//	b = 1;
//}
//int main()
//{
//	int i = 0;
//	int& a = i;
//	func(a);
//	cout << a;
//	return 0;
//}



//#include<iostream>										//Ĭ���β�ֵ
//using namespace std;
//
//int get_V(int x, int y=6, int z=8)
//{
//	return x * y * z;
//}
//
//int main()
//{
//	int x(3), y(4), z(5);
//	int V = 0;
//	V=get_V(x, y, z);
//	cout <<"get_V(x,y,z)="<< V << endl;
//	V = get_V(x, y);
//	cout << "get_V(x,y)=" << V << endl;
//	V = get_V(x);
//	cout << "get_V(x)=" << V << endl;
//	return 0;
//}



//#include<iostream>                                  //���غ���
//using namespace std;
//
//int sumOfSquare(int a, int b) {
//    return a * a + b * b;
//}
//double sumOfSquare(double a, double b) {
//    return a * a + b * b;
//}
//int main() {
//    int m, n;
//    cout << "Enter two integer: ";
//    cin >> m >> n;
//    cout << "Their sum of square: " << sumOfSquare(m, n) << endl;
//
//    double x, y;
//    cout << "Enter two real number: ";
//    cin >> x >> y;
//    cout << "Their sum of square: " << sumOfSquare(x, y) << endl;
//
//    return 0;
//}




//#include<iostream>									//��������
//using namespace std;
//int main()
//{
//	double a = 0;
//	int b = 0; 
//	double c = 0;
//	cin >> b >> c;
//	cout << "a=" << b << "/" << c << "=" << b / c;
//	return 0;
//}


//#include<iostream>									//�������͡�����
//using namespace std;
//int main()
//{
//	int i = 0;
//	cin >> i;
//	double sum = 1 / 2.0 * (i - 2);
//	cout << sum;
//
//	return 0;
//}




//#include<iostream>									//�Զ��庯�����ж��Ƿ�Ϊ����
//using namespace std;
//int func(int i)
//{
//	int j = 2;
//	for (j = 2; j <= i / 2; j++)
//	{
//		if (i % j == 0)
//			return 0;
//	}
//	if (j > i / 2)
//		return i;
//}
//
//int main()
//{
//	int i = 0;
//	cin >> i;
//	int a=func(i);
//	if (a)
//		cout << i << "������";
//	else
//		cout << i << "��������";
//	return 0;
//}


//#include<iostream>								//�ݹ飬��Fibonacci����
//using namespace std;
//
//int F(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else if (n == 3)
//		return 2;
//	else
//	{
//		int sum = F(n - 1) + F(n - 2);
//		return sum;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	cout << "������һ������2������:>";
//	cin >> n;
//	int sum=F(n);
//	cout << "F("<<n<<")="<<sum;
//	return 0;
//}


//#include<iostream>									//�ݹ飬��n�����õ¶���ʽ
//using namespace std;
//int p(int n, int x)
//{
//	switch (n)
//	{
//	case 0:
//		return 1;
//	case 1:
//		return x;
//	default:
//		return ((2 * n - 1) * x * p(n - 1, x) - (n - 1) * p(n - 2, x)) / n;
//	}
//}
//
//int main()
//{
//	int n = 0,x=0;
//	cout << "����������n��x:>";
//	cin >> n>>x;
//	int P = p(n, x);
//	cout <<"p" << n << "("<<x<<")="<<P;
//	return 0;
//	
//}


//#include<iostream>							//�ݹ飬��x��y�η�
//using namespace std;
//
//int getPower(int x, int y)
//{
//	if (y == 1)
//		return x;
//	else if (y == 0)
//		return 1;
//	else if (y < 0)						//��������Ϊint��1���Դ���1����Ϊ0
//		return 0;
//	else
//		return x * getPower(x, y - 1);
//}
//
//double getPower(double x, int y)
//{
//	if (y == 1)
//		return x;
//	else if (y == 0)
//		return 1;
//	else if (y < 0)
//		return 1 / getPower(x, -y);
//	else
//		return x * getPower(x, y - 1);
//}
//
//int main()
//{
//	int a = 0;
//	double b = 0;
//	int m = 0;
//	cout << "����һ������a��һ��ʵ��b��Ϊ������������һ������m��Ϊָ��:>";
//	cin >> a >> b >> m;
//	cout << "����Ϊa "<<getPower(a, m) << endl;
//	cout << "����Ϊb "<<getPower(b, m) << endl;
//
//	return 0;
//}

