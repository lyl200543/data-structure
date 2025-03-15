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



//6.**********归并排序：浪费空间，且频繁复制  -->主要用于外排序
//将两段（连续）分别有序的序列合并为一段有序的序列

//void Merge(ElemType A[], ElemType tmpA[], int L, int R, int Rightend)   //O(N)
//{
//	int Leftend = R - 1;
//	int len = Rightend - L + 1;
//	int i = L;
//	while (L <= Leftend && R <= Rightend)
//	{
//		if (A[L] <= A[R])
//			tmpA[i++] = A[L++];
//		
//		else
//			tmpA[i++] = A[R++];
//		
//	}
//	while (L <= Leftend)
//		tmpA[i++] = A[L++];
//	while (R <= Rightend)
//		tmpA[i++] = A[R++];
//	for (int j = 0; j < len; j++, Rightend--)
//		A[Rightend] = tmpA[Rightend];
//}
//
////递归算法：分而治之
//void MSort(ElemType A[], ElemType tmpA[], int L, int Rightend)
//{
//	if (L < Rightend)
//	{
//		int center = (L + Rightend) / 2;
//		MSort(A, tmpA, L, center);
//		MSort(A, tmpA, center + 1, Rightend);
//		Merge(A, tmpA, L, center + 1, Rightend);
//	}
//}
//
////时间复杂度：O(NlogN)   <-- T(N)=T(N/2)+T(N/2)+O(N)
//
////排序函数统一接口：
//void Merge_Sort(ElemType A[], int N)
//{
//	//为什么函数要一直带着ElemType tmpA[]这个参数，明明可以在Merge()函数中再创建：
//	//在Merge_Sort()中创建只占用了一块空间
//	//在Merge()（多次调用）中要重复创建，浪费空间
//	ElemType* tmpA = (ElemType*)malloc(N * sizeof(ElemType));
//	if (tmpA != NULL)
//	{
//		MSort(A, tmpA, 0, N - 1);
//		free(tmpA);
//	}
//	else
//		return;
//}


//********非递归算法：

//将排序好的子列直接放进tmpA中，不再拷贝回A中
//void Merge1(ElemType A[], ElemType tmpA[], int L, int R, int Rightend)
//{
//	int Leftend = R - 1;
//	int len = Rightend - L + 1;
//	int i = 0;
//	while (L <= Leftend && R <= Rightend)
//	{
//		if (A[L] <= A[R])
//			tmpA[i++] = A[L++];
//		else
//			tmpA[i++] = A[R++];
//	}
//	while (L <= Leftend)
//		tmpA[i++] = A[L++];
//	while (R <= Rightend)
//		tmpA[i++] = A[R++];
//}
//
//void Merge_pass(ElemType A[], ElemType tmpA[], int N, int length)
//{
//	int i, j;
//	//因为N可能是奇数，也可能是偶数
//	//所以i <= N - 2*length 
//	//如果是偶数 -->第一个for循环完成后直接结束
//	//如果是奇数 -->留出最后一段序列，通过if/else判断几个子列后合并
//	for (i = 0; i <= N - 2 * length; i += 2 * length)  
//	{
//		Merge1(A, tmpA, i, i + length, i + 2 * length - 1);
//	}
//
//	if (i + length < N)  //还有两个子列
//		Merge1(A, tmpA, i, i + length, N - 1);
//	else   //只有一个子列
//	{
//		for (j = i; j < N; j++)
//			tmpA[j] = A[j];
//	}
//
//}
//
//void Merge_sort(ElemType A[], int N)
//{
//	int length;  //有序子列的长度
//	ElemType* tmpA;
//
//	length = 1;
//	tmpA = (ElemType*)malloc(N * sizeof(ElemType));
//
//	while (length < N)
//	{
//		//序列在A.tmpA之间临时存放，最终放在A中
//		Merge_pass(A, tmpA, N, length);
//		length *= 2;
//		Merge_pass(tmpA, A, N, length);
//		length *= 2;
//	}
//}



//7.************快速排序：分而治之-->递归
//1>先在待排序的数组中选出1个主元（通过找头，中，尾三个数据的中位数）
//  *（最好情况：每次选的主元都中分整个集合（O(NlogN)），最坏情况：每次选的主元都在集合的一端(O(N~2))）
//2>再划分子集（保证主元左边子集的数据都小于主元，右边相反）
//3>最后对子集递归调用函数

