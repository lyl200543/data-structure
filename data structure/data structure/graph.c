#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0

//ͼ��graph��:�߼��ṹΪ��Զ�

//һ.ͼ���йظ��
//   1.ͼ�������޸�����ͱ߹���
//   2.����ͼ��ÿ���߶�û�з���
//     ����ͼ��ÿ���߶��з������еı�Ҳ����������
//   3.��ȫͼ�������������㶼�б�����
//       --��������ȫͼ��n�����㣬����n*(n-1)/2����
//       --��������ȫͼ��n�����㣬����n*(n-1)����
//   4.�ڽӣ��б�/����������������֮��Ĺ�ϵ
//   5.����������������/���Ͷ���֮��Ĺ�ϵ
//   6.����Ķȣ��붥������ıߵĸ���
//       --������ͼ�У��ȵĸ���������Ⱥͳ��ȸ���֮��
//   7.·���������ı߹��ɵĶ�������
//   8.·�����ȣ�·���ϵı�/������Ŀ��Ȩֵ֮��
//   9.��·����������һ����������һ��������ͬ��·��
//   10.��·�������˵�һ����������һ�����������ͬ�⣬���ඥ�㶼����ͬ��·��
//   11.��ͨͼ��������ͼ��ǿ��ͨͼ������������������u��v,���д�u��v��·��
//   12.����ͼ�б�/�������������ΪȨ������Ȩ��ͼΪ��
//   13.��ͼ������ͱ�/������ĳ��ͼ�Ķ���ͱ�/��
//   14.��ͨ������ǿ��ͨ��������ͼG�ļ�����ͨ��ͼ��ΪG����ͨ����
//       --����������ͨ��ͼ��������ͼ��G��ͨ��ͼ,��G���κβ��ڸ���ͼ�еĶ������, ��ͼ������ͨ
//   15.����С��ͨ��ͼ��:����ͼ��G����ͨ��ͼ,�ڸ���ͼ��ɾ���κ�һ���ߣ���ͼ������ͨ��
//   16.������ : ��������ͼG���ж���ļ�С��ͨ��ͼ��
//   17.����ɭ�� : �Է���ͨͼ, �ɸ�����ͨ�������������ļ��ϡ�
//


//��.ͼ�Ĵ洢�ṹ��
//   1.˳��洢�ṹ������/�ڽӾ����ʾ������
//     ����һ�������(��¼������Ϣ)��һ���ڽӾ��󣨱�ʾ��������֮��Ĺ�ϵ����
//     �ڽӾ�����һ����ά����(arcs[n][n]),arcs[i][j]��ʾ����Vi������Vj�Ƿ������1��ʾ������0��ʾ������
//
        //1>����ͼ��
		//����ͼ���ڽӾ����ǶԳƵ�;
		//����i�Ķ�=��i��(��)��1�ĸ���;
		//�ر�:��ȫͼ���ڽӾ�����,�Խ�Ԫ��Ϊ0,����1
 
        //2>����ͼ��
        //����1:����ͼ���ڽӾ�������ǲ��ԳƵġ�
        //����2:����ĳ��� = ��i��Ԫ��֮��
        //      �������� = ��i��Ԫ��֮��
        //      ����Ķ� = ��i��Ԫ��֮�� + ��i��Ԫ��֮��
        
        //3>��������
        //arcs[i][j]��Ŷ���Vi������Vj�ı�/���ϵ�Ȩ���б�����Ȩֵ���ޱ���������
       

