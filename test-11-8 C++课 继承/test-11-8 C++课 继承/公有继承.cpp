#include <iostream>
#include <cmath>
#include"���м̳�Rectangle.h"
using namespace std;
int main() {
	Rectangle rect;	//����Rectangle��Ķ���
	//���þ��ε�����
	rect.initRectangle(2, 3, 20, 10);
	rect.move(3, 2);	//�ƶ�����λ��
	cout << "The data of rect(x,y,w,h): " << endl;
	//������ε���������
	cout << rect.getX() << ", "
		<< rect.getY() << ", "
		<< rect.getW() << ", "
		<< rect.getH() << endl;
	return 0;
}
