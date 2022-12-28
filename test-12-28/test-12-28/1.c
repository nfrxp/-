#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//int i;
//
//void prt() {
//	for (i = 5; i < 8; i++) 
//		printf("%c",'*');
//	printf('\t');
//}
//int main() {
//	for (i = 5; i <= 8; i++) {
//		prt();
//	}
//	return 0;
//}


//#include<stdio.h>
//int main() {
//		int m, n;
//		printf("Enter m,n;");
//		scanf("%d%d", &m, &n);
//		while (m != n) //1
//		{
//			while (m > n) m = m - n; //2
//			while (n > m) n = n - m; //3
//		}
//		printf("m=%d\n", m);
//		return 0;
//}

#include <stdio.h>
int main()
{
	char c;
	int v0 = 0, v1 = 0, v2 = 0;
		do
		{
			switch (c = getchar())
			{
			case'a':case'A':
			case'e':case'E':
			case'i':case'I':
			case'o':case'O':
			case'u':case'U':v1 += 1;

			default:v0 += 1; v2 += 1;
			}
		} while (c != '\n');
		printf("v0=%d,v1=%d,v2=%d\n", v0, v1, v2);
		return 0;
}

//#include<stdio.h>
//int main() {
//	int a;
//	scanf("%d", &a);
//	switch (a) {
//	case 1:++a;
//	default:++a;
//	}
//	printf("%d", a);
//	return 0;
//}