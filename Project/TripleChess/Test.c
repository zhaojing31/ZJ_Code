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
	char a[ROW][COL];
	InitBoard(a,ROW,COL);
	//DisplayBoard();

}
void main()
{
	int input = 0;
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