//ElemType Median3(ElemType A[], int Left, int Right)
//{
//	int Center = (Left + Right) / 2;
//	//调整顺序为：A[Left]<A[Center]<A[Right]
//	if (A[Left] > A[Center])
//		Swap(&A[Left], &A[Center]);
//	if (A[Left] > A[Right])
//		Swap(&A[Left], &A[Right]);
//	if (A[Center] > A[Right])
//		Swap(&A[Center], &A[Right]);
//
//	//调整主元的位置，方便后序指针的操作
//	Swap(&A[Center], &A[Right - 1]);
//	return A[Right - 1];
//
//}
//
//
////快速排序适合处理大规模数据，当数据规模较小时，使用简单排序效率更快
////因此设置一个cutoff，当数据规模大于cutoff时才使用快速排序
//int cutoff;
//void QuickSort(ElemType A[], int Left, int Right)
//{
//	if (cutoff <= Right - Left)
//	{
//		//当数据规模小于cutoff时，会进行插入排序
//		//递归其实有了结束的条件，不需要再设置条件
//		/*if (Left > Right)
//			return;*/
//		ElemType privot = Median3(A, Left, Right);
//		//指针操作：
//		int i = Left;
//		int j = Right - 1;
//		//相等的情况也停下来做交换
//		//极端情况考虑：但数据全都相等时：
//		//如果停下来做交换，虽然有很多不必要的交换，但是每次主元都能中分数据
//		//如果不停下来交换，主元总是会在数据的一端，时间复杂度大
//		while (1)
//		{
//			while (A[++i] < privot) { ; }
//			while (A[--j] > privot) { ; }
//			if (i < j)
//				Swap(&A[i], &A[j]);
//			else
//				break;
//		}
//		//此时i为privot的下标
//		Swap(&A[i], &A[Right - 1]);
//		QuickSort(A, Left, i - 1);
//		QuickSort(A, i + 1, Right);
//	}
//	else
//		Insertion_Sort(A, Right - Left + 1);
//}
//
//void quick_sort(ElemType A[], int N)
//{
//	QuickSort(A, 0, N - 1);
//}




//***********8.表排序：
//对于大规模的排序对象（如：结构体），之前的排序算法都要频繁交换，不适合大对象
//表排序引入表索引(table[])，不移动对象，通过改变table[]中的对象下标来排序
//表排序可以基于冒泡排序，插入排序等等


//基于插入排序：不改变A[]
//void table_sort(ElemType A[], int N)
//{
//	//初始化table[]
//	int* table = (int*)malloc(sizeof(int) * N);
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		table[i] = i;
//	}
//	//插入排序
//	for (i = 1; i < N; i++)
//	{
//		int tmp = table[i];
//		//纠正: A[i]<A[j] 应为--> A[table[i]] < A[table[j]]
//		//table[]里存放的才是A[]的真正顺序,如果使用A[]顺序是不对的
//		for (j = i - 1; j >= 0 && A[tmp] < A[table[j]]; j--)
//			table[j + 1] = table[j];
//		//纠正:table[j] --> table[j+1]
//		table[j + 1] = tmp;
//	}
//	//打印
//	for (i = 0; i < N; i++)
//		printf("%d ", A[table[i]]);
//	free(table);
//}


//改变A[]--》物理排序（基于环）
//数组的排列由若干个独立的环（Cycle）组成
//如果 table[i] == i，说明当前位置已排序，无需调整

//void SwapA(ElemType A[], int table[], int N)
//{
//	int i, j;
//	ElemType tmp;
//	for (i = 0; i < N; i++)
//	{
//		if (i != table[i])
//		{
//			tmp = A[i];
//			for (j = i; j != table[j] && i != table[j]; j = table[j])
//			{
//				A[j] = A[table[j]];
//			}
//			A[j] = tmp;
//		}
//	}
//	//打印
//	for (i = 0; i < N; i++)
//		printf("%d ", A[i]);
//}



//——————————————————非比较排序————————————————————


//*9.***********桶排序：
//将元素分配到有限数量的桶中，每个桶内的元素再单独排序（通常使用其他排序算法，如插入排序）
//最后将所有桶中的元素按顺序合并 

//假设有 N个学生，他们的成绩是0到100之间的整数（M=101），将学生按成绩进行排序

//#define NUM 101
//typedef struct Node
//{
//	int grade;
//	struct Node* next;
//}Node;
//
//void Insert(Node** head, int grade)
//{
//	Node* newnode = (Node*)malloc(sizeof(Node));
//	newnode->grade = grade;
//	newnode->next = *head;
//	*head = newnode;
//}
//
//void Bucket_sort(ElemType A[], int N)
//{
//	Node* bucket[NUM] = { NULL };
//	int i;
//	for (i = 0; i < N; i++)
//	{
//		Insert(&bucket[A[i]], A[i]);
//	}
//	int index = 0;
//	for (i = 0; i < NUM; i++)
//	{
//		Node* current = bucket[i];
//		while (current != NULL)
//		{
//			A[index++] = current->grade;
//			Node* tmp = current;
//			current = current->next;
//			free(tmp);
//		}
//	}
//}

