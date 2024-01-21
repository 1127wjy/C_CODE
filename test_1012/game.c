#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {//玩家看到的棋盘比程序的棋盘少
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count)//count不等于0时要继续布置雷
	{

	}
}