//��������Ϊ����
//#define VerTexType char
//#define ArcsType int
//#define MVNum 100  //��󶥵���
//
//typedef struct
//{
//    VerTexType vexs[MVNum];  //�����
//    ArcsType arcs[MVNum][MVNum];  //�ڽӾ���
//    int vexnum, arcnum;  //�������ͱ���
//}AMGraph;  //������
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
//    //���붥����Ϣ
//    for (i = 0; i < G->vexnum; i++)
//    {
//        scanf(" %c", &(G->vexs[i]));
//    }
//    //��ʼ���ڽӾ���Ϊ����
//    for (i = 0; i < G->vexnum; i++)
//    {
//        for (j = 0; j < G->vexnum; j++)
//        {
//            G->arcs[i][j] = INT_MAX;
//        }
//    }
//    //�����ڽӾ��󣨱ߣ�����Ϣ
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
////   2.��ʽ�洢�ṹ���ڽӱ��ڽӶ��ر�ʮ��������
////     �ڽӱ���һλ����洢������Ϣ�������������ָ����ָ���ڽӵĶ��㣩����
////             ������洢�ߵ���Ϣ�����������Ķ��㣬Ȩֵ��ָ����һ���ڽӵĶ����ָ����
//
//
////������ͼΪ����
////����Ľ��ṹ��
//typedef struct
//{
//    VerTexType data;
//    ArcNode* firstarc;
//}VNode, AdjList[MVNum];   //AdjList v �൱�� VNode v[MVNum]
//
////�ߵĽ��ṹ��
//typedef struct ArcNode
//{
//    int adjvex;  //�ñ���ָ��Ķ���������±�
//    /*int weight;*/ 
//    struct ArcNode* nextarc;  //ָ����һ����
//}ArcNode;
//
////ͼ�Ľṹ��
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
//    //������������飩
//    for (i = 0; i < G->vexnum; i++)
//    {
//        scanf("%c", &(G->vertices[i].data));
//        G->vertices[i].firstarc = NULL;
//    }
//    //�����ߵ�����
//    for (i = 0; i < G->arcnum; i++)
//    {
//        VerTexType V1, V2;
//        scanf(" %c %c", &V1, &V2);
//        int x = LocateVex(*G, V1);
//        int y = LocateVex(*G, V2);
//        //�����߽��
//        //V1��V2
//        ArcNode* p1 = (ArcNode*)malloc(sizeof(ArcNode));
//        p1->adjvex = y;
//        p1->nextarc = G->vertices[x].firstarc;  //ǰ�巨����巨��Ҫ��������
//        G->vertices[x].firstarc = p1;
//        //V2��V1
//        ArcNode* p2 = (ArcNode*)malloc(sizeof(ArcNode));
//        p2->adjvex = x;
//        p2->nextarc = G->vertices[y].firstarc;
//        G->vertices[y].firstarc = p2;
//    }
//}
//ע�⣺ÿ��ѭ�����Զ��庯������ʱ���ֲ���������ջ�ռ���ڴ�ᱻ�ͷ�
//      ��malloc�ȶ�̬���ٵ��ڶ��ϵĿռ䲻�ᱻ�ͷţ�
//      ֻ�е�ʹ��free��������������main����������ʱ�ڴ�Żᱻ�ͷ�
 
//p1�Ǿֲ�����������ÿ��ѭ�����������µģ�ָ��̬����Ĳ�ͬ�ڴ�
//ÿ�ε��� malloc ʱ��p1������һ����ͬ�ĵ�ַ
//�㽫 p1 �ҽӵ������ĳ���ڵ��ϣ���˼�ʹѭ������������������Ȼ�����˶Զ�̬�����ڴ������


//�ڽӱ�
//1>����ͼ->ȱ�� : ����Ķ�����-->ʮ������
//2>����ͼ->ȱ�� : ÿ���߶�Ҫ�洢����-->�ڽӶ��ر�


//**********��.ͼ�ı����������������������DFS���͹����������������BFS��
// DFS:ʹ��ջ���ݹ�ͷǵݹ飨��ʽʹ��ջ����
// BFS:ʹ�ö��У��ǵݹ飩

//�������飺visited[i],��ʾ��i�����㱻���ʹ�
//1.DFS:���ݹ飩

// 1>������ͼ���ڽӾ���Ϊ��:(ʱ�临�Ӷ�Ϊn~2)
//int visited[MVNum] = { 0 };
//void DFS(AMGraph G, int v)  //v��ʾ�ӵڼ������㿪ʼ
//{
//    printf("%c ", G.vexs[v]);
//    visited[v] = 1; //��ʾ�ö����Ѿ����ʹ�
//    int i;
//    for (i = 0; i < G.vexnum; i++)  //�����������ھ������һ��
//    {
//        if (visited[i] == 0 && G.arcs[v][i] == 1)
//        {
//            DFS(G, i);  //ʵ�ֱ����ͻ���
//        }
//    }
//}

// 2>������ͼ���ڽӱ�Ϊ��:(ʱ�临�Ӷ�Ϊn+e)
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

//ȱ�㣺1�������ڵ�����ͨ������Ҫ��������ͨ����ʱҪʹ��forѭ��
//      2���ݹ�������ޣ�������������ʱ�����ܵ���ջ���



