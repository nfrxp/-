//#include<iostream>										//��̳��﷨
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
//	//�������г���ͬ����Աʱ����Ҫ��������������
//	//cout << p.A << endl;
//	cout << "Base1�е�A="<<p.Base1::A << endl;
//	cout << "Base2�е�A=" << p.Base2::A << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}




//#include<iostream>										//���μ̳�
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
////������̳н�����μ̳�����
////�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
////Animal���Ϊ �����
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
//	//���μ̳У����������г�Աͬ����������������
//	cout << "Sheep�ļ̳У�" << a.Sheep::Age << endl;
//	cout << "Tuo�ļ̳У�" << a.Tuo::Age << endl;
//	//�������ݣ�ֻ��һ�ݣ������Դ�˷�
//	cout << a.Age << endl;	//�����AgeΪ���ո���ֵ
//}
//int main()
//{
//	test01();
//	return 0;	
//}