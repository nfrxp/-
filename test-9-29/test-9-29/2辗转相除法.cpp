#define _CRT_SECURE_NO_WARNINGS 1					//�����Լ��(շת�����)
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int y = 0;//yΪ����
	scanf("%d%d",&a,&b);
	
	while(a%b!=0)
	{
		y = a % b;
		a = b;
		b = y;
		if (a % b == 0)
			printf("���Լ��Ϊ%d", b);
	}

	return 0;
}