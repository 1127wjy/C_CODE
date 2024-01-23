#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main() {
//	//相对路径
//	//..表示上一级路径
//	//.表示当前路径
//	//fopen("test.txt", "r");
//
//	//绝对路径
//	//fopen("D:\\Visual Code repos\\test_01_21\\test_01_21\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL) {//打开失败
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	////追加文件
//	//fputc("WJY", pf);
//	//fputc("NY", pf);
//	//fputc("NYAwjy", pf);
//	fputc('c', pf);
//	//读文件
//	/*for (int i = 0; i < 9; i++)
//	{
//		printf("%c", fgetc(pf));
//	}*/
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	int ch = fgetc(stdin);//从键盘读取
//	fputc(ch, stdout);//从屏幕输出
//	return 0;
//}

//int main() {
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);//本身带有换行
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("nyAwjy\n", pf);
//	fputs("wjy\n", pf);
//	fputs("ny\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//从标准输入流（键盘）读取
//	//fputs(buf, stdout);//从标准输出流（屏幕）输出
//	gets(buf);
//	puts(buf);
//	return 0;
//}

//struct S {
//	int n;
//	float score;
//	char arr[10];
//};
//int main() {
//	struct S s = { 100,3.4f,"bit" };
//	FILE* pf = fopen("index.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main() {
//	struct S s = { 100,3.4f,"bit" };
//	FILE* pf = fopen("index.txt", "w");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换为字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//从buf中读取格式化的数据到tmp
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), &(tmp.arr));
//
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}

//struct S {
//	char name[20];
//	int age;
//	float score;
//};
//int main() {
//	//struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("index.txt", "rb");
//	if (pf == NULL) {
//		return 0;
//	}
//	//二进制的形式写文件
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	// 
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("index.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek - 根据文件指针的位置和偏移量来定位文件指针 
//	//fseek(pf, -2, SEEK_CUR);//从文件指针的当前位置开始读取
//	//2.读取文件
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//
//	//fseek(pf, -2, SEEK_END);//从文件指针的末尾位置开始读取
//	////ftell - 返回文件指针相对于起始位置的偏移量
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//
//	//rewind - 让文件指针的位置回到文件的起始位置
//	int ch = fgetc(pf);//先读取一个
//	printf("第一次::%c\n", ch);
//
//	rewind(pf);//回到起始位置
//
//	ch = fgetc(pf);//再向后读取
//	printf("第二次::%c\n", ch);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main() {
	//EOF:-1
	//feof();//EOF - end of file -文件结束标志
	FILE* pf = fopen("index.txt", "r");
	if (pf == NULL) {
		perror("open file index2.txt");
		return 0;
	}
	int ch = 0;
	while ((ch = fgetc(pf)) != EOF) {
		putchar(ch);
	}
	if (ferror(pf)) {
		printf("error\n");
	}
	else if (feof(pf)) {
		printf("end of file\n");
	}

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}