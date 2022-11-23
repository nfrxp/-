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


//#include<iostream>
//using namespace std;
//class Complex
//{
//public:
//	friend Complex operator +(Complex& a, Complex& b);		//声明非成员函数为类友元函数
//	Complex(float High, float Weight): high(High),weight(Weight){	}
//
//	void get_hw()
//	{
//		cout << "high = " << high << endl;
//		cout << "weight = " << weight << endl;
//	}
//private:
//	float high;
//	float weight;
//};
//
//Complex operator +(Complex& a, Complex& b)		//此双目运算符重载为非成员函数，且返回值类型为Complex类
//{
//	//a.high + b.high;
//	//a.weight + b.weight;
//	return Complex(a.high + b.high, a.weight + b.weight);
//}
//int main()
//{
//	Complex i(169.9, 170.1);
//	Complex j(170.1, 169.9);
//	Complex k(0, 0);
//	k=i + j;			//此处的赋值运算符不用重载
//	k.get_hw();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Base1 { //基类Base1定义
//public:
//	virtual void display() const;	//虚函数
//};
//void Base1::display() const {
//	cout << "Base1::display()" << endl;
//}
//
//class Base2:public Base1 { //公有派生类Base2定义
//public:
//	void display() const;	//覆盖基类的虚函数
//};
//void Base2::display() const {
//	cout << "Base2::display()" << endl;
//}
//class Derived : public Base2 { //公有派生类
//public:
//	void display() const; 	//覆盖基类的虚函数
//};
//void Derived::display() const {
//	cout << "Derived::display()" << endl;
//}
//
//void fun(Base1* ptr) { //参数为指向基类对象的指针
//	ptr->display();	//"对象指针->成员名"
//}
//
//int main() {	//主函数
//	Base1 base1;	//定义Base1类对象
//	Base2 base2;	//定义Base2类对象
//	Derived derived;	//定义Derived类对象
//	fun(&base1);//用Base1对象的指针调用fun函数
//	fun(&base2);//用Base2对象的指针调用fun函数
//	fun(&derived);//用Derived对象的指针调用fun函数
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//class Base {
//public:
//	virtual ~Base()									//虚析构
//	{
//		cout << "Base destructor" << endl;
//	}
//};
//
//class Derived : public Base {
//public:
//	Derived()
//	{
//		p = new int(0);
//	}
//	~Derived()
//	{
//		cout << "Derived destructor" << endl;
//		delete p;
//	}
//
//private:
//	int* p;
//};
//
//void fun(Base* b)		//基类指针指向派生类对象
//{			
//	delete b;			//使用delete只能析构基类，在基类的析构函数前加virtual则可同时析构基类和派生类
//}
//
//int main() {
//	Base* b = new Derived();
//	fun(b);
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int n = 10;
//	switch (n)
//	{
//	case 10:n--;
//	case 11:n++;
//	default:++n;
//	}
//
//	cout << n << endl;
//	return 0;
//}

//#include<iostream>						//函数模板
//using namespace std;
//
//template<typename T>
////T abs (T a)			//T根据传入的实参的数据类型来确定
////{
////	return a < 0 ? -a: a;
////}
//
//T abc(int a)			//此时函数模板无效
//{
//	return a < 0 ? -a: a;
//}
//
//
//int main()
//{
//	//int n = -5;
//	//cout << abs(n) << endl;			
//
//	int n = -5;
//	cout << abc(n) << endl;
//	return 0;
//}