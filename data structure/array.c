#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//数组：线性表的推广，n维数组中有n个前驱和后继

//数组中存储数据时，存在非零元素较少的特殊情况：
// 1>有规律的矩阵：下三角矩阵，对角矩阵等
//2>稀疏矩阵：用三元组（顺序结构）或十字链表（链式结构）存储

//下三角矩阵：
//#define ElemType int //数组中元素类型
//
//void SetArray(ElemType** parr, int n)  //数组首地址，矩阵行列数
//{
//	int num = (n * (n + 1)) / 2;
//	*parr = (ElemType*)malloc(num * sizeof(ElemType));
//	int i;
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &(*parr)[i]);
//	}
//}
//
//ElemType SearchElem(ElemType* arr, int i, int j)
//{
//	//下三角矩阵中，i>=j
//	if (i < j)
//	{
//		return 0;
//	}
//	else
//	{
//		int num = (i * (i - 1)) / 2 + j - 1;
//		return arr[num];
//	}
//}
//
//int main()
//{
//	int* arr = NULL;
//	int n;
//	scanf("%d", &n);
//	SetArray(&arr, n);
//	int ret = SearchElem(arr, 2, 1);
//	printf("%d\n", ret);
//	free(arr);
//	arr = NULL;
//}

//对角矩阵：非零元素都集中在以主对角线为中心的带状区域中
//void SetArray(int sour[6][6], int arr[5][6], int n, int r)  //n:行列数 ，r:r行非零元素
//{
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        //主对角线
//        arr[2][i] = sour[i][i];
//        //上一条对角线
//        if (i > 0)
//        {
//            arr[1][i] = sour[i - 1][i];
//        }
//        //上两条对角线
//        if (i > 1)
//        {
//            arr[0][i] = sour[i - 2][i];
//        }
//        //下一条对角线
//        if (i < 5)
//        {
//            arr[3][i] = sour[i + 1][i];
//        }
//        //下两条对角线
//        if (i < 4)
//        {
//            arr[4][i] = sour[i + 2][i];
//        }
//    }
//}
//
//int GetElem1(int arr[5][6], int i, int j)
//{
//    if (i == j)
//    {
//        return arr[2][j - 1];
//    }
//    else if (i - j == 1) //下一条对角线
//    {
//        return arr[3][j - 1];
//    }
//    else if (i - j == 2)
//    {
//        return arr[4][j - 1];
//    }
//    else if (i - j == -1)
//    {
//        return arr[1][j - 1];
//    }
//    else if (i - j == -2)
//    {
//        return arr[0][j - 1];
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int matrix[6][6] =
//    {
//        {8, 2, 3, 0, 0, 0},
//        {4, 2, 0, 6, 0, 0},
//        {5, 7, 7, 9, 4, 0},
//        {0, 9, 6, 9, 1, 5},
//        {0, 0, 6, 1, 4, 2},
//        {0, 0, 0, 2, 8, 3} 
//    };
//    int arr[5][6] = { 0 };
//    SetArray(matrix, arr, 6, 5);
//    int ret = GetElem1(arr, 3, 3);
//    printf("%d\n", ret);
//}


//三元组：
//typedef struct
//{
//	int row; //元素的行数
//	int col;  //元素的列数
//	int elem;  //元素
//}Triple;
//
//Triple arr[10] = { 0 };

//注意：多加一个表示总行数，总列数，和总元素个数的三元组 


//十字链表：
//在 C 语言中，可以用一个结构体来表示十字链表的节点。
// 节点中存储的内容包括：
//
//1.行索引和列索引。
//2.节点的值。
//3.指向同一行下一个节点的指针（right）。
//4.指向同一列下一个节点的指针（down）。

//定义十字链表的节点
//typedef struct OLnode
//{
//	int row;     //节点的行号
//	int col;     //节点的列号
//	int elem;    //节点元素的值
//	struct OLnode* right;   //指向节点同一行的下一个元素
//	struct OLnode* down;    //指向节点同一列的下一个元素
//}OLnode;
//
//
////定义十字链表的头节点
//typedef struct
//{
//	int rows;  //总行数
//	int cols;  //总列数
//	OLnode** row_heads;  //存放所有【行】头指针的【数组】的首地址
//	OLnode** col_heads;  //存放所有【列】头指针的【数组】的首地址
//}CrossList;
//
////初始化
//void InitCrossList(CrossList* list, int rows, int cols)
//{
//	list->rows = rows;
//	list->cols = cols;
//	list->row_heads = (OLnode**)malloc(rows * sizeof(OLnode*));
//	list->col_heads = (OLnode**)malloc(cols * sizeof(OLnode*));
//	if (list->row_heads == NULL || list->col_heads == NULL)
//	{
//		perror("InitCrossList:");
//		exit(1);
//	}
//	int i;
//	for (i = 0; i < rows; i++)
//	{
//		list->row_heads[i] = NULL;
//	}
//	for (i = 0; i < cols; i++)
//	{
//		list->col_heads[i] = NULL;
//	}
//}