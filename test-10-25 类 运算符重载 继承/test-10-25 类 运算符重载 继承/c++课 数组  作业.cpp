//#include<iostream>
//using namespace std;
//int main()
//{
//	//int a[5] = { 1,2,3,4,5 };
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	cout << a[i] << endl;
//	//}
//
//	//int a[5] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//	cin >> a[i];
//	//int sum = 0;
//	//for (i = 0; i < 5; i++)
//	//	sum += a[i];
//	//cout << sum/5.0 << endl;
//
//
//	return 0;
//}



//#include<stdio.h>								//九九乘法表
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%d	", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>									//求最大值
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0; 
//	int k = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 10; i++){
//		if (k < a[i])
//			k = a[i];
//	}
//	printf("最大值为：%d", k);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	float sum = 0.0;
//	float k = 1.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += k / i;
//		k = -k;
//	}
//	printf("%f", sum);
//	return 0;
//}



//#include<stdio.h>										//1~100,出现多少个9
//int main()
//{
//	int i = 1, a = 0,b = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		a = i % 10;		//个位
//		b = i / 10 % 10;//十位
//		//百位不可能出现九
//		if (a == 9)
//			count++;
//		if (b == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//
//#include<stdio.h>											//二分查找
//int main(){
//	int a[] = { 1,3,5,7,9,11,13,15 };
//	int m = 0;
//	int n = sizeof(a) / sizeof(a[0]);
//	int k = 8;	//查找的数
//	for (;m<=n;){
//		if (a[(m + n) / 2] == k){
//			printf("找到了，下标为%d\n", (m + n) / 2);
//			break;
//		}
//		else{
//			if (a[(m + n) / 2] > k)
//				n = (m + n) / 2-1;
//			else
//				m = (m + n) / 2 + 1;
//		}
//	}
//	if (m > n)
//		printf("找不到\n");
//	return 0;
//}