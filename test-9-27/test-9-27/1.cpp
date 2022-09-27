//#include<iostream>
//using namespace std;
//int main() {
//	int x, y;
//	cout << "Enter x and y:";
//	cin >> x >> y;
//	if (x != y)
//	{
//		if (x > y)
//		{
//			cout << "x>y" << endl;
//		}
//		else
//			cout << "x<y" << endl;
//
//	}
//	else
//		cout << "x=y" << endl;
//	return 0;
//}



//#include <iostream>
//using namespace std;
//int main()
//{
//	int x, y;
//	cout << "Enter x and y:";
//	cin >> x >> y;
//	if (x != y)
//		if (x < y)
//			cout << "x<y" << endl;
//		else
//			cout << "x>y" << endl;
//	else
//		cout << "x=y" << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main()
//{
//	int day = 0;
//	cout << "请输入0~6的数字" << endl;
//	cin >> day;
//	switch (day)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 9:
//	case 11:
//		cout << "31天" << endl;
//		break;
//	case 4:
//	case 6:
//	case 8:
//	case 10:
//	case 12:
//		cout << "30天" << endl;
//		break;
//	case 2:
//		cout << "29天" << endl;
//		break;
// default:
//cout << "一年只有12个月，giegie~" << endl;
//	}
//	return 0;
//}


#include <iostream>//自定义函数(不对)
using namespace std;
int isleapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0))
		cout << year<<"是闰年" << endl;
	return 0;
}
int main()
{
	int a;
	cout << "Enter the year" << endl;
	cin >> a;
	if (isleapyear!=0)
		cout <<a<<"是闰年" << endl;

	return 0;
}

