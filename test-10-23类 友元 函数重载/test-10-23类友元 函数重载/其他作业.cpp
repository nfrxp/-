
//#define _CRT_SECURE_NO_WARNINGS 1						//作业
//#include <stdio.h>
//
//int main() {
//    float a[5][5] = { 0.0 };
//    int i = 0;
//    int j = 0;
//    float sum[5]{0.0};
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &a[i][j]);
//            sum[i] += a[i][j];
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", a[i][j]);
//        }
//        printf("%.1f \n", sum[i]);
//    }
//
//    return 0;
//}


//#include<iostream>									//作业
//using namespace std;
//
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    int a=func(1);
//    cout << a << endl;
//	return 0;
//}


//#include<stdio.h>								//作业
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3==0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1						//作业
//#include<stdio.h>
//int main(){
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b){
//		int i = a;a = b;b = i;
//	}
//	if (a < c){
//		int j = a;a = c;c = j;
//	}
//	if (c > b && c < a){
//		int k = c;c = b;b = k;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//#include<stdio.h>											//作业
//#include<math.h>
//int main()
//{
//	int i = 100;
//	int j = 3;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 3; j <= sqrt(i); j += 2)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>													//作业
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>											//作业
//int main(){
//	int a = 0,b = 0;
//	scanf("%d %d", &a, &b);
//	if (a < b){
//		int k = a;
//		a = b;
//		b = k;
//	}
//	while (a % b != 0){
//	int i = b;
//	b = a % b;
//	a = b;
//	}
//	printf("%d", b);
//	return 0;
//}