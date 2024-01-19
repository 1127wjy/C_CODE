#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdlib.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

//����ɶ�������
enum Option {
	EXIT,//0
	ADD,//1
	DEL,//2
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};
//ͨѶ¼����
struct Contact {
	struct PeoInfo data[MAX];//�����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};

//��������
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps);
//����һ����Ϣ��ͨѶ¼
void AddContact(struct Contact* ps);
//��ӡͨѶ¼
void showContact(const struct Contact * ps);//��ӡ���޸�
//ɾ��ָ������ϵ��
void DelContact(struct Contact* ps);
//����ָ����ϵ��
void SearchContact(const struct Contact* ps);
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps);
//����
void SortContact(struct Contact* ps);