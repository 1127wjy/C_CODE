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
//	//printf("%p\n", &ADD);//����Ҳ�е�ַ
//	//printf("%p\n", ADD);//&������ �� ������ ���Ǻ����ĵ�ַ 
//	int (*pa)(int, int) = ADD;
//	printf("%d\n", (*pa)(2, 3));//���ú���ָ��
//	printf("%d\n", ADD(2, 3));
//	printf("%d\n", pa(2, 3));
//	return 0;
//}

//void Print(char* str) {
//	printf("%s\n", str);
//}
//int main() {
//	void (*p)(char*) = Print;//�������Ǻ����ĵ�ַ
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
//	//��Ҫһ�����飬����������ͬʱ���4�������ĵ�ַ - ����ָ�������
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
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
//	//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//	char* (*pf)(char*, const char*) = my_strcpy;
//	//2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
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
//	printf("������������������>");
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
//		printf("��ѡ��:>");
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
//				printf("�˳�\n");
//				break;
//			default:
//				printf("ѡ�����\n");
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
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5) {
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x, y);//pfArr��һ������ָ������
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("�˳�\n");
//		}
//		else {
//			printf("ѡ�����\n");
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
//	int(*pfArr[4])(int, int);///pfArr��һ������ - ����ָ�������
//	int(*(*ppArr)[4])(int, int) = &pfArr;
//	//ppArr��һ��ָ��[����ָ������]��ָ��
//	//ppArr��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int ,int)
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