#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//栈：操作受限制的线性表，只能在表尾进行插入和删除操作 -->“后进先出”
    //-->常见存储结构：顺序栈

//———————————————————————————顺序栈—————————————————————————————

//栈的数据类型：
//#define MAXSIZE 100
//#define SElemType int  //可以是任意数据类型
//typedef struct
//{
//    SElemType* base;//栈底指针
//    SElemType* top;//栈顶指针  -->为了方便操作：top指针指的是真正的栈底元素之上的下标地址
//    int stacksize;//栈可用最大容量
//}SqStack;
//
////栈的初始化
//int InitStack(SqStack* s)
//{
//    (*s).base = (SElemType*)malloc(MAXSIZE * sizeof(SElemType));
//    if ((*s).base == NULL)
//    {
//        perror("InitStack:");
//        return ERROR;
//    }
//    (*s).top = (*s).base;
//    (*s).stacksize = MAXSIZE;
//    return OK;
//}
//
////判断栈是否为空
//int StackEmpty(SqStack s)
//{
//    if (s.base == s.top)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
////求栈的元素个数
//int StackLength(SqStack s)
//{
//    return s.top - s.base;
//}
//
////清空栈
//void StackClear(SqStack* s)
//{
//    if ((*s).base)
//    {
//        (*s).stacksize = 0;
//    }
//}
//
////销毁栈
//void StackDestroy(SqStack* s)
//{
//    if ((*s).base)
//    {
//        free((*s).base);
//        (*s).base = NULL;
//        (*s).top = NULL;
//        (*s).stacksize = 0;
//    }
//}
//
////入栈
//int push(SqStack* s, SElemType e)
//{
//    //判断栈是否满了
//    if (((*s).top - (*s).base) == (*s).stacksize)
//    {
//        //扩容到原来的两倍
//        int newsize = 2 * (s->stacksize);
//        SElemType* newbase = (SElemType*)realloc(s->base, newsize * sizeof(SElemType));
//        if (newbase == NULL)
//        {
//            perror("push");
//            return 0;
//        }
//        s->base = newbase;
//        s->top = s->base + s->stacksize;
//        s->stacksize = newsize;
//        //return 0;
//    }
//    *(s->top)++ = e;
//    return 1;
//}
//
////出栈
//int pop(SqStack* s, SElemType* e)
//{
//    if (s->base == s->top) 
//    {
//        return ERROR;
//    }
//    *e = *(--s->top);
//    return OK;
//}


//----补充：（慕课）
//用一个数组表示两个栈：两个栈往中间增长
// 
//#define ElemType int
//#define MAXSIZE 100
//typedef struct DStack
//{
//    ElemType data[MAXSIZE];
//    int top1;
//    int top2;
//}*DStack;
//
//void Push(DStack s, ElemType e, int tag)
//{
//    if (s->top2 - s->top1 == 1)
//    {
//        printf("栈满\n");
//        return;
//    }
//    if (tag == 1)
//    {
//        s->data[++(s->top1)] = e;
//    }
//    else
//    {
//        s->data[--(s->top2)] = e;
//    }
//}
//
//ElemType Pop(DStack s, int tag)
//{
//    if (tag == 1)
//    {
//        if (s->top1 == -1)
//        {
//            printf("栈1空\n");
//            return NULL;
//        }
//        else
//        {
//            return s->data[(s->top1)--];
//        }
//    }
//    else
//    {
//        if (s->top2 == MAXSIZE)
//        {
//            printf("栈2空\n");
//            return NULL;
//        }
//        else
//        {
//            return s->data[(s->top2)++];
//        }
//    }
//}

//应用：表达式求值/中缀表达式转化为后缀表达式


//--------------------------------------------------链栈----------------------------------------------------

//链栈的表示
//注意：1.链表的头指针就是栈顶     2.不需要头节点   3.空栈相当于头指针指向空

//#define SElemType int
//typedef struct StackNode
//{
//    SElemType data;
//    struct StackNode* next;
//}StackNode,*LinkStack;
//
////链栈的初始化
//int InitStack(LinkStack* s)
//{
//    *s = NULL;
//    return OK;
//}
//
////判断链栈是否为空
//int StackEmpty(LinkStack s)
//{
//    if (s == NULL)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
////入栈
//int Push(LinkStack* s, SElemType e)
//{
//    StackNode* p = (StackNode*)malloc(sizeof(StackNode));
//    if (p == NULL)
//    {
//        perror("Push:");
//        return 0;
//    }
//    p->data = e;
//    p->next = *s;
//    *s = p;
//    return 1;
//}
//
////出栈
//int Pop(LinkStack* s, SElemType* e)
//{
//    if (*s == NULL)
//    {
//        printf("空栈无法出栈");
//        return ERROR;
//    }
//    StackNode* p = *s;
//    *e = (*s)->data;
//    (*s) = (*s)->next;
//    free(p);
//    p = NULL;
//    return OK;
//}

