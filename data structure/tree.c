#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//非线性结构：树和图
//树：逻辑结构 -> 一对多
//树由一个根结点和多个子树构成，其中子树又是有一个结点和多个子树构成的，树是递归的

//根结点：只有一个，无前驱
//叶子结点/终端结点：可有多个，无后继
//中间结点/内部结点/非终端结点：一个前驱，多个后继

//结点的前驱叫做结点的双亲，所有前驱叫做祖先
//结点的后继叫做结点的孩子，所有后继叫做子孙
//拥有同一个双亲的结点之间互为兄弟
//同一层的结点之间互为堂兄弟

//结点的度：结点的分支个数
//树的度：树内各结点的最大分支数
//树的深度（高度）：树中结点的最大层次

//有序/无序树：各结点的子树有顺序/无顺序

//森林：由多个树组成

//二叉树！=树
//各个结点的子树之间有顺序，分别为左子树和右子树（就算只有一个分支，也有左右之分）

//二叉树的性质：
//性质1:在二叉树的第i层上【至多】有【2~（i-1）】个结点(i≥1)。
//                第i层上【至少】有【1】个结点 
// 
//性质2:深度为k的二叉树【至多】有【2~（k）-1】个结点(k≥1)。
//      深度为k时【至少】有k个结点
// 
//性质3:对任何一棵二叉树 T,如果其叶子数(度为0的结点数)为 n0,度为2的结点数为 n2, 
//       则【n0 = n2 + 1】。
//
//总边数为B,总结点数为n
//从下往上看：每一个结点（除根结点外）与自己的双亲之间都有一条边 --> B = n - 1
//从上往下看：B = n2 * 2 + n1 * 1
//
//n = n2 * 2 + n1 * 1 + 1
//n = n2 + n1 + n0
// 
//满二叉树:一棵深度为 k且有【2~（k） - 1个结点的二叉树称为满二叉树
// 
// 完全二叉树:深度为k的具有n个结点的二叉树, 
// 当且仅当其每一个结点都与深度为k的满二叉树中编号为1~n的结点 -- 对应时,
// 称之为完全二叉树
//
// 性质4:具有n个结点的完全二叉树的深度为[log_2(n)]+1 ,[]表示取整
// 
// 性质5：用于表示各个结点与双亲和孩子之间的关系
//     对于一棵完全二叉树来说，任意一个结点（除根结点以外）的编号为【i】
//     则该结点的双亲的编号为【i/2】，
//     左孩子的编号为【2*i】,右孩子的编号为【2*i+1】




//二叉树的的【顺序】存储结构：
//按满二叉树的结点层次编号，依次存放二叉树中的数据元素
//当二叉树不为完全二叉树时，要空出位置来使编号与满二叉树一一对应 --》浪费空间
//性质:1>某个结点（i）的父节点的下标为i/2;
//     2>某个结点（i）的左孩子的下标为2*i，右孩子的下标为2*i+1

//#define MAXSIZE 100
//#define TElemType int
//TElemType SqBiTree[MAXSIZE];



//二叉树的【链式】存储结构：
//1.二叉链表：左，右孩子
//#define TElemType int
//typedef struct BiNode
//{
//	TElemType data;
//	struct BiNode* lchild, * rchild;
//}BiNode,*BiTree;

//2.三叉链表：左，右孩子，双亲
//typedef struct TriNode
//{
//	TElemType data;
//	struct TriNode* lchild, * rchild, * parent;
//}TriNode,*TriTree;

//**********遍历二叉树：
//二叉树有根结点，左子树，右子树构成，依次遍历这三个组成就是遍历了整个二叉树
//每个子树又由根结点和左右子树构成 --> 遍历是【递归】进行的
//L：左子树 ，R:右子树 ，D:根结点
//一共有6中遍历顺序：
// 先左后右：DLR(先序) , LDR(中序) , LRD(后序)  （先序表示先遍历根结点）
// 先右后左：DRL(先序) , RDL(中序) , RLD(后序)
// 
// 遍历方式：先序：表达式的前缀表示（波兰式）
//           中序：表达式的中缀表示
//           后序：表达式的后缀表示（逆波兰式）
//           层次：从根节点开始，逐层从左到右访问每一层的节点

