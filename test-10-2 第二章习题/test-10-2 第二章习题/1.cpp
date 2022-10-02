//#include <iostream>		//执行下列语句后，n为多少 int n;for(n=0;n<100;n++);
//using namespace std;
//int main()
//{
//	int n;
//	int b = 0;
//	for (n = 0; n < 100; n++)
//	{
//		cout << b<<" ";
//	}
//	cout << endl;
//	cout << n;
//	return 0;
//}

//#include <iostream> //从100到200，步长为2 for循环
//using namespace std;
//int main()
//{
//	int n;
//	for (n = 100; n < 201; n += 2)
//		cout << n << " ";
//	return 0;
//}

//#include<iostream> //从100到200，步长为2 while循环,先输出，再运算
//using namespace std;
//int main()
//{
//	int n(100);
//	while (n < 201)
//	{
//		cout << n << " ";
//		n += 2;
//
//	}
//	return 0;
//}

//#include<iostream> //从100到200，步长为2 do-while循环,先输出，再运算
//using namespace std;
//int main()
//{
//	int n(100);
//	do
//	{
//		cout << n << " ";
//		n += 2;
//	} while (n < 201);
//	return 0;
//}

//#include <iostream>					//把较小的值赋给原本较大的变量
//using namespace std;
//int main()
//{
//	int x, y;
//	cout << "请分别输入两个值!\n";
//	cin >> x;
//	cin >> y;
//	if (x < y)
//		y = x;
//	else  //x>y||x=y
//		x = y;
//	cout << x<<" "<< y;
//	return 0;
//}

//#include<iostream>					//未标识的整型
//using namespace std;
//int main()
//{
//	unsigned int x;
//	unsigned int a = 100;
//	unsigned int b = 50;
//	x = a - b;
//	cout << x << endl;
//	x = b - a;
//	cout << x << endl;
//	return 0;
//}


//#include <iostream>					//逻辑表达式
//using namespace std;
//int main()
//{
//	int a(1),b;
//	b = !a | a;
//	cout << b << endl;
//	b = ~a | a;
//	cout << b << endl;
//	b = a ^ a;
//	cout << b << endl;
//	b = a >> 2;
//	cout << b << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a(1),b,c,d;
//	c = ~a;
//	d = c | a;
//	b = ~a | a;
//
//	cout << b;
//	return 0;
//}