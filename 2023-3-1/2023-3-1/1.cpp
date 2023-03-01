#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//using namespace std;
//int main() {
//	int a, b, d = 25;
//	a = d / 8 % 9;
//	b = a && (-1);
//	cout << a << ',' << b;
//
//	return 0;
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


//#include<iostream>
//using namespace std;
//
//class Point {
//public:
//	Point(int x = 0, int y = 0) :x(x),y(y) {
//		//在构造函数中对count累加，所有对象共同维护同一个count
//		count++;
//	}
//	Point(Point& p) {
//		//复制构造函数
//		x = p.x;
//		y = p.y;
//		count++;//若此处不调用count，在复制构造时，count会初始化为0；
//	}
//	~Point() {
//		count--;
//	}
//	int getx() { return x; }
//	int gety() { return y; }
//	void showCount() {
//		//输出静态数据成员
//		cout << " Object Count=" << count << endl;
//	}
//private:
//	int x;
//	int y;
//	static int count;//声明静态数据成员
//};
//int Point::count = 0;//静态数据成员定义和初始化，使用类名Point限制
//
//int main() {
//	Point a(3, 4);//定义对象a，构造函数使count+1
//	cout << "Point a:" << a.getx() << "," << a.gety();
//	a.showCount();//输出对象个数
//
//	Point b(a);//定义对象b，复制构造函数使count+1
//	cout << "Point b:" << b.getx() << "," << b.gety();
//	b.showCount();//输出对象个数
//
//	Point c(1, 2);//定义对象c,构造函数使count+1
//	cout << "Point c:" << c.getx() << "," << c.gety();
//	c.showCount();//输出对象个数
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Point {
//public:
//	Point(int x, int y) :x(x), y(y) {
//		//在构造函数中对count累加，所有对象共同维护同一个count
//		count++;
//	}
//	Point(Point& p) {
//		//复制构造函数
//		x = p.x;
//		y = p.y;
//		count++;
//	}
//	~Point() { count--; }
//	int getx() { return x; }
//	int gety() { return y; }
//	static void showCount() {
//		//静态成员函数
//		cout << " Object count:" << count << endl;
//	}
//private:
//	int x, y;
//	static int count;
//};
//int Point::count = 0;
//int main() {
//	Point a(3, 4);//定义对象a，构造函数使count++
//	cout << "Point a:" << a.getx() << "," << a.gety();
//	Point::showCount();//调用静态成员函数，输出对象个数
//
//	Point b(a);//定义对象b，复制构造函数使count++
//	cout << "Point b:" << b.getx() << "," << b.gety();
//	Point::showCount();//调用静态成员函数，输出对象个数
//
//	return 0;
//}

