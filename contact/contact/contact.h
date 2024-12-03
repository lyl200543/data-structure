#pragma once
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>

//#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 20
#define MAX_ADDR 30
#define InitCapcity 3
#define ADD_SZ 2

typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;

//静态的版本:
//typedef struct Contact
//{
//	int count;
//	PeoInfo data[MAX];
//}Contact;

//动态的版本:
typedef struct Contact
{
	int count;
	PeoInfo* data;
	int capcity;
}Contact;



//初始化通讯录
int InitContact(Contact* pc);
//添加联系人
void AddContact(Contact* pc);
//显示通讯录
void ShowContact(Contact* pc);
//删除联系人
void DelContact(Contact* pc);
//查找联系人
void SearchContact(Contact* pc);
//修改联系人
void ModifyContact(Contact* pc);
//给联系人排序
void SortContact(Contact* pc);
//释放动态内存空间
void ExitContact(Contact* pc);
//保存通讯录信息到文件中
void SaveContact(Contact* pc);
//加载文件信息到通讯录中
void LoadContact(Contact* pc);





