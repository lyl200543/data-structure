#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//�ѣ�heap��:
//1.�ص�
//1>������һ����ȫ������-->����������洢
//2>����ĳ���ڵ��ֵ���ǲ����ڻ�С���丸�ڵ��ֵ

//-->�����ڵ����(С)�Ķѽ������(С)��,�����Ķ��ж���ѡ�쳲������ѵ�

//2..���ã�1>ʵ�����ȶ��У�����CPU�ĵ���
//         2>ʵ�ֶ�����
//������Ϊ����
//#define ElemType int
//#define MaxData INT_MAX
//typedef struct HeapStruct* MaxHeap;
//struct HeapStruct
//{
//	ElemType* elem;  //������׵�ַ
//	int size;   //��ǰ��Ԫ�ظ���
//	int capcity;   //�ѵ��������
//};

//�ѵĴ���
//MaxHeap Create(int maxsize)
//{
//	MaxHeap H = (MaxHeap)malloc(sizeof(struct HeapStruct));
//	H->elem = (ElemType*)malloc((maxsize + 1) * sizeof(ElemType)); 
//	//������±�Ϊ1��ʼ
//	H->capcity = maxsize;
//	H->size = 0;
//	H->elem[0] = MaxData;
//	//���塰�ڱ���Ϊ���ڶ�������Ԫ�ص�ֵ�������Ժ����
//	return H;
//}

//�ѵĲ���
//void Insert(MaxHeap H, ElemType item)
//{
//	if (H->size == H->capcity)
//	{
//		printf("������\n");
//		return;
//	}
//	int i = ++H->size;
//	for (; H->elem[i / 2] < item; i /= 2)
//	{
//		H->elem[i] = H->elem[i / 2];
//	}
//	H->elem[i] = item;
//}

//�ѵ�ɾ��
//ElemType Delete(MaxHeap H)
//{
//	if (H->size == 0)
//	{
//		printf("ջ�ѿ�\n");
//		return;
//	}
//	ElemType MaxElem = H->elem[1];
//	ElemType tmp = H->elem[H->size--];
//	int parent, child;
//	for (parent = 1; parent * 2 <= H->size; parent = child)
//	{
//		child = parent * 2;  //�ȼ������ӵ�ֵ���
//		if (child != H->size && H->elem[child] < H->elem[child + 1])
//		{
//			child++;
//		}
//		if (H->elem[child] > tmp)
//		{
//			H->elem[parent] = H->elem[child];
//		}
//		else
//		{
//			break;
//		}
//	}
//	H->elem[parent] = tmp;
//	return MaxElem;
//}


//��ѵ�·��
//��һϵ�и������ֲ���һ����ʼΪ�յ���С�� h����������������±� i����ӡ�ӵ� i ����㵽������·����
//�������� :
//5 3
//46 23 26 24 10
//5 4 3
//������� :
//24 23 10
//46 23 10
//26 10

//#include<stdio.h>
//#define MAXSIZE 101
//#define MIN -10001
//int MinHeap[MAXSIZE], size;
//void Create()
//{
//	MinHeap[0] = MIN;
//	size = 0;
//}
//
//void Insert(int x)
//{
//	int i;
//	for (i = ++size; MinHeap[i / 2] > x; i /= 2)
//	{
//		MinHeap[i] = MinHeap[i / 2];
//	}
//	MinHeap[i] = x;
//}
//
//int main()
//{
//	int n, m, x, i, j;
//	Create();
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &x);
//		Insert(x);
//	}
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &j);
//		printf("%d ", MinHeap[j]);
//		while (j > 1)
//		{
//			j /= 2;
//			printf("%d ", MinHeap[j]);
//		}
//		printf("\n");
//	}
//}