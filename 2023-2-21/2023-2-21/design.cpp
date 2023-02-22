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


//#include<iostream>
//using namespace std;
//const double PI = 3.14159;
////公共基类
//class Body {
//private:
//	double x;
//public:
//	Body(double a) {
//		x = a;
//	}
//	virtual double v() = 0;
//};
//
////正方体类
//class Cube :public Body {
//private:
//	double b;
//public:
//	Cube(double B) :Body(B) {
//		b = B;
//	}
//	virtual double v() { return PI * b * b * b; }
//};
//
////球类
//class Sphere :public Body {
//private:
//	double c;
//public:
//	Sphere(double C) :Body(C) {
//		c = C;
//	}
//	virtual double v() { return 4.0 / 3 * PI * c * c * c; }
//};
//
////圆柱类
//class Column :public Body {
//private:
//	double d;
//	double h;
//
//public:
//	Column(double D, double H) :Body(D) {
//		d = D;
//		h = H;
//	}
//	virtual double v() { return PI * d * d * h; }
//};
//int main() {
//	Cube cube1(3);
//	Sphere sphere1(4);
//	Column column1(5,6);
//	cout << "正方体体积：" << cube1.v()
//		<< "\n球体积：" << sphere1.v()
//		<< "\n圆柱体积：" << column1.v() << endl;
//	return 0;
//}

#include<iostream>
using namespace std;

class CPoint {
private:
	int m_x;
	int m_y;
public:
	CPoint(int x, int y) {
		m_x = x;
		m_y = y;
	}
	int GetX() { return m_x; }
	int GetY() { return m_y; }

	//类内重载为成员函数
	CPoint operator+(CPoint b) {
		CPoint t(0,0);
		t.m_x = this->m_x + b.m_x;
		t.m_y = this->m_y + b.m_y;
		return t;
	}
};
int main() {
	CPoint a1(1, 2);
	CPoint a2(4, 9);
	CPoint a3(0,0);
	a3 = a1 + a2;
	cout << a3.GetX() <<'\t' << a3.GetY() << endl;
	return 0;
}