//#define SQR(x) (x)*x
//#include<iostream>
//using namespace std;
//int main() {
//	int k = 2;
//	cout << SQR(k + 1);
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int a = 12;
//	a += a -= a * a;
//	cout << a << endl;
//	return 0;
//}



//#include<iostream>
//using namespace std;
//
////void test01() {
////	//const char *a = "china";
////	char* a;
////	*a = "china";
////
////}
//
////void test02() {
////	//char str[10] = { "china" };
////
////	char str[10];
////	str[] = {"china"};	//左边非表达式
////	cout << str << endl;
////}
//
////void test03() {
////	//const char* s = "china";
////	const char* s;
////	s = "china";
////
////}
//
////void test04() {
////	//char c[4] = "abc", d[4] = "abc";
////	char c[4] = d[4] = "abc";
////}
//int main() {
//	//test01();
//
//	//test02();
//
//	//test03();
//
//	//test04();
//
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string.h>
using namespace std;

void test01() {
	char a1[] = "abc", a2[80] = "1234";
	strcat(a2, a1);
	cout << a2 << endl;
}

void test02() {
	const char* aa[2] = { "abcd","ABCD" };

}

void test03() {
	int a[3][4] = { 0 };

}
int main() {

	//test01();

	//test02();

	test03();
	return 0;
}