#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//队列：操作受限制的线性表，只能在表尾插入，在表头删除 -->“先进先出”
     //-->常见存储结构：循环顺序队列

//--------------------------------------------循环顺序队列------------------------------------------
//循环顺序队列：通过取模实现 -->注意：front可能在前，也可能在后，设计算法时要考虑两种情况

//顺序队列的定义：
//#define MAXSIZE 100
//#define QElemType int 
//typedef struct
//{
//    QElemType* base;
//    int front;//头指针
//    int rear;//尾指针
//}SqQueue;
//
////队列的初始化
//int InitQueue(SqQueue* q)
//{
//    q->base = (QElemType*)malloc(MAXSIZE * sizeof(QElemType));
//    if (q->base == NULL)
//    {
//        perror("InitQueue:");
//        return 0;
//    }
//    q->front = 0;
//    q->rear = 0;
//    return 1;
//}
//
////求队列的长度
//int QueueLength(SqQueue s)
//{
//    //front在前时，长度等于rear-front
//    //front在后时，长度等于(s.rear+ MAXSIZE) - s.front
//    //综合为下述表达式
//    return (s.rear - s.front + MAXSIZE) % MAXSIZE;
//}
//
////入队(在队尾插入）
//int EnQueue(SqQueue* q, QElemType e)
//{
//    //判断是否队满 -->1.设计标志  2.计数器  3.少用一个空间
//    //采用少用一个空间元素的方法
//    if ((q->rear + 1) % MAXSIZE == q->front)
//    {
//        printf("已经队满");
//        return ERROR;
//    }
//    //入队
//    (q->base)[q->rear] = e;
//    q->rear = (q->rear + 1) % MAXSIZE;
//    return OK;
//}
//
////出队（在对头删除）
//int DeQueue(SqQueue* q, QElemType* e)
//{
//    //判断是否对空
//    if (q->front == q->rear)
//    {
//        printf("已经对空");
//        return ERROR;
//    }
//    //出队
//    *e = (q->base)[q->front];
//    q->front = (q->front + 1) % MAXSIZE;
//    return OK;
//}
//
////获取对头元素
//QElemType GetHead(SqQueue q)
//{
//    //不能对空
//    if (q.front != q.rear)
//    {
//        return (q.base)[q.front];
//    }
//}


//------------------------------------------------链队列----------------------------------------------------
//注意：包含头结点
//定义链队列的类型：
//#define MAXSIZE 100
//#define QElemType int 
//typedef struct Qnode
//{
//    QElemType data;
//    struct Qnode* next;
//}Qnode,*QueuePtr;
//
//typedef struct
//{
//    QueuePtr front;//头指针
//    QueuePtr rear;//尾指针
//}LinkQueue;
//
////链队列的初始化
//int InitQueue(LinkQueue* q)
//{
//    q->front = (QueuePtr)malloc(sizeof(Qnode));
//    if (q->front == NULL)
//    {
//        perror("InitQueue:");
//        return ERROR;
//    }
//    q->rear = q->front;
//    (q->front)->next = NULL;
//    return OK;
//}
//
////链队列的销毁
//void DestroyQueue(LinkQueue* q)
//{
//    QueuePtr p;
//    while (q->front)
//    {
//        p = q->front->next;
//        free(q->front);
//        q->front = p;
//    }
//}
//
////入队
//int EnQueue(LinkQueue* q, QElemType e)
//{
//    QueuePtr p = (QueuePtr)malloc(sizeof(Qnode));
//    if (p == NULL)
//    {
//        printf("EnQueue:开辟内存失败");
//        exit(1);
//    }
//    p->data = e;
//    p->next = NULL;
//    q->rear->next = p;
//    q->rear = p;
//    return OK;
//}
//
////出队
//int DeQueue(LinkQueue* q, QElemType* e)
//{
//    if (q->front == q->rear)
//    {
//        printf("为空对，无法删除元素");
//        return ERROR;
//    }
//    QueuePtr p = q->front->next;
//    *e = p->data;
//    q->front->next = p->next;
//    if (q->rear == p)
//    {
//        q->rear = q->front;
//    }
//    free(p);
//    p = NULL;
//    return OK;
//}
//
////取对头元素
//int GetHead(LinkQueue q, QElemType* e)
//{
//    if (q.front == q.rear)
//    {
//        printf("为空对，无法取得头元素");
//        return ERROR;
//    }
//    *e = q.front->next->data;
//    return OK;
//}
