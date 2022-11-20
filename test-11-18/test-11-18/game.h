

#define _CRT_SECURE_NO_WARNINGS 1
#define ROWS 11
#define COLS 11
#define COUNT 80
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void IniBoard(char board[ROWS][COLS], int rows, int cols, char p);
void Set(char board[ROWS][COLS], int rows, int cols);
void ShowBoard(char board[ROWS][COLS], int rows, int cols);
void Play(char board1[ROWS][COLS], char board2[ROWS][COLS], int rows, int cols);
//void ShowCounts(char board1[ROWS][COLS],)
//int ShowCounts(char board2[ROWS][COLS], int i, int j);
