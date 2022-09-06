#pragma once
#include <stdio.h>
#define ROW 3
#define COL 3

//初始化棋盘
void InitialBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void Play(char board[][COL], int row, int col);

