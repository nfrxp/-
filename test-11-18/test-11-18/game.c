#include"game.h"


void IniBoard(char board[ROWS][COLS], int rows, int cols, char p)	//初始化棋盘
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = p;
		}
	}
}


void Set(char board[ROWS][COLS], int rows, int cols)				//布雷
{
	int k = COUNT;		//雷数
	int row = rows - 2;
	int col = cols - 2;
	int i=0;
	int j=0;

	while (k)
	{
		i = rand() % row + 1;				//1.生成随机坐标
		j = rand() % col + 1;
		if (board[i][j] == '0')				//2.布雷
		{
			board[i][j] = '1';
			k--;
		}

	}
}


void ShowBoard(char board[ROWS][COLS], int rows, int cols)		//打印棋盘
{
	int row = rows - 2;
	int col = cols - 2;
	int i = 1, j = 1, k = 1;
	for (i = 1; i <= row; i++)
	{
		while (k)
		{
			printf("  ");
			for (j = 1; j <= 9; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
			k--;
		}
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{

			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

int ShowCounts(char board2[ROWS][COLS], int x,int y)	//为什么此处不能用i,j
{
	int n = 0;
	n = (board2[x][y-1]+board2[x][y+1]+board2[x-1][y-1]+board2[x-1][y]
		+board2[x-1][y+1]+board2[x+1][y-1]+board2[x+1][y]+board2[x+1][y+1]
		-8*'0');
	return n;
}



void Play(char board1[ROWS][COLS], char board2[ROWS][COLS], int rows, int cols)	//排雷，输赢
{



	int row = rows - 2;
	int col = cols - 2;
	int i = 0;
	int j = 0;
	int k = 0;
	while (k<row * col - COUNT)
	{

		printf("请输入坐标:>");				//1.输入坐标，判断是否合法，是否重复输入
		scanf("%d,%d", &i, &j);
		if ((i > 0 && i <= row) && (j > 0 && j <= col))
		{
			if (board1[i][j] == '0')
			{
				printf("重复输入，重新输入！\n");
				continue;
			}
			if (board2[i][j] == '1')
			{
				printf("恭喜您，被炸死了！\n");
				break;
			}

			else
			{
				int count = 0;
				count = ShowCounts(board2, i, j);
				board1[i][j] = count + '0';		//传为字符
				ShowBoard(board1, ROWS, COLS);			//打印棋盘
				k++;
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}

	if (k == row * col - COUNT)
	{
		printf("恭喜您，没被炸死！雷盘布局：\n");
		ShowBoard(board2, ROWS, COLS);			//打印棋盘

	}
}
