#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<errno.h>

//int main() {
//	//���ڴ�����10�����͵Ŀռ�
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL) {
//		//����ʧ�ܽ�ʧ����Ϣ��ӡ
//		printf("%s\n", strerror(errno));
//	}
//	else {
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ��ʱ
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;//��p���׶Ͽ���ϵ
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

////realloc - ������̬�����ڴ�ռ�Ĵ�С
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
//	//������ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ�������ʹ��
//	//ϣ���ܹ���40���ֽڵ�ʱ��
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
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

////�̲���Ŀ1����2.
//void GetMemory(char** p) {//�ö���ָ�����ָ��
//	*p = (char*)malloc(100);
//}
//void Test(void) {
//	char* str = NULL;
//	GetMemory(&str);//��ַ�ſ����ҵ�str������str�����������pֻ�Ƕ�str����ʱ����
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
////�̲���Ŀ1����2.
//char* GetMemory(char* p) {
//	p = (char*)malloc(100);
//	return p;//��p��ֵ����ȥ
//}
//void Test(void) {
//	char* str = NULL;
//	str = GetMemory(str);//�Ѻ�����pֵҲ��strһ�ݣ���str��ʱ����NULL
//	strcpy(str, "hello world!");
//	printf(str);
//}
//int main() {
//	Test();
//	return 0;
//}

//char* GetMemory(void) {
//	char p[] = "hello world!";
//	return p;//���ص�ַ������p��ջ�������˺����������ˣ��������str�Ҳ���p�Լ�p������
//}
//int main() {
//	char* str = NULL;
//	GetMemory();//�Ƿ�����
//	printf(str);
//	return 0;
//}

//int* test() {
//	int* str = malloc(100);//�ڶ�����û��free���ڳ������ǰ������ڣ��ռ仹�ڣ�û�б���������
//	return str;//���ᱻ����
//}
//int main() {
//	int* p = test();//�ܳɹ�����
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
//	int arr[];//δ֪��С�� - ���������Ա - ����Ĵ�С�ǿ��Ե�����
//};
//int main() {
//	//struct S s;
//	//printf("%d\n", sizeof(s));//4  ���صĽṹ��С������������ڴ� - ����n�Ĵ�С
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));//�ܹ�������24���ֽڣ���Ϊn��4���ֽڣ�����ʣ�µ�20���ֽڶ����arr
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
//	//�ͷ�
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
	ps->arr = malloc(5 * sizeof(int));//��struct S�����arr��ָ���Ŀռ�
	int i = 0;
	for ( i = 0; i < 5; i++)
	{
		ps->arr[i] = i;
	}
	for ( i = 0; i < 5; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	//��arr������С
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
	//�ͷ�
	free(ps->arr);//�Ȱ�ps->arr�ͷ�
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}