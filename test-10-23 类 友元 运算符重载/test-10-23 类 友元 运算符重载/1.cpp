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


//#include<iostream>											//��Ԫ	ȫ�ֺ���
//using namespace std;
//
//class House
//{
//	//����GoodGayΪ��Ԫ���������˽�г�Ա
//	friend void GoodGay(House*a);
//public:
//	House()
//	{
//		SittingRoom = "����";
//		BedRoom = "����";
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
//	cout << "�û������ڷ��� " << a->SittingRoom << endl;
//	cout << "�û������ڷ��� " << a->BedRoom<< endl;
//}
//int main()
//{
//	House p;
//	GoodGay(&p);
//	return 0;
//}



//#include<iostream>											//��Ԫ	��
//using namespace std;
//
//class Building
//{
//	//���߱����� goodGay����Building��ĺ����ѣ����Է��ʵ�Building����˽������
//	friend class goodGay;
//public:
//	Building()
//	{
//		this->m_SittingRoom = "����";
//		this->m_BedRoom = "����";
//	}
//
//	string m_SittingRoom; //����
//private:
//	string m_BedRoom;//����
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
//		cout << "�û������ڷ���" << building->m_SittingRoom << endl;
//		cout << "�û������ڷ���" << building->m_BedRoom << endl;
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


//#include<iostream>									//��Ԫ	��
//using namespace std;
//
//class House
//{
//	friend class GoodGay;
//public:
//	House()
//	{
//		Sittingroom = "����";
//		Bedroom = "����";
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
//		house = new House;		//����ָ��������
//	}
//
//	void Visit()
//	{
//		cout << "�û������ڷ��� " << house->Sittingroom << endl;
//		cout << "�û������ڷ��� " << house->Bedroom << endl;
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


//#include<iostream>										//��	ĳ��ĳЩ����Ա����
//using namespace std;
//
//class House;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit1();	//��visit1���Է���˽�г�Ա
//	void visit2();	//��visit2�����Է���˽�г�Ա
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
//		this->Sittingroom = "����";
//		this->Bedroom = "����";
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
//	cout << "1���������ڷ��� " << house->Sittingroom << endl;
//	cout << "1���������ڷ��� " << house->Bedroom<< endl;
//
//}
//void GoodGay::visit2()
//{
//	cout << "2���������ڷ��� " << house->Sittingroom << endl;
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