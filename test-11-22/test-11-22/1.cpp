//#include<iostream>
//using namespace std;
//class Year
//{
//private:
//	int a;
//public:
//	Year(int i) { a = i; }
//	Year operator ++()							//前置++
//	{
//		++a;
//		return Year(a);
//	}
//
//	Year operator++(int)
//	{
//		int temp = a;
//		a++;
//		return Year(temp);
//	}
//	void get_a()
//	{
//		cout << "a = " << a << endl;
//	}
//};
//
//int main()
//{
//	Year p(17);
//	p.get_a();
//	++p;
//	p.get_a();
//	p++;
//	p.get_a();
//
//	return 0;
//}


#include<iostream>
using namespace std;
class Complex
{
public:
	friend Complex operator +(Complex& a, Complex& b);		//声明非成员函数为类友元函数
	Complex(float High, float Weight): high(High),weight(Weight){	}

	void get_hw()
	{
		cout << "high = " << high << endl;
		cout << "weight = " << weight << endl;
	}
private:
	float high;
	float weight;
};

Complex operator +(Complex& a, Complex& b)		//此双目运算符重载为非成员函数，且返回值类型为Complex类
{
	//a.high + b.high;
	//a.weight + b.weight;
	return Complex(a.high + b.high, a.weight + b.weight);
}
int main()
{
	Complex i(169.9, 170.1);
	Complex j(170.1, 169.9);
	Complex k(0, 0);
	k=i + j;			//此处的赋值运算符不用重载
	k.get_hw();
	return 0;
}