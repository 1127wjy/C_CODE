#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	unsigned long pulArry[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//
//	pulPtr = pulArry;
//	*(pulPtr + 3) += 3;
//
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

#include<string.h>
#include<assert.h>

//void reverse(char* str) {
//	assert(str);//Ҫ���ǿ�ָ��ͱ���ֹͣ����
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main() {
//	char arr[256] = { 0 };
//	//scanf("%s\n", arr);//abcdef --- fedcba
//	gets(arr);//��ʶ��ո񣬶�ȡһ��
//	//������
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//int main() {
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	//2*22*222*2222*22222 ...
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////ˮ�ɻ���
//#include <math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i <= 10000; i++) {
//		//�ж�i�Ƿ�����ˮ�ɻ�������������
//		//1.�ж�i��λ�� - nλ��
//		//123/10  n++
//		//12/10   n++
//		//1/10    n++
//		int n = 1;//ÿһλ����������һλ��
//		int tmp = i;//��ֹ����i���仯
//		int sum = 0;
//		while (tmp /= 10) {
//			n++;
//		}
//		//2.����i��ÿһλn�η�֮��sum
//		tmp = i;
//		while (tmp) {
//			sum += pow(tmp % 10, n);//ÿһλ
//			tmp /= 10;//ʮλ����ʼ�η����� 
//		}
//		//3.�Ƚ�i== sum ˮ�ɻ�����ָһ�� 3 λ��������ÿ����λ�ϵ����ֵ� 3����֮�͵���������
//		if (i == sum) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////��ӡ����
//int main() {
//	int n = 0;
//	printf("����Ҫ��ӡ��������>");
//	scanf("%d", &n);
//	//�ϰ벿��
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++) {
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for ( i = 0; i < n - 1; i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for ( j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}//��ӡ*
//		for (j = 0; j < 2 * (n - 1 - i) - 1; j++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//struct stu {
//	int num;
//	char name[20];
//	int age;
//};
//void fun(struct stu* p) {
//	printf("%s\n", (*p).name);
//}
//int main() {
//	struct stu students[3] = {
//		{9801,"wjy",21},
//		{9802, "ny", 57},
//		{9803, "xiangai",12 }
//	};
//	fun(students + 1);
//
//	return 0;
//}

////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Ի�����ƿ��ˮ
//int main() {
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	//���������ˮ
//	total = money;
//	empty = money;
//	//����������ˮ
//	int i = 0;
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

////��������ʹ����ȫ��λ��ż��ǰ��
////1.�������һ��ż��
////2.���ұ���һ������
////3.����
//void move(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		//�������ż��
//		while ((left < right) && (arr[left] % 2 == 1)) {//��ֹԽ��
//			left++;
//		}
//		//���ұ�������
//		while ((left < right) && (arr[right] % 2 == 0)) {//��ֹԽ��
//			right--;
//		}
//		if (left < right) {
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//void print(int arr[], int sz) {
//	int i = 0;
//	for ( i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ�
//eg��ABCD����һ���ַ� -> BCDA
//	  ABCD���������ַ� -> CDAB
////1.������ⷨ
//void left_move(char* arr, int k) {
//	assert(arr);//��ָ֤�����Ч��
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++) {
//		//����ת1���ַ�
//		//1.����һ��Ԫ���ó���
//		char tmp = *arr;//arr����Ԫ�ص�ַ��������֮����ǵ�һ��Ԫ��
//		//2.��ǰŲ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++) {
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.���һ��λ�ø��ó����ĵ�һ��Ԫ��
//		*(arr + len - 1) = tmp;
//
//	}
//}
////2.��������
////ab cdef
////ba fedc
////cdefab
//void reverse(char* left, char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right) {
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k) {
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);//��Ҫ�������ַ���������ĳ���ʱ����
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//int main() {
//	char arr[] = "abcdefgh";
//	left_move(arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
////eg������s1=AABCD��s2=BCDAA -> ����1
////	  ����s1=abcd��s2=ACBD -> ����0
////1.�ҳ�������ת���κ����ν���һһ�Ƚ�
//void reverse(char* left, char* right) {
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right) {
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* arr, int k) {
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);//��Ҫ�������ַ���������ĳ���ʱ����
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//int is_left_move(char* s1, char* s2) {
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		left_move(s1, 1);//ÿ������һ�����Ƚ�
//		int ret = strcmp(s1, s2);
//		if (ret == 0) {
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main() {
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefa";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	return 0;
//}

////2.abcdefabcdef -- ֮����ȡ�����������ַ����ǿ�����ת�����п����� - �ж�s2�Ƿ�Ϊ�Ӵ�
//int is_left_move(char* s1, char* s2) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	//1.��s1�ַ�����׷��һ��s1�ַ���
//	strncat(s1, s1, len1);
//	//2.�ж�s2ָ����ַ����Ƿ���s1���Ӵ�
//	//strstr - ���Ӵ���
//	char* ret = strstr(s1, s2);
//	if (ret == NULL) {
//		return 0;
//	}
//	else{
//		return 1;
//	}
//}
//int main() {
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1) {
//		printf("Yes\n");
//	}
//	else {
//		printf("No\n");
//	}
//	return 0;
//}

//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N) - ����һһ��������
//
//1 2 3
//4 5 6
//7 8 9
// 
//1 2 3
//2 3 4
//3 4 5
//˼·��
//�����Ͻǵ��������ҵ���С����ȥ��һ��
//�����Ͻǵ��������ҵ�������ȥ��һ��
//�Դ����ƣ��Ϳ����ھ������ҵ���Ҫ����
int FindNum(int arr[3][3], int k, int* px, int* py) {
	//���Ͻ�Ԫ�ص�λ��
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0) {
		if (arr[x][y] > k) {
			y--;
		}
		else if (arr[x][y] < k) {
			x++;
		}
		else {
			*px = x;
			*py = y;
			return 1;
		}
	}
	//�Ҳ���
	return 0;
}
int main() {
	int arr[3][3] = { {1,2,3 },{4,5,6},{7,8,9} };
	int k = 3;//Ҫ���ҵ���
	int x = 3;
	int y = 3;
	//�����Ͳ���
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1) {
		printf("�ҵ���\n");
		printf("������(%d,%d)\n", x + 1, y + 1);
	}
	else {
		printf("�Ҳ���\n");
	}
	return 0;
}