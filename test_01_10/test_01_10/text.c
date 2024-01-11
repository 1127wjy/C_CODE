#include <stdio.h>

//int Add(int x, int y) {
//	return x + y;
//}
//int main() {
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;
//	//int sum = (*pAdd)(1, 2);
//	//int count = pAdd(1, 2);
//	//printf("%d\n", sum);
//	//printf("%d\n", count);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	return 0;
//}




//void qsort(void* base,
//			size_t num, 
//			size_t width, 
//			int (*compar)(const void* e1, const void* e2)
//);
//base -- ָ��Ҫ���������ĵ�һ��Ԫ�ص�ָ��
//num -- �� base ָ���������Ԫ�صĸ���
//width -- ������ÿ��Ԫ�صĴ�С�����ֽ�Ϊ��λ
//compar -- �����Ƚ�����Ԫ�صĺ���

#include <stdlib.h>
#include <string.h>
//��ȷ���0
//e1>e2����>0
//e1<e2����<0
//������������������
int cmp_int(const void* e1, const void* e2) {
	//�Ƚ���������ֵ��
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
	//�Ƚ����־��ǱȽ������ַ���
	// ����ֱ���ô��ڵ���С�ڱȽϣ�Ӧ����strcmp�Ƚ�
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
//ʵ��ð���������ĳ���Ա������֪��δ���������������
//Ҳ��֪�������������Ԫ�ص����� - void*
void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2)) {
	int i = 0;
	//����
	for (i = 0; i < sz - 1 ; i++) {
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for ( j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0) {
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			 }
		}
	}
}
void test4() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sortð������ĳ���Աһ��֪���Լ��������ʲô����
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
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
//	//����
//	for (i = 0; i < sz - 1; i++) 
//	{
//		//һ��ð������
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

