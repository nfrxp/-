#include<iostream>
using namespace std;
#include"Public Rectangle.h"
int main()
{
	//定义矩形类对象
	Rectangle p;
	p.b(3, 3, 6, 5);
	p.move(2, 3);
	//依次输出特征
	cout << p.getx() << ","
		<< p.gety() << ","
		<< p.getw() << ","
		<< p.geth() << ",";
	return 0;
}