//#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
    printf("***********************\n");
    printf("*****1.play 0.exit*****\n");
    printf("***********************\n");
}

void game()
{
    //建立数组
    char board[ROW][COL];
    //初始化棋盘
    InitialBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);

    while(1)
    {
        //玩家下棋
        Play(board, ROW, COL);
        //电脑下棋
    }
}



void test()
{
    int input = 0;
    do
    {
        menu();
        printf("Enter: ");
        scanf("%i", &input);
        switch(input)
        {
            case 1:
                printf("三字棋\n");
                break;
            case 0:
                printf("退出\n");
                break;
            default:
                printf("请选择0 or 1");
                break;
        }
    } while (input);
}

int main(void)
{
    test();
    return 0;
}