//2.DFS(�ǵݹ�)����ʽʹ��ջ�����ڽӾ���Ϊ����
//#define SElemType int
//typedef struct StackNode
//{
//    SElemType data;
//    struct StackNode* next;
//}StackNode,*LinkStack;
//
////��ջ�ĳ�ʼ��
//int InitStack(LinkStack* s)
//{
//    *s = NULL;
//    return OK;
//}
//
////�ж���ջ�Ƿ�Ϊ��
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
////��ջ
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
////��ջ
//int Pop(LinkStack* s, SElemType* e)
//{
//    if (*s == NULL)
//    {
//        printf("��ջ�޷���ջ");
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
//���ڲ���ͨ����
//void DFSTraverse(AMGraph* G)
//{
//    int i;
//    //��ʼ��visited
//    for (i = 0; i < G->vexnum; i++)
//    {
//        visited[i] = 0;
//    }
//    //����ÿ������
//    for (i = 0; i < G->vexnum; i++)
//    {
//        if (!visited[i])
//        {
//            DFS(&G, i);
//        }
//    }
//}
//
//������ͨ����
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


//3.BFS��
//int visited[MVNum];
//typedef struct
//{
//    VerTexType vexs[MVNum];  //�����
//    ArcsType arcs[MVNum][MVNum];  //�ڽӾ���
//    int vexnum, arcnum;  //�������ͱ���
//}AMGraph;  //������
//#define QElemType int 
//typedef struct Qnode
//{
//    QElemType data;
//    struct Qnode* next;
//}Qnode,*QueuePtr;
//
//typedef struct
//{
//    QueuePtr front;//ͷָ��
//    QueuePtr rear;//βָ��
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
////������ͨ����
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
////������ͨ����
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


//��.ͼ��Ӧ�ã�
//*********1.���·����(��Դ��S��������������·��)
// 1>��Դ�ģ���������ͼ��:(�ڽӾ���BFS)
//#define MAX 100
//#define INF -1
//
////���еĳ�ʼ��
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
////���
//int EnQueue(LinkQueue* q, QElemType e)
//{
//    QueuePtr p = (QueuePtr)malloc(sizeof(Qnode));
//    if (p == NULL)
//    {
//        printf("EnQueue:�����ڴ�ʧ��");
//        exit(1);
//    }
//    p->data = e;
//    p->next = NULL;
//    q->rear->next = p;
//    q->rear = p;
//    return OK;
//}
//
////����
//int DeQueue(LinkQueue* q, QElemType* e)
//{
//    if (q->front == q->rear)
//    {
//        printf("Ϊ�նԣ��޷�ɾ��Ԫ��");
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
//    int dist[MAX]; //Դ�㵽����ľ���
//    int path[MAX]; //��ĳ���������һ������
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
//    //BFS����
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


// 2>��Դ�ģ���������������Ȩ������ 
// Dijkstra �㷨--�������ڷǸ�Ȩֵͼ
// ·�����밴�յ������ǵݼ�����˳������

//��1���ڽӾ���+��������Сdist ��T(|v|~2) --�������ڳ���ͼ��v~2==e��
//#include <limits.h>  //�����������/Сֵ INT_MAX
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
//    //��ʼ��
//    int dist[MAX], path[MAX], visited[MAX] = { 0 };
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        //ֻ�ܴ����������Ҫ�ж�dist[v] + graph[v][i] < dist[i]
//        dist[i] = INF;
//        path[i] = -1;
//    }
//    dist[s] = 0;
//    //�����·��
//    while (1)
//    {
//        //��δ��¼�Ķ�����dist��С�ĵ�
//        int v = mindist(dist, visited, n);
//        if (v == -1)
//        {
//            break;
//        }
//        visited[v] = 1;
//        //�����ڽӵ��distֵ
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


