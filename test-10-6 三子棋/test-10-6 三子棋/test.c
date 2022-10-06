#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"game.h"


void game()
{
	//����-�����������
	char board[ROW][COL] = { 0 };//Ϊ��(�ո�)
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	switch (ret)
	{
	case '*':
		printf("��ϲ����ʤ��");
		break;
	case '#':
		printf("���Ի�ʤ��");
		break;
	case 'Q':
		printf("ƽ�֣�\n");
		DisplayBoard(board, ROW, COL);
		break;
	}



}






void menu()
{
	printf("\n\n");
	printf("****************\n");
	printf("**** 1.Play ****\n");
	printf("**** 0.Exit ****\n");
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do {
		menu();
		scanf("%d", &input);
		if (input == 1)
		{
			printf("��ʼ��Ϸ��\n");
			game();
		}
		else if (input == 0)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else
			printf("����������������룡\n");
	} while (input);


	return 0;
}