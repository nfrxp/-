#define _CRT_SECURE_NO_WARNINGS 1

#define N 2
#define M N + 1
#define NUM (M + 1) * M / 2
#include<stdio.h>

void test01() {
	int b;
	char c[10];
	scanf("%d%s", &b, c);

}

void test02() {
	int n=6;
	int i,j=10;
	int sum = 9;
	if (n == 1) {
		//sum = 9;
	}
	else {

		for (i = 1; i < n; i++) {
			sum += j * 9;
			j *= 10;
		}
	}
	printf("%d,%d", n, sum);
}

void test03() {
	char a[] = "\\123456\123456\t";
	printf("%d", strlen(a));
}

void test04() {


	printf("%d\n", NUM);
	return 0;
}

int f(int n)
{
	static int i = 1;
	if (n >= 5)
		return n;
	n = n + i;
	i++;
	return f(n);
}
int main() {
	//test01();

	//test02();

	//test03();

	//test04();

	printf("%d",f(1));
	return 0;
}