//#include<iostream>									//空指针访问成员函数
//using namespace std;
//
//class Person
//{
//public:
//	void func1()
//	{
//		cout << "成员函数1\n";
//	}
//
//	//void func2()
//	//{
//	//	cout << "成员函数2" << age << endl;
//	//	//同下
//	//	cout << "成员函数2" << this ->age << endl;
//	//	//传入的指针为空无法访问
//	//}
//
//	void func2()
//	{
//		if (this == NULL)
//			return;
//		cout << "成员函数2" << age << endl;
//	}
//	int age;
//};
//
//void test01()
//{
//	Person* a = NULL;
//	a->func1();
//	a->func2();
//}
//
//
//int main()
//{
//
//	test01();
//	return 0;
//}


//#include<iostream>									//常函数	const修饰
//using namespace std;
//
//class Person
//{
//public:
//	//void func1()
//	//{
//	//	this = NULL;	//不能修改指针指向，this指针常量
//	//}
//
//	void func1() const	//常函数	const func1* const this，const修饰的this指向
//	{
//		this->A = 10;//指针指向的值不可修改
//		this->B = 10;
//	}
//
//	void func2() {}
//
//	int A;
//	mutable int B;	//特殊变量，const修饰的函数能够修改此值
//};
//
//
////常对象
//void test01()
//{
//	const Person p;
//	p.A = 10;
//	p.B = 10;
//
//	//常对象只能调用常函数
//	p.func1();
//	p.func2();	//普通成员函数可以修改属性
//}
//int main()
//{
//
//	return 0;
//}