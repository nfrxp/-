//#include<iostream>								//1到7的阶乘之和
//using namespace std;
//void main()
//{
//	int i = 1;
//	int j = 1;
//	int sum = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//	cout << sum;
//}

//#include<iostream>									//求sin x，精确到1e-6
//using namespace std;
//int main()
//{
//	double x = 0;
//	double sum = 0;
//	int n = 1;
//	cout << "请输入x:>";
//	cin >> x;
//
//	double temp = x;
//	do
//	{
//		sum += temp;
//		n++;
//		temp = temp * (-x * x) / (2 * n - 1) / (2 * n - 2);
//	} while (fabs(temp) >= 1e-6);
//
//	cout << sum;
//	return 0;
//}


//#include<iostream>									//求sin x，精确到1e-6
//using namespace std;
//int main()
//{
//	double x = 0;
//	cin >> x;
//	double a = sin(x);
//	cout << a;
//	return 0;
//}





//#include<iostream>									//求sin x，精确到1e-6
//using namespace std;
//#include<math.h>
//int main()
//{
//	int i, x;
//	cout << "输入整数x:"; cin >> x;
//	double temp = x, s = 0;
//	for (i = 1; fabs(temp) >= 1e-6; i += 2) 
//	{
//		s += temp;
//		temp = temp * (-x * x) / ((float)(i + 1) * (i + 2));
//	}
//	cout << "结果是:" << s << endl;
//	return 0;
//}



//#include <iostream>									//求sin x，精确到1e-6
//#include <cmath>  /*对C++标准库中数学函数的说明*/
//using namespace std;
//
//const double TINY_VALUE = 1e-6;
//
//int main() 
//{
//	int x = 0;
//	cin >> x;
//	double g = 0;
//	double t = x;
//	int n = 1;
//	do {
//		g += t;
//		n++;
//		t = -t * x * x / (2 * n - 1) / (2 * n - 2);
//	} while (fabs(t) >= TINY_VALUE);
//	cout << g;
//
//	return 0;
//}



//#include<iostream>										//投骰子
//#include<stdlib.h>
//#include<math.h>
//using namespace std;
//
////投骰子、计算和数、输出和数
//int rollDice() 
//{
//	int die1 = 1 + rand() % 6;
//	int die2 = 1 + rand() % 6;
//	int sum = die1 + die2;
//	cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
//	return sum;
//}
//
//
//enum GameStatus { WIN, LOSE, PLAYING };
//
//int main() 
//{
//	int sum, myPoint;
//	GameStatus status;
//
//	unsigned seed;
//	cout << "Please enter an unsigned integer: ";
//	cin >> seed;//输入随机数种子
//	srand(seed);//将种子传递给rand()
//
//	sum = rollDice(); //第一轮投骰子、计算和数
//
//
//	switch (sum) {
//	case 7:   //如果和数为7或11则为胜,状态为WIN
//	case 11:
//		status = WIN;
//		break;
//	case 2:   //和数为2、3或12则为负,状态为LOSE
//	case 3:
//	case 12:
//		status = LOSE;
//		break;
//	default: /*其它情况,游戏尚无结果,状态为
//			PLAYING,记下点数,为下一轮做准备 */
//		status = PLAYING;
//		myPoint = sum;
//		cout << "point is " << myPoint << endl;
//		break;
//	}
//
//
//	while (status == PLAYING) { //只要状态仍为PLAYING,就继续进 行下一轮
//		sum = rollDice();
//		if (sum == myPoint)    //某轮的和数等于点数则取胜
//			status = WIN;
//		else if (sum == 7)    //出现和数为7则为负
//			status = LOSE;
//	}
//
//	//当状态不为PLAYING时上面的循环结束,以下程序段输出游戏结果
//	if (status == WIN)
//		cout << "player wins" << endl;
//	else
//		cout << "player loses" << endl;
//
//	return 0;
//}




#include<iostream>										//投骰子
using namespace std;

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;
	cout << "player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}


