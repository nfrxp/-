//#include<stdio.h>
//int main()
//{
//	//char a[] = "1\\t\x43\abx44";
//	//printf("%s", a);
//
//
//	//int a = -1; 
//	//printf("%x", a);
//
//	//int x = 3 < 4 - !0;
//	//int y = 4 - !0;
//	//printf("%d", x);
//	//printf("%d", y);
//
//
//	char a[] = "\abc\t\x42\128bcd\n";
//	printf("%s", a);
//	printf("%d", sizeof(a));
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//int x = 15, n = 2;
//	//x *= n + 3;
//	//printf("%d", x);
//
//	/*int x = 6 + '\x43' + 010 + 0x10;
//	printf("%d", x);*/
//
//	//int a = 12;
//	//a = a & 052;
//	//printf("%d", a);
//
//	//int x = 'a' + 10 + '\102' + 010 + 0x11;
//	//printf("%d", x);
//
//	//printf("%d", sizeof("a"));
//
//	//struct stud { char num[6]; int s[4]; double ave; } a, * p;
//	//printf("%d", sizeof(a));
//
//	//char a[] = "\t\\x43\102\bcd";
//	//printf("%d %d", sizeof(a), strlen(a));
//
//	//int x = 1, y = 2, z = 3;
//	//int k = z += x > y ? ++x : ++y;		//z=z+(x>y?++x:++y)
//	//printf("%d\n", k);
//	//printf("%d", z);
//
//
//	return 0;
//}


//#include<stdio.h>
//void main()
//{
//	unsigned x1;
//	int b = -1;
//	x1 = b;
//	printf("%u", x1);		//%u 十进制无符号整数
//	
//}


#define y(x) 2/x
#include<stdio.h>
int main()
{
	//int x = 15, n = 2;
	//x *= n + 3;			//x=x*(n+3)
	//printf("%d", x);

	//int a = 12;
	//a = a & 052;			//按位与，均为1才为1。 以零开始，为八进制，以0x开始为16进制
	//printf("%d", a);

	//int a = 10, b = 15, c = 1,  d = 2, e = 0;
	//int j = (c == b) > b;
	//printf("%d", j);

	//int x = 1.234 && 5.98;
	//printf("%d", x);


	//int i = 5;
	//int a = (a = i + 1, a + 2, a + 3);
	//printf("%d\n", a);

	//int a[3][2] = { 2,4,6,8,10,12 };
	//int i = *(a[1] + 1);
	//printf("%d\n", i);
	//i = *a[1];
	//printf("%d", i);

	//int a[3] = { 1,2,3 };
	//printf("%d\n", a[0]);
	//int b[3][2] = { 1,2,3 };
	//printf("%d", b[0]);		/*对于一维数组，a[i]代表下标为i对应的值；
	//							对于二维数组，a[i]代表第i列的首元素地址*/


	//int a = 4 + 3 * y(3);		//y(x)=2/x		4+3*2/3
	//printf("%d", a); 

	//int a = 0, b = 0;
	//int j = ( a = 2,  b = 5, a > b ? a++ : b++, a + b);
	//printf("%d", j);

	//int x = 6;
	//x += x -= x * x;		//x=x+x=x-x*x
	//printf("%d", x);

	//int a = 12;
	//a = a & 052;
	//printf("%o", a);			//%o 无符号八进制整数

	//int a = 3;
	//printf("%d ", ++a);
	//printf("%d ", a);
	//printf("%d ", a++);
	//printf("%d", a);

	//int x = 2, y = 3, z = 4;
	//int j = 0;
	//j=x + y && x = y;			//错误
	//printf("%d", j);


	return 0;
}