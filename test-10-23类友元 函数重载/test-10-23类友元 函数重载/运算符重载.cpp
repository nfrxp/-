////�������͸ı�
//
//#include<iostream>								//�Ӻ����������
//using namespace std;
//
//class Person
//{
//public:
//	//1.��Ա��������+��
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.A = A + p.A;
//	//	temp.B = B + p.B;
//	//	return temp;
//	//}
//
//	int A;
//	int B;
//};
//
////2.ȫ�ֺ�������+��
//Person operator+(Person& a, Person& b)
//{
//	Person temp;
//	temp.A = a.A + b.A;
//	temp.B = a.B + b.B;
//	return temp;
//}
//
//Person operator+(Person& a, int b)
//{
//	Person temp;
//	temp.A = a.A + b;
//	temp.B = a.B + b;
//	return temp;
//}
//
//void test01()
//{
//	Person a;
//	a.A = 10;
//	a.B = 90;
//	Person b;
//	b.A = 99;
//	b.B = 1;
//
//	//Person c = a + b;
//	////Person c=a.operator+(b)	//��Ա�������ر��ʵ���
//	//cout << c.A << " " << c.B << endl;
//
//	Person c = a + b;
//	//Person c=operator+(a,b)	//ȫ�ֺ������ر��ʵ���
//	cout << c.A << " " << c.B << endl;
//
//	 c = a + b;
//	cout << c.A << " " << c.B << endl;
//
//
//	//���������Ҳ���Ժ�������
//	Person i = a + 10;
//	cout << "��������صĺ������أ�" << i.A << " " << i.B << endl;
//}
//int main()
//{
//	test01();
//
//	return 0;
//}



	//#include<iostream>										//�������������(cout ���)
	//using namespace std;
	//
	//class Person
	//{
	//	friend ostream& operator<<(ostream& out, Person& p);
	//	friend void test01();
	//public:
	//	////��Ա����ʵ������	�в�ͨ���޷�ʵ��cout�����
	//	//void operator<<(cout)
	//	//{
	//	//}
	//private:
	//	int A;
	//	int B;
	//};
	//
	////ȫ�ֺ���
	////ostream& operator<<(ostream &cout, Person& p)
	////{
	////	cout << "p.A=" << p.A << " p.B=" << p.B << endl;
	////	return cout;
	////}
	////ͬ��
	//ostream& operator<<(ostream& out, Person& p)
	//{
	//	out << "p.A=" << p.A << " p.B=" << p.B << endl;
	//	return out;
	//}
	//void test01()
	//{
	//	Person a;
	//	a.A = 10;
	//	a.B = 99;
	//
	//	//cout << "a.A=" << a.A << " a.B=" << a.B << endl;
	//	//cout << a;
	//	cout << a << endl;//��ʽ���
	//}
	//int main()
	//{
	//	test01();
	//	return 0;
	//}

	//#include<iostream>											//����++�����
	//using namespace std;
	//
	//class Person
	//{
	//	//friend ostream& operator<<(ostream& cout, Person& p);
	//	friend ostream& operator<<(ostream& cout, Person p);
	//public:
	//	//1.ǰ��++����
	//	Person& operator++()
	//	{
	//		//1.��++
	//		age++;
	//		//2.�ڷ���
	//		return *this;
	//	}
	//
	//	//2,����++����
	//	Person operator++(int)			//int ռλ��
	//	{
	//		//1.�ȼ�¼ԭֵ���ټӼ�
	//		Person temp = *this;
	//		age++;
	//		//2.����ԭֵ
	//		return temp;
	//	}
	//	Person()
	//	{
	//		age =0;
	//	}
	//private:
	//	int age;
	//
	//};
	//
	////����<<�����
	////ostream& operator<<(ostream& cout, Person& p)
	////{
	////	cout << p.age << endl;
	////	return cout;
	////}
	//
	//ostream& operator<<(ostream& cout, Person p)
	//{
	//	cout << p.age << endl;
	//	return cout;
	//}
	//
	//void test01()
	//{
	//	Person a;
	//	cout << a << endl;
	//	//cout << ++a<<endl;
	//	cout << ++(++a) << endl;
	//}
	//
	//void test02()
	//{
	//	Person b;
	//	cout << b++ << endl;
	//	cout << b << endl;
	//}
	//int main()
	//{
	//	//test01();
	//	test02();
	//	return 0;
	//}

