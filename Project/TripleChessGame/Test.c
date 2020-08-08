#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void menu()
{
	printf("*********************************\n");
	printf("******       1.PLAY        ******\n");
	printf("******       0.EXIT        ******\n");
	printf("*********************************\n");
}
void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	while (1)
	{
		printf("电脑走：\n");
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '0') 
		{ 
			printf("电脑赢！\n");
			break;
		}	
		else if(IsWin(board, ROW, COL) == 'X')
		{
			printf("玩家赢！\n");
			break;
		}
		
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '0')
		{
			printf("电脑赢！\n");
			break;
		}
		else if (IsWin(board, ROW, COL) == 'X')
		{
			printf("玩家赢！\n");
			break;
		}
	}
}
void main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择：\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入有误，请重新选择：\n");
			break;
		}	
	} while (input);
}