#include"2.game ������.h"								//������


int Whose_board(int k)
{
	printf("\n\n**********************\n");
	printf("***** Who first? *****\n");
	printf("*****  1.Player  *****\n");
	printf("***** 0.Computer *****\n");
	scanf("%d", &k);
	return k;
}


 void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ������
	Prim_board(board, ROW, COL);
	//��ӡ����
	Print_board(board, ROW, COL);
	//�ж�˭����
	do
	{
		int k=0;
		int i=0;
		i=Whose_board(k);
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
	player:
		//�����
		Player_board(board, ROW, COL);
		//��ӡ����
		Print_board(board, ROW, COL);
		//�ж��Ƿ��ʤ

		ret = Who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}


	computer:
		printf("\n\n�����ߣ�\n");
		Computer_board(board, ROW, COL);
		Print_board(board, ROW, COL);
		//�ж��Ƿ��ʤ
		ret = Who_win(board, ROW, COL);
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



int main()
{
	srand((unsigned int)time(NULL));
	printf("****************\n");
	printf("**** 1.Play ****\n");
	printf("**** 0.Exit ****\n");
	printf("****************\n");

	int s = 0;
	do
	{
		printf("\n��ѡ��\n");
		scanf("%d", &s);
		switch (s)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("���������룡\n");
			break;
		}
	} while (s);
	return 0;
}