int main()
{
	unsigned seed;
	cout << "Please enter an unsigned integer: ";
	cin >> seed;//输入随机数种子
	srand(seed);//将种子传递给rand()

	int sum = 0;
	sum = rollDice();
	if (sum == 7 || sum == 11)
	{
		cout << "获胜！";
	}
	else if (sum == 2 || sum == 3 || sum == 12)
	{
		cout << "失败！";
	}
	else 
	{
		int standerd = sum;
		while (1)
		{
			sum = rollDice();
			if (sum == standerd)
			{
				cout << "获胜！";
				break;
			}
			else if(sum==7)
			{
				cout << "失败！";
				break;
			}
		}
	}
	return 0;
}



//#include<iostream>									//递归，求阶乘
//using namespace std;
//
//int fun(int i)
//{
//	if (i > 1)
//	{
//		int j = i;
//		i--;
//		int sum = 0;
//		sum=j* fun(i);
//		
//		return sum;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	cout << "请输入一个大于零的数：>";
//	cin >> i;
//	int a = fun(i);
//	cout << a;
//
//	return 0;
//}



//#include <iostream>											//汉诺塔
//using namespace std;
//
////把src针的最上面一个盘子移动到dest针上
//void move(char src, char dest) 
//{
//	cout << src << " --> " << dest << endl;
//}
//
////把n个盘子从src针移动到dest针，以medium针作为中介
//void hanoi(int n, char src, char medium, char dest) 
//{
//	if (n == 1)
//		move(src, dest);
//	else 
//	{
//		hanoi(n - 1, src, dest, medium);
//		move(src, dest);
//		hanoi(n - 1, medium, src, dest);
//	}
//}
//
//int main() 
//{
//	int m;
//	cout << "Enter the number of diskes: ";
//	cin >> m;
//	cout << "the steps to moving " << m << " diskes:" << endl;
//	hanoi(m, 'A', 'B', 'C');
//	return 0;
//}




//#include <iostream>									//传值和传址
//#include <iomanip>
//using namespace std;
//void fiddle(int in1, int& in2)
//{
//	in1 = in1 + 100;
//	in2 = in2 + 100;
//	cout << "The values are ";
//	cout << setw(5) << in1;
//	cout << setw(5) << in2 << endl;
//}
//int main() {
//	int v1 = 7, v2 = 12;
//	cout << "The values are ";
//	cout << setw(5) << v1;
//	cout << setw(5) << v2 << endl;
//	fiddle(v1, v2); 
//	cout << "The values are ";
//	cout << setw(5) << v1;
//	cout << setw(5) << v2 << endl;
//	return 0;
//}


//3_15.cpp
//#include <iostream>									//自定义函数，默认参数
//#include <iomanip>
//using namespace std;
//
//int getVolume(int length, int width = 2, int height = 3);
//
//int main() {
//	const int X = 10, Y = 12, Z = 15;
//	cout << "Some box data is ";
//	cout << getVolume(X, Y, Z) << endl;
//	cout << "Some box data is ";
//	cout << getVolume(X, Y) << endl;
//	cout << "Some box data is ";
//	cout << getVolume(X) << endl;
//	return 0;
//}
//
//int getVolume(int length, int width/* = 2 */, int height/* = 3 */) {
//	cout << setw(5) << length << setw(5) << width << setw(5) << height << '\t';
//	return length * width * height;
//}



//#include<iostream>										//重载函数，功能相似，但形参的数据类型或者个数不同
//using namespace std;
//
//int sumOFSquare(int m, int n)//求平方和
//{
//	int a = m * m + n * n;
//	return a;
//}
//
//double sumOFSquare(double i, double j)
//{
//	double b = i * i + j * j;
//	return b;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	cin >> m >> n;
//	int a=sumOFSquare(m, n);
//	cout << a << endl;
//
//	double i = 0;
//	double j = 0;
//	cin >> i >> j;
//	double  b= sumOFSquare(i, j);
//	cout << b << endl;
//	return 0;
//}



//#include <iostream>										//内联函数，编译时在调用处用函数体替换
//using namespace std;
//
//const double PI = 3.14159265358979;
//inline double calArea(double radius)
//{
//	return PI * radius * radius;
//}
//
//int main() {
//	double r = 3.0;
//	double area = calArea(r);
//	cout << area << endl;
//	return 0;
//}


