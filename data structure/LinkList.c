#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//线性表的链式定义和实现:(单链表)
//定义链表类型
#define OK 1
#define ERROR 0
#include<stdlib.h>
#include<string.h>
//typedef struct
//{
//	char name[20];
//	char sex[10];
//	float score;
//}ElemType;

//#define ElemType int   //有序链表的合并

//typedef struct Lnode
//{
//	ElemType data;  //数据域
//	struct Lnode* next;   //指针域
//}Lnode,*LinkList;  //LinkList通常用来表示头指针，而Lnode表示一个节点，*Lnode表示指针域

////单链表的初始化
//int InitList_L(LinkList* pL)
//{
//	*pL = (LinkList)malloc(sizeof(Lnode));   //头节点空间的开辟
//	if (*pL == NULL)
//	{
//		perror("InitList_L:");
//		return ERROR;
//	}
//	(*pL)->next = NULL;  // ，头节点的指针域为NULL，创建一个空表
//	return OK;
//}
//
////判断链表是否为空
//int ListEmpty(LinkList L)  //若L为空表，返回1，否则返回0
//{
//	if (L->next) //非空
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
////销毁链表(一个一个结点删除)
//int DestroyList_L(LinkList* pL)
//{
//	Lnode* p = NULL;
//	while (*pL)
//	{
//		p = *pL;
//		*pL = (*pL)->next;
//		free(p);
//		p = NULL;
//	}
//	return OK;
//}
//
////清空链表(保留头指针和头节点）
//void ClearList(LinkList* pL)
//{
//	Lnode* p;
//	Lnode* q;
//	p = (*pL)->next;
//	while (p)
//	{
//		q = p->next;
//		free(p);
//		p = q;
//	}
//	(*pL)->next = NULL;
//}
//
////求链表的表长
//int ListLength(LinkList L)
//{
//	Lnode* p = L->next;
//	int count = 0;
//	while (p)
//	{
//		count++;
//		p = p->next;
//	}
//	return count;
//}
//
////链表的取值
//int GetElem(LinkList L, int i, ElemType* e)
//{
//	Lnode* p = L->next;
//	int j = 1;  //计数器
//	while (p && j < i)
//	{
//		j++;
//		p = p->next;
//	}
//	if (!p || j > i)
//	{
//		return ERROR;
//	}
//	*e = p->data;
//	return OK;
//}
//
////链表的查找
//int data_cmp(ElemType e1, ElemType e2)
//{
//	if (strcmp(e1.name, e2.name)==0 && strcmp(e1.sex, e2.sex)==0 && e1.score == e2.score)  //字符串相等时strcmp返回0
//	{
//		return 1;
//	}
//	return 0;
//}
//
////1>返回指针
//Lnode* LocateElem1(LinkList L, ElemType e)
//{
//	Lnode* p = L->next;
//	while (p && !data_cmp(p->data,e))
//	{
//		p = p->next;
//	}
//	return p;
//}
//
////2>返回位置
//int LocateElem2(LinkList L, ElemType e)
//{
//	Lnode* p = L->next;
//	int j = 1;
//	while (p && !data_cmp(p->data, e))
//	{
//		j++;
//		p = p->next;
//	}
//	if (!p)
//	{
//		return 0;
//	}
//	else
//	{
//		return j;
//	}
//}
//
////链表的插入
//int ListInsert(LinkList* pL, int i, ElemType e)
//{
//	Lnode* p = *pL;
//	int j = 0;
//	while (p && j < i - 1)  //找到第i-1个结点
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1)
//	{
//		return ERROR;
//	}
//	Lnode* s = malloc(sizeof(Lnode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return OK;
//}
//
////链表的删除
//int ListDelete(LinkList* pL, int i, ElemType* e)
//{
//	Lnode* p = *pL;
//	int j = 0;
//	while (p && j < i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i - 1)
//	{
//		return ERROR;
//	}
//	Lnode* q = p->next;
//	p->next = q->next;
//	*e = q->data;
//	free(q);
//	q = NULL;
//	return OK;
//}
//
////链表的创建（头插法）
//int CreateList_R(LinkList* pL, int n)
//{
//	(*pL) = malloc(sizeof(Lnode));
//	if ((*pL) == NULL)
//	{
//		perror("CreatList1:");
//		return ERROR;
//	}
//	(*pL)->next = NULL;
//	int i;
//	Lnode* p;
//	for (i = 0; i < n; i++)
//	{
//		p = malloc(sizeof(Lnode));
//		if (p == NULL)
//		{
//			perror("CreatList2:");
//			return ERROR;
//		}
//		if (scanf("%19s %9s %f", p->data.name, p->data.sex, &(p->data.score)) != 3)
//		{
//			perror("CreatList3:");
//			return ERROR;
//		}
//		p->next = (*pL)->next;
//		(*pL)->next = p;
//	}
//	return OK;
//}
//
////链表的创建（尾插法）
//int CreatList_L(LinkList* pL, int n)
//{
//	(*pL) = malloc(sizeof(Lnode));
//	if ((*pL) == NULL)
//	{
//		perror("CreatList1:");
//		return ERROR;
//	}
//	(*pL)->next = NULL;
//	Lnode* r = (*pL);   //尾指针
//	int i;
//	Lnode* p;
//	for (i = 0; i < n; i++)
//	{
//		p = malloc(sizeof(Lnode));
//		if (p == NULL)
//		{
//			perror("CreatList2:");
//			return ERROR;
//		}
//		if (scanf("%19s %9s %f", p->data.name, p->data.sex, &(p->data.score)) != 3)
//		{
//			perror("CreatList3:");
//			return ERROR;
//		}
//		p->next = NULL;
//		r->next = p;
//		r = p;
//	}
//	return OK;
//}
//
////打印
//void print(LinkList L, int n)
//{
//	ElemType a;
//	GetElem(L, n, &a);
//	printf("%s %s %.2f\n", a.name, a.sex, a.score);
//}
//
//int main()
//{
//	LinkList L = NULL;  //头指针
//	CreatList_L(&L, 5);
//	ElemType e1 = { "liaoyilin","female",100 };
//	ListInsert(&L, 3, e1);
//	ElemType e2 = { 0 };
//	ListDelete(&L, 1, &e2);
//	int i;
//	for (i = 1; i <= 5; i++)
//	{
//		print(L, i);
//	}
//	DestroyList_L(&L);
//	return 0;
//}

