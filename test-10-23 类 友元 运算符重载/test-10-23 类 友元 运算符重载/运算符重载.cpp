////数据类型改变
//
//#include<iostream>								//加号运算符重载
//using namespace std;
//
//class Person
//{
//public:
//	//1.成员函数重载+号
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.A = A + p.A;
//	//	temp.B = B + p.B;
//	//	return temp;
//	//}
//
//	int A;
//	int B;
//};
//
////2.全局函数重载+号
//Person operator+(Person& a, Person& b)
//{
//	Person temp;
//	temp.A = a.A + b.A;
//	temp.B = a.B + b.B;
//	return temp;
//}
//
//Person operator+(Person& a, int b)
//{
//	Person temp;
//	temp.A = a.A + b;
//	temp.B = a.B + b;
//	return temp;
//}
//
//void test01()
//{
//	Person a;
//	a.A = 10;
//	a.B = 90;
//	Person b;
//	b.A = 99;
//	b.B = 1;
//
//	//Person c = a + b;
//	////Person c=a.operator+(b)	//成员函数重载本质调用
//	//cout << c.A << " " << c.B << endl;
//
//	Person c = a + b;
//	//Person c=operator+(a,b)	//全局函数重载本质调用
//	cout << c.A << " " << c.B << endl;
//
//	 c = a + b;
//	cout << c.A << " " << c.B << endl;
//
//
//	//运算符重载也可以函数重载
//	Person i = a + 10;
//	cout << "运算符重载的函数重载：" << i.A << " " << i.B << endl;
//}
//int main()
//{
//	test01();
//
//	return 0;
//}
