//#include<iostream>
//using namespace std;
////父类
//class B {
//public:
//	B();
//	B(int i);
//	~B();
//	void print() const;
//private:
//	int b;
//};
//B::B() {
//	b = 0;
//	cout << "B's default constructor called." << endl;
//}
//B::B(int i) {
//	b = i;
//	cout << "B's constructor called." << endl;
//}
//B::~B() {
//	cout << "B's destructor called." << endl;
//}
//void B::print() const {
//	cout << b << endl;
//}
//
////派生类
//class C : public B {
//public:
//	C();
//	C(int i, int j);
//	~C();
//	void print() const;		//重定义
//private:
//	int c;
//};
//C::C() {
//	c = 0;
//	cout << "C's default constructor called." << endl;
//}
//C::C(int i, int j) : B(i), c(j) {
//	cout << "C's constructor called." << endl;
//}
//C::~C() {
//	cout << "C's destructor called." << endl;
//}
//void C::print() const {
//	B::print();
//	cout << c << endl;
//}
//
//int main() {
//	C obj(5, 6);
//	obj.print();
//	return 0;
//}




#include <iostream>
using namespace std;
class Base1 {	//基类Base1，构造函数有参数
public:
	Base1(int i) { cout << "Constructing Base1 " << i << endl; }
};
class Base2 {	//基类Base2，构造函数有参数
public:
	Base2(int j) { cout << "Constructing Base2 " << j << endl; }
};
class Base3 {	//基类Base3，构造函数无参数
public:
	Base3() { cout << "Constructing Base3 *" << endl; }
};

class Derived : public Base2, public Base1, public Base3 {
	//派生新类Derived，注意基类名的顺序
public:	//派生类的公有成员
	Derived(int a, int b, int c, int d) : Base1(a), member2(d), member1(c), Base2(b)
	{ }
	//注意基类名的个数与顺序，//注意成员对象名的个数与顺序
private:	//派生类的私有成员对象
	Base1 member1;	//子对象,必须在头部传参
	Base2 member2;
	Base3 member3;
};

int main() {
	Derived obj(1, 2, 3, 4);
	return 0;
}
