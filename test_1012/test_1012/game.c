#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for(j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {//��ҿ��������̱ȳ����������
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//������
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count)//count������0ʱҪ����������
	{

	}
}