#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.求解多项式：第二种办法效率更高-->算法不同

//#include<math.h>
//#include<time.h>
//#define MAX 10
//double f1(int n, double a[], double x)
//{
//	int i;
//	double p = 0.0;
//	for (i = 0; i <= n; i++)
//	{
//		p += a[i] * pow(x, i);
//	}
//	return p;
//}
//double f2(int n, double a[], double x)
//{
//	int i;
//	double p = 0.0;
//	for (i = n; i >= 0; i--)
//	{
//		p = p * x + a[i];
//	}
//	return p;
//}
//
//void time_count(double(*pf)(int ,double[], double), double a[])
//{
//	int t = 1e7;
//	clock_t start = clock();
//	while (t--)
//	{
//		(*pf)(MAX-1, a, 1.1);
//		//pf(9, a, 1.1);
//	}
//	clock_t stop = clock();
//	double duration = (double)(stop - start) / CLK_TCK;
//	printf("%f\n", duration);
//}
//int main()
//{
//	double a[MAX];
//	int i;
//	for (i = 0; i < MAX; i++)
//	{
//		a[i] = i;
//	}
//	time_count(f1,a);
//	time_count(f2,a);
//	return 0;
//}



// 2.复数的实现：
// 抽象数据结构形式定义：
//ADT Complex {
// 数据对象：D = { r1, r2 | r1, r2 都是实数 }
// 数据关系：S = { <r1, r2> | r1 是实部，r2 是虚部 }
// 基本操作：
// assign(&C, V1, V2)
//        初始条件：空的复数 C 已存在
//        操作结果：构造复数 C，r1, r2 分别 被赋以参数 v1, v2 的值。
// destroy(&C)
//        初始条件：复数 C 已存在
//        操作结果：复数 C 被销毁。
//}ADT Complex

//计算 z = (8 + 6i)(4 + 3i) / ((8 + 6i) + (4 + 3i))
//typedef struct
//{
//	float realpart;
//	float imagpart;
//}complex;
//
//void assign(complex* A, float real, float imag)
//{
//	A->realpart = real;
//	A->imagpart = imag;
//}
//
//void add(complex* C, complex A, complex B)
//{
//	C->realpart = A.realpart + B.realpart;
//	C->imagpart = A.imagpart + B.imagpart;
//}
//
//void mul(complex* C, complex A, complex B)
//{
//	C->realpart = (A.realpart) * (B.realpart) - (A.imagpart) * (B.imagpart);
//	C->imagpart = (A.imagpart) * (B.realpart) + (A.realpart) * (B.imagpart);
//}
//
//void rev(complex* C, complex A)
//{
//	C->realpart = A.realpart;
//	C->imagpart = -A.imagpart;
//}
//
//void div(complex* C, complex A, complex B)
//{
//	if (B.realpart == 0 && B.realpart == 0)
//	{
//		printf("分母为0，无法进行除法\n")
//	}
//	complex m = { 0,0 };
//	complex n = { 0,0 };
//	complex k = { 0,0 };
//	rev(&k, B);
//	mul(&m, A, k);
//	mul(&n, B, k);
//	C->realpart = (m.realpart) / (n.realpart);
//	C->imagpart = (m.imagpart) / (n.realpart);
//}
//int main()
//{
//	complex A = { 8,6 };
//	complex B = { 4,3 };
//	complex m, n, k;
//	mul(&m, A, B);
//	add(&n, A, B);
//	div(&k, m, n);
//	printf("%f+%fi\n", k.realpart, k.imagpart);
//	/*complex A = { 8,6 };
//	complex B = { 4,-3 };
//	complex k;
//	div(&k, A, B);
//	printf("%f+(%fi)\n", k.realpart, k.imagpart);*/
//	return 0;d
// }
// 

//3.求最大子列和
//1>分而治之：时间复杂度：O(nlog n)
//思路：先找到数列左半边的最大子列和和右半边的最大子列和，然后再找到跨越中间的最大子列和，最后递归求解

//#include<limits.h>
//
//int MaxSubMidSum(int arr[], int left, int mid, int right)
//{
//	//求左边部分
//	int sum = 0;
//	int leftsum = INT_MIN;
//	int i;
//	for (i = mid; i >= left; i--)
//	{
//		sum += arr[i];
//		if (sum > leftsum)
//		{
//			leftsum = sum;
//		}
//	}
//	//求右边部分
//	sum = 0;
//	int rightsum = INT_MIN;
//	for (i = mid + 1; i <= right; i++)
//	{
//		sum += arr[i];
//		if (sum > rightsum)
//		{
//			rightsum = sum;
//		}
//	}
//
//	return leftsum + rightsum;
//}
//
//int MaxSubSum(int arr[], int left, int right)
//{
//	//递归出口
//	if (left == right)
//	{
//		return arr[left];
//	}
//	//分而治之
//	int mid = (left + right) / 2;
//	int leftsum = MaxSubSum(arr, left, mid);
//	int rightsum = MaxSubSum(arr, mid + 1, right);
//	int midsum = MaxSubMidSum(arr, left, mid, right);
//	//比较
//	if (leftsum >= rightsum && leftsum >= midsum)
//	{
//		return leftsum;
//	}
//	else if (rightsum >= leftsum && rightsum >= midsum)
//	{
//		return rightsum;
//	}
//	else
//	{
//		return midsum;
//	}
//}

//2>在线处理：时间复杂度：O(n)
//int MaxSub2(int a[], int n)
//{
//	int ThisNum = 0, MaxNum = 0;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		ThisNum += a[i];
//		if (ThisNum > MaxNum)
//		{
//			MaxNum = ThisNum;
//		}
//      //*****重点
//		else if (ThisNum < 0)
//		{
//			ThisNum = 0;  //相当于舍弃前面累加的子列和，因为负数只会让子列和变小
//		}
//	}
//    return MaxNum;
//}

