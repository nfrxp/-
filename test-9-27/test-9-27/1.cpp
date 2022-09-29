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

//#include <iostream>								//已知年月求该月有多少天
//using namespace std;
//int main()
//{
//	int y,m;
//	cout << "请依次输入年份以及月份" << endl;
//	cin >> y;
//	cin >> m;
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		switch (m)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 9:
//		case 11:
//			cout << "该月有31天" << endl;
//			break;
//		case 4:
//		case 6:
//		case 8:
//		case 10:
//		case 12:
//			cout << "该月有30天" << endl;
//			break;
//		case 2:
//			cout << "该月有29天" << endl;
//			break;
//		default:
//			cout << "一年只有12个月，gie~gie~" << endl;
//		}
//
//
//	}
//	else
//		switch (m)
//		{
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 9:
//		case 11:
//			cout << "该月有31天" << endl;
//			break;
//		case 4:
//		case 6:
//		case 8:
//		case 10:
//		case 12:
//			cout << "该月有30天" << endl;
//			break;
//		case 2:
//			cout << "该月有29天" << endl;
//			break;
//		default:
//			cout << "一年只有12个月，gie~gie~" << endl;
//		}
//	return 0;
//}


//#include <iostream>//自定义函数(不对)
//using namespace std;
//int isleapyear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0))
//		cout << year<<"是闰年" << endl;
//	return 0;
//}
//int main()
//{
//	int a;
//	cout << "Enter the year" << endl;
//	cin >> a;
//	if (isleapyear!=0)
//		cout <<a<<"是闰年" << endl;
//
//	return 0;
//}

