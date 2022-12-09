#include<iostream>
using namespace std;

class Date
{
public:
	void setDate(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}
	//求天数
	int monthdays(int y, int m) {
		switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if ((y % 4 == 0 && y % 100 != 0) || y % 100 == 0) {
				return 29;
			}
			return 28;
		}
	}
	//求下一天日期
	void nextday(void) {
		if (day == monthdays(year, month)) {
			day = 1;
			if (month == 12) {
				month = 1;
				year++;
			}

		}
		else
			day++;

	}
	//显示年月日
	void showdate(void) {
		cout << year << '.' << month << '.' << day << endl;
	}
private:
	int year;
	int month;
	int day;
};
int main() {
	Date a;
	int y, m, d;
	cin >> y >> m >> d;
	a.setDate(y, m, d);
	a.showdate();
	cout << "该月天数：" << a.monthdays(y, m) << endl;
	a.nextday();
	a.showdate();
	return 0;
}