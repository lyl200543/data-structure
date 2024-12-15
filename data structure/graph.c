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
//#define VerTexType char
//#define ArcsType int
//#define MVNum 100  //最大顶点数
//
//typedef struct
//{
//    VerTexType vexs[MVNum];  //顶点表
//    ArcsType arcs[MVNum][MVNum];  //邻接矩阵
//    int vexnum, arcnum;  //顶点数和边数
//}AMGraph;  //无向网
//
//int LocateVer(AMGraph G, VerTexType V)
//{
//    int i;
//    for (i = 0; i < G.vexnum ; i++)
//    {
//        if (G.vexs[i] == V)
//        {
//            return i;
//        }
//    }
//    return -1;
//
//}
//
//void CreatUDN(AMGraph* G)
//{
//    scanf("%d%d", &(G->vexnum), &(G->arcnum));
//    int i, j;
//    //输入顶点信息
//    for (i = 0; i < G->vexnum; i++)
//    {
//        scanf(" %c", &(G->vexs[i]));
//    }
//    //初始化邻接矩阵为无穷
//    for (i = 0; i < G->vexnum; i++)
//    {
//        for (j = 0; j < G->vexnum; j++)
//        {
//            G->arcs[i][j] = INT_MAX;
//        }
//    }
//    //输入邻接矩阵（边）的信息
//    for (i = 0; i < G->arcnum; i++)
//    {
//        VerTexType V1, V2;
//        ArcsType weight;
//        scanf(" %c %c %d", &V1, &V2, &weight);
//        int x = LocateVer(*G, V1);
//        int y = LocateVer(*G, V2);
//        G->arcs[x][y] = weight;
//        G->arcs[y][x] = weight;
//    }
//}
//
////   2.链式存储结构（邻接表，邻接多重表，十字链表）：
////     邻接表：用一位数组存储顶点信息（包括数据域和指针域（指向邻接的顶点）），
////             用链表存储边的信息（包括关联的顶点，权值和指向下一份邻接的顶点的指针域）
//
//
////以无向图为例：
////顶点的结点结构：
//typedef struct
//{
//    VerTexType data;
//    ArcNode* firstarc;
//}VNode, AdjList[MVNum];   //AdjList v 相当于 VNode v[MVNum]
//
////边的结点结构：
//typedef struct ArcNode
//{
//    int adjvex;  //该边所指向的顶点的数组下标
//    /*int weight;*/ 
//    struct ArcNode* nextarc;  //指向下一条边
//}ArcNode;
//
////图的结构：
//typedef struct
//{
//    AdjList vertices;
//    int vexnum, arcnum;
//}ALGraph;
//
//int LocateVex(ALGraph G, VerTexType V)
//{
//    int i;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        if (V == G.vertices[i].data)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//void CreatUDG(ALGraph* G)
//{
//    scanf("%d%d", &(G->vexnum), &(G->arcnum));
//    int i;
//    //建立顶点表（数组）
//    for (i = 0; i < G->vexnum; i++)
//    {
//        scanf("%c", &(G->vertices[i].data));
//        G->vertices[i].firstarc = NULL;
//    }
//    //建立边的链表
//    for (i = 0; i < G->arcnum; i++)
//    {
//        VerTexType V1, V2;
//        scanf(" %c %c", &V1, &V2);
//        int x = LocateVex(*G, V1);
//        int y = LocateVex(*G, V2);
//        //建立边结点
//        //V1到V2
//        ArcNode* p1 = (ArcNode*)malloc(sizeof(ArcNode));
//        p1->adjvex = y;
//        p1->nextarc = G->vertices[x].firstarc;  //前插法（后插法需要遍历链表）
//        G->vertices[x].firstarc = p1;
//        //V2到V1
//        ArcNode* p2 = (ArcNode*)malloc(sizeof(ArcNode));
//        p2->adjvex = x;
//        p2->nextarc = G->vertices[y].firstarc;
//        G->vertices[y].firstarc = p2;
//    }
//}
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
// DFS:使用栈（递归和非递归（显式使用栈））
// BFS:使用队列（非递归）
//辅助数组：visited[i],表示第i个顶点被访问过
//1.DFS:（递归）

// 1>以无向图的邻接矩阵为例:(时间复杂度为n~2)
//int visited[MVNum] = { 0 };
//void DFS(AMGraph G, int v)  //v表示从第几个顶点开始
//{
//    printf("%c ", G.vexs[v]);
//    visited[v] = 1; //表示该顶点已经访问过
//    int i;
//    for (i = 0; i < G.vexnum; i++)  //遍历顶点所在矩阵的那一行
//    {
//        if (visited[v] == 0 && G.arcs[v][i] == 1)
//        {
//            DFS(G, i);  //实现遍历和回溯
//        }
//    }
//}

