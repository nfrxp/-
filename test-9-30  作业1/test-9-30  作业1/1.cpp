//#include<iostream>							//ASCII码
//using namespace std;
//int main()
//{
//	int i;
//	for (i = 32; i < 128; i++)
//	{
//		cout << char(i) << " ";
//	}
//	return 0;
//}


//#include<iostream>						//求值
//using namespace std;
//int main()
//{
//	int a(1), b(2), c(3),d;
//	d = a | b - c;
//	cout << "1. " << d << endl;
//	d = a ^ b & -c;
//	cout << "2. " << d << endl;
//	d = a & b | c;
//	cout << "3. " << d << endl;
//	d = a | b & c;
//	cout << "4. " << d << endl;
//	return 0;
//}


//#include<iostream>					//判断成绩等级之方法一 if
//using namespace std;
//int main()
//{
//	int grade;
//	cout << "你考试考了多少分？（0~100）" << endl;
//	cin >> grade;
//	if(grade<0||grade>100)
//		cout<<"成绩在0到100之间\n";
//	else if (grade >= 90 & grade <= 100)
//		cout << "优\n";
//	else if (grade >= 80 & grade <90)
//		cout << "良\n";
//	else if (grade >= 60 & grade <80)
//		cout << "中\n"; 
//	else if (grade >= 0 & grade <60)
//		cout << "差\n";
//	return 0;
//}



//#include<iostream>					//判断成绩等级之方法二 switch
//using namespace std;
//int main()
//{
//	int grade, a;
//	cout << "你考试考了多少分？（0~100）" << endl;
//	cin >> grade;
//	if (grade < 0 || grade>100)
//		cout << "成绩需在0到100之间\n";
//	else
//	{
//		a = grade / 10;
//
//		switch (a)
//		{
//		case 10:
//		case 9:
//			cout << "优\n";
//			break;
//		case 8:
//			cout << "良\n";
//			break;
//		case 7:
//		case 6:
//			cout << "中\n";
//			break;
//		default:
//			cout << "差\n";
//			break;
//		}
//	}
//		return 0;
//}

//#include<iostream>					//while 求1到100的质数
//using namespace std;
//int main()
//{
//	int i = 2, a, b,c;		//a用于求余，b为余，c用于条件判断
//	while (i <= 100)
//	{
//		a = 2;
//		c = 1;
//		while (a <i)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				c = 0;
//				break;
//			}
//			a++;
//		}
//		if (a == i)
//		{
//			if (c)
//			cout << i << "是质数\n";
//		}
//
//		i++;
//
//	}
//	return 0;
//}


//#include<iostream>					//do while 求1到100的质数
//using namespace std;
//int main()
//{
//	int i=2, a, b, c;		//a用于求余，b为余，c用于条件判断
//	do
//	{
//		a = 2;
//		c = 1;
//		do
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				c = 0;
//				break;
//			}
//			a++;
//		} while (a < i);
//		if (a == i)
//		{
//				if (c)
//					cout << i << "是质数\n";
//		}
//		i++;
//
//	} while (i < 100);
//	return 0;
//}



//#include<iostream>						//for 求1到100的质数
//using namespace std;
//int main()
//{
//	int i = 2, a, b, c;		//a用于求余，b为余，c用于条件判断
//	for (i=2;i<=100;i++)
//	{
//		a = 2;
//		c = 1;
//		for (a =2;a< i;a++)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				c = 0;
//				break;
//			}
//
//		}
//		if (a == i)
//		{
//			if (c)
//				cout << i << "是质数\n";
//		}
//	}
//	return 0;
//}


//#include<iostream>						//while 猜数游戏 
//using namespace std;
//int main()
//{
//	int m(66), n(0);
//	while (n != m)
//	{
//		cout << "猜猜这个数是多少?(0~100)\n";
//		cin >> n;
//		if (n < m)
//			cout << "你猜的值偏小!\n";
//		else if (n > m)
//			cout << "你猜的值偏大！\n";
//		else
//			cout << "恭喜你，你猜对啦！\n";
//	}
//
//
//	return 0;
//}


#include<iostream>							//do while 猜数游戏 
using namespace std;
int main()
{
	int m(66), n(0);
	do
	{
		cout << "猜猜这个数是多少?(0~100)\n";
		cin >> n;
		if (n < m)
			cout << "你猜的值偏小!\n";
		else if (n > m)
			cout << "你猜的值偏大！\n";
		else
			cout << "恭喜你，你猜对啦！\n";

	} while (n != m);
	return 0;
}