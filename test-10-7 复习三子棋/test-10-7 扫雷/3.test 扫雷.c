#define _CRT_SECURE_NO_WARNINGS 1
#include"3.game ɨ��.h"


void game()
{
	//��Ų��õ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//����Ų���׵���Ϣ
	char show[ROWS][COLS] = { 0 };

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//0�������ף�1��������
	//InitBoard(show, ROWS, COLS, '*');//*����δ�������δ֪

	//��ӡ����
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
		printf("��ѡ��:>");


		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("��ʼ��Ϸ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;

		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}