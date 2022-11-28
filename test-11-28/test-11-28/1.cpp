//
//#include<iostream>							//控制输出宽度
//#include<iomanip>
//using namespace std;
//int main() {
//	double a[] = { 1.1,11.11,111.111,1111.1111 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//cout.width(10);	//控制输出宽度
//		//cout << a[i] << endl;
//
//		cout << setw(10) << a[i] << endl;
//	}
//	return 0;
//}


//#include<iostream>						//设置对齐格式
//#include<iomanip>
//using namespace std;
//int main() {
//	//int year[] = { 18.5,19,16,11.5,20 };
//	float year[] = { 18.5,19,16,11.5,20 };
//	string name[] = { "Jack","Zoo","Jammy","Beny","Junny" };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		//cout.width(5);
//		//cout << setiosflags(ios_base::left) << year[i] << setw(10)
//		//	<< resetiosflags(ios_base::left) << name[i] << endl;
//
//		cout.width(5);
//		cout << setiosflags(ios_base::left) <<setprecision(1)<< year[i] << setw(10)
//			<< resetiosflags(ios_base::left) << name[i] << endl;
//
//	}
//	return 0;
//}

////11_5.cpp
//#include <fstream>
//using namespace std;
//struct Date {
//	int mon, day, year;
//};
//int main() {
//	Date dt = { 6, 10, 92 };
//	ofstream file("date.dat", ios_base::binary);
//	file.write(reinterpret_cast<char*>(&dt), sizeof(dt));
//	file.close();
//	return 0;
//}

//11_6.cpp
/*函数模板toString可以把各种支持“<<“插入符的类型的对象转换为字符串。*/
//#include <iostream>
//#include <sstream>
//#include <string>
//using namespace std;
//
//template <class T>
//inline string toString(const T& v) {
//	ostringstream os;	//创建字符串输出流
//	os << v;		//将变量v的值写入字符串流
//	return os.str();	//返回输出流生成的字符串
//}
//
//int main() {
//	string str1 = toString(5);
//	cout << str1 << endl;
//	string str2 = toString(1.2);
//	cout << str2 << endl;
//	return 0;
//}


//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main() {
//	char a;
//	while ((a=cin.get()) != EOF) {
//		cout << setw(3);
//		cout.put(a) << endl;
//	}
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//int main() {
//	string a;
//	getline(cin, a, 't');		//getline读取字符串，自定义终止字符
//	cout << a << endl;
//	return 0;
//}


//#include <iostream>
//using namespace std;
//
//void fun(int*, int&, int, int);
//int main(void) {
//        int a[10] = { 10, 8, 6, 4, 2, 1, 3, 5, 7, 9 };
//    int c = 0, d = 0;
//    fun(a, d, c, 10);
//    cout << c << "," << d;
//    return 0;
//}
//
//void fun(int* p, int& s1, int s2, int n) {
//    s1 = 0;
//    s2 = 0;
//    for (int i = 0; i < n; ++i) {
//        if (i % 2) {
//            s1 += p[i];
//        }
//        else {
//            s2 += p[i];
//            
//        }
//    }
//}


#include <iostream>
using namespace std;

int main(void)
{
    //int i;
    //char s[2][5] = { "ABCD","E"};
    //for (i = 0; i < 2; i++) {
    //    cout << s[i] + i;
    //}
    cout << "E" + 1 << endl;



    int a, b, d = 25;
    a = d / 8 % 9;
    b = a && (-1);                            //为什么b等于1
    cout << a << "," << b;

    return 0;
}
