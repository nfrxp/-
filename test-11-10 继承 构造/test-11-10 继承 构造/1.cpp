//#include<iostream>
//using namespace std;
////����
//class B {
//public:
//	B();
//	B(int i);
//	~B();
//	void print() const;
//private:
//	int b;
//};
//B::B() {
//	b = 0;
//	cout << "B's default constructor called." << endl;
//}
//B::B(int i) {
//	b = i;
//	cout << "B's constructor called." << endl;
//}
//B::~B() {
//	cout << "B's destructor called." << endl;
//}
//void B::print() const {
//	cout << b << endl;
//}
//
////������
//class C : public B {
//public:
//	C();
//	C(int i, int j);
//	~C();
//	void print() const;		//�ض���
//private:
//	int c;
//};
//C::C() {
//	c = 0;
//	cout << "C's default constructor called." << endl;
//}
//C::C(int i, int j) : B(i), c(j) {
//	cout << "C's constructor called." << endl;
//}
//C::~C() {
//	cout << "C's destructor called." << endl;
//}
//void C::print() const {
//	B::print();
//	cout << c << endl;
//}
//
//int main() {
//	C obj(5, 6);
//	obj.print();
//	return 0;
//}




#include <iostream>
using namespace std;
class Base1 {	//����Base1�����캯���в���
public:
	Base1(int i) { cout << "Constructing Base1 " << i << endl; }
};
class Base2 {	//����Base2�����캯���в���
public:
	Base2(int j) { cout << "Constructing Base2 " << j << endl; }
};
class Base3 {	//����Base3�����캯���޲���
public:
	Base3() { cout << "Constructing Base3 *" << endl; }
};

class Derived : public Base2, public Base1, public Base3 {
	//��������Derived��ע���������˳��
public:	//������Ĺ��г�Ա
	Derived(int a, int b, int c, int d) : Base1(a), member2(d), member1(c), Base2(b)
	{ }
	//ע��������ĸ�����˳��//ע���Ա�������ĸ�����˳��
private:	//�������˽�г�Ա����
	Base1 member1;	//�Ӷ���,������ͷ������
	Base2 member2;
	Base3 member3;
};

int main() {
	Derived obj(1, 2, 3, 4);
	return 0;
}
