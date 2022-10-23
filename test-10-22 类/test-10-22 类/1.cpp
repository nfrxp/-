//#include<iostream>										//深拷贝和浅拷贝
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造函数\n";
//	}
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);	//放在堆区
//		cout << "有参构造函数\n";
//	}
//
//	//自己实现拷贝，来解决浅拷贝
//	Person(const Person& p2)
//	{
//		m_age = p2.m_age;
//		//m_height = p2.m_height;  //编译器默认提供的拷贝
//		//实现深拷贝
//		m_height = new int(*p2.m_height);
//		cout<<"拷贝函数\n"<<endl;
//	}
//
//	~Person() 
//	{
//		//析构，对堆区的数据做清楚处理
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "析构函数\n";
//	}
//	int m_age;
//	int* m_height;
//
//};
//
//void test01()
//{
//	Person a(18, 170);
//	cout << "a的年龄为：" << a.m_age << "  a的身高为：" << *a.m_height << endl;
//
//	Person b(a);
//	cout << "b的年龄为：" << b.m_age << "  b的身高为：" << *b.m_height << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>										//初始化列表
//using namespace std;
//
//class Person
//{
//public:
//	////传统的初始化
//	//Person(int a, int b, int c)
//	//{
//	//	A = a;
//	//	B = b;
//	//	C = c;
//	//}
//
//	//初始化列表初始化属性
//	//Person() :A(12), B(33), C(32) {}
//	Person(int a, int b, int c) :A(a), B(b), C(c) {}
//	int A;
//	int B;
//	int C;
//};
//
//void test01()
//{
//	//Person p(12, 12, 3);
//	//Person p;
//	Person p(22, 11, 33);
//	cout << "A=" << p.A << endl;
//	cout << "B=" << p.B << endl;
//	cout << "C=" << p.C << endl;
//
//}
//int main()
//{
//	test01();
//
//	return 0;
//}


//#include<iostream>											//类对象作为另一个类的成员
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string PName)
//	{
//		phone = PName;
//		cout << "Phone 的构造\n";
//	}
//
//	~Phone() {
//		cout << "Phone 的析构\n";
//	}
//	string phone;
//};
//class Person
//{
//public:
//	Person(string name,string phone):MName(name),MPhone(phone)
//	{
//		cout << "Person 的构造\n";
//	}
//	~Person()
//	{
//		cout << "Person 的析构\n";
//	}
//	string MName;
//	Phone MPhone;
//};
//
//void test01()
//{
//	Person p("张三", "三星");
//	cout << p.MName << " 的手机品牌是 " << p.MPhone.phone << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>											//静态成员
//using namespace std;
//
//class Person
//{
//public:
//	//静态成员，所有对象共用一份数据
//	//编译阶段就分配内存
//
//	static int m_A;		//类内声明，类外初始化
//
//private:
//	//静态成员变量也有访问权限
//	static int m_B;
//};
//
//int Person::m_A = 10;
//int Person::m_B = 100;
//
//void test01()
//{
//	Person a;
//	cout << a.m_A << endl;
//
//	Person b;
//	b.m_A = 20;
//	cout << a.m_A << endl;			//static 共享
//}
//
//void test02()
//{
//	//静态成员变量的两种访问方式
//	//1.通过创建对象访问
//	Person a;
//	cout << "通过对象访问：" << a.m_A << endl;
//
//	//2.通过类名直接访问
//	cout << "通过类名直接访问：" << Person::m_A << endl;
//
//	//cout << "私有的静态成员变量能否访问？" << Person::m_B << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//#include<iostream>										//静态成员函数
//using namespace std;
//
//class Person
//{
//	//所有对象共享同一个静态成员函数
//	//静态成员函数只能调用静态成员变量
//public:
//	static void func()
//	{
//		A = 100;
//		//B = 100;//静态成员函数无法调用非静态成员函数，无法区分属于哪一个对象的属性。
//		cout << "静态成员函数的调用\n";
//	}
//
//	static int A;
//	int B = 23;
//
//private:
//	//静态成员函数也有访问权限
//	static void func2()
//	{
//		cout << "私有的静态成员函数\n";
//	}
//};
//
//int Person::A = 12;
//
//void test01()
//{
//	//1.通过对象访问
//	Person a;
//	a.func();
//
//	//2.通过类名访问
//	cout << "通过类名访问：";
//	Person::func();
//}
//
//void test02()
//{
//	Person a;
//	a.func2();		//私有的成员函数不可访问
//}
//int main()
//{
//	test01();
//
//	return 0;
//}


//#include<iostream>										//成员函数和成员变量是分开储存的
//using namespace std;
//
//class Person
//{
//public:
//	int B;				//非静态成员变量	属于类的对象上
//	static int C;		//静态成员变量		不属于类的对象上
//	void func(){}		//非静态成员函数	不属于类的对象上
//	static void func2() {}	//静态成员函数  不属于类的成员函数上
//};
//
//void test01()
//{
//	Person a;
//	cout << "空对象的大小：" << sizeof(a) << endl;	//空对象的大小为1，区分对象在内存中的位置
//}
//
//void test02()
//{
//	Person b;
//	cout << "单一非静态变量的大小：" << sizeof(b) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//#include<iostream>									//this指针，指向被调用的成员函数的对象
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//age = age;
//		this->age = age;		//1.区分形参和成员变量
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;			//2.返回对象本身
//	}
//	int age;
//};
//
//void test01()
//{
//	Person a(18);
//	cout << a.age << endl;
//}
//
//void test02()
//{
//	Person a(10);
//	Person b(10);
//
//	b.PersonAddAge(a).PersonAddAge(a).PersonAddAge(a);	//2.返回对象本身
//	cout << "b的年龄为：" << b.age << endl;
//}
//int main()
//{
//	//test01();
//
//	test02();
//	return 0;
//}