#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//堆（heap）:
//1.特点
//1>堆总是一棵完全二叉树-->可以用数组存储
//2>堆中某个节点的值总是不大于或不小于其父节点的值

//-->将根节点最大(小)的堆叫做最大(小)堆,常见的堆有二叉堆、斐波那契堆等

//2..作用：1>实现优先队列，例如CPU的调度
//         2>实现堆排序
//以最大堆为例：
//#define ElemType int
//#define MaxData INT_MAX
//typedef struct HeapStruct* MaxHeap;
//struct HeapStruct
//{
//	ElemType* elem;  //数组的首地址
//	int size;   //当前的元素个数
//	int capcity;   //堆的最大容量
//};

//堆的创建
//MaxHeap Create(int maxsize)
//{
//	MaxHeap H = (MaxHeap)malloc(sizeof(struct HeapStruct));
//	H->elem = (ElemType*)malloc((maxsize + 1) * sizeof(ElemType)); 
//	//数组从下标为1开始
//	H->capcity = maxsize;
//	H->size = 0;
//	H->elem[0] = MaxData;
//	//定义“哨兵”为大于堆中所有元素的值，便于以后操作
//	return H;
//}

//堆的插入
//void Insert(MaxHeap H, ElemType item)
//{
//	if (H->size == H->capcity)
//	{
//		printf("堆已满\n");
//		return;
//	}
//	int i = ++H->size;
//	for (; H->elem[i / 2] < item; i /= 2)
//	{
//		H->elem[i] = H->elem[i / 2];
//	}
//	H->elem[i] = item;
//}

//堆的删除
//ElemType Delete(MaxHeap H)
//{
//	if (H->size == 0)
//	{
//		printf("栈已空\n");
//		return;
//	}
//	ElemType MaxElem = H->elem[1];
//	ElemType tmp = H->elem[H->size--];
//	int parent, child;
//	for (parent = 1; parent * 2 <= H->size; parent = child)
//	{
//		child = parent * 2;  //先假设左孩子的值最大
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


//求堆的路径
//将一系列给定数字插入一个初始为空的最小堆 h。随后对任意给定的下标 i，打印从第 i 个结点到根结点的路径。
//输入样例 :
//5 3
//46 23 26 24 10
//5 4 3
//输出样例 :
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