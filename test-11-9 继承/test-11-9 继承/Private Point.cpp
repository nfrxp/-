#include<iostream>							//私有继承
using namespace std;
#include"Private Rectangle.h"
int main()
{
	Rectangle p;
	p.b(2, 3, 6, 6);
	//p.move(2,3);	
	/*私有继承，不可通过派生类对象访问基类成员
	若需要访问，则通过在派生类中对基类对象进行重定义*/
	p.move(2, 3);
	cout << p.getx() << ","
		<< p.gety() << ","
		<< p.getw() << ","
		<< p.geth() << endl;
		
	return 0;
}