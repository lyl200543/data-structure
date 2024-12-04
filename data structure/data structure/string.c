#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//串：内容受限制的线性表，元素只能是字符
//通常是使用顺序串

//串的顺序存储结构：
//#define MAXLEN 255
//typedef struct
//{
//	//空出ch[0],方便计算 -->从下标为1开始
//	char ch[MAXLEN + 1];
//	int length;
//}SString;

//串的链式存储结构
//数据域只存放一个字符，存储密度太小，空间浪费大
//-->存储字符块（字符数组）
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


//串的模式匹配：(匹配主串和子串)  其中模式就是子串
//1>BF算法：(暴力求解)
//int Index(SString s, SString t)  //s是主串,t是子串
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


//2>难点：****KMP算法:****
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
//			else  //重点
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
//    //创建数组
//    int next[MAXSIZE] = { 0 };
//    NextArray(pattern, n, next);
//    int i = 0, j = 0;
//    //只匹配一个模式
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
//        printf("模式匹配，序号为%d\n", i - n + 1);
//    }
//    else
//    {
//        printf("模式不匹配\n");
//    }
    //匹配多个模式
    //while (i < m)
    //{
    //    if (text[i] == pattern[j])
    //    {
    //        i++;
    //        j++;
    //    }
    //    if (j == n)
    //    {
    //        printf("模式匹配，序号为%d\n", i - n + 1);
    //        j = next[j - 1];  //重点
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



