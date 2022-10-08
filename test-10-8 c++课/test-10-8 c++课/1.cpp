//#include<iostream>									//ASCII码
//using namespace std;
//void main()
//{
//	char ch;//123为三个字符，ch为char，则只取1
//	cin >> ch;
//	ch = (ch > 'A' && ch < 'Z') ? (ch + 32) : ch;
//	ch = (ch > 'a' && ch < 'z') ? (ch - 32) : ch;
//	cout << ch;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n++ < 10)		//<与++只有时间先后的顺序，此处++在后，先逻辑在算术
//		cout << n << endl;			//若给n++添上括号，输入9时任然从进入，而不是else
//	else
//		cout << n-- << endl;
//	return 0;
//}



//#include <iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	int i;
//	int j;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			cout << i << '*' << j << '=' <<setw(2)<< i * j << "  ";
//		}
//		cout << endl;
//	}
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//
//	int i = 1;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 != 0)
//			continue;			//continue只跳过循环体内的语句
//		sum += i;
//	}
//	cout << sum;
//	return 0;
//}

//#include<iostream>									//求100到200之间的素数，sqrt
//using namespace std;
//int main()
//{
//	int i = 1;
//	int j = 3;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int a = 0;
//		a = (int)sqrt((double)i);
//		for (j = 3; j < a; j += 2)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j>a)
//			cout << i << ' ';
//	}
//
//	return 0;
//}

