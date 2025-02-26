
#include "game.h"

menu()
{
	printf("1. play\n");
	printf("0. Exit\n");
}

void game()
{
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
	}
}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("ÇëÑ¡Ôñ>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("ÍË³ö\n");
			break;
		default:
			printf("´íÎó\n");
			break;
		}
	} while (input);

return 0;
}