//��2���ڽӱ�+��С�ѣ�T(|v|log|v|)-->������ϡ��ͼ��v==e��
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//
//#define MAX_VERTICES 100
//#define INF INT_MAX
//
//// �ڽӱ��еĽڵ�
//typedef struct AdjListNode {
//    int dest;
//    int weight;
//    struct AdjListNode* next;
//} AdjListNode;
//
//// �ڽӱ�
//typedef struct AdjList {
//    AdjListNode* head;
//} AdjList;
//
//// ͼ�Ľṹ
//typedef struct Graph {
//    int V;
//    AdjList* array;
//} Graph;
//
//// ��С���еĽڵ�
//typedef struct MinHeapNode {
//    int v;
//    int dist;
//} MinHeapNode;
//
//// ��С�ѵĽṹ
//typedef struct MinHeap {
//    int size;
//    int capacity;
//    int* pos; // pos[i]��ʾ����i�ڶ��е�λ��
//    MinHeapNode** array;
//} MinHeap;
//
//// ����һ���µ��ڽӱ�ڵ�
//AdjListNode* newAdjListNode(int dest, int weight) {
//    AdjListNode* newNode = (AdjListNode*)malloc(sizeof(AdjListNode));
//    newNode->dest = dest;
//    newNode->weight = weight;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// ����һ��ͼ
//Graph* createGraph(int V) {
//    Graph* graph = (Graph*)malloc(sizeof(Graph));
//    graph->V = V;
//    graph->array = (AdjList*)malloc(V * sizeof(AdjList));
//    for (int i = 0; i < V; ++i)
//        graph->array[i].head = NULL;
//    return graph;
//}
//
//// ��ӱߵ�ͼ��
//void addEdge(Graph* graph, int src, int dest, int weight) {
//    AdjListNode* newNode = newAdjListNode(dest, weight);
//    newNode->next = graph->array[src].head;
//    graph->array[src].head = newNode;
//
//    // ����ͼ��Ҫ��ӷ����
//    newNode = newAdjListNode(src, weight);
//    newNode->next = graph->array[dest].head;
//    graph->array[dest].head = newNode;
//}
//
//// ����һ����С�ѽڵ�
//MinHeapNode* newMinHeapNode(int v, int dist) {
//    MinHeapNode* minHeapNode = (MinHeapNode*)malloc(sizeof(MinHeapNode));
//    minHeapNode->v = v;
//    minHeapNode->dist = dist;
//    return minHeapNode;
//}
//
//// ����һ����С��
//MinHeap* createMinHeap(int capacity) {
//    MinHeap* minHeap = (MinHeap*)malloc(sizeof(MinHeap));
//    minHeap->pos = (int*)malloc(capacity * sizeof(int));
//    minHeap->size = 0;
//    minHeap->capacity = capacity;
//    minHeap->array = (MinHeapNode**)malloc(capacity * sizeof(MinHeapNode*));
//    return minHeap;
//}
//
//// ����������С�ѽڵ�
//void swapMinHeapNode(MinHeapNode** a, MinHeapNode** b) {
//    MinHeapNode* t = *a;
//    *a = *b;
//    *b = t;
//}
//
//// ��С�ѵĶѻ�����
//void minHeapify(MinHeap* minHeap, int idx) {
//    int smallest, left, right;
//    smallest = idx;
//    left = 2 * idx + 1;
//    right = 2 * idx + 2;
//
//    if (left < minHeap->size && minHeap->array[left]->dist < minHeap->array[smallest]->dist)
//        smallest = left;
//
//    if (right < minHeap->size && minHeap->array[right]->dist < minHeap->array[smallest]->dist)
//        smallest = right;
//
//    if (smallest != idx) {
//        MinHeapNode* smallestNode = minHeap->array[smallest];
//        MinHeapNode* idxNode = minHeap->array[idx];
//
//        minHeap->pos[smallestNode->v] = idx;
//        minHeap->pos[idxNode->v] = smallest;
//
//        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
//
//        minHeapify(minHeap, smallest);
//    }
//}
//
//// �����С���Ƿ�Ϊ��
//int isEmpty(MinHeap* minHeap) {
//    return minHeap->size == 0;
//}
//
//// ��ȡ��С���е���С�ڵ�
//MinHeapNode* extractMin(MinHeap* minHeap) {
//    if (isEmpty(minHeap))
//        return NULL;
//
//    MinHeapNode* root = minHeap->array[0];
//    MinHeapNode* lastNode = minHeap->array[minHeap->size - 1];
//    minHeap->array[0] = lastNode;
//
//    minHeap->pos[root->v] = minHeap->size - 1;
//    minHeap->pos[lastNode->v] = 0;
//
//    --minHeap->size;
//    minHeapify(minHeap, 0);
//
//    return root;
//}
//
//// ������С����ĳ���ڵ�ľ���ֵ
//void decreaseKey(MinHeap* minHeap, int v, int dist) {
//    int i = minHeap->pos[v];
//    minHeap->array[i]->dist = dist;
//
//    while (i && minHeap->array[i]->dist < minHeap->array[(i - 1) / 2]->dist) {
//        minHeap->pos[minHeap->array[i]->v] = (i - 1) / 2;
//        minHeap->pos[minHeap->array[(i - 1) / 2]->v] = i;
//        swapMinHeapNode(&minHeap->array[i], &minHeap->array[(i - 1) / 2]);
//
//        i = (i - 1) / 2;
//    }
//}
//
//// ��鶥���Ƿ�����С����
//int isInMinHeap(MinHeap* minHeap, int v) {
//    return minHeap->pos[v] < minHeap->size;
//}
//
//// Dijkstra�㷨��ʵ��
//void dijkstra(Graph* graph, int src) {
//    int V = graph->V;
//    int dist[MAX_VERTICES];
//
//    MinHeap* minHeap = createMinHeap(V);
//
//    for (int v = 0; v < V; ++v) {
//        dist[v] = INF;
//        minHeap->array[v] = newMinHeapNode(v, dist[v]);
//        minHeap->pos[v] = v;
//    }
//
//    minHeap->array[src] = newMinHeapNode(src, dist[src]);
//    minHeap->pos[src] = src;
//    dist[src] = 0;
//    decreaseKey(minHeap, src, dist[src]);
//
//    minHeap->size = V;
//
//    while (!isEmpty(minHeap)) {
//        MinHeapNode* minHeapNode = extractMin(minHeap);
//        int u = minHeapNode->v;
//
//        AdjListNode* pCrawl = graph->array[u].head;
//        while (pCrawl != NULL) {
//            int v = pCrawl->dest;
//
//            if (isInMinHeap(minHeap, v) && dist[u] != INF && pCrawl->weight + dist[u] < dist[v]) {
//                dist[v] = dist[u] + pCrawl->weight;
//                decreaseKey(minHeap, v, dist[v]);
//            }
//            pCrawl = pCrawl->next;
//        }
//    }
//
//    printf("Vertex   Distance from Source\n");
//    for (int i = 0; i < V; ++i)
//        printf("%d \t\t %d\n", i, dist[i]);
//}
//
//int main() {
//    int V = 9;
//    Graph* graph = createGraph(V);
//    addEdge(graph, 0, 1, 4);
//    addEdge(graph, 0, 7, 8);
//    addEdge(graph, 1, 2, 8);
//    addEdge(graph, 1, 7, 11);
//    addEdge(graph, 2, 3, 7);
//    addEdge(graph, 2, 8, 2);
//    addEdge(graph, 2, 5, 4);
//    addEdge(graph, 3, 4, 9);
//    addEdge(graph, 3, 5, 14);
//    addEdge(graph, 4, 5, 10);
//    addEdge(graph, 5, 6, 2);
//    addEdge(graph, 6, 7, 1);
//    addEdge(graph, 6, 8, 6);
//    addEdge(graph, 7, 8, 7);
//
//    dijkstra(graph, 0);
//
//    return 0;
//}



