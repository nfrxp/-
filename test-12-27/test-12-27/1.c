#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void test01() {

	char a[14] = "Hello world!";

	//´íÎó
	//char a[14];
	//a = "Hello world!";
}

void test02() {

	struct X { short s; int i; char c; };
	struct X X1;
	printf("%d ", sizeof(X1));
	printf("%d", sizeof(X1.s) + sizeof(X1.i) + sizeof(X1.c));
}
int main() {
	test01();

	test02();
	return 0;
}