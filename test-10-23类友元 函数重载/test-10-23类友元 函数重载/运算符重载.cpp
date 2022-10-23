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



	//#include<iostream>										//左移运算符重载(cout 输出)
	//using namespace std;
	//
	//class Person
	//{
	//	friend ostream& operator<<(ostream& out, Person& p);
	//	friend void test01();
	//public:
	//	////成员函数实现重载	行不通，无法实现cout在左侧
	//	//void operator<<(cout)
	//	//{
	//	//}
	//private:
	//	int A;
	//	int B;
	//};
	//
	////全局函数
	////ostream& operator<<(ostream &cout, Person& p)
	////{
	////	cout << "p.A=" << p.A << " p.B=" << p.B << endl;
	////	return cout;
	////}
	////同下
	//ostream& operator<<(ostream& out, Person& p)
	//{
	//	out << "p.A=" << p.A << " p.B=" << p.B << endl;
	//	return out;
	//}
	//void test01()
	//{
	//	Person a;
	//	a.A = 10;
	//	a.B = 99;
	//
	//	//cout << "a.A=" << a.A << " a.B=" << a.B << endl;
	//	//cout << a;
	//	cout << a << endl;//链式编程
	//}
	//int main()
	//{
	//	test01();
	//	return 0;
	//}

	//#include<iostream>											//重载++运算符
	//using namespace std;
	//
	//class Person
	//{
	//	//friend ostream& operator<<(ostream& cout, Person& p);
	//	friend ostream& operator<<(ostream& cout, Person p);
	//public:
	//	//1.前置++重载
	//	Person& operator++()
	//	{
	//		//1.先++
	//		age++;
	//		//2.在返回
	//		return *this;
	//	}
	//
	//	//2,后置++重载
	//	Person operator++(int)			//int 占位符
	//	{
	//		//1.先记录原值，再加加
	//		Person temp = *this;
	//		age++;
	//		//2.返回原值
	//		return temp;
	//	}
	//	Person()
	//	{
	//		age =0;
	//	}
	//private:
	//	int age;
	//
	//};
	//
	////重载<<运算符
	////ostream& operator<<(ostream& cout, Person& p)
	////{
	////	cout << p.age << endl;
	////	return cout;
	////}
	//
	//ostream& operator<<(ostream& cout, Person p)
	//{
	//	cout << p.age << endl;
	//	return cout;
	//}
	//
	//void test01()
	//{
	//	Person a;
	//	cout << a << endl;
	//	//cout << ++a<<endl;
	//	cout << ++(++a) << endl;
	//}
	//
	//void test02()
	//{
	//	Person b;
	//	cout << b++ << endl;
	//	cout << b << endl;
	//}
	//int main()
	//{
	//	//test01();
	//	test02();
	//	return 0;
	//}

