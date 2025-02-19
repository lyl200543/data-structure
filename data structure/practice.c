#define  _CRT_SECURE_NO_WARNINGS

//1.列出连通集：
//#include<stdio.h>
//#define MAXSIZE 10
//int visited[MAXSIZE];
//
//typedef struct Graph
//{
//	int arcs[MAXSIZE][MAXSIZE];
//	int vernum, arcnum;
//}Graph, * PtrGraph;
//
//void BuildGraph(PtrGraph G)
//{
//	int i, j, a, b;
//	for (i = 0; i < G->vernum ; i++)
//	{
//		for (j = 0; j < G->vernum ; j++)
//		{
//			G->arcs[i][j] = 0;
//		}
//	}
//	for (i = 0; i < G->arcnum; i++)
//	{
//		scanf("%d %d", &a, &b);
//		G->arcs[a][b] = 1;
//		G->arcs[b][a] = 1;
//	}
//}
//
//void DFS(PtrGraph G, int n)
//{
//	printf("%d ", n);
//	visited[n] = 1;
//	int i;
//	for (i = 0; i < G->vernum; i++)
//	{
//		if (!visited[i] && G->arcs[n][i]==1)
//		{
//			DFS(G, i);
//		}
//	}
//}
//
//void DFSTraverse(PtrGraph G)
//{
//	int i;
//	for (i = 0; i < G->vernum; i++)
//	{
//		visited[i] = 0;
//	}
//	for (i = 0; i < G->vernum; i++)
//	{
//		if (!visited[i])
//		{
//			printf("{ ");
//			DFS(G, i);
//			printf("}\n");
//		}
//	}
//}
//
//typedef struct Queue
//{
//	int queue[MAXSIZE];
//	int front, rear;
//}Queue,*PtrQueue;
//
//void InitQueue(PtrQueue Q)
//{
//	Q->front = Q->rear = 0;
//}
//
//int IsEmpty(Queue Q)
//{
//	if (Q.front == Q.rear)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//void EnQueue(PtrQueue Q, int n)
//{
//	Q->queue[Q->rear++] = n;
//}
//
//int DeQueue(PtrQueue Q)
//{
//	if (IsEmpty(*Q))
//	{
//		printf("the queue is empty");
//		return -1;
//	}
//	return Q->queue[Q->front++];
//}
//
//void BFS(PtrGraph G, int n)
//{
//	Queue Q;
//	InitQueue(&Q);
//	EnQueue(&Q, n);
//	printf("%d ", n);
//	visited[n] = 1;
//	while (!IsEmpty(Q))
//	{
//		int q = DeQueue(&Q);
//		for (int i = 0; i < G->vernum; i++)
//		{
//			if (!visited[i] && G->arcs[q][i] == 1)
//			{
//				EnQueue(&Q, i);
//				printf("%d ", i);
//				visited[i] = 1;
//			}
//		}
//	}
//
//}
//
//void BFSTraverse(PtrGraph G)
//{
//	int i;
//	for (i = 0; i < G->vernum; i++)
//	{
//		visited[i] = 0;
//	}
//	for (i = 0; i < G->vernum; i++)
//	{
//		if (!visited[i])
//		{
//			printf("{ ");
//			BFS(G, i);
//			printf("}\n");
//		}
//	}
//}
//
//int main()
//{
//	Graph G;
//	scanf("%d %d", &G.vernum, &G.arcnum);
//	BuildGraph(&G);
//	DFSTraverse(&G);
//	BFSTraverse(&G);
//	return 0;
//}



