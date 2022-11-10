#include<iostream>
using namespace std;
#include"Protected  Rectangle.h"
int main()
{
	Rectangle p;
	p.b(2, 3, 6, 6);
	//p.move(2, 3);//保护继承，通过派生类对象无法访问基类成员
	p.move(2, 3);
	cout << p.getx() << ","
		<< p.gety() << ","
		<< p.getw() << ","
		<< p.geth() << endl;
	return 0;
}