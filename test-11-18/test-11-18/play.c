#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<time.h>

void game()															//游戏页面
{
	srand ((unsigned int)time(NULL));		//生成随机种子
	char a[ROWS][COLS];		//用户界面的棋盘
	char b[ROWS][COLS];		//布雷界面的棋盘

	IniBoard(a, ROWS, COLS,'*');		//初始化棋盘
	IniBoard(b, ROWS, COLS,'0');

	Set(b, ROWS, COLS);					//布雷

	ShowBoard(a, ROWS, COLS);			//打印棋盘
	Play(a, b, ROWS, COLS);				//排雷并判断输赢

}



int main()																//开始页面
{
	int i = 0;
	do
	{
		printf("***** 1.Play *****\n");
		printf("***** 0.Exit *****\n");
		printf("请选择:>");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			printf("开始游戏!\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入!\n");
			break;
		}
	} while (i);

	
	return 0;
}