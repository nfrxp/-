#include<iostream>
#include<conio.h>
using namespace std;

void test01() {
	char a[90];
	char b[90];
	int i;
	for (i = 0; 1; i++) {

		a[i] = _getch();
		cout << a[i];
		if (a[i] == '=')
			break;
		else if (a[i] != '=') {
			ungetc(a[i], stdin);
			b[i] = getchar();
		}
	}
	for (i = 0; a[i] != '\0'; i++) {
		cout << a[i];
	}

}

void test02() {
	int a, b, d = 25;
	a = d / 8 % 9; 
	b = a && (-1);
	cout << a << "," << b;
}
int main() {
	test02();
	return 0;
}
