
//#include<iostream>									//立方体类，求面积、体积，并比较两立方体是否相等
//using namespace std;
//
//class Cube
//{
//public:
//	//设置长
//	void SetL(int l)
//	{		L = l;	}
//	//获取长
//	double GetL()
//	{		return L;	}
//
//	//设置宽
//	void SetW(int w)
//	{		W = w;	}
//	//获取宽
//	double GetW()
//	{		return W;	}
//
//	//设置高
//	void SetH(int h)
//	{		H = h;	}
//	//获取高
//	double GetH()
//	{		return H;	}
//
//	//计算面积
//	double CalculateS()
//	{		return L * H * 2 + L * W * 2 + W * H * 2;	}
//
//	//计算体积
//	double CalculateV()
//	{		return L * H * W;	}
//
//	//成员函数判断两立方体是否相等
//	void isSameClass(Cube& k)
//	{
//		if (GetL() == k.GetL() && GetW() == k.GetW() && GetH() == k.GetH())
//			cout << "成员函数判断：两立方体相等\n";
//		else
//			cout << "成员函数判断：两立方体不相等\n";
//	}
//
//private:
//	double L;
//	double W;
//	double H;
//};
//
////全局函数判断两立方体是否相等
//void isSame(Cube& i, Cube& j)
//{
//	if (i.GetL() == j.GetL() && i.GetW() == j.GetW() && i.GetH() == j.GetH())
//		cout<<"全局函数判断：两立方体相等\n";
//	else
//		cout<<"全局函数判断：两立方体不相等\n";
//}
//
//int main()
//{
//	Cube a;
//	a.SetL(3);
//	a.SetW(3);
//	a.SetH(3);
//	cout << "a立方体的面积为：" << a.CalculateS() << endl << "a立方体的体积为：" << a.CalculateV() << endl<<endl;
//
//	Cube b;
//	b.SetL(3);
//	b.SetW(7);
//	b.SetH(3);
//	cout << "b立方体的面积为：" << b.CalculateS() << endl << "b立方体的体积为：" << b.CalculateV() << endl << endl;
//
//	//全局函数判断
//	isSame(a, b);
//	//成员函数判断
//	a.isSameClass(b);
//	return 0;
//}


//#include<iostream>										//构造和析构函数
//using namespace std;
//
//class Person
//{
//public:
//	Person()					//构造函数可传参
//	{
//		cout << "调用构造函数\n";
//	}
//
//	~Person()					//析构函数不可传参。销毁前调用
//	{
//		cout << "调用析构函数\n\n";
//	}
//};
//
//void test()
//{
//	Person a;
//}
//int main()
//{
//	test();
//
//	Person b;
//	system("pause");
//	return 0;
//}


//#include<iostream>										//构造函数的分类和调用
//using namespace std;
//
////1.按参数分类：无参构造（默认）和有参构造
////2.按类型分类：普通构造和拷贝构造
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造\n";
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "有参构造\n";
//	}
//	void Age()
//	{
//		cout << "年龄为：" << age << endl;
//	}
//
//	Person(const Person& p)			//将p对象拷贝
//	{
//		age = p.age;
//		cout << "拷贝构造函数\n";
//	}
//
//	~Person()
//	{
//		cout << "调用析构函数\n\n";
//	}
//
//private:
//	int age;
//};
//int main()
//{
//	////调用
//	////1.括号法
//	//Person a;//默认构造
//	//Person b(4);//有参构造
//	//Person c(b);//拷贝构造
//
//	////2.显示法
//	//Person a;//比较
//	//Person b = Person(10);//有参构造
//	//Person c = Person(b);//拷贝构造
//
//	////Person(10);//匿名对象，特点：当前执行结束后，系统立马收回匿名对象
//	////cout << "aaa" << endl;
//
//	//3.隐式转换法
//	Person d = 10;//有参构造		等同于 Person d=Person(10)
//	Person e = d;//拷贝构造
//	return 0;
//}


//#include<iostream>									//拷贝构造函数的调用时机
//using namespace std;
////拷贝构造函数的调用时机
////1.使用一个已经创建的对象来初始化一个新的对象
////2.值传递的方式给函数参数传值
////3.值方式返回局部对象
//class Person
//{
//public:
//	Person() {
//		cout << "默认构造函数的调用\n";
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "有参构造函数的调用\n";
//	}
//	Person(const Person& b)
//	{
//		m_age = b.m_age;
//		cout << "拷贝构造函数的调用\n";
//	}
//	~Person() {
//		cout << "析构函数的调用\n";
//	}
//
//
//	int m_age;
//};
//
////1.使用一个已经创建的对象来初始化一个新的对象
//void test1()
//{
//	Person a(20);
//	Person b(a);
//	
//	cout << "b的年龄为：" << b.m_age << endl;
//}
//
////2.值传递的方式给函数参数传值
//void doWork2(Person p)
//{
//
//}
//void test2()
//{
//	Person a;
//	doWork2(a);
//}
//
////3.值方式返回局部对象
//Person doWork3()
//{
//	Person a;
//	cout << (int*)&a << endl;
//	return a;
//}
//void test3()
//{
//	Person b=doWork3();
//	cout << (int*)&b << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}


//#include<iostream>									//构造函数的调用规则
//using namespace std;
////对于类，编译器会自动提供	构造函数、拷贝构造函数和析构函数
//
////1.若只自定义有参构造函数，那编译器不提供默认构造函数，但提供拷贝构造函数
//class Person
//{
//public:
//	//Person () {
//	//	cout << "默认构造函数的调用\n";
//	//}
//
//	Person (int age)
//	{
//		m_age = age;
//		cout << "有参构造函数的调用\n";
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "拷贝构造函数的调用\n";
//	}
//	~Person() {
//		cout << "析构函数的调用\n";
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	Person p;
//	p.m_age=10;
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//}
//int main()
//{
//	test1(); 
//	return 0;
//}






//#include<iostream>									//构造函数的调用规则
//using namespace std;
//
////2.若只自定义了拷贝构造函数，编译器不提供普通构造函数
//class Person
//{
//public:
//	//Person () {
//	//	cout << "默认构造函数的调用\n";
//	//}
//
//	//Person(int age)
//	//{
//	//	m_age = age;
//	//	cout << "有参构造函数的调用\n";
//	//}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "拷贝构造函数的调用\n";
//	}
//	~Person() {
//		cout << "析构函数的调用\n";
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	Person p;
//	p.m_age = 10;
//
//	Person p2(p);
//	cout << "p2的年龄为：" << p2.m_age << endl;
//
//	Person p3=10;
//}
//int main()
//{
//	test1();
//	return 0;
//}