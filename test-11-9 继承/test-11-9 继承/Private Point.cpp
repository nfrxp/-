#include<iostream>							//˽�м̳�
using namespace std;
#include"Private Rectangle.h"
int main()
{
	Rectangle p;
	p.b(2, 3, 6, 6);
	//p.move(2,3);	
	/*˽�м̳У�����ͨ�������������ʻ����Ա
	����Ҫ���ʣ���ͨ�����������жԻ����������ض���*/
	p.move(2, 3);
	cout << p.getx() << ","
		<< p.gety() << ","
		<< p.getw() << ","
		<< p.geth() << endl;
		
	return 0;
}