// 3>��Դ���·�������ж����֮������·��  -->Floyd�㷨(���ó���ͼ)(|v~3|)
//#include<stdio.h>
//#include<limits.h>
//#define INF INT_MAX
//#define V 4
//void PrintPath(int path[][V], int i, int j)
//{
//    if (i == path[i][j])
//    {
//        printf("%d -> %d", i, j);
//        return;
//    }
//    PrintPath(path, i, path[i][j]);
//    printf(" -> %d", j);
//}
//
//int Floyd(int G[][V])
//{
//    int dist[V][V];
//    int path[V][V];
//    int i, j, k;
//    for (i = 0; i < V; i++)
//    {
//        for (j = 0; j < V; j++)
//        {
//            dist[i][j] = G[i][j];
//            //path���飺���i->j�Ŀ���j��ǰһ�����-->����ݹ��ӡ
//            //i->jʱ��path[i][j]=i
//            if (i != j && dist[i][j] != INF)
//                path[i][j] = i;
//            else
//                path[i][j] = INF;
//        }
//    }
//    //����
//    for (k = 0; k < V; k++)
//    {
//        for (i = 0; i < V; i++)
//        {
//            for (j = 0; j < V; j++)
//            {
//                //������������ϣ�=INF���ж�
//                //INF+2(������)-->�������-->��Ϊ��Сֵ��������
//                if (dist[i][k]!=INF && dist[k][j] != INF && dist[i][k] + dist[k][j] < dist[i][j])
//                {
//                    dist[i][j] = dist[i][k] + dist[k][j];
//                    path[i][j] = path[k][j];
//                    //����ֵȦ��Floyd�㷨�������븺ֵȦ����·��֮������и�����
//                    /*if (i == j && dist[i][j] < 0)
//                    {
//                        return 0;
//                    }*/
//                }
//            }
//        }
//    }
//    //��ӡ
//    for (i = 0; i < V; i++)
//    {
//        for (j = 0; j < V; j++)
//        {
//            if (i != j && dist[i][j] != INF)
//            {
//                PrintPath(path, i, j);
//                printf("\n");
//            }
//        }
//    }
//    return 1;
//}
//
//int main() {
//    // ����ͼ���ڽӾ���
//    int graph[V][V] = {
//        {0, 5, INF, 10},  // 0 ����������ľ���
//        {INF, 0, 3, INF}, // 1 ����������ľ���
//        {INF, INF, 0, 1},  // 2 ����������ľ���
//        {INF, INF, INF, 0} // 3 ����������ľ���
//    };
//
//    // ���� Floyd-Warshall �㷨
//    Floyd(graph);
//
//    return 0;
//}




