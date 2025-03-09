#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define ElemType int
#define MAX 100
//排序模板：
//void X_sort(ElemType A[],int N)

//稳定性：任意两个相等的数据，排序前后相对位置不发生改变

//*********1.冒泡排序：
//算法简单，可以处理链表类的数据，具有稳定性
//耗时长，效率低

//void bubble_sort(ElemType A[], int N)
//{
//	int i, j;
//	for (i = N - 1; i > 0; i--)   //一共进行N-1趟
//	{
//		int flag = 0;
//		for (j = 0; j < i; j++)   //从上到下遍历
//		{
//			if (A[j] > A[j + 1])
//			{
//				Swap(A[j], A[j + 1]);
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//}

//时间复杂度：
//顺序：O(N)
//逆序：O(N~2)



//2.********插入排序：
//算法简单，具有稳定性，...
//耗时长，效率低

//void Insertion_Sort(ElemType A[], int N)  //类似处理扑克牌
//{
//	int i, j;
//	for (i = 1; i < N; i++)
//	{
//		ElemType tmp = A[i];
//		for (j = i; j > 0 && A[j - 1] > tmp; j--)  //从后往前比较
//			A[j] = A[j - 1];
//		A[j] = tmp;
//	}
//}


//时间复杂度：
//顺序：O(N)
//逆序：O(N~2)


//时间复杂度下界：
//对于下标i<j, 如果A[i]>A[j], 则称(i, j)是一对逆序对(inversion)
//交换2个相邻元素正好消去1个逆序对
//插入排序 : T(N, I) = O(N + I)
//如果序列基本有序, 则插入排序简单且高效

//定理:任意N个不同元素组成的序列平均具有 N(N - 1) / 4个逆序对
//定理 : 任何仅以交换相邻两元素来排序的算法, 其平均时间复杂度为Ω(N2)。
//这意味着 : 要提高算法效率, 我们必须
//每次消去不止1个逆序对，每次交换相隔较远的2个元素



//3.*********希尔排序：基于插入排序
//定义增量序列 D（M）>D（M-1）>…>D1=1
//对每个D（k）进行“D（k） - 间隔”排序(k = M, M - 1, ….. 1)
//D（k）-间隔”有序的序列, 在执行“D（k-1）-间隔”排序后, 仍然是“D（K）-间隔”有序的

//原始增量序列：N/2  -->O(N~2)
//Hibbard增量序列:D(k) = 2~k - 1     -->相邻元素互质
//Sedgewick增量序列:{ 1, 5, 19, 41, 109, … }


//使用Sedgewick增量序列
//void shell_sort(ElemType A[], int N)
//{
//	/* 这里只列出一小部分增量 */
//	int Sedgewick[] = { 929, 505, 209, 109, 41, 19, 5, 1, 0 };   //从大到小
//	int i, j, d, w, z;
//	//找出第一个不大于N的增量
//	for (i = 0; Sedgewick[i] >= N; i++) { ; }
//	//希尔排序
//	for (d = Sedgewick[i]; d > 0; d = Sedgewick[++i])
//	{
//		//1>
//		//for (j = 0; j < d; j++)
//		//{
//		//	//插入排序
//		//	for (w = j + d; w < N; w += d)
//		//	{
//		//		ElemType tmp = A[w];
//		//		for (z = w; z >= j && A[z - d] > tmp; z -= d)
//		//			A[z] = A[z - d];
//		//		A[z] = tmp;
//		//	}
//		//}
//
//		//2>
//		for (j = d; j < N; j++)
//		{
//			ElemType tmp = A[j];
//			for (w = j; w >= d && A[w - d] > tmp; w -= d)
//				A[w] = A[w - d];
//			A[w] = tmp;
//		}
//	}
//}

//时间复杂度：主要与使用的增量序列有关



//4.********选择排序：
//void selection_sort(ElemType A[], int N)
//{
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		int MinPosition = FindMin(A, i, N - 1);
//		Swap(A, i, MinPosition);
//	}
//}
//
//int FindMin(ElemType A[], int start, int end)
//{
//	int min = A[start];
//	int index = start;
//	for (int i = start + 1; i <= end; i++)
//	{
//		if (A[i] < min)
//		{
//			min = A[i];
//			index = i;
//		}
//	}
//	return index;
//}

//算法关键在FindMin()函数，选择排序使用遍历
//堆排序选择最小堆

//时间复杂度：O(N~2)



//5.********堆排序：基于选择排序
// 以要排序的数组本身作为堆

//void Swap(ElemType A[], int a, int b)
//{
//	ElemType tmp = A[a];
//	A[a] = A[b];
//	A[b] = tmp;
//}
//
//void Percdown(ElemType A[], int root, int n)
//{
//	int parent, child;
//	ElemType tmp = A[root];
//	for (parent = root; parent * 2 + 1 <= n - 1; parent = child)
//	{
//		child = parent * 2 + 1;
//		if (child != n - 1 && A[child + 1] > A[child])
//			child++;
//		if (A[parent] < A[child])
//			A[parent] = A[child];
//		else
//			break;
//	}
//	A[parent] = tmp;
//}
//
//void heap_sort(ElemType A[], int N)
//{
//	int i;
//	//将A[]初始化为最大堆：
//	for (i = (N - 1) / 2; i >= 0; i--)
//		Percdown(A, i, N);    //参数：堆数组，根结点，堆中元素个数
//
//	//堆排序：
//	for (i = N - 1; i > 0; i--)
//	{
//		Swap(A, 0, i);     //A[0]总是堆中最大的元素
//		Percdown(A, 0, i);    //交换到最后的元素被堆排除
//	}
//}

//时间复杂度：小于O(NlogN)



//6.**********归并排序：主要用于外排序
//将两段（连续）分别有序的序列合并为一段有序的序列

void Merge(ElemType A[], ElemType tmpA[], int L, int R, int Rightend)   //O(N)
{
	int Leftend = R - 1;
	int len = Rightend - L + 1;
	int i = L;
	while (L <= Leftend && R <= Rightend)
	{
		if (A[L] <= A[R])
			tmpA[i++] = A[L++];
		
		else
			tmpA[i++] = A[R++];
		
	}
	while (L <= Leftend)
		tmpA[i++] = A[L++];
	while (R <= Rightend)
		tmpA[i++] = A[R++];
	for (int j = 0; j < len; j++, Rightend--)
		A[Rightend] = tmpA[Rightend];
}

//递归算法：分而治之
void MSort(ElemType A[], ElemType tmpA[], int L, int Rightend)
{
	if (L < Rightend)
	{
		int center = (L + Rightend) / 2;
		MSort(A, tmpA, L, center);
		MSort(A, tmpA, center + 1, Rightend);
		Merge(A, tmpA, L, center + 1, Rightend);
	}
}

//时间复杂度：O(NlogN)   <-- T(N)=T(N/2)+T(N/2)+O(N)

//排序函数统一接口：
void Merge_Sort(ElemType A[], int N)
{
	//为什么函数要一直带着ElemType tmpA[]这个参数，明明可以在Merge()函数中再创建：
	//在Merge_Sort()中创建只占用了一块空间
	//在Merge()（多次调用）中要重复创建，浪费空间
	ElemType* tmpA = (ElemType*)malloc(N * sizeof(ElemType));
	if (tmpA != NULL)
	{
		MSort(A, tmpA, 0, N - 1);
		free(tmpA);
	}
	else
		return;
}

//非递归算法：