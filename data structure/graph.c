#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//图（graph）:逻辑结构为多对多

//一.图的有关概念：
//   1.图：由有限个顶点和边构成
//   2.无向图：每条边都没有方向
//     有向图：每条边都有方向，其中的边也叫做【弧】
//   3.完全图：任意两个顶点都有边相连
//       --》无向完全图：n个顶点，就有n*(n-1)/2条边
//       --》有向完全图：n个顶点，就有n*(n-1)条边
//   4.邻接：有边/弧相连的两个顶点之间的关系
//   5.关联（依附）：边/弧和顶点之间的关系
//   6.顶点的度：与顶点关联的边的个数
//       --》有向图中，度的个数等于入度和出度个数之和
//   7.路径：持续的边构成的顶底序列
//   8.路径长度：路径上的边/弧的数目或权值之和
//   9.回路（环）：第一个顶点和最后一个顶点相同的路径
//   10.简单路径：除了第一个顶点和最后一个顶点可以相同外，其余顶点都不相同的路径
//   11.连通图（对有向图：强连通图）：对任意两个顶点u，v,都有从u到v的路径
//   12.网：图中边/弧具有相关数称为权，带有权的图为网
//   13.子图：顶点和边/弧属于某个图的顶点和边/弧
//   14.连通分量（强连通分量）：图G的极大连通子图称为G的连通分量
//       --》【极大连通子图】：该子图是G连通子图,将G的任何不在该子图中的顶点加入, 子图不再连通
//   15.【极小连通子图】:该子图是G的连通子图,在该子图中删除任何一条边，子图不再连通。
//   16.生成树 : 包含无向图G所有顶点的极小连通子图。
//   17.生成森林 : 对非连通图, 由各个连通分量的生成树的集合。
//


//二.图的存储结构：
//   1.顺序存储结构（数组/邻接矩阵表示法）：
//     建立一个顶点表(记录顶点信息)和一个邻接矩阵（表示各个顶点之间的关系），
//     邻接矩阵是一个二维数组(arcs[n][n]),arcs[i][j]表示顶点Vi到顶点Vj是否关联，1表示关联。0表示不关联
//
        //1>无向图：
		//无向图的邻接矩阵是对称的;
		//顶点i的度=第i行(列)中1的个数;
		//特别:完全图的邻接矩阵中,对角元素为0,其余1
 
        //2>有向图：
        //分析1:有向图的邻接矩阵可能是不对称的。
        //分析2:顶点的出度 = 第i行元素之和
        //      顶点的入度 = 第i列元素之和
        //      顶点的度 = 第i行元素之和 + 第i列元素之和
        
        //3>有向网：
        //arcs[i][j]存放顶点Vi到顶点Vj的边/弧上的权，有边则存放权值，无边则存放无穷
       

//以无向网为例：
#define VerTexType char
#define ArcsType int
#define MVNum 100  //最大顶点数

typedef struct
{
    VerTexType vexs[MVNum];  //顶点表
    ArcsType arcs[MVNum][MVNum];  //邻接矩阵
    int vexnum, arcnum;  //顶点数和边数
}AMGraph;  //无向网

int LocateVer(AMGraph G, VerTexType V)
{
    int i;
    for (i = 0; i < G.vexnum ; i++)
    {
        if (G.vexs[i] == V)
        {
            return i;
        }
    }
    return -1;

}

void CreatUDN(AMGraph* G)
{
    scanf("%d%d", &(G->vexnum), &(G->arcnum));
    int i, j;
    //输入顶点信息
    for (i = 0; i < G->vexnum; i++)
    {
        scanf(" %c", &(G->vexs[i]));
    }
    //初始化邻接矩阵为无穷
    for (i = 0; i < G->vexnum; i++)
    {
        for (j = 0; j < G->vexnum; j++)
        {
            G->arcs[i][j] = INT_MAX;
        }
    }
    //输入邻接矩阵（边）的信息
    for (i = 0; i < G->arcnum; i++)
    {
        VerTexType V1, V2;
        ArcsType weight;
        scanf(" %c %c %d", &V1, &V2, &weight);
        int x = LocateVer(*G, V1);
        int y = LocateVer(*G, V2);
        G->arcs[x][y] = weight;
        G->arcs[y][x] = weight;
    }
}

