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



#include<iostream>										//多态原理
using namespace std;

class Animal
{
public:
	virtual void speak()	//
	{
		cout << "动物说话\n";
	}
};

//猫
class Cat:public Animal
{
public:
	void speak()	//重写	虚函数表改变
	{
		cout << "小猫说话\n";
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