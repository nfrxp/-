#include"game 扫雷.h"

void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化数组
	Prim_board(mine, ROWS, COLS, '0');
	Prim_board(show, ROWS, COLS, '*');
	//打印数组
	DisplayBoard(show, ROW, COL);
	//布雷
	SetBoard(mine, ROW, COL);
	//排雷
	FindMine(mine,show, ROW, COL);

}



int main()
{
	printf("****************\n");
	printf("**** 1.Play ****\n");
	printf("**** 0.Exit ****\n");

	printf("请选择:>");
	int i = 0;
	do
	{
		scanf("%d", &i);
		if (i == 1)
		{
			printf("开始游戏！\n");
			game();
		}
		else if (i == 0)
		{
			printf("退出游戏！");
			break;
		}
		else
		{
			printf("请重新输入:>");
		}
	} while (i);
	return 0;
}

