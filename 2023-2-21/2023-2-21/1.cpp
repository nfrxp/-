//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<iostream>
//using namespace std;
//class exam
//{
//    int a;
//public:
//    exam(int i = 0)
//    {
//        a = i;  cout << "constructor " << a << endl;
//    }
//    ~exam()
//    {
//        cout << "deconstructor " << a << endl;
//    }
//    void print()
//    {
//        cout << a << endl;
//    }
//};
//
//void main()
//{
//    exam ob;
//    ob = 4;
//    ob.print();
//    ob = exam(8);
//    ob.print();
//}


//#include <iostream>
//using namespace std;
//class exam
//{
//    int a;
//    static int sum;
//public:
//    exam(int i = 0){
//        a = i;  sum += a;   //6 6  7 13    10  23    10  17
//    }
//    ~exam(){
//        sum -= a;
//    }
//    void print() {
//        cout << a << '\t' << sum << endl;
//    }
//};
//
//int exam::sum = 0;
//
//void main()
//{
//    exam ob1(6);
//    ob1.print();
//    exam ob2(7);
//    ob2.print();
//    exam ob3(10);
//    ob3.print();
//    ob1.~exam();
//    ob3.print();
//}


//#include <iostream>
//
//using namespace std;
//class CBaseClass
//{
//public:
//	CBaseClass(int i, int j)
//	{
//		m_nX = i;
//		m_nY = j;
//	}
//	void MoveTo(int m_nXm, int m_nYm)
//	{
//		m_nX += m_nXm;
//		m_nY += m_nYm;
//		cout << "(" << m_nX << "," << m_nY << ")" << endl;
//	}
//	void ShowPos()
//	{
//		cout << "(" << m_nX << "," << m_nY << ")" << endl;
//	}
//private:
//	int m_nX, m_nY;
//};
//
//class CDerivedClass :public CBaseClass
//{
//public:
//	CDerivedClass(int i, int j, int k, int l) :CBaseClass(i, j)
//	{
//		m_nXd = k;
//		m_nYd = l;
//	}
//	void ShowPos()
//	{
//		cout << "(" << m_nXd << "," << m_nYd << ")" << endl;
//	}
//	void func1()
//	{
//		MoveTo(3, 5);
//	}
//	void func2()
//	{
//		CBaseClass::ShowPos();
//	}
//private:
//	int m_nXd, m_nYd;
//};
//
//void main()
//{
//	CBaseClass b(1, 2);
//	b.ShowPos();
//	CDerivedClass d(3, 4, 5, 6);
//	d.func1();
//	d.ShowPos();
//	d.func2();
//	//1 2   6 9   5 6   6 9
//}


//#include <iostream>
//#include <iomanip>
//using namespace std;
//void main()
//{
//	double pi = 3.1415927;
//	int x = 12;
//	cout.width(8);  //设置输出域的宽度为8位
//	cout.setf(ios::oct | ios::showbase | ios::left);
//	cout << x << endl;
//	cout.width(12);
//	cout << pi << endl;
//	cout << resetiosflags(ios::left);  //清除左边对齐输出标志
//	cout.width(8);
//	cout.setf(ios::hex | ios::showbase | ios::right | ios::uppercase);
//	cout << x << endl;
//	cout.setf(ios::showpos | ios::scientific);
//	cout << pi << endl;
//	//12      |3.1415927   |      12|3.1415927E+0  
//}


//#include <iostream>
//#include <string.h>
//using namespace std;
//template <typename T>
//T maxt(T x, T y)
//{
//	return (x > y) ? x : y;
//}
//
//char* maxt(char* x, char* y)
//{
//	return (strcmp(x, y) > 0) ? x : y;
//}
//
//void main()
//{
//	int m = 3, n = 7;
//	double x = 1.25, y = -3.57;
//	const char* st1 = "function", * st2 = "template";
//	cout << "The maxium of m and n is: " << maxt(m, n) << endl;
//	cout << "The maxium of x and y is: " << maxt(x, y) << endl;
//	cout << "The maxium of m and y is: " << maxt<int>(x, y) << endl;
//	cout << "The maxium of st1 and st2 is: " << maxt(st1, st2) << endl;
//}

//#include<iostream>
//#include <fstream>
//using namespace std;
//int main(void)
//{
//	int a[] = { 1,2,3,4,5,6,7,8 };//2,3,6,5,10,7,14,9
//	int i;
//	ofstream out("array.dat");
//	if (!out)
//	{
//		cout << "File can't write\n";
//		return 1;
//	}
//	out.write((const char*)&a, sizeof(a));
//	out.close();
//	for (i = 0; i < 8; i++) a[i] = 0;  //clear array
//	ifstream in("array.dat");
//	if (!in)
//	{
//		cout << "File can't read\n";
//		return 1;
//	}
//	in.read(( char*)&a, sizeof(a));
//	for (i = 0; i < 8; i++)
//	{
//		if (a[i] % 2 == 0) a[i]++;
//		else a[i] += a[i];
//		cout << a[i] << ' ';
//	}
//	cout << endl;
//	in.close();
//	return 0;
//}
