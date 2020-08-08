#pragma once
#include<stdio.h>
#include<memory.h>   //memset( )
#include<time.h>      
#include<stdlib.h>    
#define ROW 3
#define COL 3    //宏定义后面千万不要加 ; 否则会出现很多隐藏的错误

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
