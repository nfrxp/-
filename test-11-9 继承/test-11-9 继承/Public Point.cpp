#include<iostream>
using namespace std;
#include"Public Rectangle.h"
int main()
{
	//������������
	Rectangle p;
	p.b(3, 3, 6, 5);
	p.move(2, 3);
	//�����������
	cout << p.getx() << ","
		<< p.gety() << ","
		<< p.getw() << ","
		<< p.geth() << ",";
	return 0;
}