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
//		cout<<"成绩需在0到100之间\n";
//	else if (grade >= 90 && grade <= 100)
//		cout << "优\n";
//	else if (grade >= 80 && grade <90)
//		cout << "良\n";
//	else if (grade >= 60 && grade <80)
//		cout << "中\n"; 
//	else if (grade >= 0 && grade <60)
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
//	int i = 2, a, b;		//a用于求余，b为余
//	while (i <= 100)
//	{
//		a = 2;
//		while (a <i)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				break;
//			}
//			a++;
//		}
//		if (a == i)
//		{
//			cout << i << "是质数\n";
//		}
//
//		i++;
//
//	}
//	return 0;
//}


//#include<iostream>					//do-while 求1到100的质数
//using namespace std;
//int main()
//{
//	int i=2, a, b;		//a用于求余，b为余
//	do
//	{
//		a = 2;
//		do
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				break;
//			}
//			a++;
//		} while (a < i);
//		if (a == i)
//		{
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
//	int i = 2, a, b;		//a用于求余，b为余
//	for (i=2;i<=100;i++)
//	{
//		a = 2;
//		for (a =2;a< i;a++)
//		{
//			b = i % a;
//			if (b == 0)
//			{
//				break;
//			}
//
//		}
//		if (a == i)
//		{
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


//#include<iostream>							//do while 猜数游戏 
//using namespace std;
//int main()
//{
//	int m(66), n(0);
//	do
//	{
//		cout << "猜猜这个数是多少?(0~100)\n";
//		cin >> n;
//		if (n < m)
//			cout << "你猜的值偏小!\n";
//		else if (n > m)
//			cout << "你猜的值偏大！\n";
//		else
//			cout << "恭喜你，你猜对啦！\n";
//
//	} while (n != m);
//	return 0;
//}



//#include <iostream>								//从5个球里取三个球 方法一
//using namespace std;
//int main()
//{
//
//	int i,j,k;					//a,b,c分别代表取的三个球
//	int b = 0;					//b代表情况的种数
//	for (i = 0; i <= 4; i++)	//0到4分别对应红到黑五种颜色
//	{
//		for (j = 0; j <= 4; j++)
//		{
//			if (i == j)
//				continue;
//			else
//				for (k =0; k <= 4; k++)
//				{
//					if (k == i || k == j)
//						continue;
//					else
//					{
//						b++;
//						cout << b << "  ";
//						switch (i)
//						{
//						case 0:
//							cout << "	red" ;
//							break;
//						case 1:
//							cout << "	yellow" ;
//							break;
//						case 2:
//							cout << "	blue" ;
//							break;
//						case 3:
//							cout << "	white" ;
//							break;
//						case 4:
//							cout <<	"	black";
//							break;
//						}
//
//						switch (j)
//						{
//						case 0:
//							cout << "	red";
//							break;
//						case 1:
//							cout << "	yellow";
//							break;
//						case 2:
//							cout << "	blue";
//							break;
//						case 3:
//							cout << "	white";
//							break;
//						case 4:
//							cout << "	black";
//							break;
//						}
//
//						switch (k)
//						{
//						case 0:
//							cout << "	red"<<endl;
//							break;
//						case 1:
//							cout << "	yellow" << endl;
//							break;
//						case 2:
//							cout << "	blue" << endl;
//							break;
//						case 3:
//							cout << "	white" << endl;
//							break;
//						case 4:
//							cout << "	black" << endl;
//							break;
//						}
//						
//
//					}
//				}
//		}
//	}
//	
//
//	return 0;
//}

//#include<iostream>								//从5个球里取三个球 方法二（用for循环把三个switch合并为一个）
//using namespace std;
//int main()
//{
//	
//	int i, j, k;
//	int m(0);//计数
//	int b(0), loop;
//	for (i = 0; i <= 4; i++)
//	{
//		for(j=i+1;j<=4;j++)
//			if (j != i)
//			{
//				for (k = j+1; k <= 4; k++)
//				{
//					if ((k != i )&& (k != j))
//					{
//						m++;
//						cout << m<<".";
//						for (loop = 1; loop <= 3; loop++)
//						{
//							switch (loop)
//							{
//							case 1:
//								b = i;
//								break;
//							case 2:
//								b = j;
//								break;
//							case 3:
//								b = k;
//								break;
//							}
//
//							switch (b)
//							{
//							case 0:
//								cout << "	red	";
//								break;
//							case 1:
//								cout << "	yellow	";
//								break;
//							case 2:
//								cout << "	blue	";
//								break;
//							case 3:
//								cout << "	white	";
//								break;
//							case 4:
//								cout << "	black	";
//								break;
//							}
//
//						}
//						cout << endl;
//					}
//				}
//			}
//	}
//	return 0;
//}



//#include <iostream>								//一次取3个，不分顺序,枚举
//using namespace std;
//int main()
//{
//    enum color{red,yellow,blue,white,black};
//    color color1;
//    int i, j, k, loop;
//    int count = 0; //计数
//    for (i = red; i <= black; i++)
//    {
//        for (j = i+1; j <= black; j++)
//        {
//            for (k = j+1; k <= black; k++)
//            {
//                if (i != j && i != k && j != k)
//                {
//                    count++;
//                    cout << count<<".";
//                    for (loop = 1; loop <= 3; loop++)
//                    {
//                        switch (loop)
//                        {
//                        case 1:
//                            color1 = color(i);
//                            break;
//                        case 2:
//                            color1 = color(j);
//                            break;
//                        case 3:
//                            color1 = color(k);
//                            break;
//                        default:
//                            break;
//                        }
//                        switch (color1)
//                        {
//                        case red:
//                            cout << "red    "
//                                << "  ";
//                            break;
//                        case yellow:
//                            cout << "yellow "
//                                << "   ";
//                            break;
//                        case blue:
//                            cout << "blue   "
//                                << "  ";
//                            break;
//                        case white:
//                            cout << "white  "
//                                << "  ";
//                            break;
//                        case black:
//                            cout << "black  "
//                                << "  ";
//                            break;
//                        default:
//                            break;
//                        }
//                    }
//                    cout << endl;
//                }
//
//            }
//        }
//    }
//
//    return 0;
//}

#include<iostream>
#include <stdlib.h>
using namespace std;
void main()
{
	int i, j, k, n = 0;
	char c[5][7] = { "red","yellow","blue","white","black" };
	for (i = 0; i < 5; i++)
		for (j = i + 1; j < 5; j++)
			for (k = j + 1; k < 5; k++)
			{
				if (i != j && j != k && k != i)
				{
					n++;
					cout << n << ".";
					cout<<c[i]<<"  "<< c[j] <<"  "<< c[k] << endl;

				}
			}
}


