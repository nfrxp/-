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