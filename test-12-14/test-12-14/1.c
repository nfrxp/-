//#include<stdio.h>
//int main() {
//	int i, j;
//	int n = 7;
//	for (i = 1; i <= n; i++) {
//		//输出空格
//		for (j = 1; j <= (7 - i); j++) {
//			printf("   ");
//		}
//		//输出*
//		for (j = 1; j <= (2 * i - 1); j++) {
//			printf(" * ");
//		}
//		//输出空格
//		for (j = 1; j <= (7 - i); j++) {
//			if (j == 1 || j == (7 - n))	printf("  ");
//			else printf("   ");
//		}
//		printf("\n");
//	}
//	for (i = 6; i >0; i--) {
//		//输出空格
//		for (j = 1; j <= (7 - i); j++) {
//			printf("   ");
//		}
//		//输出*
//		for (j = 1; j <= (2 * i - 1); j++) {
//			printf(" * ");
//		}
//		//输出空格
//		for (j = 1; j <= (7 - i); j++) {
//			if (j == 1 || j == (7 - n))	printf("  ");
//			else printf("   ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
////求一个数的位数
//int func1(int a) {
//	int n;
//	if (a / 100000 >= 1) n = 6;
//	else if (a / 10000 >= 1) n = 5;
//	else if (a / 1000 >= 1) n = 4;
//	else if (a / 100 >= 1) n = 3;
//	else if (a / 10 >= 1) n = 2;
//	else n = 1;
//	return n;
//}
//
////求a的n次方(直接用pow也可以）
//int func2(int a, int n) {
//	int i = 1, sum = 1;
//	for (i = 1; i <= n; i++) {
//		if (a == 0) {
//			sum = 0;
//			break;
//		}
//		sum *= a;
//	}
//	return sum;
//}
//int main() {
//	int i = 1;
//	int n,sum=0;
//	for (i = 1; i <= 100000; i++) {
//		n = func1(i);
//		sum = func2(i / 100000 % 10, n) + func2(i / 10000 % 10, n) +
//			func2(i / 1000 % 10, n) + func2(i / 100 % 10, n) +
//			func2(i / 10 % 10, n) + func2(i % 10, n);
//		if (sum == i) printf("%d ", i);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
//int func(int a, int i) {
//	int j = 1, sum = 0;
//	for (j = 1; j <= i; j++) {
//		if (i == 1) sum = a;
//		else sum += a * pow(10, j-1);
//	}
//	return sum;
//}
//int main() {
//	int a, Sn=0, i;
//	scanf("%d", &a);
//	for (i = 1; i <= 5; i++) {
//		Sn += func(a, i);
//	}
//	printf("前五项之和为：%d", Sn);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int sum = 20, j = 0;
//	int i = sum;
//	while(i>0) {
//		i += j;
//		sum += i/2;
//		j = i % 2;
//		i /= 2;
//
//	}
//	printf("可以喝汽水 %d 瓶\n", sum);
//	return 0;
//}

#include<stdio.h>			//断点
int main()
{
	int i = 0;
	for (i = 1; i < 10; i++) {
 		i++;		//若断点在循环中，此时可能会多次运行到此断点。
	}
	printf("%d", i);
	return 0;
}