// 2>以无向图的邻接表为例:(时间复杂度为n+e)
//int visited[MVNum] = { 0 };
//void DFS(ALGraph G, int v)
//{
//    printf("%c ", G.vertices[v].data);
//    visited[v] = 1;
//    ArcNode* p = G.vertices[v].firstarc;
//    while (p)
//    {
//        if (!visited[p->adjvex])
//        {
//            DFS(G, p->adjvex);
//        }
//        p = p->nextarc;
//    }
//}

//总结：1》适用于单个连通分量，要遍历非联通分量时要使用for循环
//      2》递归深度有限：当顶点数过多时，可能导致栈溢出

//2.DFS(非递归)：显式使用栈
//#define SElemType int
//typedef struct StackNode
//{
//    SElemType data;
//    struct StackNode* next;
//}StackNode,*LinkStack;
//
////链栈的初始化
//int InitStack(LinkStack* s)
//{
//    *s = NULL;
//    return OK;
//}
//
////判断链栈是否为空
//int StackEmpty(LinkStack s)
//{
//    if (s == NULL)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
////入栈
//int Push(LinkStack* s, SElemType e)
//{
//    StackNode* p = (StackNode*)malloc(sizeof(StackNode));
//    if (p == NULL)
//    {
//        perror("Push:");
//        return 0;
//    }
//    p->data = e;
//    p->next = *s;
//    *s = p;
//    return 1;
//}
//
////出栈
//int Pop(LinkStack* s, SElemType* e)
//{
//    if (*s == NULL)
//    {
//        printf("空栈无法出栈");
//        return ERROR;
//    }
//    StackNode* p = *s;
//    *e = (*s)->data;
//    (*s) = (*s)->next;
//    free(p);
//    p = NULL;
//    return OK;
//}
//
//int  GetTop(LinkStack s, int* u)
//{
//    if (StackEmpty(s))
//    {
//        return ERROR;
//    }
//    *u = s->data;
//    return OK;
//}
//
//void DFSTraverse(AMGraph* G)
//{
//    int i;
//    //初始化visited
//    for (i = 0; i < G->vexnum; i++)
//    {
//        visited[i] = 0;
//    }
//    //遍历每个顶点
//    for (i = 0; i < G->vexnum; i++)
//    {
//        if (!visited[i])
//        {
//            DFS(&G, i);
//        }
//    }
//}
//
//void DFS(AMGraph* G, int v)
//{
//    LinkStack s;
//    InitStack(&s);
//    Push(&s, v);
//    while (!StackEmpt(s))
//    {
//        int u;
//        GetTop(s, &u);
//        if (visited[u] == 0)
//        {
//            visit(u);
//            visited[u] = 1;
//        }
//        int w = FirstNeighbor(*G, u);
//        while (w != -1)
//        {
//            if (visited[w] == 0)
//            {
//                Push(&s, w);
//                break;
//            }
//            w = NextNeighbor(*G, u, w);
//        }
//        if (w == -1)
//        {
//            Pop(&s, &u);
//        }
//    }
//}


//3.BFS（非递归）；
//int visited[MVNum];
//typedef struct
//{
//    VerTexType vexs[MVNum];  //顶点表
//    ArcsType arcs[MVNum][MVNum];  //邻接矩阵
//    int vexnum, arcnum;  //顶点数和边数
//}AMGraph;  //无向网
//#define QElemType int 
//typedef struct Qnode
//{
//    QElemType data;
//    struct Qnode* next;
//}Qnode,*QueuePtr;
//
//typedef struct
//{
//    QueuePtr front;//头指针
//    QueuePtr rear;//尾指针
//}LinkQueue;
//
//int FirstNeighbor(AMGraph G, int r)
//{
//    int i;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        if (G.arcs[r][i]==1)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//int NextNeighbor(AMGraph G, int r, int w)
//{
//    int i;
//    for (i = w + 1; i < G.vexnum; i++)
//    {
//        if (G.arcs[r][i] == 1)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
////所有连通分量
//void BFSTraverse(AMGraph G)
//{
//    int i;
//    for (i = 0; i < G.vexnum; i++)
//    {
//        visited[i] = 0;
//    }
//    for (i = 0; i < G.vexnum; i++)
//    {
//        if (!visited[i])
//        {
//            BFS(&G, i);
//        }
//    }
//}
//
////单个连通分量
//void BFS(AMGraph* G, int v)
//{
//    LinkQueue q;
//    InitQueue(&q);
//    visit(v);
//    visited[v] = 1;
//    EnQueue(&q, v);
//    while (!IsEmpty(q))
//    {
//        int r;
//        DeQueue(&q, &r);
//        for(int w = FirstNeighbor(*G, r); w >= 0; w = NextNeighbor(*G, r, w))
//        {
//            if (!visited[w])
//            {
//                visit(w);
//                visited[w] = 1;
//                EnQueue(&q, w);
//            }
//        }
//    }
//}