//时间复杂度为O(N+M)
//如果M>>N -->使用基数排序


//*10.***********基数排序：
//按照元素的位数（个位、十位、百位等）依次排序
//每次排序使用稳定的排序算法（如计数排序）处理一个位数

//1>次位排序：从低位到高位

//#define MaxDigit 4   //关键字的个数
//#define Radix 10    //基数
//eg.0-2000的整数 ： MaxDigit=4, Radix=10(十进制)
//字符串：MaxDigit=字符的个数，Radix=256(ASCII码的个数)

//typedef struct Node
//{
//	int key;
//	struct Node* next;
//}Node;
//
//typedef struct HeadNode
//{
//	Node* head, *tail;
//}Bucket[Radix];
//
//int GetDigit(int X, int D)  //求X的第D位上的数
//{
//	int i, d;
//	for (i = 1; i <= D; i++)
//	{
//		d = X % Radix;
//		X /= Radix;
//	}
//	return d;
//}
//
//void Radix_sort(ElemType A[], int N)
//{
//	int i, d, j;
//	Node* List = NULL, *tmp = NULL;
//	Bucket B;
//	for (i = 0; i < Radix; i++)
//	{
//		B[i].head = B[i].tail = NULL;
//	}
//	for (i = N - 1; i >= 0; i--)
//	{
//		Node* newnode = (Node*)malloc(sizeof(Node));
//		newnode->key = A[i];
//		newnode->next = List;
//		List = newnode;
//	}
//  //分配
//	for (i = 1; i <= MaxDigit; i++)
//	{
//		tmp = List;
//		while (tmp)
//		{
//			d = GetDigit(tmp->key, i);
//			//AI：要先断开tmp与List
//			Node* next = tmp->next;
//			tmp->next = NULL;
//			//AI：赋值写成了=
//			if (B[d].tail == NULL)
//				B[d].head = B[d].tail = tmp;
//			else
//			{
//				B[d].tail->next = tmp;
//				B[d].tail = tmp;
//			}
//			tmp = next;
//		}
//		List = NULL;
//      //收集
//		//AI：i重复使用，应改为j
//		for (j = Radix - 1; j >= 0; j--)
//		{
//			//AI：要先判断桶内是否有数据
//			if (B[j].head)
//			{
//				B[j].tail->next = List;
//				List = B[j].head;
//				B[j].head = B[j].tail = NULL;
//			}
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		A[i] = List->key;
//		tmp = List;
//		List = List->next;
//		free(tmp);
//	}
//}


//2>主位排序：从高位到低位
//将数据根据当前位的值分配到不同的桶中，然后对每个桶递归处理下一位

//#define MaxDigit 4
//#define Radix 10
//
//typedef struct Node
//{
//	int key;
//	struct Node* next;
//}Node;
//
//typedef struct HeadNode
//{
//	Node* head, * tail;
//}Bucket[Radix];
//
//int GetDigit(int X, int D)
//{
//	int i, d;
//	for (i = 1; i <= D; i++)
//	{
//		d = X % Radix;
//		X /= Radix;
//	}
//	return d;
//}
//
//void Bsort(ElemType A[], int L, int R, int D)
//{
//	if (D == 0)
//		return;
//	int i, j, d, z;
//	Node* tmp = NULL, * List = NULL;
//	Bucket B;
//	for (i = 0; i < Radix; i++)
//	{
//		B[i].head = B[i].tail = NULL;
//	}
//	for (i = L; i <= R; i++)
//	{
//		Node* newnode = (Node*)malloc(sizeof(Node));
//		newnode->key = A[i];
//		newnode->next = List;
//		List = newnode;
//	}
//	//分配
//	tmp = List;
//	while (tmp)
//	{
//		d = GetDigit(tmp->key, D);
//		Node* next = tmp->next;
//		tmp->next = NULL;
//		if (B[d].head == NULL)
//			B[d].head = B[d].tail = tmp;
//		else
//		{
//			B[d].tail->next = tmp;
//			B[d].tail = tmp;
//		}
//		tmp = next;
//	}
//	List = NULL;
//	//收集
//	i = j = L;
//	for (z = 0; z < Radix; z++)
//	{
//		if (B[z].head)
//		{
//			tmp = B[z].head;
//			while (tmp)
//			{
//				Node* next = tmp->next;
//				A[j++] = tmp->key;
//				free(tmp);
//				tmp = next;
//			}
//			Bsort(A, i, j - 1, D - 1);
//			i = j;
//		}
//	}
//}
//
//void Bucket_sort(ElemType A[], int N)
//{
//	Bsort(A, 0, N - 1, MaxDigit);
//}

//时间复杂度：O(D⋅(N+R))  D：最大位数  N：元素个数  R；基数个数



//*11.************计数排序：