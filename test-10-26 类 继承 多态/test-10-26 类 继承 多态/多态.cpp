//#include<iostream>										//多态基本概念
//using namespace std;
//
////动物类
//class Animal
//{
//public:
//	//虚函数
//	virtual void fun()
//	{
//		cout << "动物在叫\n";
//	}
//};
////猫类
//class Cat:public Animal
//{
//public:
//	void fun()
//	{
//		cout << "小猫在叫\n";
//	}
//};
////狗类
//class Dog:public Animal
//{
//public:
//	void fun()
//	{
//		cout << "狗狗在叫\n";
//	}
//};
//
////地址早绑定，在编译阶段确定函数地址
////想要猫说话，地址就不能早绑定，需要在运行阶段绑定，地址晚绑定
//
////动态多态满足条件
////1.有继承关系
////2.子类重写父类的虚函数	重写：返回值类型同、函数名同、参数同
//
////多态使用条件
////父类指针或引用 指向子类对象
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
//#include<iostream>										//多态原理
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak()	//
//	{
//		cout << "动物说话\n";
//	}
//};
//
////猫
//class Cat:public Animal
//{
//public:
//	void speak()	//重写	虚函数表改变
//	{
//		cout << "小猫说话\n";
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



//#include<iostream>											//类案例，计算器类
//using namespace std;
//
////普通实现
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
//		//扩展新功能，需要修改源码
//		//在真实的开发中提倡：开闭原则
//		//开闭原则：对扩展开放，对修改关闭
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
////多态实现
////实现计算器抽象类
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
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return A + B;
//	}
//};
//
////减法类
//class SubtractCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return A - B;
//	}
//};
//
////乘法类
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
//	//多态使用条件
//	//父类指针或引用指向子类对象
//
//	//多态好处
//	// 1、组织结构清晰
//	// 2、可读性强
//	// 3、对于前期和后期扩展以及维护性高
//	
//
//	//加法
//	AbstractCalculator* a = new AddCalculator;	//堆区
//	a->A = 10, a->B = 10;
//	cout << a->getResult() << endl;
//	delete a;	//销毁堆区
//
//	//减法
//	AbstractCalculator* b = new SubtractCalculator;
//	b->A = 22, b->B = 99;
//	cout << b->getResult() << endl;
//	delete b;
//
//	//乘法
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


//#include<iostream>										//纯虚函数，这个类称为抽象类
//using namespace std;
//
//class Base
//{
//public:
//	virtual void fun() = 0;
//	//只要有一个纯虚函数，该类就是抽象类
//	// 抽象类的特点
//	// 1、无法实例化对象
//	// 2、抽象类的子类，必须重写父类中的纯虚函数，否则也属于抽象类
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
//		cout << "已对纯虚函数进行重写\n";
//	}
//};
//
//void test01()
//{
//	////1、无法实例化对象
//	//Base a;
//	//new Base;
//
//	////2、抽象类的子类必须重写纯虚函数，否则也是抽象类
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



//#include<iostream>									//多态 制作饮品
//using namespace std;
//
//class AbstractDrink
//{
//public:
//	//烧水
//	virtual void water() = 0;
//	//冲泡
//	virtual void pour() = 0;
//	//分杯
//	virtual void separate() = 0;
//	//加辅料
//	virtual void add() = 0;
//
//	//一套流程
//	void func()
//	{
//		water();
//		pour();
//		separate();
//		add();
//	}
//};
//
////泡茶
//class Tea:public AbstractDrink
//{
//public:
//	//烧水
//	virtual void water()
//	{
//		cout << "烧开水\n";
//	}
//	//冲泡
//	virtual void pour()
//	{
//		cout << "泡茶叶\n";
//	}
//	//分杯
//	virtual void separate()
//	{
//		cout << "分杯\n";
//	}
//	//加辅料
//	virtual void add()
//	{
//		cout << "加枸杞\n";
//	}
//
//	//一套流程
//	void func()
//	{
//		water();
//		pour();
//		separate();
//		add();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrink
//{
//public:
//	//烧水
//	virtual void water()
//	{
//		cout << "烧水\n";
//	}
//	//冲泡
//	virtual void pour()
//	{
//		cout << "泡咖啡粉\n";
//	}
//	//分杯
//	virtual void separate()
//	{
//		cout << "分杯\n";
//	}
//	//加辅料
//	virtual void add()
//	{
//		cout << "加牛奶\n";
//	}
//
//	//一套流程
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



#include<iostream>									//堆区数据	虚析构和纯虚析构
using namespace std;

class Animal {
public:
	Animal()
	{
		cout << "Animal 构造函数调用\n";
	}

	virtual void Speak() = 0;

	//利用虚析构，解决父类指针释放子类对象不干净
	//virtual ~Animal() {
	//	cout << "Animal 虚构函数调用\n";
	//}

	//纯虚析构函数必须实现
	//virtual ~Animal()  = 0;
	virtual ~Animal() = 0;

};
Animal::~Animal()
{
	cout << "Animal 纯虚析构调用\n";
}

class Cat:public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat 构造函数调用\n";
		Name = new string(name);
	}
	void Speak()
	{
		cout <<*Name<< "小猫在说话\n";
	}

	~Cat()
	{
		cout << "Cat 析构函数调用\n";
		if (Name != NULL)
		{
			delete Name;
			Name = NULL;
		}
	}
	string* Name;
};

void test01()
{
	Animal* a = new Cat("Tom");
	a->Speak();
	delete a;
}
int main()
{
	test01();
	return 0;
}