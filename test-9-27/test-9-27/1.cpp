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
//	cout << "������0~6������" << endl;
//	cin >> day;
//	switch (day)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 9:
//	case 11:
//		cout << "31��" << endl;
//		break;
//	case 4:
//	case 6:
//	case 8:
//	case 10:
//	case 12:
//		cout << "30��" << endl;
//		break;
//	case 2:
//		cout << "29��" << endl;
//		break;
// default:
//cout << "һ��ֻ��12���£�giegie~" << endl;
//	}
//	return 0;
//}


#include <iostream>//�Զ��庯��(����)
using namespace std;
int isleapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year %400 == 0))
		cout << year<<"������" << endl;
	return 0;
}
int main()
{
	int a;
	cout << "Enter the year" << endl;
	cin >> a;
	if (isleapyear!=0)
		cout <<a<<"������" << endl;

	return 0;
}

