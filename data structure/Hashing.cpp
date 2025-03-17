#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//1.ɢ�б���ϣ����

//��֪�ļ��ֲ��ҷ�����
//1.˳�����                 O��N��
//2.���ֲ��ң���̬���ң�     O��logN��
//3.��������������̬���ң�   O��H��
//  ƽ�������               O��logN��

//4.ɢ�в���                 O��1��


//��ɢ��(Hashing)���Ļ���˼����:
//(1)�Թؼ���keyΪ�Ա�����ͨ��һ��ȷ���ĺ���h(ɢ�к���)�������Ӧ�ĺ���ֵh(key)
// ��Ϊ���ݶ���Ĵ洢��ַ
//(2)���ܲ�ͬ�Ĺؼ��ֻ�ӳ�䵽ͬһ��ɢ�е�ַ�ϣ���h(key;)= h(key)(��key; ��key)
// ��Ϊ����ͻ(Collision)��----��Ҫĳ�ֳ�ͻ�������




//2.ɢ�к����Ĺ��췽����

//ɢ�к���һ��Ӧ���������������أ�
//*1.����򵥣��Ա����ת���ٶ�
//*2.�ؼ��ʶ�Ӧ�ĵ�ַ�ռ�ֲ����ȣ��Ծ������ٳ�ͻ


//1>���ֹؼ��ʵ�ɢ�к������죺
//*1.ֱ�Ӷ�ַ����
//ȡ�ؼ��ʵ�ĳ�����Ժ���ֵΪɢ�е�ַ����h(key)=a*key+b
//eg.�ؼ���Ϊ���������1990��2020��ɢ�к���Ϊh(key)=key-1990

//*2.������������
//ɢ�к���Ϊh(key)=key mod p
//p=tablesize, pһ��ȡ����
//eg.h(key)=key % 17

//*3.���ַ�������
//�������ֹؼ����ڸ�λ�ϵı仯�����ȡ�Ƚ������λ��Ϊɢ�е�ַ
//eg.ȡ11λ�ֻ�����key�ĺ���λ��Ϊ��ַ��
//h(key)=atoi(key+7),char* keyָ�����ֵĵ�һλ,+7��ָ��������λ��atoi��ת��Ϊ����

//*4.�۵�����
//���ؼ��ʷָ��λ����ͬ�ļ������֣�Ȼ�����
//eg.56793542 --> 542+793+056=1391

//*5.ƽ��ȡ�з���
//eg.56793542*56793542=3225506412905764 -->641


//2>�ַ����ؼ��ʵ�ɢ�к������죺
//*1.ASCII��Ӻͷ���
//h(key)=(���key[i]) mod tablesize

//*2.��λ����
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




//3.��ͻ��������

//*1.����λ��:���ŵ�ַ��
//*2.ͬһλ�õĳ�ͻ������֯��һ�� : ����ַ��

//1>���ŵ�ַ����
//�������˵�i�γ�ͻ����̽����һ����ַ������d(i);
//������ʽ��: h(i)(key) = (h(key) + d(i)) mod TableSize (1<=i< TableSize)
//d�����˲�ͬ�Ľ����ͻ���� : ����̽��(d(i)= i)��ƽ��̽��(d(i)= +-i~2)��˫ɢ��
//����̽�⣻d(i) = i         --��ȱ�㣺���׳��־ۼ�����
//ƽ��̽�⣺d(i)= +/- i~2    --��ȱ�㣺���ܳ���һֱ�Ҳ�����λ���������Ϊ�����ŷţ�
// --���ж�����ʾ:���ɢ�б���TableSize��ĳ����4k+3��(k��������)��ʽ������ʱ
//                ƽ��̽�ⷨ�Ϳ���̽�鵽����ɢ�б�ռ�


//���ŵ�ַ��:������Ϊ��

