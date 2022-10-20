//#include<iostream>
//using namespace std;
//int main()
//{
//	
//	int a = 10;
//	int& b = a;				//引用格式：数据类型 &别名=原名
//	cout << "a=" << a << ' ' << &a << endl;
//	cout << "b=" << b << ' ' << &b << endl;
//
//	return 0;
//}


//#include<iostream>						//不要返回局部变量的引用
//using namespace std;
//
//int& test1()
//{
//	int a = 10;			//局部变量存放在四区中的 栈区
//	return a;
//}
//
//int& test2()
//{
//	static int a = 10;	//静态变量，存放在全局区，在程序结束后系统释放
//	return a;
//}
//int main()
//{
//	int& b = test1();
//	cout << "b=" << b << endl;
//	cout << "b=" << b << endl;
//
//
//	int& c = test2();
//	cout << "c=" << c << endl;
//	cout << "c=" << c << endl;
//
//
//	test2() = 20;		//若函数返回值为引用，这个  函数调用可以作为左值。
//	cout << "c=" << c << endl;
//
//	c = 30;
//	cout << "c=" << c << endl;
//return 0;
//}


//#include<iostream>				//常量引用，防止误操作
//using namespace std;
//
//void ShowValue(const int& va1)
//{
//	//va1 = 100;		//错误
//	cout << "va1=" << va1 << endl;
//}
//int main()
//{
//	int a = 10;
//	ShowValue(a);
//	return 0;
//}