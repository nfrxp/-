#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"


void game()
{
	char board[ROW][COL] = { 0 };
	
	Prim_board(board, ROW, COL);//初始化棋盘
	
	Print_board(board, ROW, COL);//打印棋盘



	do							//判断谁先走
	{
		int k = 0;
		int i = 0;
		printf("******  1.Player First  ******\n");
		printf("****** 0.Computer First ******\n");
		printf("请选择:>");
		scanf("%d", &i);
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
	player://玩家走
		
		Player_board(board, ROW, COL);
		
		Print_board(board, ROW, COL);//打印棋盘
		

		ret = Who_win(board, ROW, COL);//判断是否获胜
		if (ret != 'C')
		{
			break;
		}


	computer:
		printf("\n\n电脑走！\n");
		Computer_board(board, ROW, COL);
		Print_board(board, ROW, COL);//打印棋盘
		
		ret = Who_win(board, ROW, COL);//判断是否获胜
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


void FirtPage()
{
	printf("****** 1.Play ******\n");
	printf("****** 0.Exit ******\n");
	int i = 0;

	do
	{
		printf("\n请选择是否开始:>");
		scanf("%d", &i);
		switch (i)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("请重新输入:>");
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