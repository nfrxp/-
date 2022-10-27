//									//程序运行前		//内存四区-代码区
//#include<iostream>										//内存四区-全局区
//using namespace std;
//
////全局区
//// 全局变量、静态变量、常量(字符）、const全局常量
////
//int A2 = 22;
//int B2 = 99;
//
//const int A4 = 99;
//int main()
//{
//	int A1 = 10;
//	int B1 = 11;
//	cout << "局部变量A1的地址为：" << &A1 << endl;
//	cout << "局部变量B1的地址为：" << &B1 << endl;
//
//	cout << "全局变量A1的地址为：" << &A2 << endl;
//	cout << "全局变量B2的地址为：" << &B2 << endl;
//
//	static int A3 = 33;
//	static int B3 = 44;
//	cout << "静态变量A3的地址为：" << &A3 << endl;
//	cout << "静态变量B3的地址为：" << &B3 << endl;
//
//	//常量
//	//字符常量
//	cout << "字符串常量的地址为：" << &"hello world" << endl;
//	//const常量
//	//const全局常量
//	cout << "const全局常量地址为：" << &A4 << endl;
//	//const局部常量
//	const int B4 = 99;
//	cout << "const局部常量地址为：" << &B4 << endl;
//	return 0;
//}


										//程序运行后
//#include<iostream>									//栈区
//using namespace std;
//
////不要返回局部变量的 地址
//
//int* test01()
//{
//	int a = 90;
//	return &a;
//}
//
//int test02()
//{
//	int a = 90;
//	return a;
//}
//int main()
//{
//	int* p = test01();
//	cout << *p << endl;
//	cout << *p << endl;	
//	cout << test01() << endl;
//	cout << test01() << endl;
//
//	cout << test02() << endl;
//	cout << test02() << endl;
//
//
//	return 0;
//}


//#include<iostream>										//堆区
//using namespace std;
//
////1.new的基本语法
//int * func()
//{
//	//利用new关键字，将数据开辟到堆区
//	//new返回的是该数据类型的指针
//	//此时指针是局部变量，存放在栈上，用于存放堆区数据的地址
//	int* p = new int(99);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	//堆区的数据，由程序员管理开辟，由程序员管理释放
//	//利用关键字delete释放关键字
//	delete p;
//	//cout << *p << endl;
//}
//
////2.利用new在堆区开辟数组
//void test02()
//{
//	int* p = new int[9];
//	*p = 0;
//	*(p + 1) = 9;
//	cout << *p << " " << *(p + 1) << endl;
//
//	int i = 0;
//	for(i = 0; i < 9; i++)
//	{
//		p[i] = i;
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		cout << p[i] << endl;
//	}
//
//	//释放数组
//	//delete[] 数组名
//	delete[] p;
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}