#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//���飺���Ա���ƹ㣬nά��������n��ǰ���ͺ��

//�����д洢����ʱ�����ڷ���Ԫ�ؽ��ٵ����������
// 1>�й��ɵľ��������Ǿ��󣬶ԽǾ����
//2>ϡ���������Ԫ�飨˳��ṹ����ʮ��������ʽ�ṹ���洢

//�����Ǿ���
//#define ElemType int //������Ԫ������
//
//void SetArray(ElemType** parr, int n)  //�����׵�ַ������������
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
//	//�����Ǿ����У�i>=j
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

//�ԽǾ��󣺷���Ԫ�ض������������Խ���Ϊ���ĵĴ�״������
//void SetArray(int sour[6][6], int arr[5][6], int n, int r)  //n:������ ��r:r�з���Ԫ��
//{
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        //���Խ���
//        arr[2][i] = sour[i][i];
//        //��һ���Խ���
//        if (i > 0)
//        {
//            arr[1][i] = sour[i - 1][i];
//        }
//        //�������Խ���
//        if (i > 1)
//        {
//            arr[0][i] = sour[i - 2][i];
//        }
//        //��һ���Խ���
//        if (i < 5)
//        {
//            arr[3][i] = sour[i + 1][i];
//        }
//        //�������Խ���
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
//    else if (i - j == 1) //��һ���Խ���
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


//��Ԫ�飺
//typedef struct
//{
//	int row; //Ԫ�ص�����
//	int col;  //Ԫ�ص�����
//	int elem;  //Ԫ��
//}Triple;
//
//Triple arr[10] = { 0 };

//ע�⣺���һ����ʾ��������������������Ԫ�ظ�������Ԫ�� 


//ʮ������
//�� C �����У�������һ���ṹ������ʾʮ������Ľڵ㡣
// �ڵ��д洢�����ݰ�����
//
//1.����������������
//2.�ڵ��ֵ��
//3.ָ��ͬһ����һ���ڵ��ָ�루right����
//4.ָ��ͬһ����һ���ڵ��ָ�루down����

//����ʮ������Ľڵ�
//typedef struct OLnode
//{
//	int row;     //�ڵ���к�
//	int col;     //�ڵ���к�
//	int elem;    //�ڵ�Ԫ�ص�ֵ
//	struct OLnode* right;   //ָ��ڵ�ͬһ�е���һ��Ԫ��
//	struct OLnode* down;    //ָ��ڵ�ͬһ�е���һ��Ԫ��
//}OLnode;
//
//
////����ʮ�������ͷ�ڵ�
//typedef struct
//{
//	int rows;  //������
//	int cols;  //������
//	OLnode** row_heads;  //������С��С�ͷָ��ġ����顿���׵�ַ
//	OLnode** col_heads;  //������С��С�ͷָ��ġ����顿���׵�ַ
//}CrossList;
//
////��ʼ��
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