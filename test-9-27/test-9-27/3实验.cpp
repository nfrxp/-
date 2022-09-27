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

#include<iostream>							//运算
using  namespace std;
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
//	cout << "y4 = " < y4 << endl;
//
//	return 0;
//}

//#include<iostream>					//求各种数据类型的字节数
//using  namespace std;
//int main(void)
//{
//
//	cout << "char=" <<  sizeof(char) ;
//	return 0;
//}

//#include<iostream>						//求离坐标远点距离，求角度(错误)
//#include<math.h>
//using  namespace std;
//int main(void)
//{
//	double x, y,a;
//	x = 0;
//	y = 0;
//
//	cout << "请依次输入x,y坐标:\n";
//	cin >> x;
//	cin >> y;
//	a = (x*x+y*y);
//	double r = sqrt(a);
//	cout << "斜边平方=" << a << endl;
//	cout << "距离=" << r << endl;
//	
//	float b = 3.3;
//	int angle ;
//	angle=atan(b);
//	cout << "角度为" << angle << endl;
//	return 0;
//}

#include<iostream>							//求圆的面积
using  namespace std;
int main(void)
{
	double r, PI(3.14159),s;
	cout << "请输入半径\n";
	cin >> r;
	s = PI * r * r;
	cout << "面积为" << s << endl;
	return 0;
}