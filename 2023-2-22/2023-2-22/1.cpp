#define _CRT_SECURE_NO_WARNINGS 1

////������x��������n�η�
//
//#include<iostream>
//using namespace std;
//
////int fun(int x,int n) {
////	int t=x;
////	while (n-1) {
////		t *= x;
////		n--;
////	}
////	return t;
////}
//
//int fun(int x, int n) {
//	int t = x;
//	while (--n) {
//		t *= x;
//	}
//	return t;
//}
//
//int main() {
//	cout<<fun(2, 3)<<endl;
//	return 0;
//}


////������ת��Ϊʮ����
//
//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//
//
//int main() {
//	int a;
//	cin >> a;
//	cout << dec <<a << endl;
//	return 0;
//}


//��n!��n>=0

//#include<iostream>
//using namespace std;
//
//int fun(int n) {
//	if (n <= 1) return 1;
//	else return n * fun(n - 1);
//}
//
//int main() {
//	cout << fun(0) << endl;
//	return 0;
//}

//��ŵ������

//#include<iostream>
//using namespace std;
//void move(char a, char b) {
//	cout << a << " -> " << b << endl;
//}
//
//void recursion(int n, char x, char y, char z) {
//	if (n == 1) {
//		move(x, z);
//	}
//	else {
//		recursion(n - 1, x, z, y);
//		move(x, z);
//		recursion(n - 1, y, x, z);
//	}
//}
//int main() {
//	recursion(3,'a','b','c');
//	return 0;
//}

#include<iostream>
using namespace std;

void test02(int a = 9, int b = 2);

int main() {
	int a = 1, b = 4;
	int& c = a;
	cout << c << endl;
	c = b;
	b = 9;
	cout << c << endl;

	return 0;
}

void test02(int a, int b) {	//�˴������ٶ���Ĭ��ֵ���������������һ��
	cout << a << b << endl;
}