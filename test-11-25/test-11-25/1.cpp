#include<iostream>				//标准输入流
using namespace std;

void test01()		//cin.get()一次读取缓冲区的一个字符，会读取换行符
{
	char c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

	c = cin.get();
	cout << "c = " << c << endl;

}

void test02()			//cin.get(两参数)可以读取字符串，但是不读末尾的回车
{
	char p[20];
	cin.get(p, 20);

	cout << "p = " << p<<endl;

	char q= cin.get();
	cout << "q = " << q << endl;
}

void test03()			//cin.getline(两参数),读取字符串，且读取了末尾的换行符并扔掉
{
	char a[20];
	cin.getline(a, 20);

	cout << "a = " << a << endl;

	char b = cin.get();
	cout << "b = " << b << endl;
}

void test04()			//cin.ignore(),没有参数，代表忽略一个字符,数字几就代表忽略几个字符
{
	cin.ignore();
	char a=cin.get();
	cout << "a = " << a << endl;

	cin.ignore(3);
	a = cin.get();
	cout << "a = " << a << endl;
}

void test05()			//cin.peek()偷窥一个字符
{
	char a = cin.peek();
	cout << "a = " << a << endl;
	a = cin.get();
	cout << "a = " << a << endl;

}

void test06()			//cin.putback()将字符拷贝到缓冲区原位置
{
	char a = cin.get();
	cout << "a = " << a << endl;
	cin.putback(a);
	cout << "a = " << a << endl;
	char b[20];
	cin.getline(b, 20);
	cout << "b = " << b << endl;

}

void test07()		//案例1，判断用户输入的是字符串还是数字
{
	////利用偷窥
	//char a = cin.peek();
	//if (a >= '0' && a <= '9')
	//{
	//	int num;
	//	//num = cin.get();
	//	cin >> num;
	//	cout << "输入的是数字：" << num << endl;

	//}
	//else
	//{
	//	char p[20];
	//	cin.getline(p, 20);
	//	cout << "输入的是字符串：" << p << endl;
	//}

	////cin.putback()
	//char a = cin.get();
	//cin.putback(a);
	//if (a >= '0' && a <= '9')
	//{
	//	int num;
	//	cin >> num;
	//	cout << "输入的是数字：" << num << endl;
	//}
	//else
	//{
	//	char b[20];
	//	cin.getline(b, 20);
	//	cout << "输入的是字符串：" << b << endl;
	//}
}
int main()
{
	//test01();

	//test02();

	//test03();

	//test04();

	//test05();

	//test06();

	//test07();
	return 0;
}