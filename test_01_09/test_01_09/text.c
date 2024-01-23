#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//void print(int* p, int sz) {
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//int ADD(int x, int y) {
//	int z = x + y;
//	return z;
//}
//int main() {
//	int a = 10;
//	int b = 20;
//	//printf("%d\n", ADD(a, b));
//	//printf("%p\n", &ADD);//函数也有地址
//	//printf("%p\n", ADD);//&函数名 和 函数名 都是函数的地址 
//	int (*pa)(int, int) = ADD;
//	printf("%d\n", (*pa)(2, 3));//调用函数指针
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", pa(2, 3));
//	return 0;
//}

//void Print(char* str) {
//	printf("%s\n", str);
//}
//int main() {
//	void (*p)(char*) = Print;//函数名是函数的地址
//	(*p)("hello world");
//	return 0;
//}  

//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//int main() {
//	int* arr[5];
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//	//需要一个数组，这个数组可以同时存放4个函数的地址 - 函数指针的数组
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//2+3=5  2-3=-1  2*3=6  2/3=0
//		//printf("%d\n", (*parr[i])(2, 3));
//	}
//	return 0;
//}

//int main() {
//	char* my_strcpy(char* dest, const char* src);
//	//1.写一个函数指针pf，能够指向my_strcpy
//	char* (*pf)(char*, const char*) = my_strcpy;
//	//2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//	char* (*pfArr[4])(char*, const char*);
//	return 0;
//}

//void menu() {
//	printf("**************************\n");
//	printf("***   1.Add    2.Sub   ***\n");
//	printf("***   3.Mul    4.Div   ***\n");
//	printf("***   5.Xor    0.exit  ***\n");
//	printf("**************************\n");
//}
//void Calc(int (*pf)(int, int)) {
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数：>");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int Add(int x, int y) {
//	return x + y;
//}
//int Sub(int x, int y) {
//	return x - y;
//}
//int Mul(int x, int y) {
//	return x * y;
//}
//int Div(int x, int y) {
//	return x / y;
//}
//int Xor(int x, int y) {
//	return x ^ y;
//}
//int main() {
//	int input = 0;
//	/*int x = 0;
//	int y = 0;*/
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//			case 1:
//				Calc(Add);
//				break;
//			case 2:
//				Calc(Sub);
//				break;
//			case 3:
//				Calc(Mul);
//				break;
//			case 4:
//				Calc(Div);
//				break;
//			case 5:
//				Calc(Xor);
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//			default:
//				printf("选择错误！\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//int main() {
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[6])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5) {
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);//pfArr是一个函数指针数组
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("退出\n");
//		}
//		else {
//			printf("选择错误\n");
//		}
//
//	} while (input);
//	return 0;
//}


//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//	int(*pfArr[4])(int, int);///pfArr是一个数组 - 函数指针的数组
//	int(*(*ppArr)[4])(int, int) = &pfArr;
//	//ppArr是一个指向[函数指针数组]的指针
//	//ppArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int ,int)
//	return 0;
//}


void print(char* str) {
	printf("hehe:%s", str);
}
void test(void (*p)(char*)) {
	printf("test\n");
	p("wjy");
}
int main() {
	test(print);
	return 0;
}