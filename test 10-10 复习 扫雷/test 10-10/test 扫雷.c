#include"game ɨ��.h"

void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	Prim_board(mine, ROWS, COLS, '0');
	Prim_board(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);
	//����
	SetBoard(mine, ROW, COL);
	//����
	FindMine(mine,show, ROW, COL);

}



int main()
{
	printf("****************\n");
	printf("**** 1.Play ****\n");
	printf("**** 0.Exit ****\n");

	printf("��ѡ��:>");
	int i = 0;
	do
	{
		scanf("%d", &i);
		if (i == 1)
		{
			printf("��ʼ��Ϸ��\n");
			game();
		}
		else if (i == 0)
		{
			printf("�˳���Ϸ��");
			break;
		}
		else
		{
			printf("����������:>");
		}
	} while (i);
	return 0;
}

