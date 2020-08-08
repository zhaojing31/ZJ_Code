#pragma once
#include<stdio.h>
#include<memory.h>   //memset( )
#include<time.h>      
#include<stdlib.h>    
#define ROW 3
#define COL 3    //�궨�����ǧ��Ҫ�� ; �������ֺܶ����صĴ���

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
