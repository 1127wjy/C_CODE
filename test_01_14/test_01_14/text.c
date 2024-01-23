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
//	assert(str);//要是是空指针就报错，停止运行
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
//	gets(arr);//不识别空格，读取一行
//	//逆序函数
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


////水仙花数
//#include <math.h>
//int main() {
//	int i = 0;
//	for (i = 0; i <= 10000; i++) {
//		//判断i是否威威水仙花数（自幂数）
//		//1.判断i的位数 - n位数
//		//123/10  n++
//		//12/10   n++
//		//1/10    n++
//		int n = 1;//每一位数字至少是一位数
//		int tmp = i;//防止后面i被变化
//		int sum = 0;
//		while (tmp /= 10) {
//			n++;
//		}
//		//2.计算i的每一位n次方之和sum
//		tmp = i;
//		while (tmp) {
//			sum += pow(tmp % 10, n);//每一位
//			tmp /= 10;//十位数开始次方运算 
//		}
//		//3.比较i== sum 水仙花数是指一个 3 位数，它的每个数位上的数字的 3次幂之和等于它本身
//		if (i == sum) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////打印菱形
//int main() {
//	int n = 0;
//	printf("输入要打印的行数：>");
//	scanf("%d", &n);
//	//上半部分
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		//打印空格
//		int j = 0;
//		for (j = 0; j < n - 1 - i; j++) {
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for ( i = 0; i < n - 1; i++)
//	{
//		//打印空格
//		int j = 0;
//		for ( j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}//打印*
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

////喝汽水，1瓶汽水1元，2个空瓶可以换1瓶汽水，给20元，可以换多少瓶汽水
//int main() {
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	int empty = 0;
//	//买回来的汽水
//	total = money;
//	empty = money;
//	//换回来的汽水
//	int i = 0;
//	while (empty >= 2) {
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total=%d\n", total);
//	return 0;
//}

////调整数组使奇数全部位于偶数前面
////1.从左边找一个偶数
////2.从右边找一个奇数
////3.交换
//void move(int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) {
//		//从左边找偶数
//		while ((left < right) && (arr[left] % 2 == 1)) {//防止越界
//			left++;
//		}
//		//从右边找奇数
//		while ((left < right) && (arr[right] % 2 == 0)) {//防止越界
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

//实现一个函数，可以左旋字符串中的k个字符
//eg：ABCD左旋一个字符 -> BCDA
//	  ABCD左旋两个字符 -> CDAB
////1.暴力求解法
//void left_move(char* arr, int k) {
//	assert(arr);//保证指针的有效性
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++) {
//		//左旋转1个字符
//		//1.将第一个元素拿出来
//		char tmp = *arr;//arr是首元素地址，解引用之后就是第一个元素
//		//2.往前挪动
//		int j = 0;
//		for (j = 0; j < len - 1; j++) {
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.最后一个位置给拿出来的第一个元素
//		*(arr + len - 1) = tmp;
//
//	}
//}
////2.三步逆序法
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
//	assert(k <= len);//当要左旋的字符大于数组的长度时报错
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int main() {
//	char arr[] = "abcdefgh";
//	left_move(arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
////eg：给定s1=AABCD和s2=BCDAA -> 返回1
////	  给定s1=abcd和s2=ACBD -> 返回0
////1.找出可能旋转的任何情形进行一一比较
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
//	assert(k <= len);//当要左旋的字符大于数组的长度时报错
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
//}
//int is_left_move(char* s1, char* s2) {
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++) {
//		left_move(s1, 1);//每次左旋一个来比较
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

////2.abcdefabcdef -- 之间任取连续的六个字符则是可能旋转的所有可能性 - 判断s2是否为子串
//int is_left_move(char* s1, char* s2) {
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2) {
//		return 0;
//	}
//	//1.在s1字符串中追加一个s1字符串
//	strncat(s1, s1, len1);
//	//2.判断s2指向的字符串是否是s1的子串
//	//strstr - 找子串的
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

//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于O(N) - 不能一一遍历数组
//
//1 2 3
//4 5 6
//7 8 9
// 
//1 2 3
//2 3 4
//3 4 5
//思路：
//最右上角的数比所找的数小，则去掉一行
//最右上角的数比所找的数大，则去掉一列
//以此类推，就可以在矩阵中找到所要的数
int FindNum(int arr[3][3], int k, int* px, int* py) {
	//右上角元素的位置
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
	//找不到
	return 0;
}
int main() {
	int arr[3][3] = { {1,2,3 },{4,5,6},{7,8,9} };
	int k = 3;//要查找的数
	int x = 3;
	int y = 3;
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1) {
		printf("找到了\n");
		printf("坐标是(%d,%d)\n", x + 1, y + 1);
	}
	else {
		printf("找不到\n");
	}
	return 0;
}