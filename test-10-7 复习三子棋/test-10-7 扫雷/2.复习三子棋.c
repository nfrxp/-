#include"2.game 三子棋.h"								//三子棋


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
	//初始化棋盘
	Prim_board(board, ROW, COL);
	//打印棋盘
	Print_board(board, ROW, COL);
	//判断谁先走
	do
	{
		int k=0;
		int i=0;
		i=Whose_board(k);
		switch (i)
		{
		case 1:
			printf("玩家先走！\n");//玩家走
			goto player;
			break;
		case 0:
			printf("电脑先走！\n");//电脑走
			goto computer;
			break;
		default:
			printf("请重新选择！\n");
			break;

		}
	} while (1);

	char ret = 0;
	while (1)
	{
	player:
		//玩家走
		Player_board(board, ROW, COL);
		//打印棋盘
		Print_board(board, ROW, COL);
		//判断是否获胜

		ret = Who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}


	computer:
		printf("\n\n电脑走！\n");
		Computer_board(board, ROW, COL);
		Print_board(board, ROW, COL);
		//判断是否获胜
		ret = Who_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == 'Q')
	{
		printf("平局！\n");
	}
	else if (ret == '*')
	{
		printf("恭喜您获胜！");
	}
	else if (ret == '#')
	{
		printf("电脑获胜！");
	}
	else
	{
		printf("平局");
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
		printf("\n请选择！\n");
		scanf("%d", &s);
		switch (s)
		{
		case 1:
			printf("开始游戏！\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("请重新输入！\n");
			break;
		}
	} while (s);
	return 0;
}