//*********2.��С��������
//������: ��������ͼ������G���ж���ļ�С��ͨ��ͼ������һ�������޻�·��
//��n�������n-1����
//��С���������������и����ߵ�Ȩֵ֮����С��������

//������С��������
//MST(Minimum Spanning Tree)���ʣ�
// 
//1>Prim������ķ���㷨:-->���������ͼ��O(|V|~2)��O(Elog|E|)��
//Prim�㷨����֤��û�л�·������Ҫ�����ж�
//#include<stdio.h>
//#include<stdlib.h>
//#include<limits.h>
//#define INF INT_MAX
//#define MAX 100
//typedef struct MGraph
//{
//    int vernum;
//    int Graph[MAX][MAX];
//}*MGraph;
//
//typedef struct LNode
//{
//    int ver;
//    int weight;
//    struct LNode* next;
//} *AdjList;
//
//typedef struct LGraph
//{
//    int vernum;
//    AdjList G[MAX];
//}*LGraph;
//
//typedef struct Edge
//{
//    int v1, v2;
//    int weight;
//}*Edge;
//
//LGraph CreatLGraph(int vernum)
//{
//    LGraph LG = (LGraph)malloc(sizeof(struct LGraph));
//    LG->vernum = vernum;
//    for (int i = 0; i < vernum; i++)
//    {
//        LG->G[i] = NULL;
//    }
//    return LG;
//}
//
//void InsertEdge(LGraph MST, Edge E)
//{
//    AdjList newnode;
//    newnode = (AdjList)malloc(sizeof(struct LNode));
//    newnode->ver = E->v2;
//    newnode->weight = E->weight;
//    newnode->next = MST->G[E->v1]->next;
//    MST->G[E->v1]->next = newnode;
//
//    //����
//    newnode = (AdjList)malloc(sizeof(struct LNode));
//    newnode->ver = E->v1;
//    newnode->weight = E->weight;
//    newnode->next = MST->G[E->v2]->next;
//    MST->G[E->v2]->next = newnode;
//}
//
//int FindMinDist(MGraph graph, int dist[])
//{
//    int minv = -1;
//    int min = INF;
//    for (int i = 0; i < graph->vernum; i++)
//    {
//        if (dist[i] != 0 && dist[i] < min)
//        {
//            min = dist[i];
//            minv = i;
//        }
//    }
//    return minv;
//}
//
////���±�Ϊ0�ĵ���Ϊ�����
////dist[]��ʾ����������������֮��ľ��룬Ϊ0��ʾ�Ѿ�����������
//int Prim(MGraph graph, LGraph MST)
//{
//    int dist[MAX];
//    int parent[MAX];
//    int n = graph->vernum;
//    MST = CreatLGraph(n);
//    Edge E = (Edge)malloc(sizeof(struct Edge));
//    int vcout = 0, totalweight = 0;
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        dist[i] = graph->Graph[0][i];
//        parent[i] = 0;
//    }
//    parent[0] = -1;
//    vcout++;
//    while (1)
//    {
//        int v = FindMinDist(graph, dist);
//        if (v == -1)
//        {
//            break;
//        }
//        E->v1 = parent[v];
//        E->v2 = v;
//        E->weight = dist[v];
//        InsertEdge(MST, E);
//        totalweight += dist[v];
//        dist[v] = 0;
//        vcout++;
//        for (i = 0; i < n; i++)
//        {
//            if (dist[i] != 0 && graph->Graph[v][i] < dist[i])
//            {
//                dist[i] = graph->Graph[v][i];
//                parent[i] = v;
//            }
//        }
//    }
//    if (vcout < n)
//        totalweight = -1;
//    return totalweight;
//}
//
//int main()
//{
//    return 0;
//}


//2>Kruskal�㷨����³˹�����㷨����-->������ϡ��ͼ��O(Elog|E|)��




//**********3.��������

