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