//注意：！！！！！使用malloc一定记得要引头文件<stdlib.h>
//!!!!!!使用scanf一定要假&&&&&&

//如果头节点永远不会被删除（或者不需要修改头指针），就可以直接传链表头指针，而不需要传地址。
//要修改L时（L=...）需要传地址
//只要修改L指向的数据时（L->next=...)不需要传地址

//11.21
//线性表的链式定义和实现:(循环链表)
//-->最后一个节点的指针域指向头结点
//-->因为对链表的操作主要涉及头尾结点，因此使用尾指针

//LinkList Connect(LinkList Ta, LinkList Tb)   //Ta,Tb 都是尾指针
//{
//	Lnode* p = Ta->next;
//	Ta->next = Tb->next->next;
//	free(Tb->next);
//	Tb->next = p;
//	return Tb;   //返回合并链表的尾指针
//}


//线性表的链式定义和实现:(双向链表)
//定义双向链表类型
//typedef struct DulNode
//{
//	ElemType data;
//	struct DulNode* prior, * next;
//}DulNode,*DluLinkList;
//
//DulNode* FindElem(DluLinkList L, int i)
//{
//	DulNode* p = L;
//	int j = 0;
//	while (p && j < i)
//	{
//		p = p->next;
//		j++;
//	}
//	if (!p || j > i)
//	{
//		return NULL;
//	}
//	return p;
//}
////双向链表的插入
//int DuListInsert(DluLinkList L, int i, ElemType e)
//{
//	//找到第i个元素
//	DulNode* p = FindElem(L, i);
//	if (p == NULL)
//	{
//		return ERROR;
//	}
//	//插入
//	DulNode* s = malloc(sizeof(DulNode));
//	if (s == NULL)
//	{
//		perror("DuListInsert:");
//		return ERROR;
//	}
//	s->data = e;
//	//考虑顺序
//	p->prior->next = s;
//	s->prior = p->prior;
//	p->prior = s;
//	s->next = p;
//	return OK;
//}
//
//
////11.22
////双向链表的删除
//int ListDelete_Dul(DluLinkList L, int i, ElemType* e)
//{
//	//找到第i个元素
//	DulNode* p = FindElem(L, i);
//	if (p == NULL)
//	{
//		return ERROR;
//	}
//	//删除
//	*e = p->data;
//	p->prior->next = p->next;
//	p->next->prior = p->prior;
//	free(p);
//	p = NULL;
//	return OK;
//}


//线性表的应用：
//有序线性表的合并（重复元素不去掉）
//void MergeList(LinkList La, LinkList* Lb, LinkList* Lc)
//{
//	(*Lc) = La;
//	Lnode* pc = La;
//	Lnode* pa = La->next;
//	Lnode* pb = (*Lb)->next;
//	while (pa && pb)
//	{
//		if (pa->data <= pb->data)
//		{
//			pc->next = pa;
//			pc = pa;
//			pa = pa->next;
//		}
//		else
//		{
//			pc->next = pb;
//			pc = pb;
//			pb = pb->next;
//		}
//	}
//	/*if (pa)
//	{
//		pc->next = pa;
//	}
//	if (pb)
//	{
//		pc->next = pb;
//	}*/
//	pc->next = pa ? pa : pb;
//	free(*Lb);
//	*Lb = NULL;
//}

//如何调用这个函数：
//LinkList Lc = NULL;
//MergeList(La, &Lb, &Lc);


//稀疏多项式运算：
