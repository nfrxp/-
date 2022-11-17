////8_3.cpp
//#include <iostream>
//using namespace std;
//
//class Complex {	//�����ඨ��
//public:	//�ⲿ�ӿ�
//	Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }	//���캯��
//	friend Complex operator + (const Complex& c1, const Complex& c2);	//�����+����
//	friend Complex operator - (const Complex& c1, const Complex& c2);	//�����-����
//	friend ostream& operator << (ostream& out, const Complex& c); //�����<<����
//private:	//˽�����ݳ�Ա
//	double real;	//����ʵ��
//	double imag;	//�����鲿
//};
//
//Complex operator + (const Complex& c1, const Complex& c2) {	//�������������ʵ��
//	return Complex(c1.real + c2.real, c1.imag + c2.imag);
//}
//
//Complex operator - (const Complex& c1, const Complex& c2) {	//�������������ʵ��
//	return Complex(c1.real - c2.real, c1.imag - c2.imag);
//}
//
//ostream& operator << (ostream& out, const Complex& c) {	//�������������ʵ��
//	out << "(" << c.real << ", " << c.imag << ")";
//	return out;
//}
//
//int main() {	//������
//	Complex c1(5, 4), c2(2, 10), c3;	//���帴����Ķ���
//	cout << "c1 = " << c1 << endl;
//	cout << "c2 = " << c2 << endl;
//	c3 = c1 - c2;	//ʹ�������������ɸ�������
//	cout << "c3 = c1 - c2 = " << c3 << endl;
//	c3 = c1 + c2;	//ʹ�������������ɸ����ӷ�
//	cout << "c3 = c1 + c2 = " << c3 << endl;
//
//
//	//һ�²����ܹ����е�ǰ���ǣ����캯���ж��βθ��� ��Ĭ��ֵ��
//
//
//
//	c3 = c1 + 2;	//ʹ�������������� �������ļӷ�
//	cout << "c3 = c1 + 2 = " << c3 << endl;
//	
//	c3 = 1 + c2;	//ʹ�������������� ������ļӷ�
//	cout << "c3 = 1 + c2 = " << c3 << endl;
//	
//	c3 = 1 + 2;	//ʹ��+��������		�������ļӷ����ٵ��ù��캯����������ת��
//	cout << "c3 = c1 + c2 = " << c3 << endl;
//
//	return 0;
//}



//#include <iostream>
//using namespace std;
//class Clock {	//ʱ���ඨ��
//public:	//�ⲿ�ӿ�
//	Clock(int hour = 0, int minute = 0, int second = 0);
//	void showTime() const;
//	Clock& operator ++ ();		//ǰ�õ�Ŀ���������
//	Clock operator ++ (int);	//���õ�Ŀ���������
//private:	//˽�����ݳ�Ա
//	int hour, minute, second;
//};
//
//Clock::Clock(int hour/* = 0 */, int minute/* = 0 */, int second/* = 0 */) {
//	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60
//		&& 0 <= second && second < 60) {
//		this->hour = hour;
//		this->minute = minute;
//		this->second = second;
//	}
//	else
//		cout << "Time error!" << endl;
//}
//void Clock::showTime() const {	//��ʾʱ�亯��
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//
//Clock& Clock::operator ++ () {	//ǰ�õ�Ŀ��������غ���
//	second++;
//	if (second >= 60) {
//		second -= 60;
//		minute++;
//		if (minute >= 60) {
//			minute -= 60;
//			hour = (hour + 1) % 24;
//		}
//	}
//	return *this;
//}
//
//Clock Clock::operator ++ (int) {	//���õ�Ŀ���������
//	//ע���βα��е����Ͳ���
//	Clock old = *this;
//	++(*this);	//����ǰ�á�++�������
//	return old;
//}
//int main() {
//	Clock myClock(23, 59, 59);
//	cout << "First time output: ";
//	myClock.showTime();
//	cout << "Show myClock++:    ";
//	(myClock++).showTime();
//	cout << "Show ++myClock:    ";
//	(++myClock).showTime();
//	return 0;
//}



#include <iostream>
using namespace std;

class Base1 { //����Base1����
public:
	virtual void display() const;	//�麯��
};
void Base1::display() const {
	cout << "Base1::display()" << endl;
}

class Base2:public Base1 { //����������Base2����
public:
	void display() const;	//���ǻ�����麯��
};
void Base2::display() const {
	cout << "Base2::display()" << endl;
}
class Derived : public Base2 { //����������
public:
	void display() const; 	//���ǻ���� "�麯��"���޷�ͨ������������ڻ����Ѿ������ǵĳ�Ա����
};
void Derived::display() const {
	cout << "Derived::display()" << endl;
}

void fun(Base1* ptr) { //����Ϊָ���������ָ��
	ptr->display();	//"����ָ��->��Ա��"
}

int main() {	//������
	Base1 base1;	//����Base1�����
	Base2 base2;	//����Base2�����
	Derived derived;	//����Derived�����
	fun(&base1);//��Base1�����ָ�����fun����
	fun(&base2);//��Base2�����ָ�����fun����
	fun(&derived);//��Derived�����ָ�����fun����
	return 0;
}
