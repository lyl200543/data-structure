#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define ElemType int
#define MAX 100
//����ģ�壺
//void X_sort(ElemType A[],int N)

//�ȶ��ԣ�����������ȵ����ݣ�����ǰ�����λ�ò������ı�

//*********1.ð������
//�㷨�򵥣����Դ�������������ݣ������ȶ���
//��ʱ����Ч�ʵ�

//void bubble_sort(ElemType A[], int N)
//{
//	int i, j;
//	for (i = N - 1; i > 0; i--)   //һ������N-1��
//	{
//		int flag = 0;
//		for (j = 0; j < i; j++)   //���ϵ��±���
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

//ʱ�临�Ӷȣ�
//˳��O(N)
//����O(N~2)



//2.********��������
//�㷨�򵥣������ȶ��ԣ�...
//��ʱ����Ч�ʵ�

//void Insertion_Sort(ElemType A[], int N)  //���ƴ����˿���
//{
//	int i, j;
//	for (i = 1; i < N; i++)
//	{
//		ElemType tmp = A[i];
//		for (j = i; j > 0 && A[j - 1] > tmp; j--)  //�Ӻ���ǰ�Ƚ�
//			A[j] = A[j - 1];
//		A[j] = tmp;
//	}
//}


//ʱ�临�Ӷȣ�
//˳��O(N)
//����O(N~2)


//ʱ�临�Ӷ��½磺
//�����±�i<j, ���A[i]>A[j], ���(i, j)��һ�������(inversion)
//����2������Ԫ��������ȥ1�������
//�������� : T(N, I) = O(N + I)
//������л�������, �����������Ҹ�Ч

//����:����N����ͬԪ����ɵ�����ƽ������ N(N - 1) / 4�������
//���� : �κν��Խ���������Ԫ����������㷨, ��ƽ��ʱ�临�Ӷ�Ϊ��(N2)��
//����ζ�� : Ҫ����㷨Ч��, ���Ǳ���
//ÿ����ȥ��ֹ1������ԣ�ÿ�ν��������Զ��2��Ԫ��



//3.*********ϣ�����򣺻��ڲ�������
//������������ D��M��>D��M-1��>��>D1=1
//��ÿ��D��k�����С�D��k�� - ���������(k = M, M - 1, ��.. 1)
//D��k��-��������������, ��ִ�С�D��k-1��-����������, ��Ȼ�ǡ�D��K��-����������

//ԭʼ�������У�N/2  -->O(N~2)
//Hibbard��������:D(k) = 2~k - 1     -->����Ԫ�ػ���
//Sedgewick��������:{ 1, 5, 19, 41, 109, �� }


//ʹ��Sedgewick��������
//void shell_sort(ElemType A[], int N)
//{
//	/* ����ֻ�г�һС�������� */
//	int Sedgewick[] = { 929, 505, 209, 109, 41, 19, 5, 1, 0 };   //�Ӵ�С
//	int i, j, d, w, z;
//	//�ҳ���һ��������N������
//	for (i = 0; Sedgewick[i] >= N; i++) { ; }
//	//ϣ������
//	for (d = Sedgewick[i]; d > 0; d = Sedgewick[++i])
//	{
//		//1>
//		//for (j = 0; j < d; j++)
//		//{
//		//	//��������
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

//ʱ�临�Ӷȣ���Ҫ��ʹ�õ����������й�



//4.********ѡ������
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

//�㷨�ؼ���FindMin()������ѡ������ʹ�ñ���
//������ѡ����С��

//ʱ�临�Ӷȣ�O(N~2)



//5.********�����򣺻���ѡ������
// ��Ҫ��������鱾����Ϊ��

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
//	//��A[]��ʼ��Ϊ���ѣ�
//	for (i = (N - 1) / 2; i >= 0; i--)
//		Percdown(A, i, N);    //�����������飬����㣬����Ԫ�ظ���
//
//	//������
//	for (i = N - 1; i > 0; i--)
//	{
//		Swap(A, 0, i);     //A[0]���Ƕ�������Ԫ��
//		Percdown(A, 0, i);    //����������Ԫ�ر����ų�
//	}
//}

//ʱ�临�Ӷȣ�С��O(NlogN)



//6.**********�鲢������Ҫ����������
//�����Σ��������ֱ���������кϲ�Ϊһ�����������

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

//�ݹ��㷨���ֶ���֮
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

//ʱ�临�Ӷȣ�O(NlogN)   <-- T(N)=T(N/2)+T(N/2)+O(N)

//������ͳһ�ӿڣ�
void Merge_Sort(ElemType A[], int N)
{
	//Ϊʲô����Ҫһֱ����ElemType tmpA[]�������������������Merge()�������ٴ�����
	//��Merge_Sort()�д���ֻռ����һ��ռ�
	//��Merge()����ε��ã���Ҫ�ظ��������˷ѿռ�
	ElemType* tmpA = (ElemType*)malloc(N * sizeof(ElemType));
	if (tmpA != NULL)
	{
		MSort(A, tmpA, 0, N - 1);
		free(tmpA);
	}
	else
		return;
}

//�ǵݹ��㷨��