//还原二叉树：
//1.根据先序序列和中序序列：
// 先序：ABCDEFGHIJ  (DLR)
// 中序：CDBFEAIHGJ  (LDR)
//
//分析：根据先序可知根结点为A，根据中序可知左子树为CDBFE，右子树为IHGJ
//      接着分别对左子树和右子树重复以上操作
// 
//2.根据后序序列和中序序列：
// 后序：DECBHGFA  （LRD）
// 中序：BDCEAFHG   (LDR)
// 
//分析：根据后序可知根结点为A，根据中序可知左子树为BDCE，右子树为FHG 
//      接着分别对左子树和右子树重复以上操作
// 
//3.注意：只根据先序序列和后序序列无法还原二叉树

//遍历算法:【先序】
//访问树中的元素有多种操作，如打印值，获取值等等
//此处以打印为例
//void visit(TElemType e)  
//{
//	printf("%d ", e);
//}
//
//void PreOrderTraverse(BiTree T)
//{
//	if (T == NULL)
//	{
//		return;
//	}
//	else
//	{
//		visit(T->data);  //访问根结点
//		PreOrderTraverse(T->lchild);  //遍历左子树
//		PreOrderTraverse(T->rchild);  //遍历右子树
//	}
//}
//
////【中序】
//void InOrderTraverse(BiTree T)
//{
//	if (T == NULL)
//	{
//		return;
//	}
//	else
//	{
//		InOrderTraverse(T->lchild);
//		visit(T->data);
//		InOrderTraverse(T->rchild);
//	}
//}


////【后序】
//void PostOrderTraverse(BiTree T)
//{
//	if (T == NULL)
//	{
//		return;
//	}
//	else
//	{
//		PostOrderTraverse(T->lchild);
//		PostOrderTraverse(T->rchild);
//		visit(T->data);
//	}
//}

//总结：如果去掉输出语句,从递归的角度看,三种算法是完全相同的, 
//      或说这三种算法的访问路径是相同的, 只是访问结点的时机不同。
//
//从出发点（根结点）到终点（根结点）的路径上, 每个结点经过3次。
//
//第1次经过时访问 = 先序遍历
//第2次经过时访问 = 中序遍历
//第3次经过时访问 = 后序遍历
//
//时间效率:O(n) //每个结点只访问一次
//空间效率:O(h) //栈占用（存函数调用的信息，如参数，返回地址等）的最大辅助空间, h为树的深度


////【非递归】算法：（使用堆栈） 深度优先遍历

//#define MAXSIZE 20
//#define ElemType BiTree
//typedef struct Stack
//{
//	ElemType ch[MAXSIZE];
//	int top;
//}Stack;
//
//void InitStack(Stack* S)
//{
//	S->top = -1;
//}
//
//int IsEmpty(Stack S)
//{
//	if (S.top == -1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void Push(Stack* S, ElemType e)
//{
//	if (S->top == MAXSIZE - 1)
//	{
//		printf("the stack is full.\n");
//		return;
//	}
//	S->ch[++S->top] = e;
//}
//
//ElemType Pop(Stack* S)
//{
//	if (S->top == -1)
//	{
//		printf("the stack is empty.\n");
//		return NULL;
//	}
//	return S->ch[S->top--];
//}
//
////中序：
//void InOrderTraverse(BiTree T)
//{
//	BiTree BT = T;
//	Stack S;
//	InitStack(&S);
//	while (BT || !IsEmpty(S))
//	{
//		while (BT)
//		{
//			Push(&S, BT);  //第一次碰到结点
//			//printf("%d\n", BT->data);  //访问在此处为先序
//			BT = BT->lchild;
//		}
//		if (!IsEmpty(S))
//		{
//			BT = Pop(&S);  //第二次碰到结点
//			printf("%d ", BT->data);  //访问在此处为中序
//			BT = BT->rchild;
//		}
//	}
//}
//
////前序：根左右
//void PreOrderTraverse(BiTree T)
//{
//	if (!T)
//	{
//		return;
//	}
//	Stack S;
//	InitStack(&S);
//	Push(&S, T);
//	while (!IsEmpty(S))
//	{
//		BiTree tmp = Pop(&S);
//		printf("%d ", tmp->data);
//
//		//存放时先右后左，弹出时才是先左后右
//		if (tmp->rchild)
//		{
//			Push(&S, tmp->rchild);
//		}
//		if (tmp->lchild)
//		{
//			Push(&S, tmp->lchild);
//		}
//	}
//}
//
////后序：左右根（两个栈）
//void PostOrderTraverse(BiTree T)
//{
//	if (!T)
//	{
//		return;
//	}
//	Stack S1, S2;
//	InitStack(&S1);
//	InitStack(&S2);
//	Push(&S1, T);
//	//栈1记录遍历的结点，将结点以根右左的顺序放入栈2，出栈时就是左右根的顺序
//	while (!IsEmpty(S1))
//	{
//		BiTree tmp = Pop(&S1);
//		Push(&S2, tmp);
//		if (tmp->lchild)
//		{
//			Push(&S1, tmp->lchild);
//		}
//		if (tmp->rchild)
//		{
//			Push(&S1, tmp->rchild);
//		}
//	}
//	while (!IsEmpty(S2))
//	{
//		BiTree node = Pop(&S2);
//		printf("%d ", node->data);
//	}
//}



