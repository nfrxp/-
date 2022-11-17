////8_3.cpp
//#include <iostream>
//using namespace std;
//
//class Complex {	//复数类定义
//public:	//外部接口
//	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//构造函数
//	friend Complex operator + (const Complex& c1, const Complex& c2);	//运算符+重载
//	friend Complex operator - (const Complex& c1, const Complex& c2);	//运算符-重载
//	friend ostream& operator << (ostream& out, const Complex& c); //运算符<<重载
//private:	//私有数据成员
//	double real;	//复数实部
//	double imag;	//复数虚部
//};
//
//Complex operator + (const Complex& c1, const Complex& c2) {	//重载运算符函数实现
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
//
//Complex operator - (const Complex& c1, const Complex& c2) {	//重载运算符函数实现
//	return Complex(c1.real - c2.real, c1.imag - c2.imag);
//}
//
//ostream& operator << (ostream& out, const Complex& c) {	//重载运算符函数实现
//	out << "(" << c.real << ", " << c.imag << ")";
//	return out;
//}
//
//int main() {	//主函数
//	Complex c1(5, 4), c2(2, 10), c3;	//定义复数类的对象
//	cout << "c1 = " << c1 << endl;
//	cout << "c2 = " << c2 << endl;
//	c3 = c1 - c2;	//使用重载运算符完成复数减法
//	cout << "c3 = c1 - c2 = " << c3 << endl;
//	c3 = c1 + c2;	//使用重载运算符完成复数加法
//	cout << "c3 = c1 + c2 = " << c3 << endl;
//
//
//	//一下步骤能够进行的前提是：构造函数中对形参赋了 “默认值”
//
//
//
//	c3 = c1 + 2;	//使用重载运算符完成 类与数的加法
//	cout << "c3 = c1 + 2 = " << c3 << endl;
//	
//	c3 = 1 + c2;	//使用重载运算符完成 数与类的加法
//	cout << "c3 = 1 + c2 = " << c3 << endl;
//	
//	c3 = 1 + 2;	//使用+运算符完成		数与数的加法，再调用构造函数进行类型转换
//	cout << "c3 = c1 + c2 = " << c3 << endl;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//class Clock {	//时钟类定义
//public:	//外部接口
//	Clock(int hour = 0, int minute = 0, int second = 0);
//	void showTime() const;
//	Clock& operator ++ ();		//前置单目运算符重载
//	Clock operator ++ (int);	//后置单目运算符重载
//private:	//私有数据成员
//	int hour, minute, second;
//};
//
//Clock::Clock(int hour/* = 0 */, int minute/* = 0 */, int second/* = 0 */) {
//	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60
//		&& 0 <= second && second < 60) {
//		this->hour = hour;
//		this->minute = minute;
//		this->second = second;
//	}
//	else
//		cout << "Time error!" << endl;
//}
//void Clock::showTime() const {	//显示时间函数
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//
//Clock& Clock::operator ++ () {	//前置单目运算符重载函数
//	second++;
//	if (second >= 60) {
//		second -= 60;
//		minute++;
//		if (minute >= 60) {
//			minute -= 60;
//			hour = (hour + 1) % 24;
//		}
//	}
//	return *this;
//}
//
//Clock Clock::operator ++ (int) {	//后置单目运算符重载
//	//注意形参表中的整型参数
//	Clock old = *this;
//	++(*this);	//调用前置“++”运算符
//	return old;
//}
//int main() {
//	Clock myClock(23, 59, 59);
//	cout << "First time output: ";
//	myClock.showTime();
//	cout << "Show myClock++:    ";
//	(myClock++).showTime();
//	cout << "Show ++myClock:    ";
//	(++myClock).showTime();
//	return 0;
//}



#include <iostream>
using namespace std;

class Base1 { //基类Base1定义
public:
	virtual void display() const;	//虚函数
};
void Base1::display() const {
	cout << "Base1::display()" << endl;
}

class Base2:public Base1 { //公有派生类Base2定义
public:
	void display() const;	//覆盖基类的虚函数
};
void Base2::display() const {
	cout << "Base2::display()" << endl;
}
class Derived : public Base2 { //公有派生类
public:
	void display() const; 	//覆盖基类的 "虚函数"，无法通过派生类访问在基类已经被覆盖的成员函数
};
void Derived::display() const {
	cout << "Derived::display()" << endl;
}

void fun(Base1* ptr) { //参数为指向基类对象的指针
	ptr->display();	//"对象指针->成员名"
}

int main() {	//主函数
	Base1 base1;	//定义Base1类对象
	Base2 base2;	//定义Base2类对象
	Derived derived;	//定义Derived类对象
	fun(&base1);//用Base1对象的指针调用fun函数
	fun(&base2);//用Base2对象的指针调用fun函数
	fun(&derived);//用Derived对象的指针调用fun函数
	return 0;
}
