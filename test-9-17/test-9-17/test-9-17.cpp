#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int age = 9909;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)
//		printf("����\n");
//	else if (age >= 28 && age < 60)
//		printf("׳��\n");
//	else if (age >= 60 && age < 100)
//		printf("�ϲ���\n");
//	else if (age >= 100 && age < 999)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}



//int main()//ͬ��
//{
//	int age = 9909;
//	if (age < 18)
//		printf("δ����\n");
//	else 
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 60)
//			printf("׳��\n");
//		else if (age >= 60 && age < 100)
//			printf("�ϲ���\n");
//		else if (age >= 100 && age < 999)
//			printf("����\n");
//		else
//			printf("������\n");
//	}
//	return 0;
//}



//int main()
//{
//	int age = 10;
//	if (age < 18) 
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//
//	else
//		printf("����\n");
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	while(i<=100)
//	{
//		
//		if (i % 2 == 1)//if(i % 2 !=0)��Ч
//			printf("%d\n", i);
//		else
//			printf("ż��\n");
//		i++;
//                //printf("%d\n",i); i+=2;
//	}
//	
//
//	return 0;
//}


//int main()
//{
//	int i=1;
//	while(i<=100)
//	{
//		printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//}



//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf ("%d", &day);
//	if (1 == day)
//		printf("����һ\n");
//	else if (2 == day)
//		printf("���ڶ�\n");
//	else if (3 == day)
//		printf("������\n");
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //switch�����Ҫbreak(����)�����ķ�֧
//	{
//		case 1:
//			printf("����һ");
//		case 2:
//			printf("���ڶ�");
//			break;
//		case 3:
//			printf("������");
//		case 4:
//			printf("������");
//		case 5:
//			printf("������");
//		case 6:
//			printf("������");
//		case 7:
//			printf("������");
//
//
//	}
//	
//	return 0;
//}

//int main()
//{
//	int day = 0;//�������
//	scanf("%d", &day);//�������
//	switch(day) //switch(���α��ʽ)
//	{
//	case 1:
//		printf("������");
//		break;
//	case 2:
//		printf("������");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("��Ϣ��");
//		break;
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //����day��ֵ�жϴ��ĸ�case����
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:  //�������
//		printf("�������\n");
//		break;//default��case����˳��
//	}
//	
//	return 0;
//}

int main()//��ϰ
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	default:
		printf("���Ӱ���");
	}
	return 0;
}