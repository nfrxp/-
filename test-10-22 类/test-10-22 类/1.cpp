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


#include<iostream>											//类对象作为另一个类的成员
using namespace std;

class Phone
{
public:
	Phone(string PName)
	{
		phone = PName;
		cout << "Phone 的构造\n";
	}

	~Phone() {
		cout << "Phone 的析构\n";
	}
	string phone;
};
class Person
{
public:
	Person(string name,string phone):MName(name),MPhone(phone)
	{
		cout << "Person 的构造\n";
	}
	~Person()
	{
		cout << "Person 的析构\n";
	}
	string MName;
	Phone MPhone;
};

void test01()
{
	Person p("张三", "三星");
	cout << p.MName << " 的手机品牌是 " << p.MPhone.phone << endl;
}
int main()
{
	test01();
	return 0;
}