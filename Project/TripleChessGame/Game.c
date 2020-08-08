#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	/*
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/
	memset(&board[0][0],' ',row*col*sizeof(board[0][0]));
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x = 0; 
	int y = 0;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')   //�ַ����ַ���Ҫ���壬���á�����ʱ��Ҫ�á���
		{
			board[x][y] = '0';
			break;
		}
	}	
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("����ߣ�����������ѡ��\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x < 1 || x > row || y < 1 || y > col)
		{
			printf("����Ƿ���������ѡ��\n");
			continue;
		}
		if (board[x-1][y-1] == ' ')   //�ַ����ַ���Ҫ���壬���á�����ʱ��Ҫ�á���
		{
			board[x-1][y-1] = 'X';
			break;
		}
		else
			printf("λ���ѱ�ռ�ã�������ѡ��\n");
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]))
		{
			return board[i][1];
		}
	}
	for (j = 0; j < col; j++)
	{
		if ((board[0][j] == board[1][j]) && (board[1][j] == board[2][j]))
		{
			return board[1][j];
		}
	}
	if (((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) ||
		((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])))
	{
		return board[1][1];
	}
	return 'Q';
}


