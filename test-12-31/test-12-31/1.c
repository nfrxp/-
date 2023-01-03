#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void test01() {
	for (int i = 0; i || i++ < 5;) {
		printf("aa\n");
	}
}

void test02() {
	do {
		printf("a");
	} while (1);

}
int main() {
	test01();


	return 0;
}