//#include<iostream>								//8-7 类的单目运算符重载
//using namespace std;
//
//class Point
//{
//public:
//	Point(int i, int j) :a(i), b(j) {}
//	Point operator ++()			//前置++
//	{
//		cout << "调用前置++：\n";
//		a++;
//		b++;
//		return *this;
//	}
//
//	Point operator ++(int)		//后置++
//	{
//		cout << "调用后置++：\n";
//		Point temp(0, 0);
//		temp = *this;
//		++*this;
//		return temp;
//	}
//
//
//	Point operator --()			//前置--
//	{
//		cout << "调用前置--：\n";
//		a--;
//		b--;
//		return *this;
//	}
//
//	Point operator --(int)
//	{
//		cout << "调用后置--：\n";
//		Point temp(0, 0);
//		temp = *this;
//		--* this;
//		return temp;
//	}
//	void get_ab()
//	{
//		cout << "a = " << a << endl;
//		cout << "b = " << b << endl;
//
//	}
//private:
//	int a;
//	int b;
//};
//int main()
//{
//	Point p(1, 1);
//	p.get_ab();
//	cout << endl;
//	++p;
//	p.get_ab();
//	p++;
//	p.get_ab();
//
//	--p;
//	p.get_ab();
//	p--;
//	p.get_ab();
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{

	return 0;
}