#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <errno.h>

//int main() {
//	//���·��
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("test.txt", "r");
//
//	//����·��
//	//fopen("D:\\Visual Code repos\\test_01_21\\test_01_21\\test.txt", "r");
//
//	FILE* pf = fopen("test.txt", "a");
//	if (pf == NULL) {//��ʧ��
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	////׷���ļ�
//	//fputc("WJY", pf);
//	//fputc("NY", pf);
//	//fputc("NYAwjy", pf);
//	fputc('c', pf);
//	//���ļ�
//	/*for (int i = 0; i < 9; i++)
//	{
//		printf("%c", fgetc(pf));
//	}*/
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	int ch = fgetc(stdin);//�Ӽ��̶�ȡ
//	fputc(ch, stdout);//����Ļ���
//	return 0;
//}

//int main() {
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL) {
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);//������л���
//
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputs("nyAwjy\n", pf);
//	fputs("wjy\n", pf);
//	fputs("ny\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);//�ӱ�׼�����������̣���ȡ
//	//fputs(buf, stdout);//�ӱ�׼���������Ļ�����
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
//	//��ʽ������������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s\n", s.n, s.score, s.arr);
//	//�ر��ļ�
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
//	//д�ļ�
//	//��ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת��Ϊ�ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp
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
//	//struct S s = { "����",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("index.txt", "rb");
//	if (pf == NULL) {
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	//fwrite(&s, sizeof(struct S), 1, pf);
//	// 
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %f", tmp.name, tmp.age, tmp.score);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main() {
//	FILE* pf = fopen("index.txt", "r");
//	if (pf == NULL) {
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek - �����ļ�ָ���λ�ú�ƫ��������λ�ļ�ָ�� 
//	//fseek(pf, -2, SEEK_CUR);//���ļ�ָ��ĵ�ǰλ�ÿ�ʼ��ȡ
//	//2.��ȡ�ļ�
//	//int ch = fgetc(pf);
//	//printf("%c\n", ch);
//
//	//fseek(pf, -2, SEEK_END);//���ļ�ָ���ĩβλ�ÿ�ʼ��ȡ
//	////ftell - �����ļ�ָ���������ʼλ�õ�ƫ����
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//
//	//rewind - ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//	int ch = fgetc(pf);//�ȶ�ȡһ��
//	printf("��һ��::%c\n", ch);
//
//	rewind(pf);//�ص���ʼλ��
//
//	ch = fgetc(pf);//������ȡ
//	printf("�ڶ���::%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main() {
	//EOF:-1
	//feof();//EOF - end of file -�ļ�������־
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

	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}