////【层次】(广度优先遍历)：利用队列
// 
//typedef struct BiNode
//{
//	char data;
//	struct BiNode* lchild, * rchild;
//}BiNode, * BiTree;
//
//typedef struct Qnode
//{
//    BiNode* data;  //存指针不存结点（结点所占空间太大）
//    struct Qnode* next;
//}Qnode,*QueuePtr;
//
//typedef struct
//{
//    QueuePtr front;//头指针
//    QueuePtr rear;//尾指针
//}LinkQueue;
//
//void LevelOrder(BiTree T)
//{
//	LinkQueue Q;
//	InitQueue(&Q);
//	EnQueue(&Q, T);  //根结点入队
//	BiTree p;
//	while (!IsEmpty(Q))
//	{
//		DeQueue(&Q, p);  //头结点出队
//		visit(p);
//		if (p->lchild != NULL)  //左孩子入队
//		{
//			EnQueue(&Q, p->lchild);
//		}
//		if (p->rchild != NULL)  //右边孩子入队
//		{
//			EnQueue(&Q, p->rchild);
//		}
//	}
//}


//1.复制二叉树：
//void Copy(BiTree T, BiTree* NewT)
//{
//	if (T = NULL)
//	{
//		*NewT = NULL;
//		return;
//	}
//	else
//	{
//		*NewT = (BiNode*)malloc(sizeof(BiNode));
//		if (*NewT == NULL)
//		{
//			printf("开辟内存不成功\n");
//			exit(1);
//		}
//		(*NewT)->data = T->data;
//		Copy(T->lchild, (*NewT)->lchild);
//		Copy(T->rchild, (*NewT)->rchild);
//	}
//}

//2.计算树的深度：
//int Depth(BiTree T)
//{
//	if (T == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int m = Depth(T->lchild);
//		int n = Depth(T->rchild);
//		return m > n ? m + 1 : n + 1;
//	}
//}


////3.计算树的结点数：
//int NodeCount(BiTree T)
//{
//	if (T = NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return NodeCount(T->lchild) + NodeCount(T->lchild) + 1;
//	}
//}

//4.计算叶子结点数：
//int LeafNode(BiTree T)
//{
//	if (T = NULL)
//	{
//		return 0;
//	}
//	if (T->lchild == NULL && T->rchild == NULL)
//	{
//		return 1;
//	}
//	else
//	{
//		return LeafNode(T->lchild) + LeafNode(T->rchild);
//	}
//}


//应用：判断两棵树是否同构（通过左右孩子互换后相同的两棵树）
//typedef struct BiTree
//{
//	int val;
//	struct BiTree* left, * right;
//}BiTree;
//
//int Isomorphic(BiTree* T1, BiTree* T2)
//{
//	if (T1 == NULL && T2 == NULL)
//	{
//		return 1;
//	}
//	if (T1 == NULL || T2 == NULL)
//	{
//		return 0;
//	}
//	if (T1->val != T2->val)
//	{
//		return 0;
//	}
//	//使用递归
//	return (Isomorphic(T1->left, T2->left) && Isomorphic(T1->right, T2->right) || Isomorphic(T1->left, T2->right) && Isomorphic(T1->right, T2->left));
//}


