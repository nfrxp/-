#include"2.game ������.h"



void Prim_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++)
	{
		for (j=0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void Print_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i=0; i < row; i++)//��ӡ��
	{
		for (j=0; j < col; j++)//�����ÿһ����-�ո���
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)//�����ÿһ����-�ָ���
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}




void Player_board(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("\n\n��ң�����������x, y!\n");
	do
	{
		scanf("%d,%d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("���겻Ϊ�գ����������룡\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");
		}
	} while (1);

}



void Computer_board(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	do
	{
		x = rand() % row;
		y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y]= '#';
				break;
			}

	} while (1);
}



int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;

		}
	}
}




char Who_win(char board[ROW][COL], int row, int col)//ʤ���ܣ�ƽ
{
	int i = 0;

	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ')
		return board[0][2];

	//ƽ��
	int a =1;
	a = IsFull(board, ROW, COL);
	if (a == 1)
		return 'Q';
	return 'C';


}