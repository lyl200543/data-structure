#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//�������������Ƶ����Ա�Ԫ��ֻ�����ַ�
//ͨ����ʹ��˳��

//����˳��洢�ṹ��
//#define MAXLEN 255
//typedef struct
//{
//	//�ճ�ch[0],������� -->���±�Ϊ1��ʼ
//	char ch[MAXLEN + 1];
//	int length;
//}SString;

//������ʽ�洢�ṹ
//������ֻ���һ���ַ����洢�ܶ�̫С���ռ��˷Ѵ�
//-->�洢�ַ��飨�ַ����飩
//#define CHUNKSIZE 80  
//typedef struct Chunk
//{
//	char ch[CHUNKSIZE];
//	struct Chunk* next;
//}Chunk;
//
//typedef struct
//{
//	Chunk* head, * tail;
//	int cutlen;
//}LString;


//����ģʽƥ�䣺(ƥ���������Ӵ�)  ����ģʽ�����Ӵ�
//1>BF�㷨��(�������)
//int Index(SString s, SString t)  //s������,t���Ӵ�
//{
//	int i = 1, j = 1;
//	while (i <= s.length && j <= t.length)
//	{
//		if (s.ch[i] == t.ch[j])
//		{
//			i++;
//			j++;
//		}
//		else
//		{
//			i = i - j + 2;
//			j = 1;
//		}
//	}
//	if (j > t.length)
//	{
//		return i - t.length;
//	}
//	else
//	{
//		return 0;
//	}
//}


//2>�ѵ㣺****KMP�㷨:****
//#define MAXSIZE 100
//#include<string.h>
//
//void NextArray(char* pattern, int n, int* next)
//{
//	next[0] = 0;
//	int i = 1;
//	int j = 0;
//	while (i < n)
//	{
//		if (pattern[i] == pattern[j])
//		{
//			next[i] = j + 1;
//			i++;
//			j++;
//		}
//		else
//		{
//			if (j == 0)
//			{
//				next[i] = 0;
//				i++;
//			}
//			else  //�ص�
//			{
//                j = next[j - 1];
//			}
//		}
//	}
//	
//}
//
//void KMPSearch(char* text, char* pattern)
//{
//    int m = (int)strlen(text);
//    int n = (int)strlen(pattern);
//    //��������
//    int next[MAXSIZE] = { 0 };
//    NextArray(pattern, n, next);
//    int i = 0, j = 0;
//    //ֻƥ��һ��ģʽ
//    while (i<m && j<n)
//    {
//        if (text[i] == pattern[j])
//        {
//            i++;
//            j++;
//        }
//        else
//        {
//            if (j == 0)
//            {
//                i++;
//            }
//            else
//            {
//                j = next[j - 1];
//            }
//        }
//    }
//    if (j >=n)
//    {
//        printf("ģʽƥ�䣬���Ϊ%d\n", i - n + 1);
//    }
//    else
//    {
//        printf("ģʽ��ƥ��\n");
//    }
    //ƥ����ģʽ
    //while (i < m)
    //{
    //    if (text[i] == pattern[j])
    //    {
    //        i++;
    //        j++;
    //    }
    //    if (j == n)
    //    {
    //        printf("ģʽƥ�䣬���Ϊ%d\n", i - n + 1);
    //        j = next[j - 1];  //�ص�
    //    }
    //    if (i < m && text[i] != pattern[j])
    //    {
    //        if (j == 0)
    //        {
    //            i++;
    //        }
    //        else
    //        {
    //            j = next[j - 1];
    //        }
    //    }
    //}
//}

//int main()
//{
//	char text[] = "abcdeabegabcd";
//	char pattern[] = "abcd";
//	KMPSearch(text, pattern);
//	return 0;
//}



