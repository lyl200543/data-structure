#define  _CRT_SECURE_NO_WARNINGS
#include"contact.h" 

//静态的版本:
//void InitContact(Contact* pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//	//memset(pc, 0, sizeof(pc));
//}

//动态的版本:
void check_capcity(Contact* pc)
{
	if (pc->capcity == pc->count)
	{
		PeoInfo* ptr = realloc(pc->data, (pc->capcity + ADD_SZ) * sizeof(PeoInfo));
		if (ptr == NULL)
		{
			printf("AddContact::%s\n", strerror(errno));
		}
		else
		{
			pc->data = ptr;
			printf("增容成功\n");
		}
	}
}

void LoadContact(Contact* pc)
{
	FILE* pfread = fopen("Contact.txt", "rb");
	if (pfread == NULL)
	{
		perror("LoadContact");
		return;
	}
	PeoInfo buf;
	//fread的返回值为读取的元素个数，此处读取成功返回1，读到EOF返回0
	while (fread(&buf, sizeof(PeoInfo), 1, pfread) == 1)
	{
		check_capcity(pc);
		pc->data[pc->count] = buf;
		pc->count++;
	}
	fclose(pfread);
	pfread = NULL;
}

int InitContact(Contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->capcity = InitCapcity;
	pc->data = (PeoInfo*)calloc(InitCapcity, sizeof(PeoInfo));
	if (pc->data == NULL)
	{
		printf("InitContact::%s\n", strerror(errno));
		return 1;
	}
	LoadContact(pc);
	return 0;
}

//静态的版本:
//void AddContact(Contact* pc)
//{
//	assert(pc);
//	if (pc->count == MAX)
//	{
//		printf("通讯录已满\n");
//		return;
//	}
//	printf("请输入姓名：> ");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄：> ");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("请输入性别：> ");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话号码：> ");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入家住地址：> ");
//	scanf("%s", pc->data[pc->count].addr);
//	printf("添加成功\n");
//	pc->count++;
//}

//动态的版本:


void AddContact(Contact* pc)
{
	assert(pc);
	check_capcity(pc);

	printf("请输入姓名：> ");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄：> ");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别：> ");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话号码：> ");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入家住地址：> ");
	scanf("%s", pc->data[pc->count].addr);
	printf("添加成功\n");
	pc->count++;
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	int i;
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "号码", "地址");
	for (i = 0; i < pc->count; i++)
	{
		printf("%-10s\t%-5d\t%-5s\t%-12s\t%-30s\n",  pc->data[i].name, 
								pc->data[i].age,
								pc->data[i].sex,
								pc->data[i].tele, 
								pc->data[i].addr);
	}
}

const int find_by_name(Contact* pc, char name[])
{
	assert(pc);
	int i;
	for (i = 0; i < pc->count; i++)
	{
		if (strcmp(name, pc->data[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	if (pc->count == 0)
	{
		printf("无法删除\n");
		return;
	}
	//查找
	char name[20];
	printf("请输入要删除的联系人的名字：>");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	//删除
	int i;
	for (i = ret; i < pc->count-1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
}

void SearchContact(Contact* pc)
{
	char name[20];
	printf("请输入要查找的联系人的名字：>");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	printf("该联系人存在\n");
	printf("%-10s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "号码", "地址");
	printf("%-10s\t%-5d\t%-5s\t%-12s\t%-30s\n", pc->data[ret].name,
												pc->data[ret].age,
												pc->data[ret].sex,
												pc->data[ret].tele,
												pc->data[ret].addr);

}

void ModifyContact(Contact* pc)
{
	char name[20];
	printf("请输入要修改的联系人的名字：>");
	scanf("%s", name);
	int ret = find_by_name(pc, name);
	if (ret == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	printf("联系人存在，可以开始修改\n");
	printf("请输入姓名：> ");
	scanf("%s", pc->data[ret].name);
	printf("请输入年龄：> ");
	scanf("%d", &(pc->data[ret].age));
	printf("请输入性别：> ");
	scanf("%s", pc->data[ret].sex);
	printf("请输入电话号码：> ");
	scanf("%s", pc->data[ret].tele);
	printf("请输入家住地址：> ");
	scanf("%s", pc->data[ret].addr);
	printf("修改成功\n");
}

int data_cmp_by_name(const void* e1, const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
	qsort(pc->data, pc->count, sizeof(PeoInfo), data_cmp_by_name);
	printf("排序成功\n");
}

void ExitContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}

void SaveContact(Contact* pc)
{
	FILE* pfwrite = fopen("Contact.txt", "wb");
	if (pfwrite == NULL)
	{
		perror("SaveContact");
		return;
	}
	int i;
	for (i = 0; i < pc->count; i++)
	{
		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfwrite);
	}
	fclose(pfwrite);
	pfwrite = NULL;
}