//2.拯救007：
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//
//#define MAXSIZE 101
//int visited[MAXSIZE] = { 0 };
//int flag = 0;
//
//typedef struct GNode
//{
//	int ver;
//	struct GNode* next;
//}GNode, * PtrGNode;
//
//typedef struct CoordNode  //坐标
//{
//	int x, y;
//	PtrGNode firstver;
//}CoordNode;
//
//typedef struct Graph
//{
//	CoordNode GList[MAXSIZE];
//	int vernum, d;
//}Graph, * PtrGraph;
//
//void CreateNode(PtrGraph G, int a, int b)
//{
//	PtrGNode p = (PtrGNode)malloc(sizeof(GNode));
//	p->ver = a;
//	p->next = G->GList[b].firstver;
//	G->GList[b].firstver = p;
//	p = (PtrGNode)malloc(sizeof(GNode));
//	p->ver = b;
//	p->next = G->GList[a].firstver;
//	G->GList[a].firstver = p;
//}
//
//CreateArc(PtrGraph G)
//{
//	int i, j;
//	for (i = 0; i < G->vernum; i++)
//	{
//		G->GList[i].firstver = NULL;
//	}
//	for (i = 1; i < G->vernum; i++)
//	{
//		scanf("%d %d", &G->GList[i].x, &G->GList[i].y);
//		if (pow(G->GList[i].x, 2) + pow(G->GList[i].y, 2) <= pow(7.5 + G->d, 2))
//		{
//			CreateNode(G, 0, i);
//		}
//	}
//	for (i = 1; i < G->vernum; i++)
//	{
//		for (j = i + 1; j < G->vernum; j++)
//		{
//			if (pow(G->GList[i].x - G->GList[j].x, 2) + pow(G->GList[i].y - G->GList[j].y, 2) <= pow(G->d, 2))
//			{
//				CreateNode(G, i, j);
//			}
//		}
//	}
//}
//
//int Check(Graph G, int n)
//{
//	if (abs(G.GList[n].x - 50) <= G.d || abs(G.GList[n].x + 50) <= G.d)
//	{
//		return 1;
//	}
//	if (abs(G.GList[n].y - 50) <= G.d || abs(G.GList[n].y + 50) <= G.d)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int DFS(Graph G, int n)
//{
//	visited[n] = 1;
//	if (Check(G, n))
//	{
//		flag = 1;
//	}
//	PtrGNode p = G.GList[n].firstver;
//	for (; p != NULL; p = p->next)
//	{
//		if (visited[p->ver] == 0)
//		{
//			DFS(G, p->ver);	
//		}
//	}
//	if (flag == 1)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	Graph G;
//	int n, d;
//	scanf("%d %d", &n, &d);
//	G.vernum = n + 1;
//	G.d = d;
//	CreateArc(&G);
//	if (DFS(G, 0))
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//不需要构建邻接矩阵或邻接表：

