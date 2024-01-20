#include<stdio.h>

//void test(int arr[]) {
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}
//int main() {
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main() {
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	printf("%c\n", *pc);
//	return 0;
//}

//int main() {
//	const char* p = "abcddef";
//	//*p = 'W';
//	printf("%s\n", p);
//	return 0;
//}

//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* pa = "abcdef";
//	char* pb = "abcdef";
//	/*if (arr1==arr2)
//	{
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}*/
//	if (pa == pb)
//	{
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//	return 0;
//}

//int main() {
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	/*for ( i = 0; i < 3; i++)
//	{
//		printf("%d\n", (*parr[i]));
//	}*/
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for ( j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//int(*pa)[10] = &arr;
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		//printf("%d ", *(*pa + i));//*pa=arr(*与&抵消)
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//参数是指针的形式
void print2(int(*p)[5], int x, int y) {
	int i = 0;
	int j = 0;
	for ( i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++) 
		{
			//printf("%d ", *(*(p + i) + j));
			printf("%d ", *(p[i] + j));
			printf("%d ", (*(p + i))[j]);
			printf("%d ", *(*p + i) + j);
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
//参数是数组的形式
void print1(int arr[3][5], int x, int y) {
	int i = 0;
	int j = 0;
	for ( i = 0; i < x; i++)
	{
		for ( j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main() {
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	//print1(arr, 3, 5);//arr - 数组名 - 首元素地址 - 第一行数据 -是指数组指针
	//printf("\n");
	print2(arr, 3, 5);

	
	return 0;
}

//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//		printf("%d ", p[i]);
//
//	}
//	return 0;
//}