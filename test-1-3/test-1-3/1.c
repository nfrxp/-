#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int f(int n) {
//	return (n == 1) ? 1 : (n + f(n - 1));
//}
//
//void print(char* s)
//	{
//		if (*s)
//		{
//			print(++s);
//			printf("%c", *s);
//		}
//	}
//
//void test02() {
//	char c[5] = { 'a', 'b', '\0', 'c', '\0' };
//	printf("%s", c);
//}
//
//void test03() {
//	//int n = 5; int a[n][n + 2];
//	int num['10'];
//}
//int main() {
//	
//	//printf("%d", f(10));
//
//	//char str[] = "Geneius";
//	//print(str);
//
//	test02();
//}
//
//#include<stdio.h>
//int main()
//{
//	int a[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 }, * p[4], i;
//	for (i = 0; i < 4; i++)
//		p[i] = &a[i * 3];
//	printf("%d\n",p[3][2]);
//	return 0;
//}
//
//#include<stdio.h>
//
//void test01() {
//	int x;
//	(x= 4 * 5, x * 5), x + 5;
//	printf("%d",(x = 4 * 5, x * 5), x + 5);
//}
//
//int func(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		count++;
//		x = x & (x - 1);//与运算
//	} return count;
//}
//int main() {
//
//	test01();
//
//	printf("%d", func(-1));
//}

//#include<stdio.h>
//int main() {
//	int a = 20;
//	//a=0x00000014
//	return 0;
//}


////判断当前机器的字节序
//
//#include<stdio.h>
//
//void test01() {
//	int a = 1;
//	//0x00 00 00 01
//	//  高位    低位
//	//取一个字节判断，取的是低地址处
//	if (*(char*)&a)
//		printf("小端");
//	else
//		printf("大端");
//}
//int main() {
//	test01();
//	return 0;
//}

//#include <stdio.h>
//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	char a = -128;
//	printf("%u\n", a);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	unsigned int i;
//	for(i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//#include<stdio.h>
//
//unsigned char i = 0;
//int main() {
//	for (i = 0; i <= 255; i++) {
//		printf("hello world\n");
//	}
//	return 0;
//}

#include<stdio.h>

int main() {
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%d\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}