#include<math.h>
#define MAXTABLESIZE 10000
//#define ElemType int
////ɢ�е�Ԫ״̬���ͣ�
////�Ϸ�Ԫ�أ��յ�Ԫ����ɾ��Ԫ��
//typedef enum { Legitimate, Empty, Deleted } EntryType;
//typedef struct HashEntry
//{
//	int data;
//	EntryType info;
//}Cell;
//typedef struct TblEntry
//{
//	int TableSize;
//	Cell* Cells;
//}*HashTable;
//
////�����N����С����
int NextPrime(int N)
{
	//����N����С����
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
//
//HashTable CreatTable(int TableSize)
//{
//	HashTable H;
//	H = (HashTable)malloc(sizeof(struct TblEntry));
//	H->TableSize = NextPrime(TableSize);
//	H->Cells = (Cell*)malloc(H->TableSize * sizeof(Cell));
//	for (int i = 0; i < H->TableSize; i++)
//		H->Cells[i].info = Empty;
//	return H;
//}
//
////ƽ��̽�ⷨ�Ĳ��ҺͲ��룺
//
//int Hash(ElemType key, int TableSize);
//
//int Find(HashTable H, ElemType key)
//{
//	int curPos, newPos;
//	int Cnum = 0;   //��ͻ����
//	curPos = newPos = Hash(key, H->TableSize);
//	while (H->Cells[curPos].info != Empty && H->Cells[curPos].data != key)  //������ַ���Ҫʹ��strcmp
//	{ 
//		if (++Cnum % 2)   //�����γ�ͻ
//		{
//			newPos = curPos + ((Cnum + 1) / 2) * ((Cnum + 1) / 2);
//			if (newPos >= H->TableSize)
//			{
//				newPos = newPos % H->TableSize;
//			}
//		}
//		else    //ż���γ�ͻ
//		{
//			newPos = curPos - (Cnum / 2) * (Cnum / 2);
//			while (newPos < 0)
//			{
//				newPos += H->TableSize;
//			}
//		}
//	}
//	return newPos;
//}
//
//bool Insert(HashTable H, ElemType key)
//{
//	int pos = Find(H, key);
//	if (H->Cells[pos].info != Legitimate)
//	{
//		H->Cells[pos].data = key;
//		H->Cells[pos].info = Legitimate;
//        return true;
//	}
//	else
//	{
//		printf("�ü�ֵ�Ѵ���\n");
//		return false;
//	}
//}

//ɾ����ֱ�ӽ��ؼ��ʵ�״̬��ΪDeleted, ֱ��ɾ���ᵼ�º�����ҵ�����


//2>����ַ��:���ַ���Ϊ��

//#include<string.h>
//#define KEYLENGTH 15
//typedef char ElemType[KEYLENGTH + 1];
//typedef struct LNode
//{
//	ElemType data;
//	struct LNode* next;
//}*PtrLNode;
//typedef struct HashTable
//{
//	int TableSize;
//	PtrLNode heads;
//}*HashTable;
//
//HashTable CreatTable(int TableSize)
//{
//	HashTable H = (HashTable)malloc(sizeof(struct HashTable));
//	H->TableSize = NextPrime(TableSize);
//	H->heads = (PtrLNode)malloc(sizeof(struct LNode) * H->TableSize);
//	for (int i = 0; i < H->TableSize; i++)
//	{
//		H->heads[i].data[0] = '\0';   //ͷ��㲻�������
//		H->heads[i].next = NULL;
//	}
//
//}
//
//int Hash(ElemType key, int TableSize);
//
//PtrLNode Find(HashTable H, ElemType key)
//{
//	int pos = Hash(key, H->TableSize);
//	PtrLNode p = H->heads[pos].next;
//	while (p && strcmp(p->data, key))  //�ַ����������򷵻�0
//	{
//		p = p->next;
//	}
//	return p;
//}
//
//bool Insert(HashTable H, ElemType key)
//{
//	PtrLNode p = Find(H, key);
//	if (NULL == p)
//	{
//		PtrLNode newnode = (PtrLNode)malloc(sizeof(struct LNode));
//		strcpy(newnode->data, key);
//		int pos = Hash(key, H->TableSize);
//		newnode->next = H->heads[pos].next;
//		H->heads[pos].next = newnode;
//		return true;
//	}
//	else
//	{
//		printf("�ü�ֵ�Ѿ�����\n");
//		return false;
//	}
//}
//
//void Destroy(HashTable H)
//{
//	int i;
//	for (i = 0; i < H->TableSize; i++)
//	{
//		PtrLNode p = H->heads[i].next;
//		while (p)
//		{
//			PtrLNode tmp = p;
//			p = p->next;
//			free(tmp);
//			tmp = NULL;
//		}
//
//	}
//	free(H->heads);
//	H->heads = NULL;
//}

//�ܽ᣺ɢ�б��Ч�������ݹ�ģ�޹�
//�ʺ��ڴ�����ģ���ݺ��ѱȽϵĹؼ��ʣ��ַ�����

