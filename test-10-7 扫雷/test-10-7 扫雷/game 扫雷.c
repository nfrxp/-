#include"game ɨ��.h"

//��ʼ������
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



//��ӡ����show
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

		for (j = 1; j <= col+1; j++)			//�ָ���
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
		for (j = 1; j <= col; j++)			//show����
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

//����
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









//����
void FindBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &i, &j);

		//�ж�����ĺϷ���
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				//ʯ��
				printf("���ź����㱻ը���ˣ��´�������\n");
				/*DisplayBoard(mine, row, col);*/
				break;
			}
			else
			{
				//������
				int count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ������������룡\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ��û��ը����\n");
		DisplayBoard(mine, row, col);
	}

}