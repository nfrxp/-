//#include<iostream>										//�����ǳ����
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲ι��캯��\n";
//	}
//	Person(int age, int height)
//	{
//		m_age = age;
//		m_height = new int(height);	//���ڶ���
//		cout << "�вι��캯��\n";
//	}
//
//	//�Լ�ʵ�ֿ����������ǳ����
//	Person(const Person& p2)
//	{
//		m_age = p2.m_age;
//		//m_height = p2.m_height;  //������Ĭ���ṩ�Ŀ���
//		//ʵ�����
//		m_height = new int(*p2.m_height);
//		cout<<"��������\n"<<endl;
//	}
//
//	~Person() 
//	{
//		//�������Զ������������������
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "��������\n";
//	}
//	int m_age;
//	int* m_height;
//
//};
//
//void test01()
//{
//	Person a(18, 170);
//	cout << "a������Ϊ��" << a.m_age << "  a�����Ϊ��" << *a.m_height << endl;
//
//	Person b(a);
//	cout << "b������Ϊ��" << b.m_age << "  b�����Ϊ��" << *b.m_height << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>										//��ʼ���б�
//using namespace std;
//
//class Person
//{
//public:
//	////��ͳ�ĳ�ʼ��
//	//Person(int a, int b, int c)
//	//{
//	//	A = a;
//	//	B = b;
//	//	C = c;
//	//}
//
//	//��ʼ���б��ʼ������
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


//#include<iostream>											//�������Ϊ��һ����ĳ�Ա
//using namespace std;
//
//class Phone
//{
//public:
//	Phone(string PName)
//	{
//		phone = PName;
//		cout << "Phone �Ĺ���\n";
//	}
//
//	~Phone() {
//		cout << "Phone ������\n";
//	}
//	string phone;
//};
//class Person
//{
//public:
//	Person(string name,string phone):MName(name),MPhone(phone)
//	{
//		cout << "Person �Ĺ���\n";
//	}
//	~Person()
//	{
//		cout << "Person ������\n";
//	}
//	string MName;
//	Phone MPhone;
//};
//
//void test01()
//{
//	Person p("����", "����");
//	cout << p.MName << " ���ֻ�Ʒ���� " << p.MPhone.phone << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>											//��̬��Ա
//using namespace std;
//
//class Person
//{
//public:
//	//��̬��Ա�����ж�����һ������
//	//����׶ξͷ����ڴ�
//
//	static int m_A;		//���������������ʼ��
//
//private:
//	//��̬��Ա����Ҳ�з���Ȩ��
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
//	cout << a.m_A << endl;			//static ����
//}
//
//void test02()
//{
//	//��̬��Ա���������ַ��ʷ�ʽ
//	//1.ͨ�������������
//	Person a;
//	cout << "ͨ��������ʣ�" << a.m_A << endl;
//
//	//2.ͨ������ֱ�ӷ���
//	cout << "ͨ������ֱ�ӷ��ʣ�" << Person::m_A << endl;
//
//	//cout << "˽�еľ�̬��Ա�����ܷ���ʣ�" << Person::m_B << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//#include<iostream>										//��̬��Ա����
//using namespace std;
//
//class Person
//{
//	//���ж�����ͬһ����̬��Ա����
//	//��̬��Ա����ֻ�ܵ��þ�̬��Ա����
//public:
//	static void func()
//	{
//		A = 100;
//		//B = 100;//��̬��Ա�����޷����÷Ǿ�̬��Ա�������޷�����������һ����������ԡ�
//		cout << "��̬��Ա�����ĵ���\n";
//	}
//
//	static int A;
//	int B = 23;
//
//private:
//	//��̬��Ա����Ҳ�з���Ȩ��
//	static void func2()
//	{
//		cout << "˽�еľ�̬��Ա����\n";
//	}
//};
//
//int Person::A = 12;
//
//void test01()
//{
//	//1.ͨ���������
//	Person a;
//	a.func();
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ�";
//	Person::func();
//}
//
//void test02()
//{
//	Person a;
//	a.func2();		//˽�еĳ�Ա�������ɷ���
//}
//int main()
//{
//	test01();
//
//	return 0;
//}


//#include<iostream>										//��Ա�����ͳ�Ա�����Ƿֿ������
//using namespace std;
//
//class Person
//{
//public:
//	int B;				//�Ǿ�̬��Ա����	������Ķ�����
//	static int C;		//��̬��Ա����		��������Ķ�����
//	void func(){}		//�Ǿ�̬��Ա����	��������Ķ�����
//	static void func2() {}	//��̬��Ա����  ��������ĳ�Ա������
//};
//
//void test01()
//{
//	Person a;
//	cout << "�ն���Ĵ�С��" << sizeof(a) << endl;	//�ն���Ĵ�СΪ1�����ֶ������ڴ��е�λ��
//}
//
//void test02()
//{
//	Person b;
//	cout << "��һ�Ǿ�̬�����Ĵ�С��" << sizeof(b) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//#include<iostream>									//thisָ�룬ָ�򱻵��õĳ�Ա�����Ķ���
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//age = age;
//		this->age = age;		//1.�����βκͳ�Ա����
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//		return *this;			//2.���ض�����
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
//	b.PersonAddAge(a).PersonAddAge(a).PersonAddAge(a);	//2.���ض�����
//	cout << "b������Ϊ��" << b.age << endl;
//}
//int main()
//{
//	//test01();
//
//	test02();
//	return 0;
//}