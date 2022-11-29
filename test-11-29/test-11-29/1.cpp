//#include<iostream>
//#include<fstream>
//#include<cstdlib>
//using namespace std;
//int main()
//{
//	fstream file;
//	char msg[] = "This is a test message", buf[20];
//	file.open("Test.txt", ios::out | ios::in | ios::trunc | ios::binary);
//	if (!file) {
//		cout << "File open failed" << endl;
//		exit(1);
//	}
//	file.write(msg, sizeof(msg));
//	file.seekp(0, ios::beg);
//	file.read(buf, 20);
//	cout << file.gcount() << endl;
//	cout << buf << endl; 
//	file.close();
//	return 0;
//}

//8_3.cpp
#include <iostream>
using namespace std;

class Complex {	//�����ඨ��
public:	//�ⲿ�ӿ�
	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//���캯��
	friend Complex operator + (const Complex& c1, const Complex& c2);	//�����+����
	friend Complex operator - (const Complex& c1, const Complex& c2);	//�����-����
	friend ostream& operator << (ostream& out, const Complex& c); //�����<<����

	friend istream& operator >> (istream& in,Complex& c);	//���������>>
private:	//˽�����ݳ�Ա
	double real;	//����ʵ��
	double imag;	//�����鲿
};

Complex operator + (const Complex& c1, const Complex& c2) {	//�������������ʵ��
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator - (const Complex& c1, const Complex& c2) {	//�������������ʵ��
	return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

ostream& operator << (ostream& out, const Complex& c) {	//�������������ʵ��
	out << "(" << c.real << ", " << c.imag << ")";
	return out;
}

istream& operator>>(istream& in, Complex& d) {
	in >> d.real >>d.imag;
	return in;
}

int main() {	//������
	Complex c1(5, 4), c2(2, 10), c3(1,1);	//���帴����Ķ���
	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	c3 = c1 - c2;	//ʹ�������������ɸ�������
	cout << "c3 = c1 - c2 = " << c3 << endl;
	c3 = c1 + c2;	//ʹ�������������ɸ����ӷ�
	cout << "c3 = c1 + c2 = " << c3 << endl;

	cin  >> c3;
	cout << "c3 = " << c3;
	return 0;
}
