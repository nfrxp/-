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
//		Age = new int(age);//�ڶ�������һ�ε�ַ
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


//#include<iostream>									//��ֵ���������
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
//	//���� ��ֵ�����
//	Person& operator=(Person& a)
//	{
//		//Ĭ��ǳ����
//		//Age = a.Age;
//
//		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷţ������
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
//	cout << "p1������Ϊ��" << p1.Age << endl;
//	cout << "p1������Ϊ��" << *p1.Age << endl;
//
//	Person p2(20);
//	cout << "p2������Ϊ��" << *p2.Age << endl;
//
//	p2 = p1;//��ֵ������ǳ�������ظ�����
//	cout << "p1������Ϊ��" << *p1.Age << endl;
//	cout << "p2������Ϊ��" << *p2.Age << endl;
//}
//
//void test02()
//{
//	Person a(10);
//	Person b(40);
//	Person c(22);
//	a = b = c;		//b=cû�з���ֵ��Ϊvoid		��ʽ
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


//#include<iostream>										//��ϵ���������
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
//	int operator>(Person& p)			//>����
//	{
//		int i = 0;
//		if (Age > p.Age)
//			i = 1;
//		return i;
//	}
//
//	bool operator==(Person& p)			//==����
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
//void test01()			//>����
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


//#include<iostream>										//���������������������
//using namespace std;
//
////Print�� 
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
//	a("hello");		//ʹ�������ǳ������ں������ã���Ϊ�º���
//
//	Print2("hello");
//}
//
//
////�ӷ���
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
//	//������������
//	cout << Add()(11, 22) << endl;
//}
//int main() {
//	//test01();
//	test02();
//
//	return 0;
//}