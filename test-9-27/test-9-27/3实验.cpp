//#include<iostream>
//using  namespace std;
//int main(void)
//{
//	cout << "Hello world!" << endl;
//	return 0;
//}

//#include<iostream>						//���е����ַ�ʽ
//using  namespace std;
//int main(void) 
//{
//	cout << "     *" << endl;
//	cout << "    ***\n" ;
//	cout << "   *****" << endl;
//	cout << "  *******\n" ;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main(void)
//{
//	int data1, data2, data3;
//	data1 = 80;
//	data2 = 80;
//	data3 = data1 + data2;
//
//
//	return 0;
//}


//#include<iostream>							//����(��������Ӱ��������)
//using  namespace std;
//int main(void)
//{
//	int a, b, yl, y2, y3, y4; 
//	a = 12;
//	b = 35;
//	yl = a + b; 
//	y2 = a - b;
//	y3 = a * b;
//	y4 = a / b;
//	cout << ".l=" << yl << endl; 
//	cout << "y2 = " << y2 << endl; 
//	cout << "y3 = " << y3 << endl; 
//	cout << "y4 = " << y4 << endl;
//
//	return 0;
//}

//#include<iostream>						//ASCII���
//using namespace std;
//int main(void)
//{
//	char a, b, c, d;
//	cout << "Please input a character:";
//	cin >> c;
//	a = 'A';
//	b = a + 32;
//	d = 112;
//	cout << a << ":" << int(a) << endl;
//	cout << b << ":" << int(b) << endl;
//	cout << c << ":" << int(c) << endl;
//	cout << d << ":" << int(d) << endl;
//
//	return 0;
//}


//#include <iostream>
//using namespace std;
//int main(void)
//{
//	int a = 9, b = 5;
//
//	cout << a << "," << b << endl;
//	cout << a++ << "," << b--<<endl;
//	cout << a << "," << b << endl;
//	cout << ++a << "," << --b << endl;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main(void)
//{
//	
//		int a = -1;
//		unsigned b = 1;
//		char c = 'A';
//
//		cout << dec << a << "," << hex << a << "," << oct << a << "," << dec << unsigned(a) << endl;
//		cout << dec << b << "," << hex << b << "," << oct << b << "," << dec << int(b) << endl;
//		cout << dec << int(c) << "," << hex << int(c) << "," << oct << int(c) << "," << c << endl;
//
//		return 0;
//	
//}


//#include<iostream>					//������������͵��ֽ���
//using  namespace std;
//int main(void)
//{
//
//	cout << "char�ֽ���Ϊ   " << sizeof(char) << endl;
//	cout << "short�ֽ���Ϊ  " << sizeof(short) << endl;
//	cout << "int�ֽ���Ϊ    " << sizeof(int) << endl;
//	cout << "long�ֽ���Ϊ   " << sizeof(float) << endl;
//	cout << "float�ֽ���Ϊ  " << sizeof(float) << endl;
//	cout << "double�ֽ���Ϊ " << sizeof(double) << endl;
//	return 0;
//}

//#include<iostream>						//��������Զ����룬��Ƕ�
//#include<math.h>
//using  namespace std;
//int main(void)
//{
//	double x, y, a;
//	x = 0;
//	y = 0;
//	cout << "����������x,y����:\n";
//	cin >> x;
//	cin >> y;
//	a = (x*x+y*y);
//	double r = sqrt(a);
//	cout << "������ԭ��ľ���=" << r << endl;
//	
//	double b; //bΪ����ֵ
//	double angle ;
//	double PI(3.1415926);
//	b=atan2(y,x);
//	angle = b * 360 / (2 * PI);
//	cout << "�Ƕ�Ϊ" << angle << endl;
//
//	return 0;
//}

//#include<iostream>							//��Բ�����
//using  namespace std;
//int main(void)
//{
//	double r, PI(3.14159),s;
//	cout << "������뾶\n";
//	cin >> r;
//	s = PI * r * r;
//	cout << "���Ϊ" << s << endl;
//	return 0;
//}