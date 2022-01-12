#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);

//告诉我们四中状态
//玩家赢 返回-'*'
//电脑赢 返回-'#'
//平局   返回-'Q'
//继续   返回-'C'
char IsWIn(char board[ROW][COL], int row, int col);
