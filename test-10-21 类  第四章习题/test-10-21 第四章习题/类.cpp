
//#include<iostream>									//�������࣬���������������Ƚ����������Ƿ����
//using namespace std;
//
//class Cube
//{
//public:
//	//���ó�
//	void SetL(int l)
//	{		L = l;	}
//	//��ȡ��
//	double GetL()
//	{		return L;	}
//
//	//���ÿ�
//	void SetW(int w)
//	{		W = w;	}
//	//��ȡ��
//	double GetW()
//	{		return W;	}
//
//	//���ø�
//	void SetH(int h)
//	{		H = h;	}
//	//��ȡ��
//	double GetH()
//	{		return H;	}
//
//	//�������
//	double CalculateS()
//	{		return L * H * 2 + L * W * 2 + W * H * 2;	}
//
//	//�������
//	double CalculateV()
//	{		return L * H * W;	}
//
//	//��Ա�����ж����������Ƿ����
//	void isSameClass(Cube& k)
//	{
//		if (GetL() == k.GetL() && GetW() == k.GetW() && GetH() == k.GetH())
//			cout << "��Ա�����жϣ������������\n";
//		else
//			cout << "��Ա�����жϣ��������岻���\n";
//	}
//
//private:
//	double L;
//	double W;
//	double H;
//};
//
////ȫ�ֺ����ж����������Ƿ����
//void isSame(Cube& i, Cube& j)
//{
//	if (i.GetL() == j.GetL() && i.GetW() == j.GetW() && i.GetH() == j.GetH())
//		cout<<"ȫ�ֺ����жϣ������������\n";
//	else
//		cout<<"ȫ�ֺ����жϣ��������岻���\n";
//}
//
//int main()
//{
//	Cube a;
//	a.SetL(3);
//	a.SetW(3);
//	a.SetH(3);
//	cout << "a����������Ϊ��" << a.CalculateS() << endl << "a����������Ϊ��" << a.CalculateV() << endl<<endl;
//
//	Cube b;
//	b.SetL(3);
//	b.SetW(7);
//	b.SetH(3);
//	cout << "b����������Ϊ��" << b.CalculateS() << endl << "b����������Ϊ��" << b.CalculateV() << endl << endl;
//
//	//ȫ�ֺ����ж�
//	isSame(a, b);
//	//��Ա�����ж�
//	a.isSameClass(b);
//	return 0;
//}


//#include<iostream>										//�������������
//using namespace std;
//
//class Person
//{
//public:
//	Person()					//���캯���ɴ���
//	{
//		cout << "���ù��캯��\n";
//	}
//
//	~Person()					//�����������ɴ��Ρ�����ǰ����
//	{
//		cout << "������������\n\n";
//	}
//};
//
//void test()
//{
//	Person a;
//}
//int main()
//{
//	test();
//
//	Person b;
//	system("pause");
//	return 0;
//}


//#include<iostream>										//���캯���ķ���͵���
//using namespace std;
//
////1.���������ࣺ�޲ι��죨Ĭ�ϣ����вι���
////2.�����ͷ��ࣺ��ͨ����Ϳ�������
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲ι���\n";
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "�вι���\n";
//	}
//	void Age()
//	{
//		cout << "����Ϊ��" << age << endl;
//	}
//
//	Person(const Person& p)			//��p���󿽱�
//	{
//		age = p.age;
//		cout << "�������캯��\n";
//	}
//
//	~Person()
//	{
//		cout << "������������\n\n";
//	}
//
//private:
//	int age;
//};
//int main()
//{
//	////����
//	////1.���ŷ�
//	//Person a;//Ĭ�Ϲ���
//	//Person b(4);//�вι���
//	//Person c(b);//��������
//
//	////2.��ʾ��
//	//Person a;//�Ƚ�
//	//Person b = Person(10);//�вι���
//	//Person c = Person(b);//��������
//
//	////Person(10);//���������ص㣺��ǰִ�н�����ϵͳ�����ջ���������
//	////cout << "aaa" << endl;
//
//	//3.��ʽת����
//	Person d = 10;//�вι���		��ͬ�� Person d=Person(10)
//	Person e = d;//��������
//	return 0;
//}


//#include<iostream>									//�������캯���ĵ���ʱ��
//using namespace std;
////�������캯���ĵ���ʱ��
////1.ʹ��һ���Ѿ������Ķ�������ʼ��һ���µĶ���
////2.ֵ���ݵķ�ʽ������������ֵ
////3.ֵ��ʽ���ؾֲ�����
//class Person
//{
//public:
//	Person() {
//		cout << "Ĭ�Ϲ��캯���ĵ���\n";
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "�вι��캯���ĵ���\n";
//	}
//	Person(const Person& b)
//	{
//		m_age = b.m_age;
//		cout << "�������캯���ĵ���\n";
//	}
//	~Person() {
//		cout << "���������ĵ���\n";
//	}
//
//
//	int m_age;
//};
//
////1.ʹ��һ���Ѿ������Ķ�������ʼ��һ���µĶ���
//void test1()
//{
//	Person a(20);
//	Person b(a);
//	
//	cout << "b������Ϊ��" << b.m_age << endl;
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
//void doWork2(Person p)
//{
//
//}
//void test2()
//{
//	Person a;
//	doWork2(a);
//}
//
////3.ֵ��ʽ���ؾֲ�����
//Person doWork3()
//{
//	Person a;
//	cout << (int*)&a << endl;
//	return a;
//}
//void test3()
//{
//	Person b=doWork3();
//	cout << (int*)&b << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}


//#include<iostream>									//���캯���ĵ��ù���
//using namespace std;
////�����࣬���������Զ��ṩ	���캯�����������캯������������
//
////1.��ֻ�Զ����вι��캯�����Ǳ��������ṩĬ�Ϲ��캯�������ṩ�������캯��
//class Person
//{
//public:
//	//Person () {
//	//	cout << "Ĭ�Ϲ��캯���ĵ���\n";
//	//}
//
//	Person (int age)
//	{
//		m_age = age;
//		cout << "�вι��캯���ĵ���\n";
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "�������캯���ĵ���\n";
//	}
//	~Person() {
//		cout << "���������ĵ���\n";
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	Person p;
//	p.m_age=10;
//
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//}
//int main()
//{
//	test1(); 
//	return 0;
//}






//#include<iostream>									//���캯���ĵ��ù���
//using namespace std;
//
////2.��ֻ�Զ����˿������캯�������������ṩ��ͨ���캯��
//class Person
//{
//public:
//	//Person () {
//	//	cout << "Ĭ�Ϲ��캯���ĵ���\n";
//	//}
//
//	//Person(int age)
//	//{
//	//	m_age = age;
//	//	cout << "�вι��캯���ĵ���\n";
//	//}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "�������캯���ĵ���\n";
//	}
//	~Person() {
//		cout << "���������ĵ���\n";
//	}
//
//	int m_age;
//};
//
//void test1()
//{
//	Person p;
//	p.m_age = 10;
//
//	Person p2(p);
//	cout << "p2������Ϊ��" << p2.m_age << endl;
//
//	Person p3=10;
//}
//int main()
//{
//	test1();
//	return 0;
//}