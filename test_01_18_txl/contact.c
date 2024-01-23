#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include "contact.h"



//初始化
void InitContact(struct Contact* ps) {
	memset(ps->data, 0, sizeof(ps->data));//设置空间，都为0
	ps->size = 0;//让通讯录最初的元素个数也变为0
}
//增加
void AddContact(struct Contact* ps) {
	//通讯录已经满了
	if (ps->size == MAX) {
		printf("通讯录已满，无法增加\n");
	}
	else {
		printf("请输入名字:>");
		scanf("%s", ps->data[ps->size].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[ps->size].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功！\n");
	}
}

//打印
void showContact(const struct Contact* ps) {
	if (ps->size == 0) {
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		//数据
		for (i = 0; i < ps->size; i++) {
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}
	}
}
//查找指定联系人
static int FindByName(const struct Contact* ps, char name[MAX_NAME]) {//加入static使函数只能在这里使用  作用域发生变化
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name)) {//相等 - 找到了
			return i;
		}
	}
	//找不到
	return -1;
}
//删除指定联系人
void DelContact(struct Contact* ps) {
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", &name);
	
	//1.查找要删除的元素的位置
	int pos = FindByName(ps, name);//找到了返回名字所在元素下标，找不到返回-1
	
	//2.删除
	//找完了还没找到
	if ( pos == -1 ) {//最后一个数据是ps->size-1 
		printf("要删除的人不存在\n");
	}
	else {
		//删除数据
		//把要删除的从后往前覆盖，最后一个删掉
		int j = 0;
		for (j = pos; j < ps->size - 1; j++) {
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功！\n");
	}
}
//查找指定联系人
void SearchContact(const struct Contact* ps) {
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1) {
		printf("要查找的人不存在！\n");
	}
	else {
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
	}
}
//修改指定联系人
void ModifyContact(struct Contact* ps) {
	char name[MAX_NAME];
	printf("请输入要修改人的名字:>");
	scanf("%s", &name);
	int pos = FindByName(ps, name);
	if (pos == -1) {
		printf("要修改信息的人不存在！\n");
	}
	else {
		printf("请输入名字:>");
		scanf("%s", ps->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", ps->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成！\n");
	}
}
//排序
int int_cmp(const void* e1, const void* e2) {
	//比较名字就是比较两个字符串
	// 不能直接用大于等于小于比较，应该用strcmp比较
	return strcmp(((struct PeoInfo*)e1)->name, ((struct PeoInfo*)e2)->name);
}
//相等返回0
//e1>e2返回>0
//e1<e2返回<0
//所以用两个数相减最好   
void SortContact(struct Contact* ps) {
	qsort(ps->data, ps->size, sizeof(struct PeoInfo), int_cmp);
	int i = 0;
	//标题
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "名字", "年龄", "性别", "电话", "地址");
	//数据
	for (i = 0; i < ps->size; i++) {
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
	}
}