//   2.链式存储结构（邻接表，邻接多重表，十字链表）：
//     邻接表：用一位数组存储顶点信息（包括数据域和指针域（指向邻接的顶点）），
//             用链表存储边的信息（包括关联的顶点，权值和指向下一份邻接的顶点的指针域）


//以无向图为例：
//顶点的结点结构：
typedef struct
{
    VerTexType data;
    ArcNode* firstarc;
}VNode, AdjList[MVNum];   //AdjList v 相当于 VNode v[MVNum]

//边的结点结构：
typedef struct ArcNode
{
    int adjvex;  //该边所指向的顶点的数组下标
    /*int weight;*/ 
    struct ArcNode* nextarc;  //指向下一条边
}ArcNode;

//图的结构：
typedef struct
{
    AdjList vertices;
    int vexnum, arcnum;
}ALGraph;

int LocateVex(ALGraph G, VerTexType V)
{
    int i;
    for (i = 0; i < G.vexnum; i++)
    {
        if (V == G.vertices[i].data)
        {
            return i;
        }
    }
    return -1;
}
void CreatUDG(ALGraph* G)
{
    scanf("%d%d", &(G->vexnum), &(G->arcnum));
    int i;
    //建立顶点表（数组）
    for (i = 0; i < G->vexnum; i++)
    {
        scanf("%c", &(G->vertices[i].data));
        G->vertices[i].firstarc = NULL;
    }
    //建立边的链表
    for (i = 0; i < G->arcnum; i++)
    {
        VerTexType V1, V2;
        scanf(" %c %c", &V1, &V2);
        int x = LocateVex(*G, V1);
        int y = LocateVex(*G, V2);
        //建立边结点
        //V1到V2
        ArcNode* p1 = (ArcNode*)malloc(sizeof(ArcNode));
        p1->adjvex = y;
        p1->nextarc = G->vertices[x].firstarc;  //前插法（后插法需要遍历链表）
        G->vertices[x].firstarc = p1;
        //V2到V1
        ArcNode* p2 = (ArcNode*)malloc(sizeof(ArcNode));
        p2->adjvex = x;
        p2->nextarc = G->vertices[y].firstarc;
        G->vertices[y].firstarc = p2;
    }
}
//注意：每次循环或自定义函数结束时，局部变量等在栈空间的内存会被释放
//      但malloc等动态开辟的在堆上的空间不会被释放，
//      只有当使用free函数或程序结束（main函数结束）时内存才会被释放
 
//p1是局部变量：它在每次循环迭代中是新的，指向动态分配的不同内存
//每次调用 malloc 时，p1都会获得一个不同的地址
//你将 p1 挂接到链表的某个节点上，因此即使循环迭代结束，链表仍然保存了对动态分配内存的引用


//邻接表：
//1>有向图->缺点 : 求结点的度困难-->十字链表
//2>无向图->缺点 : 每条边都要存储两遍-->邻接多重表


//**********三.图的遍历：深度优先搜索遍历（DFS）和广度优先搜索遍历（BFS）
//辅助数组：visited[i],表示第i个顶点被访问过
//1.DFS:(以无向图的邻接矩阵为例）
int visited[MVNum] = { 0 };
void DFS(AMGraph G, int v)  //v表示从第几个顶点开始
{
    printf("%c ", G.vexs[v]);
    visited[v] = 1; //表示该顶点已经访问过
    int i;
    for (i = 0; i < G.vexnum; i++)  //遍历顶点所在矩阵的那一行
    {
        if (visited[v] == 0 && G.arcs[v][i] == 1)
        {
            DFS(G, i);  //实现遍历和回溯
        }
    }
}

