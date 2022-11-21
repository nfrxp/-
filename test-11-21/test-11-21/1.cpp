//#include <iostream>
//using namespace std;
//
//class Time
//{
//private:
//	int hours, minutes, seconds;
//public:
//	Time(int Hours, int Minutes, int Seconds) 
//	{ hours = Hours; minutes = Minutes; seconds = Seconds; }
//	void display_time()
//	{
//		cout << hours << ':' << minutes << ':' << seconds << endl;
//	}
//	void add_time(Time& t1, Time& t2)
//	{
//		hours = t1.hours + t2.hours;
//		minutes = t1.minutes + t2.minutes;
//		seconds = t1.seconds + t2.seconds;
//		if (seconds >= 60) {
//			minutes += (seconds / 60);
//			seconds %= 60;
//		}
//		if (minutes >= 60) {
//			hours += (minutes / 60);
//			minutes %= 60;
//		}
//
//	}
//};
//
//void main()
//{
//	Time one(2,67,100), two(1,56,200), three(0,0,0);
//	three.add_time(one, two);
//	cout << "the result is:" << endl;
//	three.display_time();
//}

//
//#include<iostream>
//using namespace std;
//class vehicle
//{
//	friend car;
//private:
//	int wheels;
//	double weight;
//public:
//	void initialize(int whls, double wght);
//	int get_wheels() { return wheels; }
//	double get_weight() { return weight; }
//	double wheel_loading() { return weight / wheels; }
//};
//
//class car : public vehicle
//{
//private:
//	int passenger_load;
//public:
//	void initialize(int whls, double wght, int people = 4);
//	int passengers() { return passenger_load; }
//};
//
//class truck : public vehicle
//{
//private:
//	int passenger_load;
//	double payload;
//public:
//	void init_truck(int number = 2, double max_load = 24000.0);
//	double efficiency();
//	int passengers() { return passenger_load; }
//};
//
//void vehicle::initialize(int whls, double wght)
//{
//	wheels = whls;
//	weight = wght;
//}
//
//void car::initialize(int whls, double wght, int people)
//{
//	wheels = whls;
//	weight = wght;
//	passenger_load = people;
//}
//
//void truck::init_truck(int number, double max_load)
//{
//	passenger_load = number;
//	payload = max_load;
//}
//
//double truck::efficiency()
//{
//	return payload / (payload + weight);
//}
//
//void main()
//{
//	vehicle bicycle;
//	bicycle.initialize(2, 25);
//	cout << "the bicycle has " << bicycle.get_wheels() << " wheels.\n";
//	cout << "the bicycle weighs " << bicycle.get_weight() << " pounds.\n";
//	cout << "the bicycle's wheel loading is " << bicycle.wheel_loading() << " pounds per tire.\n\n";
//
//	car audi;
//	audi.initialize(4, 3500.0, 5);
//	cout << "the audi has " << audi.get_wheels() << " wheels.\n";
//	cout << "the audi weighs " << audi.get_weight() << " pounds.\n";
//	cout << "the audi's wheel loading is " << audi.wheel_loading() << " pounds per tire.\n\n";
//
//	truck jief;
//	jief.initialize(18, 12500.0);
//	jief.init_truck(2, 33675.0);
//	cout << "the jief has " << jief.get_wheels() << " wheels.\n";
//	cout << "the jief weighs " << jief.get_weight() << " pounds.\n";
//	cout << "the jief's efficiency is " << 100.0 * jief.efficiency() << " percent.\n";
//}










//#include<iostream>
//using namespace std;
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
//class C : public B {
//public:
//	C();
//	C(int i, int j);
//	~C();
//	void print() const;
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


#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>	
#include <iomanip>
#include <string.h>
using namespace std;
class person
{
protected:
	char name[20];
	int birth_year;
public:
	person(char* na, int year) {
		strcpy(name, na);
		birth_year = year;
	}
	int cal_age(int this_year) {
		return this_year - birth_year;
	}
};

class graduate :virtual public person
{
protected:
	int grade;
	char specialty[20];
public:
	graduate(char* na, int y, int g, char* spec) :person(na, y) {
		grade = g;
		strcpy(specialty, spec);
	}
	void display(int this_year) {
		cout << "           graduate    age  grade        specialty\n";
		cout << setw(20) << name << setw(5) << cal_age(this_year);
		cout << setw(7) << grade << setw(17) << specialty << endl;
	}
};

class teacher :virtual public person
{
protected:
	char title[15];
	char specialty[20];
public:
	teacher(char* na, int y, char* ti, char* spec) :person(na, y) {
		strcpy(title, ti);
		strcpy(specialty, spec);
	}
	void display(int this_year) {
		cout << "           teacher    age         title        specialty\n";
		cout << setw(20) << name << setw(5) << cal_age(this_year);
		cout << setw(14) << title << setw(17) << specialty << endl;
	}
};

class in_service_graduate :public teacher, public graduate
{
public:
	in_service_graduate(char* na, int y, char* ti, char* spec1, int g, char* spec2) :
	person(na,y),teacher(na, y, ti, spec1), graduate(na, y, g, spec2)
	{  }
	void display(int this_year) {
		cout << " in_service_graduate  age   title   work_specialty  grade  study_specialty\n";

		cout << setw(20) << graduate::name << setw(5) << graduate::cal_age(this_year) << setw(10) << title;;
		cout << setw(15) << teacher::specialty << setw(7) << grade << setw(17) << graduate::specialty << endl;


	}
};

void main()
{
	graduate gr("zhang_ling", 1978, 2001, "computer");
	teacher te("wang_qiang", 1976, "tutor", "electronics");
	in_service_graduate sg("liu_hua", 1975, "lectuer", "automation", 2002, "computer");
	gr.display(2002);
	cout << endl;
	te.display(2002);
	cout << endl;
	sg.display(2002);
}
