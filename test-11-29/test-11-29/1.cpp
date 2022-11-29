//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	fstream file;
//	char msg[] = "This is a test message", buf[20];
//	file.open("Test.txt", ios::out | ios::in | ios::trunc | ios::binary);
//	if (!file) {
//		cout << "File open failed" << endl;
//		exit(1);
//	}
//	file.write(msg, sizeof(msg));
//	file.seekp(0, ios::beg);
//	file.read(buf, 20);
//	cout << file.gcount() << endl;
//	cout << buf << endl; 
//	file.close();
//	return 0;
//}

//8_3.cpp
#include <iostream>
using namespace std;

class Complex {	//复数类定义
public:	//外部接口
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//构造函数
	friend Complex operator + (const Complex& c1, const Complex& c2);	//运算符+重载
	friend Complex operator - (const Complex& c1, const Complex& c2);	//运算符-重载
	friend ostream& operator << (ostream& out, const Complex& c); //运算符<<重载

	friend istream& operator >> (istream& in,Complex& c);	//重载运算符>>
private:	//私有数据成员
	double real;	//复数实部
	double imag;	//复数虚部
};

Complex operator + (const Complex& c1, const Complex& c2) {	//重载运算符函数实现
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator - (const Complex& c1, const Complex& c2) {	//重载运算符函数实现
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

ostream& operator << (ostream& out, const Complex& c) {	//重载运算符函数实现
	out << "(" << c.real << ", " << c.imag << ")";
	return out;
}

istream& operator>>(istream& in, Complex& d) {
	in >> d.real >>d.imag;
	return in;
}

int main() {	//主函数
	Complex c1(5, 4), c2(2, 10), c3(1,1);	//定义复数类的对象
	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	c3 = c1 - c2;	//使用重载运算符完成复数减法
	cout << "c3 = c1 - c2 = " << c3 << endl;
	c3 = c1 + c2;	//使用重载运算符完成复数加法
	cout << "c3 = c1 + c2 = " << c3 << endl;

	cin  >> c3;
	cout << "c3 = " << c3;
	return 0;
}
