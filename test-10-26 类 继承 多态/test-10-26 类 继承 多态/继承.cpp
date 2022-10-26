//#include<iostream>										//多继承语法
//using namespace std;
//
//class Base1
//{
//public:
//	Base1()
//	{
//		A = 10;
//	}
//	int A;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		A = 20;
//	}
//	int A;
//};
//
//class Son:public Base1,public Base2
//{
//public:
//	int C;
//};
//
//void test01()
//{
//	Son p;
//	cout << "sizeof(p)=" << sizeof(p) << endl;
//	//当父类中出现同名成员时，需要加作用域来区分
//	//cout << p.A << endl;
//	cout << "Base1中的A="<<p.Base1::A << endl;
//	cout << "Base2中的A=" << p.Base2::A << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}




//#include<iostream>										//菱形继承
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		Age = 100;
//	}
//	int Age;
//};
////利用虚继承解决菱形继承问题
////继承之前加上关键字 virtual 变为虚继承
////Animal类称为 虚基类
//class Sheep:virtual public Animal{};
//class Tuo :virtual public Animal {};
//
//class SheepTuo:public Sheep,public Tuo{};
//
//void test01()
//{
//	SheepTuo a;
//	a.Sheep::Age = 100;
//	a.Tuo::Age = 99;	
//	//菱形继承，两个父类中成员同名，加作用域区分
//	cout << "Sheep的继承：" << a.Sheep::Age << endl;
//	cout << "Tuo的继承：" << a.Tuo::Age << endl;
//	//两份数据，只用一份，造成资源浪费
//	cout << a.Age << endl;	//输出的Age为最终赋的值
//}
//int main()
//{
//	test01();
//	return 0;	
//}