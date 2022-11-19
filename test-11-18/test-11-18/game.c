#include"game.h"


void IniBoard(char board[ROWS][COLS], int rows, int cols, char p)	//��ʼ������
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


void Set(char board[ROWS][COLS], int rows, int cols)				//����
{
	int k = COUNT;		//����
	int row = rows - 2;
	int col = cols - 2;
	int i=0;
	int j=0;

	while (k)
	{
		i = rand() % row + 1;				//1.�����������
		j = rand() % col + 1;
		if (board[i][j] == '0')				//2.����
		{
			board[i][j] = '1';
			k--;
		}

	}
}


void ShowBoard(char board[ROWS][COLS], int rows, int cols)		//��ӡ����
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

int ShowCounts(char board2[ROWS][COLS], int x,int y)	//Ϊʲô�˴�������i,j
{
	int n = 0;
	n = (board2[x][y-1]+board2[x][y+1]+board2[x-1][y-1]+board2[x-1][y]
		+board2[x-1][y+1]+board2[x+1][y-1]+board2[x+1][y]+board2[x+1][y+1]
		-8*'0');
	return n;
}



void Play(char board1[ROWS][COLS], char board2[ROWS][COLS], int rows, int cols)	//���ף���Ӯ
{



	int row = rows - 2;
	int col = cols - 2;
	int i = 0;
	int j = 0;
	int k = 0;
	while (k<row * col - COUNT)
	{

		printf("����������:>");				//1.�������꣬�ж��Ƿ�Ϸ����Ƿ��ظ�����
		scanf("%d,%d", &i, &j);
		if ((i > 0 && i <= row) && (j > 0 && j <= col))
		{
			if (board1[i][j] == '0')
			{
				printf("�ظ����룬�������룡\n");
				continue;
			}
			if (board2[i][j] == '1')
			{
				printf("��ϲ������ը���ˣ�\n");
				break;
			}

			else
			{
				int count = 0;
				count = ShowCounts(board2, i, j);
				board1[i][j] = count + '0';		//��Ϊ�ַ�
				ShowBoard(board1, ROWS, COLS);			//��ӡ����
				k++;
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	}

	if (k == row * col - COUNT)
	{
		printf("��ϲ����û��ը�������̲��֣�\n");
		ShowBoard(board2, ROWS, COLS);			//��ӡ����

	}
}
