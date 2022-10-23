//#include<iostream>									//空指针访问成员函数
//using namespace std;
//
//class Person
//{
//public:
//	void func1()
//	{
//		cout << "成员函数1\n";
//	}
//
//	//void func2()
//	//{
//	//	cout << "成员函数2" << age << endl;
//	//	//同下
//	//	cout << "成员函数2" << this ->age << endl;
//	//	//传入的指针为空无法访问
//	//}
//
//	void func2()
//	{
//		if (this == NULL)
//			return;
//		cout << "成员函数2" << age << endl;
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


//#include<iostream>									//常函数	const修饰
//using namespace std;
//
//class Person
//{
//public:
//	//void func1()
//	//{
//	//	this = NULL;	//不能修改指针指向，this指针常量
//	//}
//
//	void func1() const	//常函数	const func1* const this，const修饰的this指向
//	{
//		this->A = 10;//指针指向的值不可修改
//		this->B = 10;
//	}
//
//	void func2() {}
//
//	int A;
//	mutable int B;	//特殊变量，const修饰的函数能够修改此值
//};
//
//
////常对象
//void test01()
//{
//	const Person p;
//	p.A = 10;
//	p.B = 10;
//
//	//常对象只能调用常函数
//	p.func1();
//	p.func2();	//普通成员函数可以修改属性
//}
//int main()
//{
//
//	return 0;
//}


//#include<iostream>											//友元	全局函数
//using namespace std;
//
//class House
//{
//	//声明GoodGay为友元，允许访问私有成员
//	friend void GoodGay(House*a);
//public:
//	House()
//	{
//		SittingRoom = "客厅";
//		BedRoom = "卧室";
//	}
//
//
//	string SittingRoom;
//
//private:
//	string BedRoom;
//};
//
//void GoodGay(House *a) 
//{
//	cout << "好基友正在访问 " << a->SittingRoom << endl;
//	cout << "好基友正在访问 " << a->BedRoom<< endl;
//}
//int main()
//{
//	House p;
//	GoodGay(&p);
//	return 0;
//}



//#include<iostream>											//友元	类
//using namespace std;
//
//class Building
//{
//	//告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
//	friend class goodGay;
//public:
//	Building()
//	{
//		this->m_SittingRoom = "客厅";
//		this->m_BedRoom = "卧室";
//	}
//
//	string m_SittingRoom; //客厅
//private:
//	string m_BedRoom;//卧室
//};
//
//
//class goodGay
//{
//public:
//	goodGay()
//	{	
//		building = new Building; 
//	}
//	void visit()
//	{
//		cout << "好基友正在访问" << building->m_SittingRoom << endl;
//		cout << "好基友正在访问" << building->m_BedRoom << endl;
//	}
//
//private:
//	Building* building;
//};
//
//
//void test01()
//{
//	goodGay gg;
//	gg.visit();
//}
//int main() {
//	test01();
//	
//	return 0;
//}


//#include<iostream>									//友元	类
//using namespace std;
//
//class House
//{
//	friend class GoodGay;
//public:
//	House()
//	{
//		Sittingroom = "客厅";
//		Bedroom = "卧室";
//	}
//	string Sittingroom;
//private:
//	string Bedroom;
//};
//
//class GoodGay
//{
//public:
//	GoodGay()
//	{
//		house = new House;		//建立指针来访问
//	}
//
//	void Visit()
//	{
//		cout << "好基友正在访问 " << house->Sittingroom << endl;
//		cout << "好基友正在访问 " << house->Bedroom << endl;
//	}
//
//private:
//	House* house;
//};
//
//
//int main()
//{
//	GoodGay a;
//	a.Visit();
//	return 0;
//}


//#include<iostream>										//类	某（某些）成员函数
//using namespace std;
//
//class House;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit1();	//让visit1可以访问私有成员
//	void visit2();	//让visit2不可以访问私有成员
//
//private:
//	House* house;
//};
//
//
//class House
//{
//	friend void GoodGay::visit1();
//public:
//	House()
//	{
//		this->Sittingroom = "客厅";
//		this->Bedroom = "卧室";
//	}
//	string Sittingroom;
//
//private:
//	string Bedroom;
//};
//
//GoodGay::GoodGay()
//{
//	
//	house = new House;
//	
//}
//
//void GoodGay::visit1()
//{
//	cout << "1号种子正在访问 " << house->Sittingroom << endl;
//	cout << "1号种子正在访问 " << house->Bedroom<< endl;
//
//}
//void GoodGay::visit2()
//{
//	cout << "2号种子正在访问 " << house->Sittingroom << endl;
//}
//
//
//void test01()
//{
//	GoodGay a;
//	a.visit1();
//}
//int main()
//{
//	test01();
//	return 0;
//}