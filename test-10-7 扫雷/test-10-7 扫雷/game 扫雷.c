#include"game 扫雷.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}



//打印棋盘show
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= row; j++)
	{
		printf("%d ", j);
		if (j < row)
		{
			printf("|");
		}
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{

		for (j = 1; j <= col+1; j++)			//分隔行
		{
			
			printf("--");
			if (j <=row)
			{
				printf("|");
			}
		}
		printf("\n");
		printf("%d ", i);
		printf("|");
		for (j = 1; j <= col; j++)			//show各行
		{
			printf("%c ", board[i][j]);
			if (j < row)
			{
				printf("|");
			}
		}
		printf("\n");

	}
}

//布雷
void SetBoard(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int i = rand() % row + 1;
		int j = rand() % col + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count--;
		}

	}


}


static int get_mine_count(char mine[ROWS][COLS], int i, int j)
{
	return mine[i - 1][j] +
		mine[i - 1][j - 1] +
		mine[i][j - 1] +
		mine[i + 1][j - 1] +
		mine[i + 1][j] +
		mine[i + 1][j + 1] +
		mine[i][j + 1] +
		mine[i - 1][j + 1] - 8 * '0';
}









//排雷
void FindBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &i, &j);

		//判断坐标的合法性
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				//石雷
				printf("很遗憾，你被炸死了，下次再来！\n");
				/*DisplayBoard(mine, row, col);*/
				break;
			}
			else
			{
				//不是雷
				int count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入！\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜您没被炸死！\n");
		DisplayBoard(mine, row, col);
	}

}