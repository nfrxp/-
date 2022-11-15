//#include <iostream>
//using namespace std;
////�����ඨ��
//class Complex 
//{	
//public:	//�ⲿ�ӿ�
//	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//���캯��
//	Complex operator + (const Complex& c2) const;	//�����+���س�Ա����
//	Complex operator - (const Complex& c2) const;	//�����-���س�Ա����
//	void display() const;	//�������
//private:	//˽�����ݳ�Ա
//	double real;	//����ʵ��
//	double imag;	//�����鲿
//};
//Complex Complex::operator + (const Complex& c2) const 
//{	//�������������ʵ��
//	return Complex(real + c2.real, imag + c2.imag); //����һ����ʱ����������Ϊ����ֵ
//}
//
//Complex Complex::operator - (const Complex& c2) const 
//{	//�������������ʵ��
//	return Complex(real - c2.real, imag - c2.imag); //����һ����ʱ����������Ϊ����ֵ
//}
//void Complex::display() const 
//{
//	cout << "(" << real << ", " << imag << ")" << endl;
//}
//
//
//
//int main() 
//{
//	Complex c1(5, 4), c2(2, 10), c3;	//���帴����Ķ���
//	cout << "c1 = "; c1.display();
//	cout << "c2 = "; c2.display();
//	c3 = c1 - c2;	//ʹ�������������ɸ�������
//	cout << "c3 = c1 - c2 = "; c3.display();
//	c3 = c1 + c2;	//ʹ�������������ɸ����ӷ�
//	cout << "c3 = c1 + c2 = "; c3.display();
//	c3 = c1 + 3;	//ʹ���������������  �����������		ǿ������ת��
//	cout << "c3 = c1 + 3 = "; c3.display();
//	//c3 = 3 + c1;	//ʹ����������� ���� ����  �����������
//	c3 = 1 + 3;		//ʹ���������������  �������������	ǿ������ת��
//	return 0;
//}


#include<iostream>
using namespace std;

class Complex
{
public:
	Complex(double i=0, double j=0) :a(i), b(j) {}
	Complex operator +(const Complex& p)
	{
		return Complex(this->a + p.a, this->b + p.b);
	}

	void print()
	{
		cout << "(" << a << ',' << b << ")" << endl;
	}
private:
	double a;
	double b;
};

int main()
{
	Complex q1(1, 2);
	Complex q2(4, 5);
	Complex q3;	//��ʱ�����Σ����ڹ��캯����Ӧ�ø�Ĭ��ֵ
	q3 = q1 + q2;
	//cout << "q3 + q1 + q2 = " << q3.print() << endl;	�˴���printû�з���ֵ
	cout << "q3 = q1 + q2 = "; q3.print();
	return 0;
}