//四.图的应用：
//*********1.最短路径：(求源点S到其他顶点的最短路径)
// 1>单源的（有向）无向【图】:(邻接矩阵，BFS)
//#define MAX 100
//#define INF -1
//
////队列的初始化
//int InitQueue(LinkQueue* q)
//{
//    q->front = (QueuePtr)malloc(sizeof(Qnode));
//    if (q->front == NULL)
//    {
//        perror("InitQueue:");
//        return ERROR;
//    }
//    q->rear = q->front;
//    (q->front)->next = NULL;
//    return OK;
//}
//
////入队
//int EnQueue(LinkQueue* q, QElemType e)
//{
//    QueuePtr p = (QueuePtr)malloc(sizeof(Qnode));
//    if (p == NULL)
//    {
//        printf("EnQueue:开辟内存失败");
//        exit(1);
//    }
//    p->data = e;
//    p->next = NULL;
//    q->rear->next = p;
//    q->rear = p;
//    return OK;
//}
//
////出队
//int DeQueue(LinkQueue* q, QElemType* e)
//{
//    if (q->front == q->rear)
//    {
//        printf("为空对，无法删除元素");
//        return ERROR;
//    }
//    QueuePtr p = q->front->next;
//    *e = p->data;
//    q->front->next = p->next;
//    if (q->rear == p)
//    {
//        q->rear = q->front;
//    }
//    free(p);
//    p = NULL;
//    return OK;
//}
//
//void Unweighted(int graph[MAX][MAX], int n, int s)
//{
//    int dist[MAX]; //源点到顶点的距离
//    int path[MAX]; //到某个顶点的上一个顶点
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        dist[i] = -1;
//        path[i] = -1;
//    }
//    dist[s] = 0;
//    LinkQueue Q;
//    InitQueue(&Q);
//    EnQueue(&Q, s);
//    //BFS遍历
//    while (!IsEmpty(Q))
//    {
//        int w;
//        DeQueue(&Q, &w);
//        for (i = 0; i < n; i++)
//        {
//            if (graph[w][i] == 1 && dist[i] == -1)
//            {
//                dist[i] = dist[w] + 1;
//                path[i] = w;
//                EnQueue(&Q, i);
//            }
//        }
//
//    }
//}


// 2>单源的（有向）无向【网（有权）】： 
// Dijkstra 算法--》适用于非负权值图

//（1）邻接矩阵：
//#include <limits.h>  //定义整数最大/小值 INT_MAX
//#define MAX 100
//#define INF INT_MAX
//
//int mindist(int dist[], int visited[], int n)
//{
//    int i, min = INF, u = -1;
//    for (i = 0; i < n; i++)
//    {
//        if (!visited[i] && dist[i] < min)
//        {
//            min = dist[i];
//            u = i;
//        }
//    }
//    return u;
//}
//
//void Dijkstra(int graph[MAX][MAX], int n, int s)
//{
//    //初始化
//    int dist[MAX], path[MAX], visited[MAX] = { 0 };
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        dist[i] = INF;
//        path[i] = -1;
//    }
//    dist[s] = 0;
//    //求最短路径
//    while (1)
//    {
//        //求未收录的顶点中dist最小的点
//        int v = mindist(dist, visited, n);
//        if (v == -1)
//        {
//            break;
//        }
//        visited[v] = 1;
//        //更新邻接点的dist值
//        for (i = 0; i < n; i++)
//        {
//            if (!visited[i])
//            {
//                if (graph[v][i] != INF && dist[v] + graph[v][i] < dist[i])
//                {
//                    dist[i] = dist[v] + graph[v][i];
//                    path[i] = v;
//                }
//
//            }
//        }
//    }
//}


