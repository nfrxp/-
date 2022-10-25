//#include<iostream>
//using namespace std;
//
//
//class Person
//{
//
//public:
//	Person(int age) {
//		//Age = &age;
//		Age = new int(age);//在堆区开发一段地址
//	}
//
//private:
//	int* Age;
//};
//
//void test01() {
//	Person p(18);
//}
//int main() {
//	test01();
//	return 0;
//}


//#include<iostream>									//赋值运算符重载
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (Age != NULL)
//		{
//			delete Age;
//		}
//	}
//
//	//重载 赋值运算符
//	Person& operator=(Person& a)
//	{
//		//默认浅拷贝
//		//Age = a.Age;
//
//		//应该先判断是否有属性在堆区，如果有，先释放，再深拷贝
//		if (Age != NULL)
//		{
//			delete Age;
//			Age = NULL;
//		}
//		Age = new int(*a.Age);
//
//		return *this;
//	}
//	int* Age;
//
//};
//
//void test01() 
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.Age << endl;
//	cout << "p1的年龄为：" << *p1.Age << endl;
//
//	Person p2(20);
//	cout << "p2的年龄为：" << *p2.Age << endl;
//
//	p2 = p1;//赋值，堆区浅拷贝，重复析构
//	cout << "p1的年龄为：" << *p1.Age << endl;
//	cout << "p2的年龄为：" << *p2.Age << endl;
//}
//
//void test02()
//{
//	Person a(10);
//	Person b(40);
//	Person c(22);
//	a = b = c;		//b=c没有返回值，为void		链式
//
//	cout << *a.Age << " " << *b.Age << " " << *c.Age << " " << endl;
//}
//int main() {
//	//test01();
//	
//	//int a = 10;
//	//int b = 44;
//	//int c = 99;
//	//a = b = c;
//	//cout << a << " " << b << " " << c << endl;
//
//	test02();
//	return 0;
//}


//#include<iostream>										//关系运算符重载
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		Age = age;
//	}
//
//	int operator>(Person& p)			//>重载
//	{
//		int i = 0;
//		if (Age > p.Age)
//			i = 1;
//		return i;
//	}
//
//	bool operator==(Person& p)			//==重载
//	{
//		
//		if (Age == p.Age)
//			return true;
//		else
//			return false;
//	}
//private:
//	int Age;
//};
//
//void test01()			//>重载
//{
//	Person a(99);
//	Person b(33);
//	int c = a > b;
//	if (c == 0)
//		cout << "a>b" << endl;
//	else
//		cout << "a<b" << endl;
//
//}
//
//void test02()
//{
//	Person a(22);
//	Person b(88);
//
//	if (a == b)
//		cout << "a==b" << endl;
//	else
//		cout << "a!=b" << endl;
//}
//int main() {
//	//test01();
//	test02();
//	return 0;
//}


//#include<iostream>										//函数调用运算符（）重载
//using namespace std;
//
////Print类 
//class Print
//{
//
//public:
//	void operator()(string a)
//	{
//		cout << a << endl;
//	}
//};
//
//void Print2(string a)
//{
//	cout << a << endl;
//}
//void test01()
//{
//	Print a;
//	a("hello");		//使用起来非常类似于函数调用，称为仿函数
//
//	Print2("hello");
//}
//
//
////加法类
//class Add
//{
//public:
//	int operator()(int i,int j)
//	{
//		int k = i + j;
//		return k;
//	}
//};
//
//void test02()
//{
//	Add a;
//	int ret=a(11,22);
//	cout << ret << endl;
//
//	//匿名函数对象
//	cout << Add()(11, 22) << endl;
//}
//int main() {
//	//test01();
//	test02();
//
//	return 0;
//}