#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"


void game()
{
	char board[ROW][COL] = { 0 };
	
	Prim_board(board, ROW, COL);//��ʼ������
	
	Print_board(board, ROW, COL);//��ӡ����



	do							//�ж�˭����
	{
		int k = 0;
		int i = 0;
		printf("******  1.Player First  ******\n");
		printf("****** 0.Computer First ******\n");
		printf("��ѡ��:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("������ߣ�\n");//�����
			goto player;
			break;
		case 0:
			printf("�������ߣ�\n");//������
			goto computer;
			break;
		default:
			printf("������ѡ��\n");
			break;

		}
	} while (1);

	char ret = 0;
	while (1)
	{
	player://�����
		
		Player_board(board, ROW, COL);
		
		Print_board(board, ROW, COL);//��ӡ����
		

		ret = Who_win(board, ROW, COL);//�ж��Ƿ��ʤ
		if (ret != 'C')
		{
			break;
		}


	computer:
		printf("\n\n�����ߣ�\n");
		Computer_board(board, ROW, COL);
		Print_board(board, ROW, COL);//��ӡ����
		
		ret = Who_win(board, ROW, COL);//�ж��Ƿ��ʤ
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'Q')
	{
		printf("ƽ�֣�\n");
	}
	else if (ret == '*')
	{
		printf("��ϲ����ʤ��");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ��");
	}
	else
	{
		printf("ƽ��");
	}


}


void FirtPage()
{
	printf("****** 1.Play ******\n");
	printf("****** 0.Exit ******\n");
	int i = 0;

	do
	{
		printf("\n��ѡ���Ƿ�ʼ:>");
		scanf("%d", &i);
		switch (i)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("����������:>");
			break;
		}
	} while (i);

}
int main()
{
	srand((unsigned int)time(NULL));
	FirtPage();
	
	return 0;
}