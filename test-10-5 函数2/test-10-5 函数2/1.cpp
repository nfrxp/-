//#define _CRT_SECURE_NO_WARNINGS 1	//�ݹ�
//#include<stdio.h>					//�Զ��庯��������һ�����ͣ��ֱ��ӡÿ�����֣�����ת
//
//void print(int x)					//���ʱ�������⣬��дʱ�������ڡ�
//{									//������
//	if (x > 9)
//	{
//		print(x / 10);
//	}
//		printf("%d ", x % 10);
//}
//
//
//int main()
//{
//	int a;
//	printf("���������ͣ�");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}



//#include<stdio.h>					//�Զ��庯�������ַ�������,�ɴ�������
//
//int my_strlen(char* arr)
//{
//	int count(0);
//	while (*arr != 0)
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}


//#include<stdio.h>				//�Զ��庯�������ַ�������,�� �ɴ�������
//
//int my_strlen(char* arr)
//{
//	if (*arr != 0)
//		return 1 + my_strlen(arr + 1);
//}
//
//
//int main()
//{
//	char arr[] = "bit";
//	int a = my_strlen(arr);
//	printf("%d", a);
//	return 0;
//}


////1 1 2 3 5 8 13 21 34 55����						������n��쳲�������
//
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//
////int count;
////int Fib(int n)
////{
////	if (n == 3)
////		count++;
////	if (n <= 2)										//�ݹ飬�������ظ����㣬һ�ֶ���������
////		return 1;
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//
//int Fib(int n)
//{
//	int a(1), b(1), c(1);
//	while (n > 2)									//ѭ��
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret = Fib(n);						//TDD-������������
//	printf("%d", ret);
//
//	return 0;
//}