#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//1.散列表（哈希表）：

//已知的几种查找方法：
//1.顺序查找                 O（N）
//2.二分查找（静态查找）     O（logN）
//3.二叉搜索树（动态查找）   O（H）
//  平衡二叉树               O（logN）

//4.散列查找                 O（1）


//“散列(Hashing)”的基本思想是:
//(1)以关键字key为自变量，通过一个确定的函数h(散列函数)计算出对应的函数值h(key)
// 作为数据对象的存储地址
//(2)可能不同的关键字会映射到同一个散列地址上，即h(key;)= h(key)(当key; ≠key)
// 称为“冲突(Collision)”----需要某种冲突解决策略




//2.散列函数的构造方法：

//散列函数一般应考虑下列两个因素：
//*1.计算简单，以便提高转换速度
//*2.关键词对应的地址空间分布均匀，以尽量减少冲突


//1>数字关键词的散列函数构造：
//*1.直接定址法：
//取关键词的某个线性函数值为散列地址，即h(key)=a*key+b
//eg.关键词为出生年份在1990到2020，散列函数为h(key)=key-1990

//*2.除留余数法：
//散列函数为h(key)=key mod p
//p=tablesize, p一般取素数
//eg.h(key)=key % 17

//*3.数字分析法：
//分析数字关键字在各位上的变化情况，取比较随机的位作为散列地址
//eg.取11位手机号码key的后四位作为地址：
//h(key)=atoi(key+7),char* key指向数字的第一位,+7后指向倒数第四位，atoi是转化为数字

//*4.折叠法：
//将关键词分割成位数相同的几个部分，然后叠加
//eg.56793542 --> 542+793+056=1391

//*5.平方取中法：
//eg.56793542*56793542=3225506412905764 -->641


//2>字符串关键词的散列函数构造：
//*1.ASCII码加和法：
//h(key)=(求和key[i]) mod tablesize

//*2.移位法：
//eg.h("abcde")='a'*32~4 + 'b'*32~3 + 'c'*32~2 + 'd'*32 + 'e'
//-> (((a * 32 + b)* 32 + c)* 32 + d)* 32 + e

//int Hash(const char* Key, int TableSize)
//{
//	int h = 0;
//	while (*Key!='\0')
//	{
//		h = (h << 5) + *Key++;
//	}
//	return h % TableSize;
//}




//3.冲突处理方法：

//*1.换个位置:开放地址法
//*2.同一位置的冲突对象组织在一起 : 链地址法

//1>开放地址法：
//若发生了第i次冲突，试探的下一个地址将增加d(i);
//基本公式是: h(i)(key) = (h(key) + d(i)) mod TableSize (1<=i< TableSize)
//d决定了不同的解决冲突方案 : 线性探测(d(i)= i)、平方探测(d(i)= +-i~2)、双散列
//线性探测；d(i) = i         --》缺点：容易出现聚集现象
//平方探测：d(i)= +/- i~2    --》缺点：可能出现一直找不到空位的情况（因为是跳着放）
// --》有定理显示:如果散列表长度TableSize是某个【4k+3】(k是正整数)形式的素数时
//                平方探测法就可以探查到整个散列表空间


//创建开放地址法的散列表：
#include<math.h>
#define MAXTABLESIZE 10000
//散列单元状态类型：
//合法元素，空单元，已删除元素
typedef enum { Legitimate, Empty, Deleted } EntryType;
typedef struct HashEntry
{
	int data;
	EntryType info;
}Cell;
typedef struct TblEntry
{
	int TableSize;
	Cell* Cells;
}*HashTable;

//求大于N的最小素数
int NextPrime(int N)
{
	//大于N的最小奇数
	int i, p = (N % 2) ? N + 2 : N + 1;
	while (p < MAXTABLESIZE)
	{
		for (i = (int)sqrt(p); i > 2; i--)
		{
			if (p % i == 0)
				break;
		}
		if (i == 2)
			break;
		else
			p += 2;
	}
	return p;
}

HashTable CreatTable(int TableSize)
{
	HashTable H;
	H = (HashTable)malloc(sizeof(struct TblEntry));
	H->TableSize = NextPrime(TableSize);
	H->Cells = (Cell*)malloc(H->TableSize * sizeof(Cell));
	for (int i = 0; i < H->TableSize; i++)
		H->Cells[i].info = Empty;
	return H;
}

//平方探测法的查找和插入：




//2>链地址法