//（2）邻接表+最小堆：
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <stdbool.h>
//
//#define MAX 100 // 最大顶点数
//#define INF INT_MAX // 用于表示无穷大
//
//// 定义堆节点
//typedef struct {
//    int vertex;
//    int distance;
//} MinHeapNode;
//
//// 定义最小堆
//typedef struct {
//    int size;
//    int capacity;
//    int* position;
//    MinHeapNode** array;
//} MinHeap;
//
//// 创建一个新的堆节点
//MinHeapNode* createMinHeapNode(int vertex, int distance) {
//    MinHeapNode* node = (MinHeapNode*)malloc(sizeof(MinHeapNode));
//    node->vertex = vertex;
//    node->distance = distance;
//    return node;
//}
//
//// 创建最小堆
//MinHeap* createMinHeap(int capacity) {
//    MinHeap* heap = (MinHeap*)malloc(sizeof(MinHeap));
//    heap->size = 0;
//    heap->capacity = capacity;
//    heap->position = (int*)malloc(capacity * sizeof(int));
//    heap->array = (MinHeapNode**)malloc(capacity * sizeof(MinHeapNode*));
//    return heap;
//}
//
//// 堆的交换操作
//void swapMinHeapNode(MinHeapNode** a, MinHeapNode** b) {
//    MinHeapNode* temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// 堆化操作
//void minHeapify(MinHeap* heap, int idx) {
//    int smallest = idx;
//    int left = 2 * idx + 1;
//    int right = 2 * idx + 2;
//
//    if (left < heap->size && heap->array[left]->distance < heap->array[smallest]->distance)
//        smallest = left;
//
//    if (right < heap->size && heap->array[right]->distance < heap->array[smallest]->distance)
//        smallest = right;
//
//    if (smallest != idx) {
//        MinHeapNode* smallestNode = heap->array[smallest];
//        MinHeapNode* idxNode = heap->array[idx];
//
//        // 更新位置
//        heap->position[smallestNode->vertex] = idx;
//        heap->position[idxNode->vertex] = smallest;
//
//        // 交换节点
//        swapMinHeapNode(&heap->array[smallest], &heap->array[idx]);
//
//        minHeapify(heap, smallest);
//    }
//}
//
//// 检查堆是否为空
//int isEmpty(MinHeap* heap) {
//    return heap->size == 0;
//}
//
//// 从堆中提取最小值
//MinHeapNode* extractMin(MinHeap* heap) {
//    if (isEmpty(heap))
//        return NULL;
//
//    MinHeapNode* root = heap->array[0];
//    MinHeapNode* lastNode = heap->array[heap->size - 1];
//    heap->array[0] = lastNode;
//
//    heap->position[root->vertex] = heap->size - 1;
//    heap->position[lastNode->vertex] = 0;
//
//    --heap->size;
//    minHeapify(heap, 0);
//
//    return root;
//}
//
//// 减小顶点的距离值
//void decreaseKey(MinHeap* heap, int vertex, int distance) {
//    int i = heap->position[vertex];
//    heap->array[i]->distance = distance;
//
//    while (i && heap->array[i]->distance < heap->array[(i - 1) / 2]->distance) {
//        heap->position[heap->array[i]->vertex] = (i - 1) / 2;
//        heap->position[heap->array[(i - 1) / 2]->vertex] = i;
//        swapMinHeapNode(&heap->array[i], &heap->array[(i - 1) / 2]);
//        i = (i - 1) / 2;
//    }
//}
//
//// 检查顶点是否在堆中
//int isInMinHeap(MinHeap* heap, int vertex) {
//    return heap->position[vertex] < heap->size;
//}
//
//// 打印结果
//void printSolution(int dist[], int V) {
//    printf("Vertex \t Distance from Source\n");
//    for (int i = 0; i < V; i++) {
//        printf("%d \t %d\n", i, dist[i]);
//    }
//}
//
//// Dijkstra算法实现（基于堆）
//void dijkstra(int graph[MAX][MAX], int src, int V) {
//    int dist[V];
//
//    MinHeap* heap = createMinHeap(V);
//
//    for (int v = 0; v < V; v++) {
//        dist[v] = INF;
//        heap->array[v] = createMinHeapNode(v, dist[v]);
//        heap->position[v] = v;
//    }
//
//    heap->array[src] = createMinHeapNode(src, dist[src]);
//    heap->position[src] = src;
//    dist[src] = 0;
//    decreaseKey(heap, src, dist[src]);
//
//    heap->size = V;
//
//    while (!isEmpty(heap)) {
//        MinHeapNode* minNode = extractMin(heap);
//        int u = minNode->vertex;
//
//        for (int v = 0; v < V; v++) {
//            if (graph[u][v] && isInMinHeap(heap, v) && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
//                dist[v] = dist[u] + graph[u][v];
//                decreaseKey(heap, v, dist[v]);
//            }
//        }
//    }
//
//    printSolution(dist, V);
//}
//

// 3>多源最短路：
// 
//*********2.最小生成树：
//生成树: 包含无向图（网）G所有顶点的极小连通子图(由DFS遍历或DFS遍历得到)
//有n个顶点和n-1条边
//最小生成树：无向网中各个边的权值之和最小的生成树

//构造最小生成树：
//MST(Minimum Spanning Tree)性质：
// 
//1>切分性质： --》普利姆（Prim）算法
    //设N = (V, E)是一个连通网, U是顶点集V的一个非空子集，
    //若边(u, v)是一条具有最小权值的边, 其中u属于U, V属于V - U, 
    //则必存在一棵包含边(u, v)的最小生成树

//2>