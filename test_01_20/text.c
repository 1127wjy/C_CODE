#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<errno.h>

//int main() {
//	//向内存申请10个整型的空间
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL) {
//		//开辟失败将失败信息打印
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		//正常使用空间
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//让p彻底断开联系
//	return 0;
//}

//int main() {
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟空间的
//	free(p);
//	p = NULL;
//	return 0;
//}

////realloc - 调整动态开辟内存空间的大小
//int main() {
//	int* p = (int*)malloc(20);
//	if (p == NULL) {
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		int i = 0;
//		for (i = 0; i < 5; i++) {
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足使用
//	//希望能够有40个字节的时候
//	//这里就可以使用realloc来调整动态开辟的内存
//	int* p2 = realloc(p, 40);
//	if (p2 != NULL) {
//		p = p2;
//		int i = 0;
//		for ( i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for ( i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////教材题目1改正2.
//void GetMemory(char** p) {//用二级指针接收指针
//	*p = (char*)malloc(100);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str);//传址才可以找到str，否则str到函数里面的p只是对str的临时拷贝
//	strcpy(str, "hello world!");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//int main() {
//	Test();
//	return 0;
//}
////教材题目1改正2.
//char* GetMemory(char* p) {
//	p = (char*)malloc(100);
//	return p;//把p的值返回去
//}
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory(str);//把函数的p值也给str一份，则str此时不是NULL
//	strcpy(str, "hello world!");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//char* GetMemory(void) {
//	char p[] = "hello world!";
//	return p;//返回地址，但是p在栈区，出了函数被销毁了，则后续的str找不到p以及p的内容
//}
//int main() {
//	char* str = NULL;
//	GetMemory();//非法访问
//	printf(str);
//	return 0;
//}

//int* test() {
//	int* str = malloc(100);//在堆区，没有free则在程序结束前都会存在，空间还在，没有被回收销毁
//	return str;//不会被销毁
//}
//int main() {
//	int* p = test();//能成功接收
//	return 0;
//}

//void Test() {
//	char* str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL) {
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main() {
//	Test();
//	return 0;
//}

//1.
//struct S {
//	int n;
//	int arr[];//未知大小的 - 柔性数组成员 - 数组的大小是可以调整的
//};
//int main() {
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4  返回的结构大小不包括数组的内存 - 就是n的大小
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//总共开辟了24个字节，因为n有4个字节，所以剩下的20个字节都会给arr
//	ps->n = 100;
//	int i = 0;
//	for ( i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;//0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL) {
//		ps = ptr;
//	}
//	for ( i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//2.
struct S {
	int n;
	int* arr;
};
int main() {
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->arr = malloc(5 * sizeof(int));//让struct S里面的arr再指向别的空间
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//对arr调整大小
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL) {
		ps->arr = ptr;
	}
	for ( i = 5; i < 10; i++)
	{
		ps->arr[i] = i;
	}for ( i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//释放
	free(ps->arr);//先把ps->arr释放
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}