//#include<iostream>
//using namespace std;
//
//class Java
//{
//public:
//	void header()
//	{
//		cout << "公共头部：首页、标题、目录……" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部：联系方式、法律……" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类：Jave、Python、C++……" << endl;
//	}
//	void content()
//	{
//		cout << "Jave视频如下……" << endl;
//	}
//};
//
//class Python
//{
//public:
//	void header()
//	{
//		cout << "公共头部：首页、标题、目录……" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部：联系方式、法律……" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类：Jave、Python、C++……" << endl;
//	}
//	void content()
//	{
//		cout << "Python视频如下……" << endl;
//	}
//};
//
//class C
//{
//public:
//	void header()
//	{
//		cout << "公共头部：首页、标题、目录……" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部：联系方式、法律……" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类：Jave、Python、C++……" << endl;
//	}
//	void content()
//	{
//		cout << "C视频如下……" << endl;
//	}
//};
//
//void test01()
//{
//	Java a;
//	a.content(); a.footer(); a.header(); a.left();
//
//	cout << endl<< "···········" << endl;
//	Python b;
//	b.content(); b.footer(); b.header(); b.left();
//
//	cout << endl<< "···········" << endl;
//	C c;
//	c.content(); c.footer(); c.header(); c.left();
//
//}
//
//
//int main() {
//
//	test01();
//	return 0;
//}





//#include<iostream>										//继承	减少重复代码
//using namespace std;									//语法：	class 子类： 继承方式	父类
//														//子类：又名	派生类
////公共页面										  		 父类： 又名	基类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "公共头部：首页、标题、目录……" << endl;
//	}
//	void footer()
//	{
//		cout << "公共底部：联系方式、法律……" << endl;
//	}
//	void left()
//	{
//		cout << "公共分类：Jave、Python、C++……" << endl;
//	}
//};
//
////Java页面	继承
//class Java:public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学习视频" << endl;
//	}
//};
//
////Python页面	继承
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学习视频" << endl;
//	}
//};
//
////CPP页面	继承
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "CPP学习视频" << endl;
//	}
//};
//
//void test01()
//{
//	Java a;
//	a.content(); a.footer(); a.header(); a.left();
//
//	cout << endl<< "···········" << endl;
//	Python b;
//	b.content(); b.footer(); b.header(); b.left();
//
//	cout << endl<< "···········" << endl;
//	CPP c;
//	c.content(); c.footer(); c.header(); c.left();
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>											//继承方式
//using namespace std;
//
////父类
//class Father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//
////公共继承
//class Son1:public Father
//{
//public:
//	void fun()
//	{
//		a = 10;	//父类中公共成员	到子类中仍为	公共成员
//		b = 10;	//父类中保护成员	到子类中仍为	保护成员
//		c = 10;	//父类中私有成员	子类无法访问
//	}
//};
//
//void test01()
//{
//	Son1 a;
//	a.a = 10;	//在子类中为公共成员	类外可以访问
//	a.b = 10;	//在子类中为保护成员	类外不可访问
//}
//
////保护继承
//class Son2 :protected Father
//{
//public:
//	void fun()
//	{
//		a = 10;	//父类中公共成员	到子类中变为	保护成员
//		b = 10;	//父类中保护成员	到子类中仍为	保护成员
//		c = 10;	//父类中私有成员	子类不能访问
//	}
//};
//
//void test02()
//{
//	Son2 b;
//	b.a = 10;	//在子类中为保护成员	类外无法访问
//	b.b = 10;	//在子类中为保护成员	类外无法访问
//}
//
//
////私有继承
//class Son3 :private Father
//{
//public:
//	void fun()
//	{
//		a = 10;	//父类中公共成员	到子类中变为	私有成员
//		b = 10;	//父类中保护成员	到子类中变为	私有成员
//		c = 10;	//父类中私有成员	子类无法访问
//	}
//
//};
//
//void test03()
//{
//	Son3 c;
//	c.a = 10;	//在子类中为私有成员	类外无法访问
//	c.b = 10;	//在子类中为私有成员	类外无法访问
//
//}
//int main()
//{
//	return 0;
//}


//#include<iostream>								//继承中对象模型
//using namespace std;								//VS开发人员命令提示符(9:00)
//
//class Father
//{
//public:
//	int a;
//protected:
//	int b;
//private:
//	int c;
//};
//
//
//class Son :public Father
//{
//public:
//	int d;
//};
//
//void test01()
//{
//	cout << "sizeof(Son)=" << sizeof(Son) << endl;
//	//父类中所有非静态成员属性都会被子类继承下来
//	//父类中私有成员属性是被编译器隐藏了，因此访问不到，但确实被继承下去了
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>									//继承中的构造和析构顺序
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数\n";
//	}
//	~Base()
//	{
//		cout << "Base的析构函数\n";
//	}
//};
//
////继承
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数\n";
//	}
//	~Son()
//	{
//		cout << "Son的析构函数\n";
//	}
//};
//
//void test01()
//{
//	//Base a;
//	Son b;
//	//在继承中，先调用父类的构造函数，再调用子类的构造函数，再析构，析构顺序于构造顺序相反
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>									//继承中	同名问题（成员、函数）
//using namespace std;
//
//
//class Base
//{
//public:
//	int A=10;
//	void fun()
//	{
//		cout << "Base 的函数调用\n";
//	}
//
//	void fun(int a)
//	{
//		cout << "Base 的函数调用\n";
//	}
//};
//
//class Son:public Base
//{
//public:
//	int A=20;
//	void fun()
//	{
//		cout << "Son 的函数调用\n";
//	}
//};
//
//void test01()
//{
//	Son a;
//	cout << a.A << endl;		//对象同名时，默认调用子类中的对象
//	cout << a.Base::A << endl;
//
//	a.fun();
//	a.Base::fun();
//
//	a.fun(10);		//子类与父类函数同名时，子类隐藏父类中的	所有	同名函数
//	a.Base::fun(10);
//}
//int main()
//{
//	test01();
//	return 0;
//}

//#include<iostream>										//继承中 同名静态成员问题
//using namespace std;
//
//class Base
//{
//public:
//	static int A;
//	//静态成员：类内声明，类外定义
//
//	static void fun()
//	{
//		cout << "Base	中 静态函数的调用\n";
//	}
//	static void fun(int p)
//	{
//		cout << "Base	中 静态函数的调用\n";
//	}
//};
//int Base::A = 10;
//
//
//class Son:public Base
//{
//public:
//	static int A ;
//	static void fun()
//	{
//		cout << "Son	中 静态函数的调用\n";
//	}
//};
//int Son::A = 20;
//
//void test01()	//同名静态成员
//{
//	//1.静态成员：通过对象访问
//	cout << "通过对象访问静态对象\n";
//	Son a;
//	cout << a.A << endl;
//	cout << a.Base::A << endl;
//
//	//2.静态成员：通过类名访问
//	cout << "通过类名访问静态对象\n";
//	cout << Son::A << endl;
//	cout << Son::Base::A << endl;	//类名 作用域
//}
//
//void test02()	//同名静态函数
//{
//	//1.静态函数调用：通过对象访问
//	cout << "通过对象访问静态函数\n";
//	Son a;
//	a.fun();
//	a.Base::fun();
//
//	//2.静态函数调用：通过类名访问
//	cout << "通过类名访问静态函数\n";
//	Son::fun();
//	Son::Base::fun();
//	//Son::fun(11);	//子类父类存在同名函数时，子类隐藏父类中的	所有	同名函数
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}