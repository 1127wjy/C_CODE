#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "contact.h"



//��ʼ��
void InitContact(struct Contact* ps) {
	memset(ps->data, 0, sizeof(ps->data));//���ÿռ䣬��Ϊ0
	ps->size = 0;//��ͨѶ¼�����Ԫ�ظ���Ҳ��Ϊ0
}
//����
void AddContact(struct Contact* ps) {
	//ͨѶ¼�Ѿ�����
	if (ps->size == MAX) {
		printf("ͨѶ¼�������޷�����\n");
	}
	else {
		printf("����������:>");
		scanf("%s", ps->data[ps->size].name);
		printf("����������:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("������绰:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ���\n");
	}
}

//��ӡ
void showContact(const struct Contact* ps) {
	if (ps->size == 0) {
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//����
		for (i = 0; i < ps->size; i++) {
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
//����ָ����ϵ��
static int FindByName(const struct Contact* ps, char name[MAX_NAME]) {//����staticʹ����ֻ��������ʹ��  ���������仯
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name)) {//��� - �ҵ���
			return i;
		}
	}
	//�Ҳ���
	return -1;
}
//ɾ��ָ����ϵ��
void DelContact(struct Contact* ps) {
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", &name);
	
	//1.����Ҫɾ����Ԫ�ص�λ��
	int pos = FindByName(ps, name);//�ҵ��˷�����������Ԫ���±꣬�Ҳ�������-1
	
	//2.ɾ��
	//�����˻�û�ҵ�
	if ( pos == -1 ) {//���һ��������ps->size-1 
		printf("Ҫɾ�����˲�����\n");
	}
	else {
		//ɾ������
		//��Ҫɾ���ĴӺ���ǰ���ǣ����һ��ɾ��
		int j = 0;
		for (j = pos; j < ps->size - 1; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ���\n");
	}
}
//����ָ����ϵ��
void SearchContact(const struct Contact* ps) {
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1) {
		printf("Ҫ���ҵ��˲����ڣ�\n");
	}
	else {
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
	}
}
//�޸�ָ����ϵ��
void ModifyContact(struct Contact* ps) {
	char name[MAX_NAME];
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1) {
		printf("Ҫ�޸���Ϣ���˲����ڣ�\n");
	}
	else {
		printf("����������:>");
		scanf("%s", ps->data[pos].name);
		printf("����������:>");
		scanf("%d", &(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", ps->data[pos].sex);
		printf("������绰:>");
		scanf("%s", ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸���ɣ�\n");
	}
}
//����
int int_cmp(const void* e1, const void* e2) {
	//�Ƚ����־��ǱȽ������ַ���
	// ����ֱ���ô��ڵ���С�ڱȽϣ�Ӧ����strcmp�Ƚ�
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
//��ȷ���0
//e1>e2����>0
//e1<e2����<0
//������������������   
void SortContact(struct Contact* ps) {
	qsort(ps->data, ps->size, sizeof(struct PeoInfo), int_cmp);
	int i = 0;
	//����
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//����
	for (i = 0; i < ps->size; i++) {
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
	}
}