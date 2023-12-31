#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main() {
//	int  i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	//-20
//	//10000000000000000000000000010100 - 原码
//	//11111111111111111111111111101011 - 反码
//	//11111111111111111111111111101100 - 补码
//	//10 
//	//00000000000000000000000000001010 - 补码
//	//+
//	//11111111111111111111111111110110 - 结果（（补码）
//	//10000000000000000000000000001001 - 反码
//	//10000000000000000000000000001010 - 原码（-10）
//	return 0;
//}

//int main() {
//	unsigned int i;
//	for ( i = 9; i >=0; i--)
//	{
//		printf("%u\n", i);//无符号数永远>=0，死循环
//	}
//	return 0;
//}

//int main() {
//	char a[1000];//范围为-128~127
//	int i;
//	for ( i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1，-2，-3。。。。。。-128，127，126，。。。。。。。3，2，1，0（strlen算到0，则0之前有255个）
//	printf("%d", strlen(a));
//	return 0;
//}

//int main() {
//	unsigned char i;//范围为-128~127 永远<255
//	for ( i = 0; i < 255; i++)
//	{
//		printf("hello world!\n");//死循环
//	}
//	return 0;
//}

int main() {
	int n = 9;
	//0 00000000 00000000000000000001001 -补码
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);//9
	printf("pFloat的值为：%f\n", *pFloat);//0.000000
	//(-1)^0*0*0.00000000000000000001001*2^-126 ------ 无限接近于0

	*pFloat = 9.0;
	//浮点数存储：(-1)^S*M*2^E
	//1001.0
	//(-1)^0*1.001*2^3=1.001*2^3
	//S=0			0
	//M=1.001		00100000000000000000000
	//E=3+127=130	10000010
	//S+E+M
	//0 10000010 00100000000000000000000
	printf("n的值为：%d\n", n);//01000001000100000000000000000000 ---- 1091567616
	printf("pFloat的值为：%f\n", *pFloat);//9.000000
	return 0;
}


//int main() {
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0
//	//M=1.011 只存储小数点后两位 011（M有23个比特位）
//	//E=2+127=129 10000001
//	//二进制形式为S+E+       M
//	//			  0 10000001 01100000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//0x40b0000
//	return 0;
//}