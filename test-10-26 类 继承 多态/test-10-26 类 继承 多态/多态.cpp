//#include<iostream>										//��̬��������
//using namespace std;
//
////������
//class Animal
//{
//public:
//	//�麯��
//	virtual void fun()
//	{
//		cout << "�����ڽ�\n";
//	}
//};
////è��
//class Cat:public Animal
//{
//public:
//	void fun()
//	{
//		cout << "Сè�ڽ�\n";
//	}
//};
////����
//class Dog:public Animal
//{
//public:
//	void fun()
//	{
//		cout << "�����ڽ�\n";
//	}
//};
//
////��ַ��󶨣��ڱ���׶�ȷ��������ַ
////��Ҫè˵������ַ�Ͳ�����󶨣���Ҫ�����н׶ΰ󶨣���ַ���
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.������д������麯��	��д������ֵ����ͬ��������ͬ������ͬ
//
////��̬ʹ������
////����ָ������� ָ���������
//void Speak(Animal &animal)
//{
//	animal.fun();
//}
//
//void test01()
//{
//	Cat cat;
//	Speak(cat);
//
//	Dog dog;
//	Speak(dog);
//}
//int main()
//{
//	test01();
//	return 0;
//}


//
//#include<iostream>										//��̬ԭ��
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak()	//
//	{
//		cout << "����˵��\n";
//	}
//};
//
////è
//class Cat:public Animal
//{
//public:
//	void speak()	//��д	�麯����ı�
//	{
//		cout << "Сè˵��\n";
//	}
//};
//
//void Speak(Animal& animal)
//{
//	animal.speak();
//}
//void test01()
//{
//	Cat a;
//	Speak(a);
//}
//int main()
//{
//	test01();
//
//	cout << sizeof(Animal);
//	return 0;
//}



//#include<iostream>											//�స������������
//using namespace std;
//
////��ͨʵ��
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//			return A + B;
//		else if (oper == "-")
//			return A - B;
//		else if (oper == "*")
//			return A * B;
//
//		//��չ�¹��ܣ���Ҫ�޸�Դ��
//		//����ʵ�Ŀ������ᳫ������ԭ��
//		//����ԭ�򣺶���չ���ţ����޸Ĺر�
//	}
//
//	int A;
//	int B;
//};
//
//void test01()
//{
//	Calculator i;
//	i.A = 10, i.B = 90;
//	cout << i.getResult("+") << endl;
//}
//
//
//
////��̬ʵ��
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int A;
//	int B;
//};
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return A + B;
//	}
//};
//
////������
//class SubtractCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return A - B;
//	}
//};
//
////�˷���
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return A * B;
//	}
//};
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ�������ָ���������
//
//	//��̬�ô�
//	// 1����֯�ṹ����
//	// 2���ɶ���ǿ
//	// 3������ǰ�ںͺ�����չ�Լ�ά���Ը�
//	
//
//	//�ӷ�
//	AbstractCalculator* a = new AddCalculator;	//����
//	a->A = 10, a->B = 10;
//	cout << a->getResult() << endl;
//	delete a;	//���ٶ���
//
//	//����
//	AbstractCalculator* b = new SubtractCalculator;
//	b->A = 22, b->B = 99;
//	cout << b->getResult() << endl;
//	delete b;
//
//	//�˷�
//	b = new MulCalculator;
//	b->A = 99, b->B = 0;
//	cout << b->getResult() << endl;
//	delete b;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


#include<iostream>										//���麯����������Ϊ������
using namespace std;

class Base
{
public:
	virtual void fun() = 0;
	//ֻҪ��һ�����麯����������ǳ�����
	// ��������ص�
	// 1���޷�ʵ��������
	// 2������������࣬������д�����еĴ��麯��������Ҳ���ڳ�����
	//
};

class Son:public Base
{
public:

};

class Son2 :public Base
{
public:
	void fun()
	{
		cout << "�ѶԴ��麯��������д\n";
	}
};

void test01()
{
	////1���޷�ʵ��������
	//Base a;
	//new Base;

	////2������������������д���麯��������Ҳ�ǳ�����
	//Son a;

	Base* p = new Son2;
	p->fun();
}
int main()
{
	test01(); 
	return 0;
}