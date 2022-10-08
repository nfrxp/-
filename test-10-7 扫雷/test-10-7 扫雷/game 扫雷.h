#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 6
#define COL 6
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 5

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetBoard(char mine[ROWS][COLS], int row, int col);
void FindBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int rwo, int col);