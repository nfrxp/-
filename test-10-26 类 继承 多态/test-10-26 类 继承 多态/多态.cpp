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



#include<iostream>										//��̬ԭ��
using namespace std;

class Animal
{
public:
	virtual void speak()	//
	{
		cout << "����˵��\n";
	}
};

//è
class Cat:public Animal
{
public:
	void speak()	//��д	�麯����ı�
	{
		cout << "Сè˵��\n";
	}
};

void Speak(Animal& animal)
{
	animal.speak();
}
void test01()
{
	Cat a;
	Speak(a);
}
int main()
{
	test01();

	cout << sizeof(Animal);
	return 0;
}