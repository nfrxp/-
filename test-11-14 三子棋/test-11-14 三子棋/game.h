#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

Prim_board(char board[ROW][COL], int row, int col);
void Print_board(char board[ROW][COL], int row, int col);
void Player_board(char board[ROW][COL], int row, int col);
void Computer_board(char board[ROW][COL], int row, int col);
char Who_win(char board[ROW][COL], int row, int col);