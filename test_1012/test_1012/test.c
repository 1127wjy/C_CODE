#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("***********************\n");
	printf("**** 1.play  0.exit****\n");
	printf("***********************\n");
}

void game() {
	//printf("扫雷\n");
	//雷的信息存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };//11*11 - 在玩家页面上的棋盘最末端时以防超出棋盘
	//2.排查好的雷的信息(以防排查出附近一个雷时用1会被当做是雷) - 打印给玩家
	char show[ROWS][COLS] = { 0 };
	//初始化 - 最后传一个数组以防前后两个棋盘被初始化成一样的元素
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(mine,ROW,COL);//打印给玩家的棋盘
	DisplayBoard(show, ROW, COL);
	//布置雷 - 玩家
	SetMine(mine, ROW, COL);
	//扫雷

}
void test() {
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//printf("扫雷游戏\n");
				game();
				break;
			case 0:
				printf("已退出游戏\n");
				break;
			default:
				printf("非法输入，请重新选择!\n");
				break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}