//*********二叉搜索树：--》动态查找
//非空左子树的所有结点的值【小于】根结点的值，非空右子树的所有结点的值【大于】根结点的值
typedef struct BiTree
{
	int val;
	struct BiTree* left, * right;
}BiTree;

//查找
BiTree* Find(BiTree* T, int e)
{
	while (T)
	{
		if (e > T->val)
		{
			T = T->right;
		}
		else if (e < T->val)
		{
			T = T->left;
		}
		else
		{
			break;
		}
	}
	return T;
}

int FindMax(BiTree* T)
{
	while (T->right )
	{
		T = T->right;
	}
	return T->val;
}

int FindMin(BiTree* T)
{
	while (T->left)
	{
		T = T->left;
	}
	return T->val;
}

//插入
BiTree* Insert(BiTree* T, int e)
{
	if (!T)
	{
		T = (BiTree*)malloc(sizeof(BiTree));
		T->val = e;
		T->left = T->right = NULL;
	}
	else
	{
		if (e > T->val)
		{
			T->right = Insert(T->right, e);
		}
		else if(e < T->val)
		{
			T->left = Insert(T->left, e);
		}
		//else  e已经存在，什么都不做
	}
	return T;  //返回根结点
}

//删除
//1.要删除的结点是【叶结点】时：直接free,再返回NULL给父节点对应的指针域
//2.要删除的结点是结点【只有一个子树】时：将结点A的子节点B接到A的父节点C上
//3.要删除的结点是结点【有两个子树】时：--》转化为1，2情况
//   1》找到左子树中的最大值替换结点中的值，再将左子树中的最大值（最右边--》一定时1，2情况）删除
//   2》找到右子树中的最小值

BiTree* Delete(BiTree* T, int e)
{
	if (!T)
	{
		printf("没有该元素\n");
	}

	if (e > T->val)
	{
		T->right = Delete(T->right, e);
	}
	else if (e < T->left)
	{
		T->left = Delete(T->left, e);
	}
	else
	{
		if (T->left && T->right)
		{
			//找右子树的最小值
			int min = FindMin(T->right);
			T->val = min;
			T->right = Delete(T->right, min);
		}
		else
		{
			BiTree* tmp = T;
			if (!T->left)  //只有右子树或没有子树
			{
				T = T->right;
				free(tmp);
			}
			else  //只有左子树
			{
				T = T->left;
				free(tmp);
			}
		}
	}
	return T;
}

//总结：要想访问父节点的指针域--》可以通过递归返回地址



//*******平衡二叉树：是一种特殊的搜索二叉树
//平衡二叉树要求其每个结点的左右子树高度差（平衡因子）不能超过一个固定的阈值（通常为 1）
//常见的平衡二叉树有：
//1.AVL树：每个节点的左右子树高度差不能超过 1。
//2.红黑树：一种特殊的二叉搜索树，具有一组额外的平衡规则，保证了树的平衡性

//--》降低树的高度，提高查找的效率

//每个结点有一个平衡因子，n=左子树的高度-右子树的高度
//一旦|n|>1,就需要进行二叉树的调整
//1>RR旋转：
//2>
//3>
//4>



//********线索二叉树：
//为了找到特定遍历顺序（先序，中序，后序）下的二叉树中某个结点的【前驱和后继】
//-->使用二叉链表的空指针域
     //（假设某个二叉树有n个结点，则有2n个指针域，有n-1个孩子（除根结点以外），需要n-1个指针域，故有n+1个空指针域）

//这种改变指向的指针称为“线索”，加上了“线索”的二叉树是线索二叉树
// 
//为了区分指针域是指向孩子还是前驱后继，引入ltag,rtag
//ltag=0 表示指向左孩子，ltag=1 表示指向前驱 
//rtag=0 表示指向右孩子，rtag=1 表示指向后继 

//typedef struct BiThrNode
//{
//	int data;
//	int ltag, rtag;
//	struct BiThrNode* lchild, * rchild;
//}BiThrNode,*BiThrTree;

//因为有1个结点没有前驱，1个结点没有后继，
//为了好表示，增设一个头结点，是BiThrTree类型
//Itag = 0, Ichild指向根结点,
//rtag = 1, rchild指向遍历序列中最后一个结点
//遍历序列中第一个结点的lc域和最后一个结点的rc域都指向头结点

