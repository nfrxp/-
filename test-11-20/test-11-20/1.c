//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}


#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);
	return 0;
}