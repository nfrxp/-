//#include<iostream>								//1��7�Ľ׳�֮��
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

//#include<iostream>									//��sin x����ȷ��1e-6
//using namespace std;
//int main()
//{
//	double x = 0;
//	double sum = 0;
//	int n = 1;
//	cout << "������x:>";
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


//#include<iostream>									//��sin x����ȷ��1e-6
//using namespace std;
//int main()
//{
//	double x = 0;
//	cin >> x;
//	double a = sin(x);
//	cout << a;
//	return 0;
//}





//#include<iostream>									//��sin x����ȷ��1e-6
//using namespace std;
//#include<math.h>
//int main()
//{
//	int i, x;
//	cout << "��������x:"; cin >> x;
//	double temp = x, s = 0;
//	for (i = 1; fabs(temp) >= 1e-6; i += 2) 
//	{
//		s += temp;
//		temp = temp * (-x * x) / ((float)(i + 1) * (i + 2));
//	}
//	cout << "�����:" << s << endl;
//	return 0;
//}



//#include <iostream>									//��sin x����ȷ��1e-6
//#include <cmath>  /*��C++��׼������ѧ������˵��*/
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



//#include<iostream>										//Ͷ����
//#include<stdlib.h>
//#include<math.h>
//using namespace std;
//
////Ͷ���ӡ�����������������
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
//	cin >> seed;//�������������
//	srand(seed);//�����Ӵ��ݸ�rand()
//
//	sum = rollDice(); //��һ��Ͷ���ӡ��������
//
//
//	switch (sum) {
//	case 7:   //�������Ϊ7��11��Ϊʤ,״̬ΪWIN
//	case 11:
//		status = WIN;
//		break;
//	case 2:   //����Ϊ2��3��12��Ϊ��,״̬ΪLOSE
//	case 3:
//	case 12:
//		status = LOSE;
//		break;
//	default: /*�������,��Ϸ���޽��,״̬Ϊ
//			PLAYING,���µ���,Ϊ��һ����׼�� */
//		status = PLAYING;
//		myPoint = sum;
//		cout << "point is " << myPoint << endl;
//		break;
//	}
//
//
//	while (status == PLAYING) { //ֻҪ״̬��ΪPLAYING,�ͼ����� ����һ��
//		sum = rollDice();
//		if (sum == myPoint)    //ĳ�ֵĺ������ڵ�����ȡʤ
//			status = WIN;
//		else if (sum == 7)    //���ֺ���Ϊ7��Ϊ��
//			status = LOSE;
//	}
//
//	//��״̬��ΪPLAYINGʱ�����ѭ������,���³���������Ϸ���
//	if (status == WIN)
//		cout << "player wins" << endl;
//	else
//		cout << "player loses" << endl;
//
//	return 0;
//}




#include<iostream>										//Ͷ����
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
	cin >> seed;//�������������
	srand(seed);//�����Ӵ��ݸ�rand()

	int sum = 0;
	sum = rollDice();
	if (sum == 7 || sum == 11)
	{
		cout << "��ʤ��";
	}
	else if (sum == 2 || sum == 3 || sum == 12)
	{
		cout << "ʧ�ܣ�";
	}
	else 
	{
		int standerd = sum;
		while (1)
		{
			sum = rollDice();
			if (sum == standerd)
			{
				cout << "��ʤ��";
				break;
			}
			else if(sum==7)
			{
				cout << "ʧ�ܣ�";
				break;
			}
		}
	}
	return 0;
}



//#include<iostream>									//�ݹ飬��׳�
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
//	cout << "������һ�������������>";
//	cin >> i;
//	int a = fun(i);
//	cout << a;
//
//	return 0;
//}



//#include <iostream>											//��ŵ��
//using namespace std;
//
////��src���������һ�������ƶ���dest����
//void move(char src, char dest) 
//{
//	cout << src << " --> " << dest << endl;
//}
//
////��n�����Ӵ�src���ƶ���dest�룬��medium����Ϊ�н�
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




//#include <iostream>									//��ֵ�ʹ�ַ
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
//#include <iostream>									//�Զ��庯����Ĭ�ϲ���
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



//#include<iostream>										//���غ������������ƣ����βε��������ͻ��߸�����ͬ
//using namespace std;
//
//int sumOFSquare(int m, int n)//��ƽ����
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



//#include <iostream>										//��������������ʱ�ڵ��ô��ú������滻
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


