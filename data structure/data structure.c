#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//1.������ʽ���ڶ��ְ취Ч�ʸ���-->�㷨��ͬ

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



// 2.������ʵ�֣�
// �������ݽṹ��ʽ���壺
//ADT Complex {
// ���ݶ���D = { r1, r2 | r1, r2 ����ʵ�� }
// ���ݹ�ϵ��S = { <r1, r2> | r1 ��ʵ����r2 ���鲿 }
// ����������
// assign(&C, V1, V2)
//        ��ʼ�������յĸ��� C �Ѵ���
//        ������������츴�� C��r1, r2 �ֱ� �����Բ��� v1, v2 ��ֵ��
// destroy(&C)
//        ��ʼ���������� C �Ѵ���
//        ������������� C �����١�
//}ADT Complex

//���� z = (8 + 6i)(4 + 3i) / ((8 + 6i) + (4 + 3i))
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
//		printf("��ĸΪ0���޷����г���\n")
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

//3.��������к�
//1>�ֶ���֮��ʱ�临�Ӷȣ�O(nlog n)
//˼·�����ҵ��������ߵ�������кͺ��Ұ�ߵ�������кͣ�Ȼ�����ҵ���Խ�м��������кͣ����ݹ����

//#include<limits.h>
//
//int MaxSubMidSum(int arr[], int left, int mid, int right)
//{
//	//����߲���
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
//	//���ұ߲���
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
//	//�ݹ����
//	if (left == right)
//	{
//		return arr[left];
//	}
//	//�ֶ���֮
//	int mid = (left + right) / 2;
//	int leftsum = MaxSubSum(arr, left, mid);
//	int rightsum = MaxSubSum(arr, mid + 1, right);
//	int midsum = MaxSubMidSum(arr, left, mid, right);
//	//�Ƚ�
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

//2>���ߴ���ʱ�临�Ӷȣ�O(n)
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
//      //*****�ص�
//		else if (ThisNum < 0)
//		{
//			ThisNum = 0;  //�൱������ǰ���ۼӵ����кͣ���Ϊ����ֻ�������кͱ�С
//		}
//	}
//    return MaxNum;
//}


//4.����ʽ�ĳ˷���
//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct Node
//{
//	int coef;  //ϵ��
//	int expon;  //ָ��
//	struct Node* next;
//}Node,*Link;
//
//Link Mult(Link L1, Link L2)
//{
//	if (!L1 || !L2)
//	{
//		return NULL;
//	}
//	Link t1 = L1, t2 = L2, L;
//	L = (Link)malloc(sizeof(Node));
//	L->next = NULL;
//	Link p, r = L;
//	while (t2)
//	{
//		p = (Link)malloc(sizeof(Node));
//		p->coef = (t1->coef) * (t2->coef);
//		p->expon = t1->expon + t2->expon;
//		p->next = NULL;
//		r->next = p;
//		r = p;
//		t2 = t2->next;
//	}
//	t1 = t1->next;
//	while (t1)
//	{
//		t2 = L2;
//		r = L;
//		while (t2)
//		{
//			int c = (t1->coef) * (t2->coef);
//			int e = t1->expon + t2->expon;
//			while (r->next && r->next->expon > e)
//			{
//				r = r->next;
//			}
//			if (r->next && r->next->expon == e)
//			{
//				if (r->next->coef + c)
//				{
//					r->next->coef += c;
//				}
//				else
//				{
//					p = r->next;
//					r->next = p->next;
//					free(p);
//				}
//			}
//			else
//			{
//				p = (Link)malloc(sizeof(Node));
//				p->coef = c;
//				p->expon = e;
//				p->next = r->next;
//				r->next = p;
//				r = p;
//			}
//			t2 = t2->next;
//		}
//		t1 = t1->next;
//	}
//	return L->next;
//}


//5.��̬���ң����������ַ�
//  ��̬���ң���


