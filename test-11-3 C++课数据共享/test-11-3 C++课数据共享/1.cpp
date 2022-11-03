////5_1.cpp
//#include <iostream>
//using namespace std;
//
//int i;				//全局变量，文件作用域
//int main() {
//    i = 5;			//为全局变量i赋值
//    {				//子块1
//        int i;		//局部变量，局部作用域
//        i = 7;
//        cout << "i = " << i << endl;//输出7
//    }
//    cout << "i = " << i << endl;//输出5
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int i = 1; // i 为全局变量，具有静态生存期。
//void other() {
//    static int a = 2;
//    static int b;
//    // a,b为静态局部变量，具有全局寿命，局部可见。
//    //只第一次进入函数时被初始化。
//    int c = 10; // C为局部变量，具有动态生存期，
//    //每次进入函数时都初始化。
//    a += 2; i += 32; c += 5;
//    cout << "---OTHER---\n";
//    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
//    b = a;
//}
//
//int main() {
//    static int a;//静态局部变量，有全局寿命，局部可见。
//    int b = -10; // b, c为局部变量，具有动态生存期。
//    int c = 0;
//    cout << "---MAIN---\n";
//    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
//    c += 8; other();
//    cout << "---MAIN---\n";
//    cout << " i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
//    i += 10; other();
//    return 0;
//}



//#include<iostream>	//static静态变量是指多次调用只初始化一次，并不是像全局变量一样可以随意调用
//using namespace std;
//
//void test()
//{
//	static int a = 0;
//}
//int main()
//{
//	test();
//	cout << a;
//	return 0;
//}


//5_4.cpp
#include <iostream>
using namespace std;

class Point {	//Point类定义
public:	//外部接口
	Point(int x = 0, int y = 0) : x(x), y(y) { //构造函数
		//在构造函数中对count累加，所有对象共同维护同一个count
		count++;
	}
	Point(Point& p) {	//复制构造函数
		x = p.x;
		y = p.y;
		count++;
	}
	~Point() { count--; }
	int getX() { return x; }
	int getY() { return y; }
	void showCount() {		//输出静态数据成员
		cout << "  Object count = " << count << endl;
	}
private:	//私有数据成员
	int x, y;
	static int count;	//静态数据成员声明，用于记录点的个数	!!!所有类对象共享同一个count
};
int Point::count = 0;//静态数据成员定义和初始化，使用类名限定
int main() {	//主函数
	Point a(4, 5);	//定义对象a，其构造函数回使count增1
	cout << "Point A: " << a.getX() << ", " << a.getY();
	a.showCount();	//输出对象个数

	Point b(a);	//定义对象b，其构造函数回使count 再 增1		
	cout << "Point B: " << b.getX() << ", " << b.getY();
	b.showCount();	//输出对象个数
	return 0;
}