//******如何找前驱和后继：
//1. 找前驱节点：
	//对于节点𝑁：
	//<1>如果𝑁有左子树：
	//前驱节点是其左子树中最右侧的节点（在中序遍历中，这是左子树的最后一个访问节点）
	//  -->如何找到：从𝑁的左孩子开始,一直沿右指针移动，直到遇到没有右孩子的节点
	// 
	//<2>如果𝑁没有左子树：
	//𝑁的左指针是线索，则直接指向前驱节点
	// 
//2. 找后继节点：
	//对于节点𝑁：
	//<1>如果𝑁有右子树：
	//后继节点是其右子树中最左侧的节点（在中序遍历中，这是右子树的第一个访问节点）。
	//  -->如何找到：
	//从𝑁的右孩子开始,一直沿左指针移动，直到遇到没有左孩子的节点
	// 
	//<2>如果𝑁没有右子树：
	//𝑁的右指针是线索，则直接指向后继节点
//


//树和森林：
//树的存储结构：
// 
//1.——————双亲表示法：找双亲容易，找孩子难
// 
//定义结构数组，存放树的结点，每个结点包括一个数据域和一个双亲域，
//数据域存放结点本身信息，双亲域指示本结点的双亲结点在数组中的位置

//#define TELemType int 
//#define MAXSIZE 100
//
//typedef struct	
//{
//	TELemType data;
//	int parent;  //根结点的双亲域为-1
//}PTNode;
//
//typedef struct
//{
//	PTNode nodes[MAXSIZE];
//	int r, n;  //r 为根结点的位置（数组下标），n 为结点的总个数
//}PTree;

//2.——————孩子链表：容易找孩子，不容易找双亲
// 
//把每个结点的孩子结点排列起来, 看成是一个线性表, 用单链表存
//则n个结点有n个孩子链表(叶子的孩子链表为空表)
//而n个头指针又组成一个线性表, 用顺序表(含n个元素的结构数组)存储

//孩子结点结构：
//typedef struct CTNode
//{
//	int child; //某结点的孩子结点在数组中的下标
//	struct CTNode* next;  //指向下一个孩子结点
//}*ChildPtr;

//双亲结点结构：
//typedef struct
//{
//	TElemType data;
//	ChildPtr fisrtchild;
//}CTBox;

//树的结构：
//typedef struct
//{
//	CTBox nodes[MAXSIZE];
//	int r, n;
//}CTree;

//改进：带双亲的孩子链表 --> 容易找双亲和孩子
     //在孩子链表的基础上，在数组中增加一个双亲域，存放结点的双亲结点的数组下标

//改进双亲结点结构：
//typedef struct
//{
//	TElemType data;
//	int parent;
//	ChildPtr fristchild;
//}PCNode;


//——————3.孩子兄弟表示法：
	//实现:用二叉链表作树的存储结构, 链表中每个结点的两个指针域
	//分别指向其第一个孩子结点和下一个兄弟结点

//#define ElemType int
//typedef struct CSNode
//{
//	ElemType data;
//	struct CSNode* firstchild;
//	struct CSNode* nextsibling;
//}CSNode,*CSTree;


//要对树进行运算->较复杂，二叉树的运算->较简单
//-->把树转换为二叉树进行运算，运算完再将二叉树转换为树
//-->怎么转换：树和二叉树都一二叉链表作为存储结构 ->以二叉链表为媒介

//1.树转换为二叉树：
//<1>加线:在兄弟之间加一连线
//<2>抹线 : 对每个结点, 除了其左孩子外, 去除其与其余孩子之间的关系
//<3>旋转 : 以树的根结点为轴心, 将整树顺时针转45°
//
//   -->树变二叉树 : 兄弟相连留长子
//


//2.二叉树转换为树：
//<1>加线:若p结点是双亲结点的左孩子, 则将p的右孩子, 右孩子的右孩子，沿分支找到的所有右孩子, 都与p的双亲用线连起来
//<2>抹线 : 抹掉原二叉树中双亲与右孩子之间的连线
//<3>调整 : 将结点按层次排列, 形成树结构
//
//二叉树变树 :
//左孩右右连双亲,
//去掉原来右孩线。


