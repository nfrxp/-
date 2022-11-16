//#include <iostream>
//using namespace std;
//
//class Time
//{
//private:
//	int hours, minutes, seconds;
//public:
//	void get_time()
//	{
//		cin >> hours >> minutes >> seconds;
//	}
//	void display_time()
//	{
//		cout << hours << ':' << minutes << ':' << seconds << endl;
//	}
//	void add_time(Time& t1, Time& t2)
//	{
//		hours = t1.hours + t2.hours;
//		minutes = t1.minutes + t2.minutes;
//		seconds = t1.seconds + t2.seconds;
//		if (seconds >= 60)
//		{
//			minutes += (seconds/60);
//			seconds %= 60;
//
//		}
//		if (minutes >= 60)
//		{
//			hours += (minutes / 60);
//			minutes %= 60;
//
//		}
//	}
//};
//
//void main()
//{
//	Time one, two, three;
//	cout << "\nEnter the first time(hours minutes seconds):";
//	one.get_time();
//	cout << "\nEnter the second time(hours minutes seconds):";
//	two.get_time();
//	three.add_time(one, two);
//	cout << "the result is:" << endl;
//	three.display_time();
//}


//#include<iostream>
//using namespace std;
//
//class Date {
//public:
//    Date() {};
//    Date(int year, int month, int day);
//    ~Date() {};
//    int& GetYear() { return year; }
//    int& GetMonth() { return month; }
//    int& GetDay() { return day; }
//private:
//    int year = 2000;
//    int month = 12;
//    int day = 31;
//    static bool IsLeapyear;//ÊÇ·ñÈòÄê
//};
//bool Date::IsLeapyear = true;
//Date::Date(int year, int month, int day)
//{
//    (*this).year = year;
//    (*this).month = month;
//    (*this).day = day;
//}
//
//void main()
//{
//    int year, month, day;
//    cin >> year >> month >> day;
//    Date mydate(year, month, day);
//    int& myyear = mydate.GetYear();
//    int& mymonth = mydate.GetMonth();
//    int& myday = mydate.GetDay();
//    cout << myyear << endl << mymonth << endl << myday << endl;
//    myyear = 8888;
//    cout << mydate.GetYear();
//}


#include<iostream>
using namespace std;
class vehicle
{
protected:

	int wheels;
	double weight;
public:
	vehicle(int whls, double wght)
	{
		wheels = whls;
		weight = wght;
	}
	int get_wheels() { return wheels; }
	double get_weight() { return weight; }
	double wheel_loading() { return weight / wheels; }
};

class car : public vehicle
{
private:

	int passenger_load;
public:
	car(int whls, double wght, int people): vehicle(whls,wght)
	{
		wheels = whls;
		weight = wght;
		passenger_load = people;
	}
	int passengers() { return passenger_load; }
};

class truck : public vehicle
{
private:

	int passenger_load;
	double payload;
public:
	truck(int number, double max_load): vehicle(number,max_load)
	{
		passenger_load = number;
		payload = max_load;
	}
	double efficiency();
	int passengers() { return passenger_load; }
};


double truck::efficiency()
{
	return payload / (payload + weight);
}

void main()
{
	vehicle bicycle(2, 25);

	cout << "the bicycle has " << bicycle.get_wheels() << " wheels.\n";
	cout << "the bicycle weighs " << bicycle.get_weight() << " pounds.\n";
	cout << "the bicycle's wheel loading is " << bicycle.wheel_loading() << " pounds per tire.\n\n";

	car audi(4, 3500.0, 5);
	
	cout << "the audi has " << audi.get_wheels() << " wheels.\n";
	cout << "the audi weighs " << audi.get_weight() << " pounds.\n";
	cout << "the audi's wheel loading is " << audi.wheel_loading() << " pounds per tire.\n\n";

	truck jief(18, 2500.0);

	jief(2, 33675.0);
	cout << "the jief has " << jief.get_wheels() << " wheels.\n";
	cout << "the jief weighs " << jief.get_weight() << " pounds.\n";
	cout << "the jief's efficiency is " << 100.0 * jief.efficiency() << " percent.\n";
}
