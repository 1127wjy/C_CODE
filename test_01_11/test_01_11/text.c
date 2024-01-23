#include <stdio.h>
#include <string.h>

struct Test
{
	int Num;
	char* pcName;
	short sDate;
	char cha[2];
	short sBa[4];
}*p;//结构体指针

int main() {
//	/*int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));*/
//
//	char arr[] = { 'a','b','c','d','e','f' };
//	//printf("%d\n", sizeof(arr)); 
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	//printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
// 
	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));
	//printf("%d\n", strlen(arr));
	//printf("%d\n", strlen(&arr));

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));
	//printf("%d\n", sizeof(p[0]));
	//printf("%d\n", sizeof(&p));
	//printf("%s\n", *(&p));
	//printf("%d\n", strlen(&p));
	//printf("%p\n", &p);

	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a[0] + 1));
	//printf("%p\n", &a[0][0]);
	//printf("%p\n", a[0] + 1);
	//printf("%p\n", a + 1);
	//printf("%d\n", sizeof(a[3]));

	//int a[5] = { 1,2,3,4,5 };
	//int* ptr = (int*)(&a + 1);
	//printf("%d,%d", *(a + 1), *(ptr - 1));

	//p = (struct Test*)0x100000;
	//printf("%p\n", p + 0x1);

	//int a[4] = { 1,2,3,4 };
	//int* ptr1 = (int*)(&a + 1);
	//int* ptr2 = (int*)((int)a + 1);
	//printf("%x,%x", ptr1[-1], *ptr2);

	//int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式 - 算出的结果是最后一个表达式的结果
	//int* p;
	//p = a[0];//第一行的地址
	//printf("%d", p[0]);//*(p+0)

	//int a[5][5];
	//int(*p)[4];
	//p = a;
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);

	//int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
	//int* ptr1 = (int*)(&aa + 1);
	//int* ptr2 = (int*)(*(aa + 1));
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));

	//char* a[] = { "work","at","alibaba" };
	//char** pa = a;
	//pa++;
	//printf("%s\n", *pa);

	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);
	printf("%s\n", *-- * ++cpp + 3);
	printf("%s\n", *cpp[-2] + 3);
	printf("%s\n", cpp[-1][-1] + 1);




	return 0;
}