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
		printf("�����ߣ�\n");
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '0') 
		{ 
			printf("����Ӯ��\n");
			break;
		}	
		else if(IsWin(board, ROW, COL) == 'X')
		{
			printf("���Ӯ��\n");
			break;
		}
		
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (IsWin(board, ROW, COL) == '0')
		{
			printf("����Ӯ��\n");
			break;
		}
		else if (IsWin(board, ROW, COL) == 'X')
		{
			printf("���Ӯ��\n");
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
		printf("��ѡ��\n");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("��������������ѡ��\n");
			break;
		}	
	} while (input);
}