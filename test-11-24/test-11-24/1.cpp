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

//#include<iostream>
//using namespace std;
//
//class BaseClass
//{
//public:
//	virtual void fn1()
//	{
//		cout << "调用BaseClass的虚函数fn1\n";
//	}
//
//	void fn2()
//	{
//		cout << "调用BaseClass的函数fn2\n";
//	}
//};
//
//
//class DerivedClass:public BaseClass
//{
//public:
//	void fn1()
//	{
//		cout << "调用DerivedClass的函数fn1\n";
//	}
//
//	void fn2()
//	{
//		cout << "调用DerivedClass的函数fn2\n";
//	}
//};
//int main()
//{
//	DerivedClass p;
//	BaseClass* a = &p;
//	DerivedClass* b = &p;
//	a->fn1();
//	a->fn2();
//	b->fn1();
//	b->fn2();
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
//class BaseClass
//{
//public:
//	virtual~BaseClass()
//	{
//		cout << "调用BaseClass的虚析构函数\n";
//	}
//};
//
//class DerivedClass:public BaseClass
//{
//public:
//	~DerivedClass()
//	{
//		cout << "调用DerivedClass的析构函数\n";
//	}
//};
//int main()
//{
//	BaseClass* a = new DerivedClass;		//动态分配
//	delete a;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Point
//{
//public:
//	friend Point operator+(Point& p1,Point& p2);
//	Point(int i, int j) :x(i),y(j) {}
//	void get_xy()
//	{
//		cout << "(" << x << "," << y << ")" << endl;
//	}
//private:
//	int x;
//	int y;
//};
//
//Point operator+(Point& p1, Point& p2)
//{
//	return Point(p1.x + p2.x, p1.y + p2.y);
//}
//int main()
//{
//	Point p1(1, 1);
//	Point p2(2, 2);
//	Point p3(0, 0);
//	p3 = p1 + p2;
//	cout << "p3 = p1 + p2 = "; p3.get_xy();
//	return 0;
//}