//森林和二叉树的转化：
//<1>将各棵树分别转换成二叉树
//<2>将每棵树的根结点用线相连
//<3>以第一棵树根结点为二叉树的根, 再以根结点为轴心, 顺时针旋转,构成二叉树型结构

//  -->森林变二叉树:树变二叉根相连


//二叉树转换成森林
//<1>抹线:将二叉树中根结点与其右孩子连线, 及沿右分支搜索到的所有右孩子间连线全部抹掉, 使之变成孤立的二叉树
//<2>还原 : 将孤立的二叉树还原成树
//
//二叉树变森林 :
//去掉全部右孩线, 孤立二叉再还原

//遍历树和森林：
//1.树的遍历(三种方式)
//  1>先根(次序)遍历:
//        若树不空, 则先访问根结点, 然后依次先根遍历各棵子树
//  2>后根(次序)遍历 :
//	      若树不空, 则先依次后根遍历各棵子树, 然后访问根结点
//  3>按层次遍历 :
//        若树不空, 则自上而下自左至右访问树中每个结点


//2.森林的遍历（两种方式）
// 
// 将森林看作由三部分构成:
//1、森林中第一棵树的根结点;
//2. 森林中第一棵树的子树森林,
//3. 森林中其它树构成的森林。
// 
//  1>先序遍历：依次从左至右对森林中的每一棵树进行【先根】遍历
//  2>中序遍历：依次从左至右对森林中的每一棵树进行【后根】遍历
// 


//*********哈夫曼树：（最优树）
//1.概念：
//   1>路径：从树中一个结点到另一个结点之间的分支构成这两个结点间的路径
//   2>结点的路径长度：两结点间路径上的分支数（连线数）
//   3>树的路径长度：从树根到每一个结点的路径长度之【和】
//       -->tip:结点数目相同的二叉树中，完全二叉树是路径长度最短的二叉树
// 
//   4>权：将树中结点赋给一个有着某种含义的数值，则这个数值称为该结点的权
//   5>结点的带权路径长度：从根结点到该节点之间的路径长度与该结点的权的乘积
//   6>【树的带权路径长度（WPL）】：树中所有叶子结点的带权路径长度之和
//   
// -->哈夫曼树：带权路径长度（WPL）最短的树 
//    注意：必须在树的度相同的条件下比较
// 
// 
// 2.构造：--> 哈夫曼树中权越大的叶子结点离根越近
// 哈夫曼算法(构造哈夫曼树的方法)
//(1)根据 n个给定的权值 {W1, W2, …, Wn}构成n棵二叉树的森林
// F = { T1,T2, …. ,Th }, 其中Ti只有一个带权为wi的【根结点】
//     -->· 构造森林全是根
// 
//(2)在F中选取两棵根结点的【权值最小】的树作为左右子树, 构造一棵新的二叉树 
// 且设置新的二叉树的根结点的权值为其左右子树上根结点的【权值之和】
//    -->· 选用两小造新树
// 
//(3)在F中删除这两棵树, 同时将新得到的二叉树加入森林中
//    -->· 删除两小添新人
// 
//(4)重复(2)和(3), 直到森林中只有一棵树为止, 这棵树即为哈夫曼树
//    -->· 重复2、3剩单根
//

