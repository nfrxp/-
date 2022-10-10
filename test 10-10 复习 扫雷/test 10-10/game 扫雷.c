#include"game 扫雷.h"


void Prim_board(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char show[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	for (i=1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			printf("%c ", show[i][j]);
		}
		printf("\n");
	}
}


void SetBoard(char mine[ROWS][COLS], int row, int col)
{
	int num = mine_num;
	while(num)
	{
			int x = rand() % row + 1;
			int y = rand() % col + 1;
			if (mine[x][y] == '0')
			{
				mine[x][y] = '1';
				num--;
			}

	}


}



int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}


void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int j = 0;
	do 
	{
		printf("请输入坐标x,y:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你死了！\n");
				break;
			}
			else if (mine[x][y] != '1')
			{
				//显示sum统计x,y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//显示排查出的信息
				DisplayBoard(show, row, col);
				//进入下一次

				j++;
			}
		}
		else
		{
			printf("坐标非法！\n");
		}

		//怎样算赢？
	} while (j<ROW*COL-mine_num);
	if (j == ROW * COL - mine_num)
		printf("排雷成功！");

}