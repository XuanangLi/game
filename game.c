//#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitialBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = " ";
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    for (i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < row - 1)
            {
                printf("|");
            }
        }
        printf("\n");
        if (i < row - 1)
        {
            for (int j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                {
                    printf("|");
                }
            }
            printf("\n");

        }
   }
}

void Play(char board[][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走: \n");

    while (1)
    {
        printf("请输入坐标: \n");
        scanf("%d %d", &x, &y);
        //判断坐标是否合理
        if (x > 1 && x < row && y > 1 && y < col)
        {
            //下棋
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = "*";
                break;
            }
            else
            {
                printf("坐标被占用\n");
            }
        }
        else
        {
            printf("请重新输入\n");
        }    
    }
}