//#include <iostream>
//using namespace std;
////复数类定义
//class Complex 
//{	
//public:	//外部接口
//	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//构造函数
//	Complex operator + (const Complex& c2) const;	//运算符+重载成员函数
//	Complex operator - (const Complex& c2) const;	//运算符-重载成员函数
//	void display() const;	//输出复数
//private:	//私有数据成员
//	double real;	//复数实部
//	double imag;	//复数虚部
//};
//Complex Complex::operator + (const Complex& c2) const 
//{	//重载运算符函数实现
//	return Complex(real + c2.real, imag + c2.imag); //创建一个临时无名对象作为返回值
//}
//
//Complex Complex::operator - (const Complex& c2) const 
//{	//重载运算符函数实现
//	return Complex(real - c2.real, imag - c2.imag); //创建一个临时无名对象作为返回值
//}
//void Complex::display() const 
//{
//	cout << "(" << real << ", " << imag << ")" << endl;
//}
//
//
//
//int main() 
//{
//	Complex c1(5, 4), c2(2, 10), c3;	//定义复数类的对象
//	cout << "c1 = "; c1.display();
//	cout << "c2 = "; c2.display();
//	c3 = c1 - c2;	//使用重载运算符完成复数减法
//	cout << "c3 = c1 - c2 = "; c3.display();
//	c3 = c1 + c2;	//使用重载运算符完成复数加法
//	cout << "c3 = c1 + c2 = "; c3.display();
//	c3 = c1 + 3;	//使用重载运算符计算  类与数字相加		强制类型转换
//	cout << "c3 = c1 + 3 = "; c3.display();
//	//c3 = 3 + c1;	//使用重载运算符 不能 计算  数字与类相加
//	c3 = 1 + 3;		//使用重载运算符计算  数字与数字相加	强制类型转换
//	return 0;
//}


#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(double i=0, double j=0) :a(i), b(j) {}
	Complex operator +(const Complex& p)
	{
		return Complex(this->a + p.a, this->b + p.b);
	}

	void print()
	{
		cout << "(" << a << ',' << b << ")" << endl;
	}
private:
	double a;
	double b;
};

int main()
{
	Complex q1(1, 2);
	Complex q2(4, 5);
	Complex q3;	//此时不给参，则在构造函数中应该给默认值
	q3 = q1 + q2;
	//cout << "q3 + q1 + q2 = " << q3.print() << endl;	此处的print没有返回值
	cout << "q3 = q1 + q2 = "; q3.print();
	return 0;
}