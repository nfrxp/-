#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<time.h>

void game()															//��Ϸҳ��
{
	srand ((unsigned int)time(NULL));		//�����������
	char a[ROWS][COLS];		//�û����������
	char b[ROWS][COLS];		//���׽��������

	IniBoard(a, ROWS, COLS,'*');		//��ʼ������
	IniBoard(b, ROWS, COLS,'0');

	Set(b, ROWS, COLS);					//����

	ShowBoard(a, ROWS, COLS);			//��ӡ����
	Play(a, b, ROWS, COLS);				//���ײ��ж���Ӯ

}



int main()																//��ʼҳ��
{
	int i = 0;
	do
	{
		printf("***** 1.Play *****\n");
		printf("***** 0.Exit *****\n");
		printf("��ѡ��:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("��ʼ��Ϸ!\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������!\n");
			break;
		}
	} while (i);

	
	return 0;
}