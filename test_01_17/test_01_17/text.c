#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//声明一个结构体类型
//struct Node {
//	int data;
//	struct Node* n;
//};
//int main(){
//	printf("%d\n", sizeof(struct Node));
//	return 0;
//}

//struct S1 {
//	char c1;
//	int a;
//	char c2;
//};
//struct S2 {
//	double d;
//	char c;
//	int a;
//};
//struct S3 {
//	char c1;
//	struct S2 s2;
//	double d;
//};
//int main() {
//	//struct S1 s1 = { 0 };
//	//printf("%d\n", sizeof(s1));
//	//struct S2 s2 = { 0 };
//	//printf("%d\n", sizeof(s2));
//
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	return 0;
//}

////设置默认对齐数为8
//#pragma pack(4)
//struct S {
//	char c;//1
//	//7 3
//	double d;//8 4
//	//12
//};
////取消设置的默认对齐数
//#pragma pack()
//int main() {
//	struct S s1;
//	printf("%d\n", sizeof(s1));
//	return 0;
//}

#include <stddef.h>
struct S {
	int a;
	char c1;
	double d;
};
void Init(struct S* ps) {
	ps->a = 100;
	ps->c1 = 'w';
	ps->d = 3.14;
}
int main() {
	//offsetof();//偏移量
	//printf("%d\n", offsetof(struct S, c1));
	//printf("%d\n", offsetof(struct S,a));
	//printf("%d\n", offsetof(struct S, d));

	struct S s;
	Init(&s);//传地址才能找到s并修改
	return 0;
}