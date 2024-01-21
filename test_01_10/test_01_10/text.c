#include <stdio.h>

//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;
//	//int sum = (*pAdd)(1, 2);
//	//int count = pAdd(1, 2);
//	//printf("%d\n", sum);
//	//printf("%d\n", count);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}




//void qsort(void* base,
//			size_t num, 
//			size_t width, 
//			int (*compar)(const void* e1, const void* e2)
//);
//base -- 指向要排序的数组的第一个元素的指针
//num -- 由 base 指向的数组中元素的个数
//width -- 数组中每个元素的大小，以字节为单位
//compar -- 用来比较两个元素的函数

#include <stdlib.h>
#include <string.h>
//相等返回0
//e1>e2返回>0
//e1<e2返回<0
//所以用两个数相减最好
int cmp_int(const void* e1, const void* e2) {
	//比较两个整型值的
	return *(int*)e1 - *(int*)e2;
}
void test1() {
	int arr[10] = { 9,8,7,6,5,4,3,1,2 ,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int cmp_float(const void* e1, const void* e2) {
	//1.
	//return *(float*)e1 - *(float*)e2;
	//2.
	/*if (*(float*)e1 == *(float*)e2) {
		return 0;
	}
	else if (*(float*)e1 > *(float*)e2) {
		return 1;
	}
	else {
		return -1;
	}*/
	//3.
	return ((int)(*(float*)e1 - *(float*)e2));
}
void test2() {
	float f[] = { 9.0,8.0,7.0,5.0,6.0,1.0,2.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%f ", f[i]);
	}
}

struct Stu {
	char name[20];
	int age;
};
int cmp_stu_age(const void* e1, const void* e2) {
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_name(const void* e1, const void* e2) {
	//比较名字就是比较两个字符串
	// 不能直接用大于等于小于比较，应该用strcmp比较
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2));
}
void test3() {
	struct Stu s[3] ={{"wjy", 21},{ "ny",57 },{ "xiangai",12 }};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i]);
	}
}


void Swap(char* buf1, char* buf2, int width) {
	int i = 0;
	for ( i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
//实现冒泡排序函数的程序员，并不知道未来排序的数据类型
//也不知道待排序的两个元素的类型 - void*
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2)) {
	int i = 0;
	//趟数
	for (i = 0; i < sz - 1 ; i++) {
		//每一趟比较的对数
		int j = 0;
		for ( j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			 }
		}
	}
}
void test4() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//使用bubble_sort冒泡排序的程序员一定知道自己排序的是什么数据
	//就应该知道如何比较待排序数组中的元素
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void test5() {
	struct Stu s[3] = { {"wjy", 21},{ "ny",57 },{ "xiangai",12 } };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_age);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_name);
}
int main() {
	//test1();
	//printf("\n");
	//test2();
	//printf("\n");
	//test3();
	//test4();
	test5();
	return 0;
}

//void bubble_sort(int arr[], int sz) {
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++) 
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++) 
//		{
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main() {
//	int arr[10] = { 9,8,7,6,5,4,3,1,2 ,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

