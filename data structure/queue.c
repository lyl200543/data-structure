#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//���У����������Ƶ����Ա�ֻ���ڱ�β���룬�ڱ�ͷɾ�� -->���Ƚ��ȳ���
     //-->�����洢�ṹ��ѭ��˳�����

//--------------------------------------------ѭ��˳�����------------------------------------------
//ѭ��˳����У�ͨ��ȡģʵ�� -->ע�⣺front������ǰ��Ҳ�����ں�����㷨ʱҪ�����������

//˳����еĶ��壺
//#define MAXSIZE 100
//#define QElemType int 
//typedef struct
//{
//    QElemType* base;
//    int front;//ͷָ��
//    int rear;//βָ��
//}SqQueue;
//
////���еĳ�ʼ��
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
////����еĳ���
//int QueueLength(SqQueue s)
//{
//    //front��ǰʱ�����ȵ���rear-front
//    //front�ں�ʱ�����ȵ���(s.rear+ MAXSIZE) - s.front
//    //�ۺ�Ϊ�������ʽ
//    return (s.rear - s.front + MAXSIZE) % MAXSIZE;
//}
//
////���(�ڶ�β���룩
//int EnQueue(SqQueue* q, QElemType e)
//{
//    //�ж��Ƿ���� -->1.��Ʊ�־  2.������  3.����һ���ռ�
//    //��������һ���ռ�Ԫ�صķ���
//    if ((q->rear + 1) % MAXSIZE == q->front)
//    {
//        printf("�Ѿ�����");
//        return ERROR;
//    }
//    //���
//    (q->base)[q->rear] = e;
//    q->rear = (q->rear + 1) % MAXSIZE;
//    return OK;
//}
//
////���ӣ��ڶ�ͷɾ����
//int DeQueue(SqQueue* q, QElemType* e)
//{
//    //�ж��Ƿ�Կ�
//    if (q->front == q->rear)
//    {
//        printf("�Ѿ��Կ�");
//        return ERROR;
//    }
//    //����
//    *e = (q->base)[q->front];
//    q->front = (q->front + 1) % MAXSIZE;
//    return OK;
//}
//
////��ȡ��ͷԪ��
//QElemType GetHead(SqQueue q)
//{
//    //���ܶԿ�
//    if (q.front != q.rear)
//    {
//        return (q.base)[q.front];
//    }
//}


//------------------------------------------------������----------------------------------------------------
//ע�⣺����ͷ���
//���������е����ͣ�
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
//    QueuePtr front;//ͷָ��
//    QueuePtr rear;//βָ��
//}LinkQueue;
//
////�����еĳ�ʼ��
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
////�����е�����
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
////���
//int EnQueue(LinkQueue* q, QElemType e)
//{
//    QueuePtr p = (QueuePtr)malloc(sizeof(Qnode));
//    if (p == NULL)
//    {
//        printf("EnQueue:�����ڴ�ʧ��");
//        exit(1);
//    }
//    p->data = e;
//    p->next = NULL;
//    q->rear->next = p;
//    q->rear = p;
//    return OK;
//}
//
////����
//int DeQueue(LinkQueue* q, QElemType* e)
//{
//    if (q->front == q->rear)
//    {
//        printf("Ϊ�նԣ��޷�ɾ��Ԫ��");
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
////ȡ��ͷԪ��
//int GetHead(LinkQueue q, QElemType* e)
//{
//    if (q.front == q.rear)
//    {
//        printf("Ϊ�նԣ��޷�ȡ��ͷԪ��");
//        return ERROR;
//    }
//    *e = q.front->next->data;
//    return OK;
//}
