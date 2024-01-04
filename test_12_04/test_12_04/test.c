#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////求n的阶乘
//int main() {
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i = 1; i <=n; i++)
//	{
//		int j = 0;
//		ret = 1;//每次进入都得把ret变为1，避免上一项求出的阶乘未归零，会累积
//		for ( j = 1; j <=i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
