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


//#include<iostream>										//���麯����������Ϊ������
//using namespace std;
//
//class Base
//{
//public:
//	virtual void fun() = 0;
//	//ֻҪ��һ�����麯����������ǳ�����
//	// ��������ص�
//	// 1���޷�ʵ��������
//	// 2������������࣬������д�����еĴ��麯��������Ҳ���ڳ�����
//	//
//};
//
//class Son:public Base
//{
//public:
//
//};
//
//class Son2 :public Base
//{
//public:
//	void fun()
//	{
//		cout << "�ѶԴ��麯��������д\n";
//	}
//};
//
//void test01()
//{
//	////1���޷�ʵ��������
//	//Base a;
//	//new Base;
//
//	////2������������������д���麯��������Ҳ�ǳ�����
//	//Son a;
//
//	Base* p = new Son2;
//	p->fun();
//}
//int main()
//{
//	test01(); 
//	return 0;
//}



//#include<iostream>									//��̬ ������Ʒ
//using namespace std;
//
//class AbstractDrink
//{
//public:
//	//��ˮ
//	virtual void water() = 0;
//	//����
//	virtual void pour() = 0;
//	//�ֱ�
//	virtual void separate() = 0;
//	//�Ӹ���
//	virtual void add() = 0;
//
//	//һ������
//	void func()
//	{
//		water();
//		pour();
//		separate();
//		add();
//	}
//};
//
////�ݲ�
//class Tea:public AbstractDrink
//{
//public:
//	//��ˮ
//	virtual void water()
//	{
//		cout << "�տ�ˮ\n";
//	}
//	//����
//	virtual void pour()
//	{
//		cout << "�ݲ�Ҷ\n";
//	}
//	//�ֱ�
//	virtual void separate()
//	{
//		cout << "�ֱ�\n";
//	}
//	//�Ӹ���
//	virtual void add()
//	{
//		cout << "�����\n";
//	}
//
//	//һ������
//	void func()
//	{
//		water();
//		pour();
//		separate();
//		add();
//	}
//};
//
////��������
//class Coffee :public AbstractDrink
//{
//public:
//	//��ˮ
//	virtual void water()
//	{
//		cout << "��ˮ\n";
//	}
//	//����
//	virtual void pour()
//	{
//		cout << "�ݿ��ȷ�\n";
//	}
//	//�ֱ�
//	virtual void separate()
//	{
//		cout << "�ֱ�\n";
//	}
//	//�Ӹ���
//	virtual void add()
//	{
//		cout << "��ţ��\n";
//	}
//
//	//һ������
//	void func()
//	{
//		water();
//		pour();
//		separate();
//		add();
//	}
//};
//
//void doWork(AbstractDrink* a)
//{
//	a->func();
//	delete a;
//}
//
//void test01()
//{
//	doWork(new Tea);
//	cout << "------------" << endl;
//	doWork(new Coffee);
//}
//int main()
//{
//	test01();
//	return 0;
//}



//#include<iostream>									//��������	�������ʹ�������
//using namespace std;
//
//class Animal {
//public:
//	Animal()
//	{
//		cout << "Animal ���캯������\n";
//	}
//
//	virtual void Speak() = 0;
//
//	//�������������������ָ���ͷ�������󲻸ɾ�
//	//virtual ~Animal() {
//	//	cout << "Animal �鹹��������\n";
//	//}
//
//	//����������������ʵ��
//	//virtual ~Animal()  = 0;
//	virtual ~Animal() = 0;
//
//};
//Animal::~Animal()
//{
//	cout << "Animal ������������\n";
//}
//
//class Cat:public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat ���캯������\n";
//		Name = new string(name);
//	}
//	void Speak()
//	{
//		cout <<*Name<< "Сè��˵��\n";
//	}
//
//	~Cat()
//	{
//		cout << "Cat ������������\n";
//		if (Name != NULL)
//		{
//			delete Name;
//			Name = NULL;
//		}
//	}
//	string* Name;
//};
//
//void test01()
//{
//	Animal* a = new Cat("Tom");
//	a->Speak();
//	delete a;
//}
//int main()
//{
//	test01();
//	return 0;
//}


#include<iostream>										//��̬ ��װ����
using namespace std;

//����ͬ�����
class CPU
{
public:
	virtual void Calculate() = 0;
};

class VideoCard
{
public:
	virtual void Display() = 0;
};

class Memory
{
public:
	virtual void Store() = 0;
};

//������
class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* store)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_store = store;
	}

	//��������
	void work()
	{
		m_cpu->Calculate();
		m_vc->Display();
		m_store->Store();
	}

	//�������� �ͷ������������
	~Computer()
	{
		//�ͷ�CPU
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		//�ͷ��Կ�
		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		//�ͷ��ڴ���
		if (m_store != NULL)
		{
			delete m_store;
			m_store = NULL;
		}
	}
private:
	CPU* m_cpu;
	VideoCard* m_vc;
	Memory* m_store;
};


//��ͬ�������
//Intel����
//1.CPU
class IntelCPU:public CPU
{
public:
	void Calculate()
	{
		cout << "Intel��CPU��ʼ������\n";
	}
};

//2.�Կ�
class IntelVC :public VideoCard
{
public:
	void Display()
	{
		cout << "Intel���Կ���ʼ������\n";
	}
};

//3.�ڴ���
class IntelMemory :public Memory
{
public:
	void Store()
	{
		cout << "Intel���ڴ�����ʼ������\n";
	}
};

//Lenovo����
//1.CPU
class LenovoCPU :public CPU
{
public:
	virtual void Calculate()
	{
		cout << "Lenovo��CPU��ʼ������\n";
	}
};

//2.�Կ�
class LenovoVideoCard :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "Lenovo���Կ���ʼ������\n";
	}
};

//3.�ڴ���
class LenovoMemory :public Memory
{
public:
	virtual void Store()
	{
		cout << "Lenovo���ڴ�����ʼ������\n";
	}
};

void test01()
{
	////��һ̨�������
	//CPU* intelCPU = new IntelCPU;
	//VideoCard* intelVideoCard = new VideoCard;
	//Memory* intelMem = new IntelMemory;

	cout << "��һ̨���Կ�ʼ����\n";
	//��װ��һ̨����
	Computer* computer1 = new Computer(new IntelCPU, new IntelVC, new IntelMemory);
	computer1->work();
	delete computer1;

	cout << "------------------" << endl;
	//��װ�ڶ�̨����
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;
}
int main()
{
	test01();
	return 0;
}