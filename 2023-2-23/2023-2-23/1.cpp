#define _CRT_SECURE_NO_WARNINGS 1


//#include<iostream>
//using namespace std;
//
//class Clock {
//private:
//	int hour,minute, second;
//
//public:
//	Clock(int nH, int nM, int nS);
//	void setTime(int nH, int nM, int nS);
//	void showTime();
//};
//Clock::Clock(int nH, int nM, int nS) :hour(nH), minute(nM), second(nS) {}
//
//void Clock::setTime(int nH, int nM, int nS) {
//	hour = nH; minute = nM; second = nS;
//}
//void Clock::showTime() {
//	cout << hour << ',' << minute << ',' << second << endl;
//}
//
//int main() {
//	Clock myClock(14, 17, 30);
//	myClock.showTime();
//	return 0;
//}

////ǰ����������
//#include<iostream>
//using namespace std;
//
//class A;
//class B {
//	void fun(A a);
//	//A b;
//};
//class A {
//private:
//
//public:
//	void show() { cout << "jj" << endl; }
//};
//
//int main() {
//
//	return 0;
//}



//class Fred; //ǰ����������
//class Barney {
//	Fred x; //������Fred�������в�����
//};
//class Fred {
//	Barney y;
//};
//
//
//class Fred;	//ǰ����������
//
//class Barney {
//public:
//	void method() {
//		x.yabbaDabbaDo();	//����Fred��Ķ����ڶ���֮ǰ��ʹ��
//	}
//private:
//	Fred& x;//��ȷ������ǰ��������������������Fred��Ķ�������
//};
//
//class Fred {
//public:
//	void yabbaDabbaDo();
//private:
//	Barney& y;
//};



//�ṹ��

#include<iostream>
using namespace std;

struct Student {
	int num;
	string name;
	char sex;
	int age;
};

int main() {
	Student a{ 22,"han",'��',7 };


	return 0;
}