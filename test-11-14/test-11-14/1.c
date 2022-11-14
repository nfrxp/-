//#include<stdio.h>					//字符数组逆序存放
//
//int my_strlen(char* arr)
//{
//	int i = 0, j = 0;
//	for (i = 0;; i++)
//	{
//		if (arr[i] == '\0')
//			return j;
//		j++;
//	}
//}
//
//void reverse_string(char* arr)
//{
//	int i = 0, j = 0;
//	j = my_strlen(arr) - 1;
//
//	while (i < j)
//	{
//		char temp;
//		temp = arr[i];
//		arr[i] = arr[j];
//		arr[j] = temp;
//		i++;
//		j--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//#include<stdio.h>							//整型数组
//void reverse(int* a,int n)	//逆置
//{
//	int i = 0,j = n-1;
//	int temp = 0;
//	while (i < j)
//	{
//		temp = a[i];
//		a[i] = a[j];
//		a[j] = temp;
//		i++;
//		j--;
//	}
//}
//
//
//void init(int* a,int n)		//初始化
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		a[i] = 0;
//	}
//}
//
//void print(int* a, int n)	//打印
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int a[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(a)/sizeof(a[0]);
//	reverse(a, sz);	//逆置
//	print(a, sz);	//打印，检验逆置
//	init(a,sz);		//初始化
//	print(a, sz);	//打印,检验初始化
//	return 0;
//}