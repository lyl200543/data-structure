#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���Ա����ʽ�����ʵ��:(������)
//������������
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

//#define ElemType int   //��������ĺϲ�

//typedef struct Lnode
//{
//	ElemType data;  //������
//	struct Lnode* next;   //ָ����
//}Lnode,*LinkList;  //LinkListͨ��������ʾͷָ�룬��Lnode��ʾһ���ڵ㣬*Lnode��ʾָ����

////������ĳ�ʼ��
//int InitList_L(LinkList* pL)
//{
//	*pL = (LinkList)malloc(sizeof(Lnode));   //ͷ�ڵ�ռ�Ŀ���
//	if (*pL == NULL)
//	{
//		perror("InitList_L:");
//		return ERROR;
//	}
//	(*pL)->next = NULL;  // ��ͷ�ڵ��ָ����ΪNULL������һ���ձ�
//	return OK;
//}
//
////�ж������Ƿ�Ϊ��
//int ListEmpty(LinkList L)  //��LΪ�ձ�����1�����򷵻�0
//{
//	if (L->next) //�ǿ�
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
////��������(һ��һ�����ɾ��)
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
////�������(����ͷָ���ͷ�ڵ㣩
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
////������ı�
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
////�����ȡֵ
//int GetElem(LinkList L, int i, ElemType* e)
//{
//	Lnode* p = L->next;
//	int j = 1;  //������
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
////����Ĳ���
//int data_cmp(ElemType e1, ElemType e2)
//{
//	if (strcmp(e1.name, e2.name)==0 && strcmp(e1.sex, e2.sex)==0 && e1.score == e2.score)  //�ַ������ʱstrcmp����0
//	{
//		return 1;
//	}
//	return 0;
//}
//
////1>����ָ��
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
////2>����λ��
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
////����Ĳ���
//int ListInsert(LinkList* pL, int i, ElemType e)
//{
//	Lnode* p = *pL;
//	int j = 0;
//	while (p && j < i - 1)  //�ҵ���i-1�����
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
////�����ɾ��
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
////����Ĵ�����ͷ�巨��
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
////����Ĵ�����β�巨��
//int CreatList_L(LinkList* pL, int n)
//{
//	(*pL) = malloc(sizeof(Lnode));
//	if ((*pL) == NULL)
//	{
//		perror("CreatList1:");
//		return ERROR;
//	}
//	(*pL)->next = NULL;
//	Lnode* r = (*pL);   //βָ��
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
////��ӡ
//void print(LinkList L, int n)
//{
//	ElemType a;
//	GetElem(L, n, &a);
//	printf("%s %s %.2f\n", a.name, a.sex, a.score);
//}
//
//int main()
//{
//	LinkList L = NULL;  //ͷָ��
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

//ע�⣺����������ʹ��mallocһ���ǵ�Ҫ��ͷ�ļ�<stdlib.h>
//!!!!!!ʹ��scanfһ��Ҫ��&&&&&&

//���ͷ�ڵ���Զ���ᱻɾ�������߲���Ҫ�޸�ͷָ�룩���Ϳ���ֱ�Ӵ�����ͷָ�룬������Ҫ����ַ��
//Ҫ�޸�Lʱ��L=...����Ҫ����ַ
//ֻҪ�޸�Lָ�������ʱ��L->next=...)����Ҫ����ַ

//11.21
//���Ա����ʽ�����ʵ��:(ѭ������)
//-->���һ���ڵ��ָ����ָ��ͷ���
//-->��Ϊ������Ĳ�����Ҫ�漰ͷβ��㣬���ʹ��βָ��

//LinkList Connect(LinkList Ta, LinkList Tb)   //Ta,Tb ����βָ��
//{
//	Lnode* p = Ta->next;
//	Ta->next = Tb->next->next;
//	free(Tb->next);
//	Tb->next = p;
//	return Tb;   //���غϲ������βָ��
//}


//���Ա����ʽ�����ʵ��:(˫������)
//����˫����������
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
////˫������Ĳ���
//int DuListInsert(DluLinkList L, int i, ElemType e)
//{
//	//�ҵ���i��Ԫ��
//	DulNode* p = FindElem(L, i);
//	if (p == NULL)
//	{
//		return ERROR;
//	}
//	//����
//	DulNode* s = malloc(sizeof(DulNode));
//	if (s == NULL)
//	{
//		perror("DuListInsert:");
//		return ERROR;
//	}
//	s->data = e;
//	//����˳��
//	p->prior->next = s;
//	s->prior = p->prior;
//	p->prior = s;
//	s->next = p;
//	return OK;
//}
//
//
////11.22
////˫�������ɾ��
//int ListDelete_Dul(DluLinkList L, int i, ElemType* e)
//{
//	//�ҵ���i��Ԫ��
//	DulNode* p = FindElem(L, i);
//	if (p == NULL)
//	{
//		return ERROR;
//	}
//	//ɾ��
//	*e = p->data;
//	p->prior->next = p->next;
//	p->next->prior = p->prior;
//	free(p);
//	p = NULL;
//	return OK;
//}


//���Ա��Ӧ�ã�
//�������Ա�ĺϲ����ظ�Ԫ�ز�ȥ����
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

//��ε������������
//LinkList Lc = NULL;
//MergeList(La, &Lb, &Lc);


//ϡ�����ʽ���㣺
