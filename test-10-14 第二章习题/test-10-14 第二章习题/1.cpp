//#include<iostream>										//枚举，给元素，定下标
//using namespace std;
//int main()
//{
//	enum Weekday{Sunday,Monday,Tuesday,Wednesda,Thursday,Friday,Saturday};
//	Weekday w =Monday;
//	cout << w << endl;
//	cout <<  Weekday(2);
//	return 0;
//} 

//#include<iostream>								//for，求100内的质数
//using namespace std;
//int main()
//{
//	int i = 3;
//	cout << 2 << " ";
//	int count = 0;
//	for (i = 3; i <= 100; i += 2)
//	{
//		int j = 3;
//		for (j = 3; j <= sqrt(i); j += 2)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			cout << i << " ";
//		}
//
//	}
//	cout << endl<< count;
//	return 0;
//}


//#include<iostream>								//do-while,求100内质数
//using namespace std;
//int main()
//{
//	int i = 3;
//	cout << 2 << " ";
//	do
//	{
//		int j = 3;
//		do
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			j+=2;
//		} while (j <= sqrt(i));
//		if (j > sqrt(i))
//			cout << i<<" ";
//		i+=2;
//	} while (i <= 100);
//	return 0;
//}


//#include<iostream>								//while，求100内质数
//using namespace std;
//int main()
//{
//	int i = 3;
//	cout << 2 << " ";
//	while (i <= 100)
//	{
//		int j = 3;
//		while (j <= sqrt(i))
//		{
//			if (i % j == 0)
//				break;
//			j+=2;
//		}
//		if (j > sqrt(i))
//			cout << i << " ";
//		i += 2;
//	}
//	return 0;
//}



//#include<iostream>										//猜数字游戏
//using namespace std;
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int i = rand() % 100 + 1;
//	int j = 0;
//	cout << "请输入您猜的数:>";
//	while (j != i)
//	{
//		cin >> j;
//		if (j > i)
//			cout << "您猜大了！";
//		else if (j < i)
//			cout << "您猜小了！";
//		else
//			cout << "恭喜您猜对了！";
//	}
//	return 0;
//}


//#include<iostream>										//五色球，一次拿三种不同颜色的情况
//using namespace std;
//int main()
//{
//	enum color{red,yellow,blue,white,black};
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int loop = 0;
//	int a = 0;
//	int count = 0;
//	for (i = red; i <= black; i++)
//	{
//		for (j = i + 1; j <= black; j++)
//		{
//			for (k = j + 1; k <= black; k++)
//			{
//				for (loop = 1; loop <= 3; loop++)
//				{
//					if (loop == 1)
//						a = i;
//					else if (loop == 2)
//						a = j;
//					else
//						a = k;
//					switch (a)
//					{
//					case 0:
//						cout << "red ";
//						break;
//					case 1:
//						cout << "yellow ";
//						break;
//					case 2:
//						cout << "blue ";
//						break;
//					case 3:
//						cout << "white ";
//						break;
//					case 4:
//						cout << "black ";
//						break;
//					}
//				}
//				count++;
//				cout << endl;
//			}
//		}
//	}
//	cout << count;
//	return 0;
//}

//
//#include <stdio.h>
//
//int main() {
//    printf("     **     \n");
//    printf("     **     \n");
//    printf("************\n");
//    printf("************\n");
//    printf("    *  *    \n");
//    printf("    *  *    \n");
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    printf("请输入一个整数:>");
//    scanf("%d", &i);
//    if (i >= 140)
//    {
//        printf("Genius");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main() {
//    printf("I lost my cellphone!");
//    return 0;
//}


//#include<iostream>										//a++与++a
//using namespace std;
//int main()
//{
//	int myAge = 39;
//	int yourAge = 39;
//	cout << "I am:" << myAge << "years old.\n";
//	cout << "You are:" << yourAge << "years old\n"<<endl;
//	myAge++;
//	yourAge++;
//	cout << "One year passes…" << endl;
//	cout << "I am:" << myAge << "years old." << endl;
//	cout << "You are:" << yourAge << "years old\n" << endl;
//
//	cout << "Another year passes." << endl;
//	cout << "I am:" << myAge++ << "years old." << endl;
//	cout << "You are:" << ++yourAge << "years old\n" << endl;
//
//	cout << "Let's print it again." << endl;
//	cout << "I am:" << myAge << "years old." << endl;
//	cout << "You are:" << yourAge << "years old" << endl;
//	return 0;
//}