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

////前向引用声明
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



//class Fred; //前向引用声明
//class Barney {
//	Fred x; //错误：类Fred的声明尚不完善
//};
//class Fred {
//	Barney y;
//};
//
//
//class Fred;	//前向引用声明
//
//class Barney {
//public:
//	void method() {
//		x.yabbaDabbaDo();	//错误：Fred类的对象在定义之前被使用
//	}
//private:
//	Fred& x;//正确，经过前向引用声明，可以声明Fred类的对象引用
//};
//
//class Fred {
//public:
//	void yabbaDabbaDo();
//private:
//	Barney& y;
//};



//结构体

#include<iostream>
using namespace std;

struct Student {
	int num;
	string name;
	char sex;
	int age;
};

int main() {
	Student a{ 22,"han",'男',7 };


	return 0;
}