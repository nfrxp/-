//#include<iostream>									//��ָ����ʳ�Ա����
//using namespace std;
//
//class Person
//{
//public:
//	void func1()
//	{
//		cout << "��Ա����1\n";
//	}
//
//	//void func2()
//	//{
//	//	cout << "��Ա����2" << age << endl;
//	//	//ͬ��
//	//	cout << "��Ա����2" << this ->age << endl;
//	//	//�����ָ��Ϊ���޷�����
//	//}
//
//	void func2()
//	{
//		if (this == NULL)
//			return;
//		cout << "��Ա����2" << age << endl;
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


//#include<iostream>									//������	const����
//using namespace std;
//
//class Person
//{
//public:
//	//void func1()
//	//{
//	//	this = NULL;	//�����޸�ָ��ָ��thisָ�볣��
//	//}
//
//	void func1() const	//������	const func1* const this��const���ε�thisָ��
//	{
//		this->A = 10;//ָ��ָ���ֵ�����޸�
//		this->B = 10;
//	}
//
//	void func2() {}
//
//	int A;
//	mutable int B;	//���������const���εĺ����ܹ��޸Ĵ�ֵ
//};
//
//
////������
//void test01()
//{
//	const Person p;
//	p.A = 10;
//	p.B = 10;
//
//	//������ֻ�ܵ��ó�����
//	p.func1();
//	p.func2();	//��ͨ��Ա���������޸�����
//}
//int main()
//{
//
//	return 0;
//}