#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int input = 0;
	printf("��������\n");
	printf("���ú�ѧϰ��(1/0)>:");
	scanf("%d", &input);
	if(input== 1)
		printf("�õ���offer\n");
	else
		printf("������");
	return 0;
}