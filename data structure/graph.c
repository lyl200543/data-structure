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
//        if (visited[v] == 0 && G.arcs[v][i] == 1)
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

//�ܽ᣺1�������ڵ�����ͨ������Ҫ��������ͨ����ʱҪʹ��forѭ��
//      2���ݹ�������ޣ�������������ʱ�����ܵ���ջ���

//2.DFS(�ǵݹ�)����ʽʹ��ջ
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


//3.BFS���ǵݹ飩��
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

//��1���ڽӾ���
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


//��2���ڽӱ�+��С�ѣ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <limits.h>
//#include <stdbool.h>
//
//#define MAX 100 // ��󶥵���
//#define INF INT_MAX // ���ڱ�ʾ�����
//
//// ����ѽڵ�
//typedef struct {
//    int vertex;
//    int distance;
//} MinHeapNode;
//
//// ������С��
//typedef struct {
//    int size;
//    int capacity;
//    int* position;
//    MinHeapNode** array;
//} MinHeap;
//
//// ����һ���µĶѽڵ�
//MinHeapNode* createMinHeapNode(int vertex, int distance) {
//    MinHeapNode* node = (MinHeapNode*)malloc(sizeof(MinHeapNode));
//    node->vertex = vertex;
//    node->distance = distance;
//    return node;
//}
//
//// ������С��
//MinHeap* createMinHeap(int capacity) {
//    MinHeap* heap = (MinHeap*)malloc(sizeof(MinHeap));
//    heap->size = 0;
//    heap->capacity = capacity;
//    heap->position = (int*)malloc(capacity * sizeof(int));
//    heap->array = (MinHeapNode**)malloc(capacity * sizeof(MinHeapNode*));
//    return heap;
//}
//
//// �ѵĽ�������
//void swapMinHeapNode(MinHeapNode** a, MinHeapNode** b) {
//    MinHeapNode* temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//// �ѻ�����
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
//        // ����λ��
//        heap->position[smallestNode->vertex] = idx;
//        heap->position[idxNode->vertex] = smallest;
//
//        // �����ڵ�
//        swapMinHeapNode(&heap->array[smallest], &heap->array[idx]);
//
//        minHeapify(heap, smallest);
//    }
//}
//
//// �����Ƿ�Ϊ��
//int isEmpty(MinHeap* heap) {
//    return heap->size == 0;
//}
//
//// �Ӷ�����ȡ��Сֵ
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
//// ��С����ľ���ֵ
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
//// ��鶥���Ƿ��ڶ���
//int isInMinHeap(MinHeap* heap, int vertex) {
//    return heap->position[vertex] < heap->size;
//}
//
//// ��ӡ���
//void printSolution(int dist[], int V) {
//    printf("Vertex \t Distance from Source\n");
//    for (int i = 0; i < V; i++) {
//        printf("%d \t %d\n", i, dist[i]);
//    }
//}
//
//// Dijkstra�㷨ʵ�֣����ڶѣ�
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

// 3>��Դ���·��
// 
//*********2.��С��������
//������: ��������ͼ������G���ж���ļ�С��ͨ��ͼ(��DFS������DFS�����õ�)
//��n�������n-1����
//��С���������������и����ߵ�Ȩֵ֮����С��������

//������С��������
//MST(Minimum Spanning Tree)���ʣ�
// 
//1>�з����ʣ� --������ķ��Prim���㷨
    //��N = (V, E)��һ����ͨ��, U�Ƕ��㼯V��һ���ǿ��Ӽ���
    //����(u, v)��һ��������СȨֵ�ı�, ����u����U, V����V - U, 
    //��ش���һ�ð�����(u, v)����С������

//2>