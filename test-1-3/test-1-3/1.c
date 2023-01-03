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

#include<stdio.h>

void test01() {
	int x;
	(x= 4 * 5, x * 5), x + 5;
	printf("%d",(x = 4 * 5, x * 5), x + 5);
}
int main() {

	test01();
}