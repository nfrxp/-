//#include<iostream>
//using  namespace std;
//int main(void)
//{
//	cout << "Hello world!" << endl;
//	return 0;
//}

//#include<iostream>						//换行的两种方式
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


//#include<iostream>							//运算(数据类型影响输出结果)
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

//#include<iostream>						//ASCII码表
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


//#include<iostream>					//求各种数据类型的字节数
//using  namespace std;
//int main(void)
//{
//
//	cout << "char字节数为   " << sizeof(char) << endl;
//	cout << "short字节数为  " << sizeof(short) << endl;
//	cout << "int字节数为    " << sizeof(int) << endl;
//	cout << "long字节数为   " << sizeof(float) << endl;
//	cout << "float字节数为  " << sizeof(float) << endl;
//	cout << "double字节数为 " << sizeof(double) << endl;
//	return 0;
//}

//#include<iostream>						//求离坐标远点距离，求角度
//#include<math.h>
//using  namespace std;
//int main(void)
//{
//	double x, y, a;
//	x = 0;
//	y = 0;
//	cout << "请依次输入x,y坐标:\n";
//	cin >> x;
//	cin >> y;
//	a = (x*x+y*y);
//	double r = sqrt(a);
//	cout << "坐标与原点的距离=" << r << endl;
//	
//	double b; //b为弧度值
//	double angle ;
//	double PI(3.1415926);
//	b=atan2(y,x);
//	angle = b * 360 / (2 * PI);
//	cout << "角度为" << angle << endl;
//
//	return 0;
//}

//#include<iostream>							//求圆的面积
//using  namespace std;
//int main(void)
//{
//	double r, PI(3.14159),s;
//	cout << "请输入半径\n";
//	cin >> r;
//	s = PI * r * r;
//	cout << "面积为" << s << endl;
//	return 0;
//}