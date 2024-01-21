#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//char* my_strcpy(char* dest,  const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//拷贝src指向得字符串到dest指向的空间，包含\0
//	while (*dest++ = *src++) {
//		;
//	}
//	//返回目的空间的起始位置 - 与strcpy一致
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
//	//1.找到\0的位置
//	while (*dest != '\0') {
//		dest++;
//	}
//	//2.追加
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
//	//比较
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	//if (*str1 > *str2) {
//	//	return 1;//大于
//	//}
//	//else {
//	//	return -1;//小于
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
//	//若要复制的个数已经可以复制的str时 - 即*str已经='\0',但count还没复制完
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
//	//找到'\0'
//	while (*dest++) {
//		;
//	}
//	dest--;//返回，从\0处添加
//	while (count--) {
//		//源字符长度小于count时，不会添加其他，直接返回
//
//		/*if (!(*dest++ = *src++)) {
//			return ret;
//		}*/
//		*dest++ = *src++;//不对吗？
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
//	char* cur = (char*)p1;//开始匹配时的指针 - 存档
//	if (*p2 == '\0') {
//		return (char*)p1;
//	}
//	while (*cur) {//不等于'\0'时进来
//		s1 = cur;
//		s2 = (char*)p2;
//		//相等时两者往后再看是否相等
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2)) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0') {
//			return cur;//找到了
//		}
//		if (*s1 == '\0') {//s1比s2短，且找不到
//			return NULL;
//		}
//		//不相等时再往后在找
//		cur++;
//	}
//	return NULL;
//}
//int main() {
//	char* p1 = "abcddefghidefddd";
//	char* p2 = "def";
//	//char* ret = strstr(p1, p2);//找到打印地址
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL) {//找不到返回空指针
//		printf("子串不存在\n");
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
//	//切割buf中的字符串
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
//	//一个个拷贝，拷贝num次
//	assert(dest && src);
//	void* ret = dest;
//	while (num--) {//先使用再--
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return dest;//返回起始地址
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
//		//前->后
//		while (count--) {
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else {
//		//后->前
//		*((char*)dest + count) = *((char*)src + count);
//	}
//
//	//if (dest < src) {
//	//	//前->后
//	//	while (count--) {
//	//		*(char*)dest = *(char*)src;
//	//		++(char*)dest;
//	//		++(char*)src;
//	//	}
//	//}
//	//else {
//	//	//后->前
//	//	while (count--) {
//	//		*((char*)dest + count) = *((char*)src + count);//两边都指向最后一个元素的最后一个字节
//	//	}
//	//}
//
//	return ret;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr + 2, arr, 20);//内存重叠 - 得用memmove
//	//memcpy(arr + 2, arr, 20);//C语言标准：memcpy只处理不重叠的内存拷贝；menmove处理重叠的内存拷贝
//
//	//memmove(arr + 2, arr, 20);//处理内存重叠的情况
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