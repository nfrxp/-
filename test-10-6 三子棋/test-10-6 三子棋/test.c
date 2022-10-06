#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include"game.h"


void game()
{
	//数组-存放棋盘数据
	char board[ROW][COL] = { 0 };//为空(空格)
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否获胜
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否获胜
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	switch (ret)
	{
	case '*':
		printf("恭喜您获胜！");
		break;
	case '#':
		printf("电脑获胜！");
		break;
	case 'Q':
		printf("平局！\n");
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
			printf("开始游戏！\n");
			game();
		}
		else if (input == 0)
		{
			printf("退出游戏！\n");
			break;
		}
		else
			printf("输入错误，请重新输入！\n");
	} while (input);


	return 0;
}