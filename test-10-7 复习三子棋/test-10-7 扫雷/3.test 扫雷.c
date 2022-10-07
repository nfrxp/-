#define _CRT_SECURE_NO_WARNINGS 1
#include"3.game 扫雷.h"


void game()
{
	//存放布置的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//存放排查的雷的信息
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//0代表无雷，1代表有雷
	//InitBoard(show, ROWS, COLS, '*');//*代表未带点击，未知

	//打印棋盘
	//DisplayBoard(show, ROW, COL);


}






int main()
{
	int input;
	do
	{
		printf("\n******************\n");
		printf("***** 1.Play *****\n");
		printf("***** 0.Exit *****\n");
		printf("******************\n");
		printf("请选择！:>");


		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("开始游戏！\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;

		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}