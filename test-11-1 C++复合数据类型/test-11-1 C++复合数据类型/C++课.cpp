//#include <iostream>											//字符数组
//using namespace std;
//
//void main()
//{
//    char ary[5];
//    int i;
//    cout << "Enter string : ";
//    cin >> ary; //为字符数组赋值
//    cout << ary << endl; //通过数组名可以直接输出一个字符串
//    for (i = 0; i < 5; i++)
//        cout << ary[i];
//}



//#include<iostream>										//字符串指针,字符串常量，不可修改
//using namespace std;									//但是可以直接替换指针指向的内容
//int main()
//{
//	const char* p = "hhhh";	//对于字符指针
//	cout << p << endl;			//利用指针变量名 输出 字符串
//	cout << *p << endl;			//利用指针操作符 输出 一个字符
//
//	p = "kjk";
//	cout << p << endl;
//
//
//	char i[99] = "I LOVE YOU!";
//	char* j = i;
//	cout << j << endl;
//
//	int a[99] = { 3,4,2};	//对于整型数组指针
//	int* l = a;
//	cout << l << endl;			//利用指针变量名 输出 首地址
//	cout << *l << endl;			//利用指针操作符 输出 整型数组
//
//
//	return 0;
//}


//#include<iostream>									//string 类			getline
//using namespace std;
//#include<string>
//int main()
//{
//	for (int i = 0; i < 2; i++)						//很诡异
//	{
//		string city, state;
//		getline(cin, city, ',');	//逗号作为分隔符
//		getline(cin, state);
//		cout << "city:" << city << "state:" << state << endl;
//	}
//	return 0;
//}


#include  <iostream>
using namespace std;
void  main(int  argc, char* argv[])
{
    int  i;
    for (i = 1; i < argc; i++)
        cout << argv[i] << " ";
}