//#include <stdio.h>
//#include <math.h>
//#include <stdbool.h>
//
//#define MAX_N 100
//#define ISLAND_RADIUS 7.5
//#define LAKE_EDGE 50.0
//
//typedef struct {
//    double x, y;
//} Crocodile;
//
//Crocodile crocodiles[MAX_N];
//bool visited[MAX_N];
//int N;
//double D;
//
//// Function to calculate the distance between two points
//double distance(double x1, double y1, double x2, double y2) {
//    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//
//// Function to check if a crocodile is close enough to the shore
//bool can_escape(Crocodile c) {
//    return (LAKE_EDGE - fabs(c.x) <= D) || (LAKE_EDGE - fabs(c.y) <= D);
//}
//
//// Depth-First Search to traverse the graph
//bool dfs(int index) {
//    visited[index] = true;
//    if (can_escape(crocodiles[index])) {
//        return true;
//    }
//    for (int i = 0; i < N; i++) {
//        if (!visited[i] && distance(crocodiles[index].x, crocodiles[index].y, crocodiles[i].x, crocodiles[i].y) <= D) {
//            if (dfs(i)) {
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main() {
//    scanf("%d %lf", &N, &D);
//    for (int i = 0; i < N; i++) {
//        scanf("%lf %lf", &crocodiles[i].x, &crocodiles[i].y);
//    }
//
//    // Check for each crocodile within reach of the central island
//    for (int i = 0; i < N; i++) {
//        if (!visited[i] && distance(0, 0, crocodiles[i].x, crocodiles[i].y) <= D + ISLAND_RADIUS) {
//            if (dfs(i)) {
//                printf("Yes\n");
//                return 0;
//            }
//        }
//    }
//
//    printf("No\n");
//    return 0;
//}


//3.六度空间：
//#include<stdio.h>
//#include<stdlib.h>
//#define MAXSIZE 1001
//typedef struct GNode
//{
//	int ver;
//	struct GNode* next;
//}GNode, * PtrGNode;
//
//typedef struct Graph
//{
//	PtrGNode GList[MAXSIZE];
//	int vernum, arcnum;
//}Graph, * PtrGraph;
//
//void CreateGNode(PtrGraph G, int m, int n)
//{
//	PtrGNode p = (PtrGNode)malloc(sizeof(GNode));
//	if (p == NULL)
//	{
//		perror("CreateGNode:");
//		exit(1);
//	}
//	p->ver = m;
//	p->next = G->GList[n];
//	G->GList[n] = p;
//	p = (PtrGNode)malloc(sizeof(GNode));
//	if (p == NULL)
//	{
//		perror("CreateGNode:");
//		exit(1);
//	}
//	p->ver = n;
//	p->next = G->GList[m];
//	G->GList[m] = p;
//}
//
//void BuildGraph(PtrGraph G)
//{
//	int i;
//	for (i = 1; i <= G->vernum; i++)
//	{
//		G->GList[i] = NULL;
//	}
//	for (i = 0; i < G->arcnum; i++)
//	{
//		int m, n;
//		scanf("%d %d", &m, &n);
//		CreateGNode(G, m, n);
//	}
//}
//
//
//typedef struct QNode
//{
//	int index;
//	struct QNode* next;
//}QNode, * PtrQNode;
//
//typedef struct Queue
//{
//	PtrQNode front, rear;
//}Queue, * PtrQueue;
//
//void InitQueue(PtrQueue Q)
//{
//	PtrQNode p = (PtrQNode)malloc(sizeof(QNode));
//	if (!p) {
//		perror("Queue initialization failed");
//		exit(1);
//	}
//	p->next = NULL;
//	Q->front = Q->rear = p;
//}
//
//int IsEmpty(Queue Q)
//{
//	return Q.front == Q.rear;
//}
//
//void EnQueue(PtrQueue Q, int n)
//{
//	PtrQNode p = (PtrQNode)malloc(sizeof(QNode));
//	if (!p) {
//		perror("Queue EnQueue failed");
//		exit(1);
//	}
//	p->index = n;
//	p->next = NULL;
//	Q->rear->next = p;
//	Q->rear = p;
//}
//
//int DeQueue(PtrQueue Q)
//{
//	if (IsEmpty(*Q))
//	{
//		printf("the queue is empty\n");
//		exit(1);
//	}
//	PtrQNode p = Q->front->next;
//	int tmp = p->index;
//	if (p == Q->rear)
//	{
//		Q->rear = Q->front;
//	}
//	Q->front->next = p->next;
//	free(p);
//	return tmp;
//}
//
////*******在BFS的基础上加了计算访问节点个数以及控制BFS遍历层数的功能
//int BFS(PtrGraph G, int n)
//{
//	int visited[MAXSIZE] = { 0 };
//	int count = 1;
//	int level = 0, last = n, tail = n;
//	visited[n] = 1;
//	Queue Q;
//	InitQueue(&Q);
//	EnQueue(&Q, n);
//	while (!IsEmpty(Q))
//	{
//		int tmp = DeQueue(&Q);
//		for (PtrGNode p = G->GList[tmp]; p != NULL; p = p->next)
//		{
//			if (visited[p->ver] == 0)
//			{
//				EnQueue(&Q, p->ver);
//				visited[p->ver] = 1;
//				count++;
//				tail = p->ver;
//			}
//		}
//
//		//*******重要理解：
//		if (tmp == last)  //tmp出队说明它的所有邻接点被访问
//		{
//			level++;
//			last = tail;
//		}
//		if (level == 6)
//		{
//			break;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	Graph G;
//	scanf("%d %d", &G.vernum, &G.arcnum);
//	BuildGraph(&G);
//	int i;
//	for (i = 1; i <= G.vernum; i++)
//	{
//		int nodes = BFS(&G, i);
//		double rate = (double)nodes / G.vernum;
//		printf("%d: %.2f%%\n", i, rate * 100);
//	}
//	return 0;
//}


//4.Tree Traversals Again
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAXSIZE 31
//
//typedef struct Node
//{
//	int data;
//	struct Node* left, * right;
//}Node, * PtrNode;
//typedef PtrNode Tree;
//
//typedef struct Stack
//{
//	//int arr[MAXSIZE];
//	Tree arr[MAXSIZE];
//	int top;
//}Stack, * PtrStack;
//
//void InitStack(PtrStack S)
//{
//	S->top = 0;
//}
//
//int IsEmpty(Stack S)
//{
//	return S.top == 0;
//}
//
//void Push(PtrStack S, /*int n*/PtrNode node)
//{
//	if (S->top == MAXSIZE)
//	{
//		perror("Push:");
//		exit(1);
//	}
//	S->arr[++S->top] = node;
//}
//
///*int*/PtrNode Pop(PtrStack S)
//{
//	if (S->top == 0)
//	{
//		perror("Pop:");
//		exit(1);
//	}
//	return S->arr[S->top--];
//}
//
//Tree CreateTree(int n)
//{
//	Tree T = NULL, tmp = NULL;
//	//int count = 0;
//	Stack S;
//	InitStack(&S);
//	//int visited[MAXSIZE] = { 0 };
//	int i;
//	for (i = 0; i < 2 * n; i++)
//	{
//		char ch[5];
//		scanf("%s", /*&*/ch);
//		if (strcmp("Push", ch) == 0)
//		{
//			int m;
//			scanf("%d", &m);
//			//if (i == 0)
//			//{
//			//	T = (Tree)malloc(sizeof(Node));
//			//	T->data = m;
//			//	T->left = T->right = NULL;
//			//	tmp = T;
//			//	Push(&S, m);
//			//	count++;
//			//}
//			//else
//			//{
//			//	if (visited[tmp->data] == 0)
//			//	{
//			//		tmp->left = (Tree)malloc(sizeof(Node));
//			//		tmp->left->data = m;
//			//		Push(&S, m);
//			//		count++;
//			//		tmp = tmp->left;
//			//		tmp->left = tmp->right = NULL;
//			//	}
//			//	else
//			//	{
//			//		/*tmp->right = (Tree)malloc(sizeof(Node));
//			//		tmp->right->data = m;
//			//		Push(&S, m);
//			//		count++;
//			//		tmp = tmp->right;*/
//			//		CreateTree(tmp->right);
//			//	}
//			//}
//
//			//创建新结点：
//			PtrNode newnode = (PtrNode)malloc(sizeof(Node));
//			newnode->data = m;
//			newnode->left = newnode->right = NULL;
//
//			//********重要理解：
//			if (!T)
//			{
//				T = newnode;
//			}
//			else if (!tmp->left)
//			{
//				tmp->left = newnode;
//			}
//			else
//			{
//				tmp->right = newnode;
//			}
//
//			Push(&S, newnode);
//			tmp = newnode;
//		}
//		else  //pop:
//		{
//			//int j;
//			//int m = Pop(&S);
//			////count--;
//			////visited[m] = 1;
//			//if (count == 0)
//			//{
//			//	tmp = T;
//			//}
//			//for (j = 0; j < count; j++)
//			//{
//			//	tmp = T->left;
//			//}
//			tmp = Pop(&S);
//		}
//	}
//	return T;
//}
//
//int flag = 0;
//void PostOrderTree(Tree T)
//{
//	if (!T)
//	{
//		return;
//	}
//	PostOrderTree(T->left);
//	PostOrderTree(T->right);
//	/*flag++;
//	if (flag == 1)
//		printf("%d", T->data);
//	else
//		printf(" %d", T->data);*/
//	if (flag == 0)
//	{
//		printf("%d", T->data);
//		flag = 1;
//	}
//	else
//		printf(" %d", T->data);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Tree T = CreateTree(n);
//	PostOrderTree(T);
//	return 0;
//}

//改进：不需要建树：
//#include<stdio.h>
//#include<string.h>
//#define MAXSIZE 30
//
//typedef struct Stack
//{
//	int data[MAXSIZE];
//	int top;
//}Stack, * PtrStack;
//
//void InitStack(PtrStack S)
//{
//	S->top = -1;
//}
//
//int IsEmpty(Stack S)
//{
//	return S.top == -1;
//}
//
//void Push(PtrStack S, int e)
//{
//	S->data[++S->top] = e;
//}
//
//int Pop(PtrStack S)
//{
//	if (IsEmpty(*S)) return;
//	return S->data[S->top--];
//}
//
//
//int pre[MAXSIZE], mid[MAXSIZE], post[MAXSIZE];
//void BuildOrder(int n)
//{
//	int i, j = 0, k = 0;
//	char ch[5];
//	Stack S;
//	InitStack(&S);
//	for (i = 0; i < 2 * n; i++)
//	{
//		scanf("%s", ch);
//		if (strcmp("Push", ch) == 0)
//		{
//			int m;
//			scanf("%d", &m);
//			pre[j++] = m;
//			Push(&S, m);
//		}
//		else
//		{
//			int m;
//			m = Pop(&S);
//			mid[k++] = m;
//		}
//	}
//}
//
//*******重要理解：通过先序和中序--》找出后序
//void PostOrder(int preL, int midL, int postL, int n)  
//{
//	if (n == 0)
//	{
//		return;
//	}
//	if (n == 1)
//	{
//		post[postL] = pre[preL];
//		return;
//	}
//	int root = pre[preL];
//	post[postL + n - 1] = root; //确定根结点
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		if (mid[midL + i] == root)
//		{
//			break;
//		}
//	}
//	int L = i, R = n - L - 1;
//	PostOrder(preL + 1, midL, postL, L);
//	PostOrder(preL + L + 1, midL + L + 1, postL + L, R);
//}
//
//void Print(int n)
//{
//	printf("%d", post[0]);
//	for (int i = 1; i < n; i++)
//	{
//		printf(" %d", post[i]);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	BuildOrder(n);
//	PostOrder(0, 0, 0, n);
//	Print(n);
//	return 0;
//}



//5.Complete Binary Search Tree
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct TNode
//{
//	int data;
//	struct TNode* left, * right;
//}TNode, * PtrTNode;
//typedef PtrTNode Tree;
//
//typedef struct Queue
//{
//	PtrTNode* base;
//	int front;
//	int rear;
//}Queue,*PtrQueue;
//
//void InitQueue(PtrQueue Q, int n)
//{
//	Q->base = (PtrTNode*)malloc(n * sizeof(PtrTNode));
//	if (Q->base == NULL)
//	{
//		perror("InitQueue:");
//		exit(1);
//	}
//	Q->front = Q->rear = 0;
//}
//
//int IsEmpty(Queue Q)
//{
//	return Q.front == Q.rear;
//}
//
//void EnQueue(PtrQueue Q, PtrTNode T)
//{
//	Q->base[Q->rear++] = T;
//}
//
//PtrTNode DeQueue(PtrQueue Q)
//{
//	if (Q->front == Q->rear)
//	{
//		printf("DeQueue:Queue is empty.");
//		exit(1);
//	}
//	return Q->base[Q->front++];
//}
//
//Tree CreatTree(int n)
//{
//	Queue Q;
//	InitQueue(&Q, n);
//	PtrTNode T = (PtrTNode)malloc(sizeof(TNode));
//	if (T == NULL)
//	{
//		perror("CreateTree:");
//		exit(1);
//	}
//	T->left = T->right = NULL;
//	EnQueue(&Q, T);
//	n--;
//	while (n)
//	{
//		PtrTNode tmp = DeQueue(&Q);
//		tmp->left = (PtrTNode)malloc(sizeof(TNode));
//		tmp->left->left = tmp->left->right = NULL;
//		EnQueue(&Q, tmp->left);
//		n--;
//		if (n)
//		{
//			tmp->right = (PtrTNode)malloc(sizeof(TNode));
//			tmp->right->left = tmp->right->right = NULL;
//			EnQueue(&Q, tmp->right);
//			n--;
//		}
//	}
//	return T;
//}
//
//
//void BuildTree(Tree T, int arr[])
//{
//	if (!T)
//	{
//		return;
//	}
//	static count = 0;
//	BuildTree(T->left, arr);
//	T->data = arr[count++];
//	BuildTree(T->right, arr);
//}
//
//void LevelOrder(Tree T, int arr[], int n)
//{
//	static count = 0;
//	Queue Q;
//	InitQueue(&Q, n);
//	EnQueue(&Q, T);
//	while (!IsEmpty(Q))
//	{
//		PtrTNode tmp = DeQueue(&Q);
//		arr[count++] = tmp->data;
//		if (tmp->left)
//		{
//			EnQueue(&Q, tmp->left);
//		}
//		if (tmp->right )
//		{
//			EnQueue(&Q, tmp->right);
//		}
//	}
//}
//
//
//void GetOrder(int arr[], int n)
//{
//	int i, j;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void print(int arr[], int n)
//{
//	int i;
//	printf("%d", arr[0]);
//	for (i = 1; i < n; i++)
//	{
//		printf(" %d", arr[i]);
//	}
//}
//
//int main()
//{
//	int n, i;
//	int arr[1000];
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	GetOrder(arr, n);
//	Tree T = CreatTree(n);
//	BuildTree(T, arr);
//	LevelOrder(T, arr, n);
//	print(arr, n);
//	return 0;
//}


//改进：使用数组表示树（完全二叉树），无需队列，直接顺序输出数组（层序遍历）
//#include<stdio.h>
//#include<stdlib.h>
//#include<math.h>
//int arr1[1000] = { 0 }, arr2[1000] = { 0 };
//
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int GetLeftLength(int n)
//{
//	double h = log2((double)n + 1.0);
//	int H = (int)floor(h);
//	int x = n + 1 - (int)pow(2, H);
//	if (x >= (int)pow(2, H - 1))
//	{
//		return (int)pow(2, H - 1) * 2 - 1;
//	}
//	else
//	{
//		return (int)pow(2, H - 1) + x - 1;
//	}
//}
//
//void solve(int ALeft, int ARight, int TRoot)
//{
//	int n = ARight - ALeft + 1;
//	if (n == 0)
//	{
//		return;
//	}
//	int L = GetLeftLength(n);
//	//漏加ALeft
//	arr2[TRoot] = arr1[ALeft + L];
//	int LeftRoot = TRoot * 2 + 1;
//	int RightRoot = LeftRoot + 1;
//	//漏加ALeft
//	solve(ALeft, ALeft + L - 1, LeftRoot);
//	solve(ALeft + L + 1, ARight, RightRoot);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	qsort(arr1, n, sizeof(int), compare);
//	solve(0, n - 1, 0);
//	printf("%d", arr2[0]);
//	for (i = 1; i < n; i++)
//	{
//		printf(" %d", arr2[i]);
//	}
//	return 0;
//}


//6.Huffman Code
//#include<stdio.h>
//#include<stdlib.h>
//typedef struct TNode
//{
//	char index;
//	int weight;
//	struct TNode* lch, * rch;
//}TNode,*Tree;
//
//void BuildNode(Tree T, char ch, char road[], int weight)
//{
//	Tree Tr = T;
//	int i;
//	for (i = 0; road[i + 1] != '\0'; i++)
//	{
//		if (road[i] == 0)
//		{
//			if (Tr->lch == NULL)
//			{
//				Tr->lch = (Tree)malloc(sizeof(TNode));
//				Tr->lch->lch = Tr->lch->rch = NULL;
//			}
//			Tr = Tr->lch;
//			Tr->index = '*';
//		}
//		else
//		{
//			if (Tr->rch == NULL)
//			{
//				Tr->rch = (Tree)malloc(sizeof(TNode));
//				Tr->rch->lch = Tr->rch->rch = NULL;
//			}
//			Tr = Tr->rch;
//			Tr->index = '*';
//		}
//	}
//	if (road[i] == 0)
//	{
//		if (Tr->lch == NULL)
//		{
//			Tr->lch = (Tree)malloc(sizeof(TNode));
//			Tr->lch->lch = Tr->lch->rch = NULL;
//		}
//		Tr = Tr->lch;
//		Tr->index = ch;
//		Tr->weight = weight;
//	}
//	else
//	{
//		if (Tr->rch == NULL)
//		{
//			Tr->rch = (Tree)malloc(sizeof(TNode));
//			Tr->rch->lch = Tr->rch->rch = NULL;
//		}
//		Tr = Tr->rch;
//		Tr->index = ch;
//		Tr->weight = weight;
//	}
//}
//
//Tree BuildTree(int arr[], int n)
//{
//	Tree T = (Tree)malloc(sizeof(TNode));
//	T->lch = T->rch = NULL;
//	char road[63];
//	char ch;
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		getchar();
//		scanf("%c %s", &ch, road);
//		BuildNode(T, ch, road, arr[i]);
//	}
//
//	return T;
//}
//
//int count1 = 0, count2 = 0;
//int IsHuffmanTree(Tree T, int n)
//{
//	if (!T)
//	{
//		return;
//	}
//	if (T->index == '*')
//	{
//		count1++;
//	}
//	else
//	{
//		count2++;
//	}
//	IsHuffmanTree(T->lch, n);
//	IsHuffmanTree(T->rch, n);
//	if (count1 == n - 1 && count2 == n)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	char ch[5];
//	int arr[63];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%d", ch, &arr[i]);
//	}
//	int m, j=0;
//	int tmp[1000];
//	scanf("%d", &m);
//	for (i = 0; i < m; i++)
//	{
//		Tree T = BuildTree(arr, n);
//		int k = IsHuffmanTree(T, n);
//		tmp[j++] = k;
//	}
//	for (i = 0; i < m; i++)
//	{
//		if (tmp[i])
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}