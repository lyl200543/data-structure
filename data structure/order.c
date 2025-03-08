#define  _CRT_SECURE_NO_WARNINGS
#define ElemType int
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



//4.********堆排序：
