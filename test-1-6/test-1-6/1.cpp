#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test01() {
	const char* p = "abcd";
	printf("%s\n", p);
	printf("%c\n", *p);
	printf("%c\n", p);
}
int main() {
	test01();
	return 0;
}