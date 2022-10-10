#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define mine_num 5



#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Prim_board(char board[ROWS][COLS], int row, int col,char set);
void DisplayBoard(char show[ROWS][COLS], int row, int col);
void SetBoard(char mine[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS],int row, int col);

int get_mine_count(char mine[ROWS][COLS],int x,int y);