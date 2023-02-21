#define _CRT_SECURE_NO_WARNINGS 1

//#include<iostream>
//using namespace std;
//
//class Date {
//private:
//	int Year, Month, Day;
//
//public:
//	Date(int y, int m, int d) {
//		Year = y;
//		Month = m;
//		Day = d;
//	}
//	int monthdays(int y, int m) {
//		switch (m) {
//		case 1:		case 3:		case 5:		case 7:		case 8:		case 10:
//		case 12:
//			return 31;
//		case 2:
//			if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//				return 29;
//			else return 28;
//		case 4:		case 6:		case 9:		case 11:
//			return 30;
//		}
//
//	}
//
//	void nextday(void) {
//		if (monthdays(Year, Month) == Day) {
//			if (Month == 12) {
//				cout << "下一天日期为" << Year+1 << "年" << "1月" << "1日" << endl;
//			}
//			else 
//				cout << "下一天日期为" << Year << "年" << Month+1 << "月" <<"1日" << endl;
//
//		}
//		else
//			cout << "下一天日期为" << Year << "年" << Month << "月" << Day + 1 << "日" << endl;
//	}
//
//	void showdate(void) {
//		cout << Year << "年" << Month << "月" << Day << "日" << endl;
//	}
//};
//int main() {
//	class Date today(2023, 2, 21);
//	cout << "本月一共" << today.monthdays(2023, 2) << "天" << endl;
//	today.nextday();
//	today.showdate();
//	return 0;
//}




//class CPerson {
//private:
//	char name[20];
//	char gender[2];
//	int year;
//public:
//	CPerson(char n[20], char g[2], int y) {
//		for (int i = 0; i < 20; i++) {
//			 name[i] = n[i];
//		}
//		for (int i = 0; i < 2; i++) {
//			gender[i] = g[i] ;
//		}
//		year = y;
//
//	}
//	~CPerson() { delete name,gender,year; }
//};
//
//class CStudent :public CPerson {
//private:
//	int id[20];
//	int total;
//public:
//	CStudent(char n[20], char g[2], int y, int I[20], int t) :CPerson(n, g, y) {
//		for (int i = 0; i < 20; i++) {
//			id[i] = I[i];
//		}
//		total = t;
//	}
//	~CStudent() { delete  id, total; }
//};
//
//class CTeacher :public CPerson {
//private:
//	int pay;
//	char coursename[20];
//public:
//	CTeacher(char n[20], char g[2], int y, int p, char cn[20]) :CPerson(n, g, y) {
//		for (int i = 0; i < 20; i++) {
//			coursename[i] = cn[i];
//		}
//		pay = y;
//	}
//	~CTeacher() { delete  coursename,pay; }
//};
