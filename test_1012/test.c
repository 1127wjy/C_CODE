#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("***********************\n");
	printf("**** 1.play  0.exit****\n");
	printf("***********************\n");
}

void game() {
	//printf("ɨ��\n");
	//�׵���Ϣ�洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };//11*11 - �����ҳ���ϵ�������ĩ��ʱ�Է���������
	//2.�Ų�õ��׵���Ϣ(�Է��Ų������һ����ʱ��1�ᱻ��������) - ��ӡ�����
	char show[ROWS][COLS] = { 0 };
	//��ʼ�� - ���һ�������Է�ǰ���������̱���ʼ����һ����Ԫ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(mine,ROW,COL);//��ӡ����ҵ�����
	DisplayBoard(show, ROW, COL);
	//������ - ���
	SetMine(mine, ROW, COL);
	//ɨ��

}
void test() {
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				//printf("ɨ����Ϸ\n");
				game();
				break;
			case 0:
				printf("���˳���Ϸ\n");
				break;
			default:
				printf("�Ƿ����룬������ѡ��!\n");
				break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}