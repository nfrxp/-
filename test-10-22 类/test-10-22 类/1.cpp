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


#include<iostream>											//�������Ϊ��һ����ĳ�Ա
using namespace std;

class Phone
{
public:
	Phone(string PName)
	{
		phone = PName;
		cout << "Phone �Ĺ���\n";
	}

	~Phone() {
		cout << "Phone ������\n";
	}
	string phone;
};
class Person
{
public:
	Person(string name,string phone):MName(name),MPhone(phone)
	{
		cout << "Person �Ĺ���\n";
	}
	~Person()
	{
		cout << "Person ������\n";
	}
	string MName;
	Phone MPhone;
};

void test01()
{
	Person p("����", "����");
	cout << p.MName << " ���ֻ�Ʒ���� " << p.MPhone.phone << endl;
}
int main()
{
	test01();
	return 0;
}