//采用顺序存储结构-->一维结构数组
//结点类型定义：
//typedef struct
//{
//	int weight;  //权重
//	int parent, lch, rch;  //该结点的双亲和孩子在数组中的下标
//}HTnode,*HuffmanTree;
//
////求权重最小的两个值
//void select(HuffmanTree HT, int n, int* s1, int* s2)
//{
//	int min1 = INT_MAX, min2 = INT_MAX; 
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		if (HT[i].parent == 0)
//		{
//			if (HT[i].weight < min1)
//			{
//				min2 = min1;
//				min1 = HT[i].weight;
//				*s2 = *s1;
//				*s1 = i;
//			}
//			else if (HT[i].weight < min2)
//			{
//				min2 = HT[i].weight;
//				*s2 = i;
//			}
//		}
//	}
//	
//}
//
//void CreatHuffmanTree(HuffmanTree* HT, int n)  //HT返回数组的首地址，n表示有多少个结点要构造成哈夫曼树
//{
//	if (n <= 1)
//	{
//		return;
//	}
//	int m = 2 * n - 1;  //n个结点+ n-1个构造的新结点
//	*HT = (HuffmanTree)calloc(m + 1, sizeof(HTnode));  //数组下标为0的空间不用，根结点为(*HT)[m]
//	if (*HT == NULL)
//	{
//		perror("CreatHuffmanTree:");
//		exit(1);
//	}
//	//创建n个根结点 --》给数组前n个元素加上权重
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d", &(*HT)[i].weight);
//	}
//	//构造哈夫曼树--》找到两个没有构造（parent==0）的权重最小的结点然后合并，直到最后只有一个结点的parent==0(根结点)
//	int s1 = 0, s2 = 0;   //权重最小的结点在数组中的下标
//	for (i = n + 1; i <= m; i++)
//	{
//		select(*HT, i - 1, &s1, &s2);
//		//删掉两个权重最小的结点--》将parent赋值
//		(*HT)[s1].parent = i;  
//		(*HT)[s2].parent = i;
//		//对新结点操作
//		(*HT)[i].lch = s1;
//		(*HT)[i].rch = s2;
//		(*HT)[i].weight = (*HT)[s1].weight + (*HT)[s2].weight;
//	}
//}
//
//
////哈夫曼树的应用：哈夫曼编码
////在远程通讯中，要将待传字符转换为二进制字符
////可以使用等长的二进制编码，但空间浪费大，传输效率低
////  --》考虑不等长的编码，并且出现次数越多的字符的编码位数越小 --》哈夫曼编码
////      （注意：不等长的编码不能出现一个字符的编码是另一个字符编码的前缀--》否则无法将二进制编码复原为字符）
//// 一个字符的编码一定【不是】另一个字符编码的前缀--》叫作【前缀编码】
////
//// 方法：
//// 1>统计字符集中字符出现的概率（次数）
//// 2>概率越小的字符，路径越长
//// 3>将哈夫曼树上的每个左分支标为0，右分支标为1
//// 
//
////· 性质1：哈夫曼编码是前缀码
////         因为没有一片树叶是另一片树叶的祖先, 所以每个叶子结点的编码就不可能是其它叶子结点编码的前缀
////
////2.· 性质2：哈夫曼编码是最优前缀码
////          因为哈夫曼树的带权路径长度最短, 故字符编码的总长最短
////
//
////哈夫曼编码实现：
////创造一个字符串数组，数组中的每一个元素是一个字符串数组，用来存放某个叶子结点的哈夫曼编码
////创建一个临时数组，从叶子结点到根结点（通过parent回溯），倒着存进临时数组，然后复制给字符串数组
//
//#include<string.h>
//#define HuffmanCode char**
//void CreatHuffmanCode(HuffmanTree HT, HuffmanCode* HC, int n)
//{
//	//字符串数组（存储每个叶子结点的哈夫曼编码）
//	(*HC) = (char**)malloc((n + 1) * sizeof(char*));
//	/*if ((*HC) == NULL)
//	{
//		perror("CreatHuffmanCode：");
//		exit(1);
//	}*/
//
//
//	//临时数组（临时存放编码）
//	char* cd = (char*)malloc(n * sizeof(char));  //n个叶子结点最多有n-1个分支（编码位数），加上一位放 '\0'-->为了使用strcpy
//	/*if (cd == NULL)
//	{
//		perror("CreatHuffmanCode：");
//		exit(1);
//	}*/
//	cd[n - 1] = '\0';
//
//
//	//**********从叶子结点到根结点依次编码***********
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		int start = n - 1;  //编码结束符的位置
//		int c = i;  //当前结点
//		int f = HT[i].parent;  //当前结点的双亲节点
//		while (f != 0)  //双亲结点为0的结点是根结点
//		{
//			--start;
//			if (HT[f].lch == c)
//			{
//				cd[start] = 0;
//			}
//			else
//			{
//				cd[start] = 1;
//			}
//			c = f;
//			f = HT[c].parent;
//		}
//
//
//		//把临时数组中的编码存放到HC中
//		(*HC)[i] = (char*)malloc((n - start) * sizeof(char));
//		/*if ((*HC)[i] == NULL)
//		{
//			perror("CreatHuffmanCode：");
//			exit(1);
//		}*/
//		strcpy((*HC)[i], &cd[start]);
//	}
//	free(cd);
//	cd = NULL;
//}


