#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcpy(char* dest,  const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++) {
//		;
//	}
//	//����Ŀ�Ŀռ����ʼλ�� - ��strcpyһ��
//	return ret;
//
//	//while (*src != '\0') {
//	//	*dest = *src;
//	//	*dest++;
//	//	*src++;
//	//}
//	//*dest = *src;//'\0'
//}
//int main(){
//	char arr1[] = "abcdef";
//	char arr2[] = "wjy";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src) {
//	assert(dest != NULL);
//	assert(src);
//	char* ret = dest;
//	//1.�ҵ�\0��λ��
//	while (*dest != '\0') {
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++) {
//		;
//	}
//	return ret;
//}
//int main() {
//	//char arr1[30] = "abcdef\0xxxx";
//	//char arr2[] = "wjy";
//	//strcat(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	char a1[30] = "wjy";
//	char a2[] = "ny";
//	my_strcat(a1, a2);
//	printf("%s\n", a1);
//
//	return 0;
//}

//my_strcmp(const char* str1, const char* str2) {
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2) {
//	//	return 1;//����
//	//}
//	//else {
//	//	return -1;//С��
//	//}
//	return (*str1 - *str2);
//}
//int main() {
//	char* p1 = "abcd";
//	char* p2 = "qbc";
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//my_strncpy(char* dest, char* str, int count) {
//	assert(dest && str);
//	char* ret = dest;
//	while (count && (*dest++ = *str++)) {
//		count--;
//	}
//	//��Ҫ���Ƶĸ����Ѿ����Ը��Ƶ�strʱ - ��*str�Ѿ�='\0',��count��û������
//	if (count > 0) {
//		while (--count) {
//			*dest++ = '\0';
//		}
//	}
//	return ret;	
//}
//int main() {
//	char arr1[10] = "abcdef";
//	char arr2[] = "wjy";
//	//strncpy(arr1, arr2, 5);
//	my_strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strncat(char* dest, char* src, int count) {
//	assert(dest && src);
//	char* ret = dest;
//	//�ҵ�'\0'
//	while (*dest++) {
//		;
//	}
//	dest--;//���أ���\0�����
//	while (count--) {
//		//Դ�ַ�����С��countʱ���������������ֱ�ӷ���
//
//		/*if (!(*dest++ = *src++)) {
//			return ret;
//		}*/
//		*dest++ = *src++;//������
//	}
//	*dest = '\0';
//	return ret;
//}
//int main() {
//	char arr1[30] = "abcdef\0xxxxxx";
//	char arr2[] = "wjy";
//	//strncat(arr1, arr2, 8);
//	my_strncat(arr1, arr2, 8);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main() {
//	const char* p1 = "abcdef";
//	const char* p2 = "abcwxy";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2) {
//	assert(p1 && p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;//��ʼƥ��ʱ��ָ�� - �浵
//	if (*p2 == '\0') {
//		return (char*)p1;
//	}
//	while (*cur) {//������'\0'ʱ����
//		s1 = cur;
//		s2 = (char*)p2;
//		//���ʱ���������ٿ��Ƿ����
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return cur;//�ҵ���
//		}
//		if (*s1 == '\0') {//s1��s2�̣����Ҳ���
//			return NULL;
//		}
//		//�����ʱ����������
//		cur++;
//	}
//	return NULL;
//}
//int main() {
//	char* p1 = "abcddefghidefddd";
//	char* p2 = "def";
//	//char* ret = strstr(p1, p2);//�ҵ���ӡ��ַ
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL) {//�Ҳ������ؿ�ָ��
//		printf("�Ӵ�������\n");
//	}
//	else {
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//int main() {
//	//char arr[] = "241371055@qq.com";
//	//char* p = "@.";
//	//char buf[1024] = { 0 };
//	//strcpy(buf, arr);
//	
//	char arr[] = "192.16.31.121";
//	char* p = ".";
//
//	//�и�buf�е��ַ���
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p)) {
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

#include<errno.h>
//int main() {
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL) {
//		printf("%s\\n", strerror(errno));
//	}
//	else {
//		printf("open file success\n");
//	}
//	return 0;
//}

#include <ctype.h>
//int main() {
//	//char ch = 'w';
//	//int ret = islower(ch);
//	//printf("%d\n", ret);
//
//	////char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//
//	char arr[] = "My name is WJY";
//	int i = 0;
//	while (arr[i]) {
//		if (islower(arr[i])) {
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num) {
//	//һ��������������num��
//	assert(dest && src);
//	void* ret = dest;
//	while (num--) {//��ʹ����--
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return dest;//������ʼ��ַ
//}
//struct stu {
//	char name[20];
//	int age;
//};
//int main() {
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//
//	struct stu arr1[] = { {"WJY",21},{"NY",57}};
//	struct stu arr2[3] = { 0 };
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}

//void* my_memmove(void* dest, const void* src, size_t count) {
//	assert(dest && src);
//	void* ret = dest;
//
//	if (dest<src || dest>(char*)src + count) {
//		//ǰ->��
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else {
//		//��->ǰ
//		*((char*)dest + count) = *((char*)src + count);
//	}
//
//	//if (dest < src) {
//	//	//ǰ->��
//	//	while (count--) {
//	//		*(char*)dest = *(char*)src;
//	//		++(char*)dest;
//	//		++(char*)src;
//	//	}
//	//}
//	//else {
//	//	//��->ǰ
//	//	while (count--) {
//	//		*((char*)dest + count) = *((char*)src + count);//���߶�ָ�����һ��Ԫ�ص����һ���ֽ�
//	//	}
//	//}
//
//	return ret;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr + 2, arr, 20);//�ڴ��ص� - ����memmove
//	//memcpy(arr + 2, arr, 20);//C���Ա�׼��memcpyֻ�����ص����ڴ濽����menmove�����ص����ڴ濽��
//
//	//memmove(arr + 2, arr, 20);//�����ڴ��ص������
//	my_memmove(arr, arr + 2, 20);
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main() {
	//char arr[10] = "";
	//memset(arr, '@', 10);
	//printf("%s\n", arr);

	int arr[10] = { 0 };
	memset(arr, 1, 10);
	return 0;
}