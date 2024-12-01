#define   _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int study_hour = 0;
//int main()
//{
//	printf("一万小时定律\n");
//	while (study_hour < 10000)
//	{
//		printf("学习了：%d hours\n", study_hour);
//		study_hour++;
//	}
//	if (study_hour >= 10000)
//		printf("恭喜你，成为大牛！\n");
//	else
//		printf("太可惜了，您还是菜鸟一个。\n");
//	return 0;
//}
// 
// 
//int main()
//{
//	int arr[] = { 2,0,0,5,4,3 };
//	printf("%d\n", arr[2]);
//	int i = 0;
//	while (i < 6)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
// 
// 10.6
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");	
//	return 0;
//}
// 
// 
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
// }
// 
// 
// 
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int result = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n",result);
//	return 0;
//}
//EOF end of file 文件的结束  值为-1
//求两个数中的最大值
// 
// 
// 
//max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int r = max(a, b);
//	printf("%d", r);
//	return 0;
//}
// 
// 
// 
//f(int x,int y)
//{
//	if (x < 0)
//		return y = 1;
//	else if(x = 0)
//		return y = 0;
//	else
//		return y = -1;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d",&a );
//	b = f(a, b);
//	printf("%d",b );
//	return 0;
//}
//操作符：
//1.算术操作符：/  %（取模）
//int main()
//{
//	int a = 7 / 2;
//  float b = 7 / 2.0;
//	printf("%d\n", a);
//	printf("%f\n", b);
//	printf("%.1f\n", b);
//	int c = 7 % 2;
//	printf("%d\n", c);
//	return 0;
//}
//2.赋值操作符：+=   -=
//int main()
//{
//	int a = 5;
//	/*a = a + 3;*/
//	a += 3;
//	printf("%d", a);
//	return 0;
//}
// 3.单目操作符：！(真变假，假变真）   sizeof(求占内存空间)  ++/--(前置/后置）  (类型）强制类型转换
//c语言中：
//0表示假
//非0表示真  -1为真
////int main()
////{
////	int flag = 0;
//	if (!flag)   /*if为真才输出结果*/
////	{
////		printf("hehe\n");
////	}
////	return 0;
////}
////
//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int a = 2;
//	/*int b = a++;*/ 后置：b=a,a=a+1
//	int c = ++a;  前置：c=a=a+1
//	printf("%d\n", a);
//	/*printf("%d\n", b);*/
//	printf("%d\n", c);
//
//	return 0;
//}
//int main()
//{
//	int a =(int) 3.14; vs中不会报错，直接取整数部分
//	printf("%d", a);
//	return 0;
//}
//
//4.逻辑操作符：&&（并且）  ||（或者）
//int main()
//{
//	int a =0 ;
//	int b = 3;
//	if (a && b)
//		printf("hehe\n");
//	return 0;
//}
//5.条件操作符：exp1 ? exp2 : exp3 (三目操作符)
//如果表达1为真，则表达式的结果为表达2，如果表达1为假，则表达式的结果为表达3
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = a > b ? a : b;
//	printf("%d", r);
//	return 0;
//}
//6.逗号表达式：， ， ， （从左到右依次计算，表达式的结果为最后一个表达式的结果）
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	int d = (a = b + c, b = a + c, c = 5);
//	printf("%d",d);
//	return 0;
//}
// 
// 
// 
//10.7
//1.关键字：typedef(重新定义类型名）   static（静态变量，函数）
// 1>typedef:
//typedef unsigned int uint;
//int main()
//{
//	unsigned int a = 10;
//	uint b = 10;
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
// 
// 
//2> 静态局部变量：              static修饰局部变量时，局部变量出了作用域不销毁，
//                           本质上，static修饰局部变量时改变了变量的存储位置，
//                           影响了变量的生命周期。
//                               内存被分为不同的区域，有栈区，堆区，静态区
//                           其中局部变量存在栈区，特点是出了作用域就销毁，
//                           当static修饰变为静态局部变量时则存在静态区，出了作用域不销毁。
//                
// 注意：C 语言中static修饰的变量可以改变       
//test()
//{
//	static int a = 1;        //static修饰的变量的特点是在程序运行过程中只初始化一次，
//                              //在函数test()多次调用时，a的值可以被改变并且其生命周期贯穿整个程序的运行周期。
//                              // 每次调用test()函数时，a的值在上一次调用结束后的基础上进行自增操作。
//	a++;
//	printf("%d ", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
// 
// 
//3>静态全局变量:    将变量的外部链接属性改为了内部链接属性,作用域变小了,
//                   其他源文件不能使用了.
//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}
// 
// 
//4>静态函数:        将函数的外部链接属性改为了内部链接属性,作用域变小了,
//                   其他源文件不能使用了 
//extern int add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r = add(a, b);
//	printf("%d", r);
//	return 0;
//}
// 
// 
//2.#define定义常量和宏:
// 
// 
//1>   #define定义标识符常量:
//#define num 100
//int main()
//{
//	printf("%d", num);
//	int arr[num] = { 0 };
//	return 0;
//}
// 
// 
// 
//2>   #define定义宏:
//#define ADD(x,y)((x)+(y))
//int main()
//{
//	int a = 4;
//	int b = 3;
//	int r = ADD(a, b);
//	printf("%d", r);
//	return 0;
//}
//3.指针；内存被划分为了不同的单元，
//        每个单元的大小为1 bype(字节)，
//        有各自的编号-->也就是地址-->地址也叫作指针。
//int main()
//{
//	int a = 10;            /*存放a时用了4个字节（int)，a（因为比较小）只占了第一个字节的地址（最小的那个） */
//	
//    int* p = &a;             /*p为指针变量，存放指针（地址）
//    char ch = 'y';          int* 中：* 代表指针，int代表指针指向的对象（a)的类型(int)
//	char* pc = &ch;         每次运行程序变量a都会重新创建，so每次地址都不一样*/
//	printf("%p\n", p);
//	*p = 20;                /* * 解引用操作符：通过p存放的地址找到p指向的对象（这里指的是a）
//		                     *p = a     */
//	printf("%d\n", a);
//    return 0;              指针变量的大小为四字节或八字节：由平台为32位还是64位决定。
//}
// 
// 
//10.8
//结构体（struct):自定义类型，处理复杂对象，把一些单一类型整合在一起。
//struct per
//{
//	char name [20];  /*结构体成员名*/
//	int age;
//	char sex[10];
//	int born;
//
//};
//void print(struct per* ps)
//{
//	printf("%s,%d,%s,%d\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).born);
//	printf("%s,%d,%s,%d\n", ps->name, ps->age, ps->sex, ps->born);
//}
//int main()
//{
//	struct per s = { "zhangzeyu",17,"nan",20070430 };
//	printf("%s\n%d\n%s\n%d\n", s.name, s.age, s.sex, s.born);
//	print(&s);
//	return 0;
//}
//1>  .操作符：结构体变量 . 结构体成员名
//2>  ->操作符：结构体指针变量 -> 结构体成员名

//注：此代码中，struct per*是类型，  ps=&s,   *ps=s
//int main()
//{
//	int a;
//	int b;
//	scanf("%d%d", &a, &b);
//	int c = a / b;
//	int d = a % b;
//	printf("%d %d", c, d);
//	return 0;
//}
//10.9
//一. 分支语句
// 1.if语句：
//   
//   1 > if (), 如果括号内语句为真则执行, 为假则不执行或执行else.
//   2 > if / else都只控制一条语句, 要执行多条语句时需要使用代码块{}
//   3 > else只和离它最近的if配对
//   4 > 多重条件时使用else if
//   5 > if (18 <= age < 30)这种代码时错误的, 因为如果int age = 10, 则18 <= age 为假, 
//    即为0,而0<30为真, 即if语句为真, 不符合要求.
//    so正确格式为:if(18<=age && age<30)
//   6>if / else 后不用加;  加了则表示语句结束,无法执行下面的语句
//   7>if(5==num) 括号内最好写成数字等于变量的形式,这样当写成 5=num 时会报错
// 
// 
// 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("%d为奇数\n", a);
//	else
//		printf("%d为偶数\n", a);
//	return 0;
//}
// 
// 
//int main() 
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d  ", a);
//		a = a + 2;
//	}
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d  ", a);
//		a++;
//	}
//	return 0;
//}
//2.分支语句：
//  switch语句 :适用于多分支
// 
//switch (整型表达式)             语句项是一些case语句：
//{                               case 整型常量表达式 ：
//	语句项                           语句；
//}                                 break;
//
// (如果没有break,就会从某个case进入然后一直执行直到遇见break)
// 注意：字符本质也是整型，so在这里可以使用
//
// 
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	}
//	return 0;
//}
// 
// *default子句：如果输入不满足case的所有情况，
//               那么使用default子句（一个switch语句中只能有一个）
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday");
//		break;
//	case 6:
//	case 7:
//		printf("weekend");
//		break;
//	default:
//		printf("发生错误");
//		break;
//	}
//	return 0;
//}
//二.循环语句：
//   1.while语句：
// 
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d\n", a);
//		a++;
//	}
//	return 0;
//}
     /*  1>break:用于永久地终止循环
       2>continue:跳过本次循环中contiune后面的代码，直接去判断部分，
                  进行下一次循环的判断     */

//int main()
//{
//    int a = 1;
//    while (a <= 10)
//    {
//        if (5 == a)
//            continue;
//        printf("%d  ", a);
//        a++;
//    }
//    return 0;
//}
// 
// 
//int main()
//{
//    int a = 1;
//    while (a <= 10)
//    {
//        a++;
//        if (5 == a)
//        {
//            continue;
//        }
//        printf("%d  ", a);
//    }
//    return 0;
//}
       /* while 的应用：*/

//getchar():类似scanf,每次可以读取一个字符，并且返回值类型为 int。
//          因为字符本质上也是数字，且当读取错误是会返回EOF(end of file)
//          -->#define定义的-1，也是数字
// putchar():类似printf
// 
// 
//int main()
//{
//    int ch = 0;                 /*如果此处用int ch =getchar(), while(ch!=EOF)
//                                在屏幕上输入a，则将会一直打印a,
//                                因为getchar读取到a然后赋值给ch，ch=a,
//                                然后在while循环中一直打印*/
//    while ((ch=getchar())!=EOF) 
//    {
//        putchar(ch);             /*如果此处用printf打出的是97（a的ASCII码）  */
//    }
    //return 0;                    /* ctrl+c 退出*/:实质上是输入EOF
// }
//
// 
// 
//int main()
//{
//    char password[20] = { 0 };
//    printf("请输入密码：");
//    scanf("%s", password);
//    printf("请确认密码（Y/N):");
//    int ch = getchar();
//    if ('Y' == ch)
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//}
// 
//注意：1>数组本身就是地址，故scanf中不需要取地址
        /*2>getchar()不是直接在键盘上读取字符，而是有一个缓冲区，当输入a并回车后，
          缓冲区有了a和\n(回车)，getchar()也会读取\n，
          所以当输入密码然后回车时，scanf读取了密码，而gerchar()读取了\n,
          就算输入了Y，ch=\n,  故直接返回no*/

//10.10
//应用：1.适当清理缓存区
//（注：scanf读取到空格就结束）
//int main()
//{
//    char password[20] = { 0 };
//    printf("请输入密码：");
//    scanf("%s", password);
//    getchar();  /*只能清理回车*/
//    /*int ch1 = 0;
//    while ((ch1 = getchar()) != '\n')
//    {
//        ;
//    }*/
//    printf("请确认密码（Y/N):");
//    int ch2 = getchar();
//    if ('Y' == ch2)
//        printf("yes");
//    else
//        printf("no");
//    return 0;
//
//}
// 
// 
//应用：2.只打印数字字符，跳过其他字符
//int main()
//{
//    char ch = '\n';
//    while ((ch = getchar())!=EOF)     注意：如果没有!=EOF,那么ctrl+c不会退出命令行
//    {
//        if (ch < '0' || ch>'9')
//        {
//            continue;
//        }
//        printf("%c", ch);
//    }
//    return 0;
//}
// 
// 练习：
//int main()
//{
//    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    while(i<sz)
//    /*while (i<12)*/
//    {
//        printf("%c", arr[i]);
//        i++;
//    }
//    return 0;
//}
// 
// 
//int main()
//{
//    printf("请输入出生年月日(AAAABBCC):");
//    int a, b, c;
//    scanf("%4d%2d%2d", &a, &b, &c);          注意：%02d代表拿0来补齐两位
//    printf("year=%04d\n", a);                      %2d代表拿空格来补齐两位
//    printf("month=%02d\n", b);
//    printf("day=%02d\n", c);
//    return 0;
//}
// 
// 
//int main()
//{
//    int a;
//    float b, c, d;
//    scanf("%d;%f,%f,%f", &a, &b, &c, &d);
//    printf("The each subject score of No.%d is %.2f,%.2f,%.2f \n", a, b, c, d);
//    return 0;
//}
// 
// 
//int main()
//{
//    const double pi = 3.141592;
//    double r;
//    printf("请输入圆的半径：");
//    scanf("%lf", &r);
//    printf("area:%f", pi * r * r);
//    printf("perimeter:%f", 2 * pi * r);
//    return 0;
//}
// 
// 
//#include<math.h>
//int main()
//{
//    const double pi = 3.141592;
//    const double g = 9.8;
//    double v0;
//    double theta;
//    printf("请输入抛物线的初速度（m/s）和角度(degree)：");
//    scanf("%lf%lf", &v0, &theta);
//    int R = (v0 * v0 * sin(2 * theta / 180 * pi) / g);
//    printf("R=%d(m)", R);
//    return 0;
//}
// 
// 
//10.11
//作业：
//1.打印printf的返回值（printf的返回值为int类型，返回打印字符的个数）
//int main()
//{
//    int n = printf("hello world!");    注意：如果在hello world后加\n，
//                                             那么返回的数字会加1
//    printf("\n%d\n",n);
//    return 0;
//}
//2.考察转义字符：
//int main()
//{
//    printf("printf(\"Hello word!\\n\");\n");
//    return 0;
//}
//3.
//int main()
//{
//    int a, b, c, d;
//    scanf("%d%d%d%d", &a, &b, &c, &d);
//    if (a > b && a > c && a > d)
//        printf("%d", a);
//    else if(b > a && b > c && b > d)
//        printf("%d", b);
//    else if (c > a && c > b && c > d)
//        printf("%d", c);
//    else 
//        printf("%d", d);
//    return 0;
//}
//通用方法：
//int main()
//{
//    int arr[4] = { 0 };
//    int i = 0;
//    while (i < 4)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    int max = arr[0];
//    int n = 1;
//    while (n<4)
//    {
//        if (arr[n] > max)
//            max = arr[n];
//        n++;
//    }
//    printf("%d", max);
//    return 0;
//}
// 
// 
//int main()
//{
//    const double pi = 3.1415926;
//    double r = 0.0;
//    scanf("%lf", &r);
//    double v = 4 / 3 * pi * r * r * r;
//    printf("%.3f", v);
//    return 0;
//}
// 
// 
//int main()
//{
//    int w, h;
//    scanf("%d %d", &w, &h);
//    double BMI = w / (h /100.0)/( h/100.0);
//    printf("%.2f\n", BMI);
//    return 0;
//}
// 
// 
//一.循环语句：for循环（用的最多）
//       -- > 格式：for(初始化；条件判断；调整)
//                  {
//
//                  } 
//int main()
//{
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
// 
//变体：
//1.for (;;):没有条件判断代表判断一直为真，陷入死循环。
//int main()
//{
//    int i = 0;
//    for (;;)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
// 
// 
//2.for的嵌套：
// 1>有初始化：一共循环m*n次
//int main()
//{
//    int i, r;
//   for (i = 0; i < 3; i++)
//    {
//        for (r = 0; r < 3; r++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
// 
// 
//2>没有初始化：一共循环n次
//int main()
//{
//    int i = 0;
//    int r = 0;
//    for (; i < 3; i++)
//    {
//        for (; r < 3; r++)
//        {
//            printf("hehe\n");
//        }
//    }
//    return 0;
//}
// 
// 
//3.使用多个变量控制循环：
//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}
//二.循环语句：do while 循环：
// -->格式：do   
//              循环语句
//          while(表达式)
//特点：循环至少执行一次
//int main()
//{
//    int i = 1;
//    do
//    {
//        i++;
//        if(5==i)
//        {
//            //break;
//            continue;
//        }
//        printf("%d  ", i);
//        /*i++;*/
//    } 
//    while (i <= 10);
//    return 0;
//}
// 
// 
//循环练习：
//1.计算n的阶乘：
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("%d", ret);
//    return 0;
//}
// 
// 
//2.计算1！+2！+...+n!的和：
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int ret = 1;
//    int arr[100] = {};
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//        arr[i-1] = ret;
//    }
//    int r = 0;
//    for (i = 0; i < n; i++)
//    {
//        r = r+arr[i];
//    }
//    printf("%d", r);
//    return 0;
//}
// 
// 
//改进：
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//        sum = sum + ret;
//    }
//    printf("%d", sum);
//    return 0;
//}
// 
// 
//GET:在循环中：r=r+i/r*i  可以实现累加/累乘
// 
//10.12
//练习：
// 1.在一个有序数组中找到某个数：(已知数为多少，求在数组中的位置）
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int k;
//    scanf("%d", &k);
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] == k)
//        {
//            printf("找到了，下标为：%d", i);
//            break;
//        }
//       
//    }
//    if (i == sz)
//    {
//        printf("找不到");
//    }
//    return 0;
//}
// 
// 
//改进：二分查找（效率高）-->必须为有序数组
// 
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k;
//    scanf("%d", &k);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//    //int mid = (left + right) / 2;
//    while(left<=right)
//    {
//        int mid = (left + right) / 2;
//        if (k > arr[mid])
//        {
//            left = mid + 1;
//        }
//        else if (k < arr[mid])
//        {
//            right = mid - 1;
//        }
//        else if(k==arr[mid])
//        {
//            printf("找到了，下标为：%d", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到");
//    }
//    return 0;
//}
// 
//注意：如果怕数据过大导致溢出从而使结果不准确，
//      mid=(left+right)/2 也可以写成 mid=left+(right-left)/2
// 
// 
//
//2.演示多个字符从左右移动，向中间汇聚：(动态字幕I will rock the world)
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//    char arr1[] = "I will rock the world!!!!";
//    char arr2[] = "                         ";
//    int left = 0;
//    int right = strlen(arr1) - 1; /*sizeof(arr1)/sizeof(arr1[0])-2*/
//    /*strlen是求字符串长度的函数，包含在<string.h>中，长度不包括'\0'
//    sizeof求字符串数组个数时包括了'\0'*/
//    while (left<=right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(150);
//       /* Sleep为一个函数，作用是延迟，休息一段时间，包括在<windows.h>,
//        括号内为延迟的时间，单位为毫秒*/
//        system("cls");
//        //system是一个库函数，可以执行系统命令，cls代表清空屏幕,包含在<stdlib.h>
//        left++;
//        right--;
//    }
//    printf("%s\n", arr1);
//    return 0;
//}
//
//
//3.模拟用户登录情景：(假设密码是abcdef)
//比较两个字符串是否相等，不能使用==，而应使用一个库函数：strcmp(string compare),包含在<string.h>中
//如果返回值为0，则表示两个字符串相等
//int main()
//{
//    char arr[20] = { 0 };
//    int i = 0;
//    for (i = 1; i <= 3; i++)
//    {
//        printf("请输入密码：");
//        scanf("%s", arr);
//        if (strcmp(arr,"abcdef")==0)
//        {
//            printf("登录成功！\n");
//            break;
//        }
//        else
//        {
//            printf("密码错误");
//        }
//        Sleep(500);
//        system("cls");
//    }
//    if (i > 3)
//    {
//        printf("登录失败\n");
//    }
//    return 0;
//}
// 
// 
// 
//10.13
//1.猜数字的游戏：
// 生成随机数：
//使用 rand() 生成随机数之前需要用随机发生器的
//初始化函数 srand(unsigned seed)（也位于 <stdlib.h> 中）
//进行伪随机数序列初始化，seed 又叫随机种子，
//通俗讲就是，如果每次提供的 seed 是一样的话，
//最后每一轮生成的几个随机值也都是一样的，因此叫伪随机数，
//所以需要每次提供不同的 seed 达到完全的随机，
//我们通常用时间函数 time(NULL) 作为 seed ，因为时间值每秒都不同
// 
//1>rand 的返回类型为int,()内不需要参数，范围为0--RAND_MAX(32767)
//2>srand 的返回类型为unsigned 
//3>只有rand时每次重新运行程序时随机数不变
//  有srand但括号内为不变的数时每次随机数都为同一值
//#include<stdlib.h>     （rand ,srand 函数）
//#include<time.h>       （time 函数）
//int s = 0;
//void game()
//{
//    /*srand((unsigned int)time(NULL));*/
//    int ret = rand() % 100 + 1;      /*GET：对某个数 %n 后得到的数之只能为0--n-1*/
//    while(1)
//    {
//    int guess = 0;
//    printf("请猜数字：");
//    scanf("%d", &guess);
//        if (guess < ret)
//        {
//            printf("猜小了\n");
//        }
//        else if (guess > ret)
//        {
//            printf("猜大了\n");
//        }
//        else
//        {
//            printf("恭喜你，猜对了\n");
//            break;
//        }
//    }
//    s++;
//    printf("游戏次数：%d", s);
//}
//void menu()
//{
//    printf("             MENU              \n");
//    printf("                               \n");
//    printf("           1. ENTER            \n");
//    printf("           2. EXIT             \n");
//    printf("                               \n");
//}
//int main()
//{
//    int input;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("游戏开始！\n");
//            game();
//            break;
//        case 2:
//            printf("退出游戏.\n");
//            break;
//        default:
//            printf("选择错误，请重新选择\n");
//            break;
//        }
//    } while (input!=2);
//    return 0;
//}
//
// 
// 
//2.goto语句：（少用）
//1>作用：跳转语句，适用于结束多重循环，大部分场景下可用其他代码代替
//2>注意：不可跨函数使用
//int main()
//{
// again:
//    printf("hehe\n");
//    printf("haha\n");
//    goto again;
//    return 0;
//}

//练习：设置一个关机的程序
//#include<stdlib.h>
//int main()
//{
//    char a [20] = { 0 };
// again:
//    printf("你的电脑将在60秒后自动关机，如果输入：我是猪，则取消关机\n");
//    system("shutdown -s -t 60");
//    scanf("%s", a);
//    if (strcmp(a, "我是猪")==0)
//    {
//        system("shutdown -a");
//    }
//    else
//    {
//        goto again;
//    }
//    return 0;
//}
//注意：debug是调试版本（程序调试），release是发布版本（发布给用户）
//      调整为release版本可将程序发给别人


//3.函数：1>库函数 2>自定义函数
//1>strcpy
//#include<string.h>
//int main()
//{
//    char arr1[] = "hello world ";
//    char arr2[20] = { 0 };
//    strcpy(arr2, arr1);
//    printf("%s", arr2);
//    return 0;
//}
// 
// 
//2>memset
//#include <string.h>
//int main()
//{
//    char arr[] = "hello world";
//    memset(arr+3, '*', 5);
//    printf("%s", arr);
//    return 0;
//}
// 
//练习：写一个函数可以交换两个整型变量
// 
//当实参传递给形参的时候，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

//void exchange(int x, int y)    /*x,y为形参（形式参数）*/
//{
//    int m = x;
//    x = y;
//    y = m;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    exchange(a, b);            /*a,b为实参（实际参数）*/
//    printf("%d %d\n", a, b);
//    return 0;
//}
//
//
//10.14
//改进：使用指针联系实参和形参
//void exchange(int* px, int* py)
//{
//    int z = *px;
//    *px = *py;
//    *py = z;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    exchange(&a, &b);         
//    printf("%d %d\n", a, b);
//    return 0;
//}

//int add(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int c = add(a, b);
//    printf("%d", c);
//    return 0;
//}

//注意：当要改变实参的值时，才需要使用指针变量（传址调用）；反之，则不需要（传值调用）。

//练习：1.写一个函数能判断一个数是否是素数
//void su(int x)
//{
//    if(x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0&&x%)
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    su(a);
//    return 0;
//}
//

//不用函数：(找出100--200之间的素数）

//#include<math.h>
//int main()
//{
//    int i = 0;
//    int count = 0;
//    //for (i = 100; i <= 200; i++)        改进
//    for(i=101;i<=200;i+=2)
//    {
//        int j = 0;
//        int flag = 0;
//        //for (j = 2; j <= i - 1; j++)      需要改进
//        for(j=2;j<=sqrt(i);j++)        
//        {
//            if (i % j == 0)
//            {
//                flag = 1;
//                break;
//            }
//        }
//        if (flag == 0)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("\n%d\n", count);
//    return 0;
//}


//10.15
//练习：1.写一个函数判断是不是闰年
//int is_leap_year(int y)
//{
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//int main()
//{
//    int year;
//    for(year=2000;year<=2500;year++)
//        if (is_leap_year(year))
//        {
//            printf("%d  ", year);
//        }
//    
//    return 0;
//}
// 
// 
// 10.16
// 
//2.写一个函数实现有序数组的二分查找

//int arr[110];
//int i;
//int a;
//
//void er(int x)
//{
//    int left = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int right = sz;
//    while (left<=right)
//    {
//        int mid = (left + right) / 2;
//        if (x > arr[mid])
//        {
//            left = mid + 1;
//        }
//        else if (x <arr[ mid])
//        {
//            right = mid - 1;
//        }
//        else if (x = arr[mid])
//        {
//            printf("找到了，下标为：%d", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到");
//    }
//}
// 
//int main()
//{
//    for (i = 1; i <= 200; i+=2)
//    {
//        arr[(i-1)/2] = i;
//    }
//    printf("请输入数字：");
//    scanf("%d", &a);
//    er(a);
//    return 0;
//}




//int binary_search(int arr[], int k, int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left <= right)
//    {
//        int mid = left + (right - left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            return mid;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int k = 4;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret=binary_search(arr, k, sz);
//    if (ret == -1)
//    {
//        printf("找不到");
//    }
//    else
//    {
//        printf("找到了，下标为：%d", ret);
//    }
//    return 0;
//}

//注意：1.形参和实参的参数可一致；
//      2.如果想将写在main函数里的变量在自定义函数中使用，需要传参（或直接写在函数外面，当作全局变量）
//      3.注意for循环等只能在main函数内使用
//      4.return 有比break更强的结束功能,break只结束当前的一层循环，而return直接结束整个函数
      //5.这是一个错误的示范：
            //数组传参实际上传递的是数组首元素的地址，而不是整个数组（为了节约内存空间）
            //所以在函数内部计算一个函数参数部分的数组的元素个数是不靠谱的
            //int binary_search(int arr[], int k)//  形参arr看上去是数组，本质是指针变量
            //{
            //	int sz = sizeof(arr) / sizeof(arr[0]); 
            // 因为arr是指针变量，所以sizeof(arr)=4/8



//3.写一个函数，每调用一次这个函数，就会将 num 的值增加1

//void advance(int* pn)
//{
//    (*pn)++;      注意：1.此处涉及到运算符的优先级，所以要加括号；也可以写成++*pn;
//}                       2.return a++;返回的是a    return ++a;返回的是a+1
//int main()
//{
//    int num = 0;
//    advance(&num);
//    printf("%d", num);
//    return 0;
//}

//知识点：
//1.函数的嵌套：1>函数之间是可以互相调用的
              //2>但是不能嵌套定义
//1>
//void one_line()
//{
//    printf("hehe\n");
//}
//void three_line()
//{
//    int i;
//    for (i = 1; i <= 3; i++)
//    {
//        one_line();
//    }
//}
//int main()
//{
//    three_line();
//}

//2>错误：
//int main()
//{
//    void one_line()
//    {
//        printf("hehe\n");
//    }
//}

//2.函数的链式访问：把一个函数的返回值当作另一个函数的参数
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));
//    return 0;
//}
//注意:printf函数的返回值为打印的字符,数字等的个数
// 
//int main()
//{
//    printf("%d", strlen("abcdef"));
//    return 0;
//}

//3.本质上main函数是有参数的,有3个参数
//int main(int argc, char* argv[], char *envp[])

//4.函数有功能,参数,返回值,(要注意功能和返回值的区别)




//10.17
//知识点：
//1.函数的声明和定义：
//   1>声明是表示有这样一个函数，定义则是对函数功能具体实现的描述
//   2>声明一般包含在头文件（比如：add.h)中，定义一般分模块在源文件(比如：add.c)中，
//     要引用add.c时需要 #include"add.h"
//   3>分模块的好处是便于协作
//   4>程序员A写了一个代码卖给B公司时，可以将头文件（比如：add.h)和源文件的静态库（比如：add.lib)卖给公司（保护知识产权）
//   公司通过#pragma comment(lib,"add.lib")使用add.c


//#include"add.h"    /*相当于add函数声明的拷贝*/
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int ret = add(a, b);
//    printf("%d", ret);
//    return 0;
//}


//2.函数递归：
      //1>定义：函数自己调用自己
      //        将一个大问题拆分为一个个相似的小问题，每次递归调用一次函数就解决一个小问题，
      //        最后解决整个问题 (重点在相似的小问题）
      //2>必要条件：递归一定要有一个限制条件，不满足限制条件时，递归结束
      //            且每次递归调用函数之后都越来越接近限制条件
      //            （不然就陷入死递归，而每次函数调用都会向栈区申请空间，就会导致程序崩溃）

//写一个程序能将一个无符号整型打印出来（1234-->1 2 3 4 )
//不用递归
//int main()
//{
//    unsigned int arr[10];
//    int i = 0;
//    unsigned int num = 0;
//    scanf("%u", &num);
//    for(i=0;i<4;i++)
//    {
//        arr[i]=num % 10;
//        num=num / 10;
//    }
//    printf("%u %u %u %u ", arr[3], arr[2], arr[1], arr[0]);
//    return 0;
//}
// 
 //使用递归：
//void print(unsigned int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%u  ", n % 10);
//}
//int main()
//{
//    unsigned int num = 0;
//    scanf("%u", &num);
//    print(num);
//    return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度
//不使用递归：
//int my_strlen(char* str)       /*字符串传参时传的是首元素的地址*/
//{
//    int count = 0;             /*此处count为临时变量（局部变量）*/
//    while (*str != '\0')
//    {
//        str++;                 /*指针变量++是表示跳到下一个元素的地址*/
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    char str[] = "abc";
//    int len = my_strlen(str);
//    printf("%d\n", len);
//    return 0;
//}

//使用递归：
//int my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my_strlen(str + 1);
//    }
//    else
//        return 0;
//}
//int main()
//{
//    char str[] = "abc";
//    int len = my_strlen(str);
//    printf("%d\n", len);
//    return 0;
//}

//3.函数递归与迭代：
//计算n的阶乘：
// 
//1>使用递归：
//int fac(int n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return n * fac(n - 1);
//    }
//}
//int main()
//{    
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d", ret);
//    return 0;
//}

//2>使用迭代:
//int fac(n)
//{
//    int i = 0;
//    int ret = 1;
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//    }
//    return ret;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = fac(n);
//    printf("%d", ret);
//    return 0;
//}


//不适合用递归的情况：求第n个斐波那契数
//1>使用递归：
//重复大量的计算，导致运算速度慢，甚至导致栈溢出
//int count = 0;
//int Fib(int n)
//{
//    if (n ==1)
//    {
//        count++;
//    }
//    if (n <= 2)
//    {
//        return 1;
//    }
//    else
//    {
//        return Fib(n - 1) + Fib(n - 2);
//    }
//}
//int main()
//{
    //int n = 0;
    //scanf("%d", &n);
    //int ret = Fib(n);
    //printf("%d\n", ret);
//    printf("%d\n", count);
//    return 0;
//}


//2>使用迭代：
//int Fib(int n)
//{
//    int a = 1;
//    int b = 1;
//    int c = 1;
//    while (n >= 3)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        n--;
//    }
//    return c;
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d\n", ret);
//    return 0;
//}

//总结：递归和迭代都是为了减少重复运算-->遇到重复计算，使用递归，迭代，循环




//10.18
//汉诺塔问题：（求解路线和次数）
//int trans(n)
//{
//    if (n <= 1)
//    {
//        return 1;
//    }
//    else
//    {
//        return 1 + trans(n - 1);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = trans(n);
//    printf("%d", ret);
//    return 0;
//}

//int count = 0;
//void move(char ch1, char ch2)
//{
//    printf("%c -> %c \n", ch1, ch2);
//    count++;
//}
//void hanoi(int n, char x, char y, char z)
//{
//    if (n == 1)
//    {
//        move(x, z);
//    }
//    else
//    {
//        hanoi(n - 1, 'x', 'z', 'y');
//        move(x, z);
//        hanoi(n - 1, 'y', 'x', 'z');
//
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    hanoi(n,'a','b','c');
//    printf("移动次数为：%d", count);
//    return 0;
//}

//青蛙跳台阶问题：(类似斐波那契数列）
//使用递归：
//int frog(int n)
//{
//    if (n <=2)
//    {
//        return n;
//    }
//    else
//    {
//        return frog(n - 1) + frog(n - 2);
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = frog(n);
//    printf("%d", ret);
//    return 0;
//}


//使用循环：
//int frog(int n)
//{
//    if (n <= 2)
//    {
//        return n;
//    }
//    else
//    {
//        int i = 0;
//        int a = 1;
//        int b = 2;
//        int c = 0;
//        for (i = 3; i <= n; i++)
//        {
//            c = a+b;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//}
// 
// 
// 
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = frog(n);
//    printf("%d", ret);
//    return 0;
//}
//
//练习：
// 1.给一个三位数字按从小到大打印
//void big_small(int* x, int* y, int* z)
//{
// 
//    if (*y < *z)
//    {
//        int n1 = *y;
//        *y = *z;
//        *z = n1;
//    }
//    if (*x < *z)
//    {
//        int n3 = *x;
//        *x = *z;
//        *z = n3;
//    }
//
//    if (*x < *y)
//    {
//        int n2 = *y;
//        *y = *x;
//        *x = n2;
//    }
//    
//}
//int main()
//{
//    int num = 0;
//    printf("请输入一个三位数字：");
//    scanf("%d", &num);
//    int a = num / 100;
//    int b = (num / 10) % 10;
//    int c = num % 10;
//    big_small(&a,&b,&c);
//    printf("%d%d%d", a, b, c);
//    return 0;
//}

//注意：三个数比较大小时，先通过交换确定一个数是最大（小）值，在交换剩下两个值
// 
//改进：
//void swap(int* px, int* py)
//{
//    int c = *px;
//    *px = *py;
//    *py = c;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        swap(&a, &b);
//    }
//    if (a < c)
//    {
//        swap(&a, &c);
//    }
//    if (b < c)
//    {
//        swap(&b, &c);
//    }
//    printf("%d %d %d", a, b, c);
//    return 0;
//}

//10.19
//练习：
//1.打印1~100内3的倍数：

//int main()
//{
//    int i;
//    for(i=3;i<=100;i+=3)
//    {
//        printf("%d  ", i);
//    }
//    return 0;
//}
//

//2.给定两个数，求这两个数中的最大公因数：
//void factor(int x, int y)
//{
//    int i;
//    for (i = x; i >= 1; i--)
//    {
//        if (x % i == 0 && y % i == 0)
//        {
//            printf("最大公约数为:%d", i);
//            break;
//        }
//    }
//}
//void greatest_common_factor(int x, int y)
//{
//    if (x < y)
//    {
//        factor(x, y);
//    }
//    else if (x>y)
//    {
//        factor(y, x);
//    }
//}
//int main()
//{
//    int a, b;
//    printf("请输入两个数字：");
//    scanf("%d%d", &a, &b);
//    greatest_common_factor(a, b);
//    return 0;
//}

//改进：
//1>暴力求解：(计算量大，效率低）
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int min = a < b ? a : b;
//    while (1)
//    {
//        if (a % min == 0 && b % min == 0)
//        {
//            printf("%d", min);
//            break;
//        }
//        min--;
//    }
//    return 0;
//}
 

//2>辗转相除法（求最大公因数）
//int main()
//{
//    int a, b, c;
//    scanf("%d%d", &a, &b);
//    while (c=a % b)
//    {
//        a = b;
//        b = c;
//    }
//    printf("%d", b);
//    return 0;
//}

//注意：最小公倍数可以用 a*b/最大公约数 来求


//3.求1~100中出现多少个数字9：(个位为9，十位为9）
//int main()
//{
//    int count = 0;
//    int i;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 10 == 9)
//        {
//            count++;
//        }
//        if (i / 10 == 9)
//        {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//4.计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
//int main()
//{
//    int a, b;
//    double sum = 0.0;
//    for (a = 1, b = 2; b <= 100; a+=2, b+=2)
//    {
//        sum += 1.0 / (a * b);
//    }
//    printf("%lf\n", sum);
//    return 0;
//}

//改进：
// 1>
//int main()
//{
//    int i;
//    double sum = 0;
//    int flag = 1;
//    for (i = 1; i <= 100; i++)
//    {
//        sum = sum + flag*(1.0 / i);
//        flag = -flag;
//    }
//    printf("%lf", sum);
//    return 0;
//}
// 注意：可用flag来表示+/- 
// 
//2>
//int main()
//{
//    int i;
//    double sum = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        sum = sum + (i % 2 == 0 ? -1.0 / i : 1.0 / i);
//    }
//    printf("%lf", sum);
//    return 0;
//}


//5.求10 个整数中最大值
//int main()
//{
//    int i;
//    int arr[10];
//    printf("请输入10个整数：");
//    /*scanf("%d%d%d%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9]);*/
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &arr[i]);        注意：数组名本身是地址，所以不用取地址，
//                                           但数组中的元素不是地址，所以要取地址。
//    }
//    for (i = 1; i <= 9; i++)
//    {
//        if (arr[0] < arr[i])
//        {
//            arr[0] = arr[i];
//        }
//    }
//    printf("最大值为：%d\n", arr[0]);
//    return 0;
//}
//


//6.在屏幕上输出9 * 9乘法口诀表：（双循环）（1.0）
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//....
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 9; i++)
//    {
//        int j = 0;
//        //处理9行
//        for (j = 1; j <= i; j++)
//        {
//            //处理1行
//            printf("%d*%d=%-2d  ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//注意：%2d是用空格补齐两位（右对齐）；%-2d是用空格补齐两位（左对齐）


//（2.0）
//void multiple_table(int x)
//{
//    int i;
//    for (i = 1; i <= x; i++)
//    {
//        int j;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%-2d*%2d=%-3d ", i, j, i * j);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    multiple_table(n);
//    return 0;
//}
//
//
//知识点：
//数组：一组相同类型元素的集合
// 
// 注意：1>在C99标准之前，数组的大小必须是常量或者常量表达式
//	       在C99之后，数组的大小可以是变量，为了支持变长数组
// 
//       2>创建一个数组的大小时方块内必须为常量，而访问一个数组中的元素时方块内可以使用变量
//       
//       3>数组的地址在内存中连续存放
// 
//1.一维数组：
//int main()
//{
//    //不完全初始化：剩余的元素默认初始化为0
//    int arr[10] = { 1,2,3 };
// 
//    //完全初始化：
//    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
// 
//    //自定义了a,b,c三个元素，剩下的默认为\0
//    char ch[10] = { 'a','b','c' };
// 
//    //自定义了a,b,c,\0四个元素，剩下的默认为\0
//    char ch1[10] = "abc";
// 
//    return 0;
//}
//


//10.20
//知识点：
// 
//1.二维数组：在内存中连续存放
//int main()
//{
//    //完全初始化：
//    /*int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        int j;
//        for (j = 0; j < 4; j++)
//        {
//            printf("%-2d  ", arr[i][j]);
//        }
//        printf("\n");
//    }*/
//
//    //不完全初始化：
//   /* int arr[3][4] = { 1,2,3,4,5,6 };
//    1 2 3 4
//    4 5 0 0
//    0 0 0 0*/
//
//    /* int arr[3][4] = { {1,2},{3,4},{5,6} };
//     1 2 0 0
//     3 4 0 0
//     5 6 0 0*/
//
//     //注意：二维数组的行可以省略，但是列绝对不可以省略
//    /*int arr[][4] = { 1,2,3,4,5,6 };
//    1 2 3 4 
//    5 6 0 0*/
//    return 0;
//}


//2.数组的越界访问：
// 1>一维数组：
//int main()
//{
//    int arr[4] = { 1,2,3,4 };
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d  ", arr[i]);
//    }
//    return 0;
//}

//2>二维数组：
//int main()
//{
//    int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//    int i;
//    for (i = 0; i < 4; i++)
//    {
//        int j;
//        for (j = 0; j < 5; j++)
//        {
//            printf("%d  ", arr[i][j]);
//        }
//    }
//    return 0;
//}


//***3.冒泡排序：两个相邻元素进行比较
//1>一趟冒泡排序：将一个元素放到它应该的位置，因此n个元素需要n-1趟冒泡排序
//2>注意：不能在形参是数组的函数内部求数组元素个数，
//      因为此时sizeof(arr)是地址的所占内存（32位时为4字节，64位时为8字节）
//3>每一趟冒泡排序确定一个数（从最大到最小），因此每趟冒泡排序所需的比较次数依次减小
//  表示为j<sz-1-i(也可以是j<sz-1)

//void double_sort(int arr[],int sz)
//{
//    int i;
//    for (i = 0; i < sz - 1; i++)
//    {
//        /*一趟冒泡排序：  */
//        int j;
//        for (j = 0; j < sz-1-i; j++)
//        {
//            if (arr[j]>arr[j+1])
//            { 
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//int main()
//{
//    int arr[10] = { 0 };
//    int n;
//    printf("请输入10个数字：");
//    for (n = 0; n < 10; n++)
//    {
//        scanf("%d", &arr[n]);
//    }
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    double_sort(arr,sz);
//    int m;
//    for (m = 0; m < sz ; m++)
//    {
//        printf("%d  ", arr[m]);
//    }
//    return 0;
//}


//4.数组名：数组名是首元素的地址
//   例外：
//   1 sizeof(数组名)，这里的数组名表示整个数组，计算的是整个数组的大小，单位是字节
//   2 &数组名，这里的数组名表示整个数组，取出的是整个数组的地址
// 
//1>一维数组：arr是首元素的地址，&arr[0]是首元素的地址，
//            &arr是整个数组的地址（显示的是首元素的地址，实质上是整个数组地址

//int main()
//{
//    int arr[10] = { 0 };
//    printf("%p\n", arr);
//    printf("%p\n", arr+1);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[0]+1);
//    printf("%p\n", &arr);
//    printf("%p\n", &arr+1);
//    return 0;
//}
//

//2>二维数组：与一维数组相同，不同的是arr表示的是第一行的元素的地址
//           （即二维数组中第一个一维数组）
//int main()
//{
//    int arr[3][4];
//    printf("%p\n", arr);
//    printf("%p\n", arr+1);
//    //求行的个数：arr[0]表示第一行数组
//    int sz1 = sizeof(arr) / sizeof(arr[0]);
//    //求列的个数：
//    int sz2 = sizeof(arr[0]) / sizeof(arr[0][0]);
//    printf("%zu  %zu", sz1, sz2);
//    return 0;
//}



//10.21
//实战：三子棋 -->五子棋（未完成：让电脑长脑子） 

//作业:
//1.字符串逆序（递归实现）
//1>逆序打印,不改变字符串本身
//void reverse(char* str)
//{
//    if (*str != '\0')
//    {
//        reverse(str + 1);
//    }
//    printf("%c", *str);
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    reverse(arr);
//    return 0;
//}


//2>反向两两交换,改变字符串本身
//1.0(不用递归)
//int main()
//{
//    char arr[] = "abcdef";
//    int left = 0;
//    int right = strlen(arr) - 1;
//    while(left < right)
//    {
//        char tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        left++;
//        right--;
//    }
//    printf("%s", arr);
//    return 0;
//}
//
// 
//2.0(使用递归)
// 
//int my_stelen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
// 
// 
//void reverse(char* str)
//{
//    char tmp = *str;
//    int len = strlen(str)-1;
//    *str = *(str + len);
//    *(str + len) = '\0';
//    if (strlen(str + 1) >= 2)
//    {
//        reverse(str + 1);
//    }
//        *(str + len) = tmp;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    reverse(arr);
//    printf("%s", arr);
//    return 0;
//}
//



//10.22
//作业：
// 3.0（使用多参数）：
//void reverse(char arr[], int left, int right)
//{
//    char tmp = arr[left];
//    arr[left] = arr[right];
//    arr[right] = tmp;
//    left++;
//    right--;
//    if (left < right)
//    {
//        reverse(arr, left, right);
//    }
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int left = 0;
//    int right = strlen(arr) - 1;
//    reverse(arr, left, right);
//    printf("%s", arr);
//    return 0;
//}
//

//1.
//unsigned int digitsum(unsigned int n)
//{
//    if (n / 10 != 0)
//    {
//        return n % 10 + digitsum(n / 10);
//    }
//    return n%10;
//}
//int main()
//{
//    unsigned int n;
//    scanf("%u", &n);
//    unsigned int ret = digitsum(n);
//    printf("%u", ret);
//    return 0;
//}
//

//2.编写一个代码实现n的k次方
//double exponent(int n, int k)
//{
//    if (k >0 )
//    {
//        return n * exponent(n, k - 1);
//    }
//    else if (k == 0)
//    {
//        return 1;
//    }
//    else if (k < 0)
//    {
//        return 1.0 / exponent(n, -k);
//    }
//}
//int main()
//{
//    int n, k;
//    scanf("%d%d", &n, &k);
//    double ret = exponent(n, k);
//    printf("%lf", ret);
//    return 0;
//}

//4.int arr[10]={0}的数据类型为int [10],
//    数组去除数组名就是数组的数据类型。
//



//10.23
//5.交换两个数组的内容（数组一样大）
//int main()
//{
//    int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int arr2[10] = { 0 };
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        int n = arr1[i];
//        arr1[i] = arr2[i];
//        arr2[i] = n;
//    }
//    for (i = 0; i < 10; i++)
//    { 
//        printf("%d", arr1[i]);
//    }
//    printf("\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d", arr2[i]);
//    }
//    
//    return 0;
//}


//6.
//void init(int arr[],int sz)
//{
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        arr[i] = 0;
//    }
//}
//void print(int arr[], int sz)
//{
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d  ", arr[i]);
//    }
//    printf("\n");
//}
//void reverse(int arr[], int sz,int left,int right)
//{
//    if (left < right)
//    {
//        int tmp = arr[left];
//        arr[left] = arr[right];
//        arr[right] = tmp;
//        reverse(arr, sz,++left,--right);
//    }
//}
//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    print(arr, sz);
//    int left = 0;
//    int right = sz - 1;
//    reverse(arr, sz,left,right);
//    print(arr, sz);
//    init(arr,sz);
//    print(arr, sz);
//    return 0;
//}

//10.24
//7.实战：扫雷(未完成：标记，自动展开一片）

//知识点：
//操作符：
//   1>取模%：只能对整数取模
//
//   2>左移操作符<<:移动的是二进制位，操作数只能是整数，b=a<<1, b=2*a
//        
//        整数的二进制表示有3种：原码 反码 补码
//
//        正的整数的原码、反码、补码相同
//        负的整数的原码、反码、补码是要计算的
//    
//        7
//        00000000000000000000000000000111 - 原码
//        00000000000000000000000000000111 - 反码
//        00000000000000000000000000000111 - 补码
//
//        -7
//        10000000000000000000000000000111 - 原码
//        11111111111111111111111111111000 - 反码（原码的符号位不变，其他位按位取反就是反码）
//        11111111111111111111111111111001 - 补码（反码+1就是补码）
//    
//        整数在内存中存储的是补码

//int main()
//{
//    int a = 10;
//    int b = a << 2;
//    printf("%d\n", a);
//    printf("%d\n", b);
//
//    return 0;
//}

     /*3>右移操作符>>:
          算术右移：右边舍弃一位，左边补原符号位
          逻辑右移：右边舍弃一位，左边补0 -->正数无影响，负数改变为正数，且相当大
                    （取决与编译器：vs编译器底下是算术位移）*/


//10.25
//知识点：
//1. &  按（2进制）位与
//   |  按（2进制）位或
//   ^  按（2进制）位异或 - 相同为0，相异以1
        //（操作数只能是整数）
 
//练习：不能创建临时变量（第三个变量），实现两个数的交换
//1>
//int main()
//{
//    int a = 3;
//    int b = 5;
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    printf("a=%d ", a);
//    printf("b=%d ", b);
//    return 0;
//}

//2>
//011
//011
//3^3=000 -->a^a=0
//011
//000
//3^0=011 -->a^0=a
//3^3^5=5  
//3^5^3=5
//-->按位异或满足交换律
//

//int main()
//{
//    int a = 3;
//    int b = 5;
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d ", a);
//    printf("b=%d ", b);
//    return 0;
//}


//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int count = 0;
//    int i;
//    for (i = 1; i <= 32; i++)
//    {
//        int ret=n & 1;
//        if (ret == 1)
//        {
//            count++;
//        }
//        n = n >> 1;   /*注意：n>>1后n本身不变，要再赋值给n才是n向右移位*/
//    }
//    printf("%d", count);
//    return 0;
//}

//2.
//1 > 逻辑反操作符! :真变假,假变真
//int main()
//{
//    int flag = 1;
//    if (!flag)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}

//2>按(二进制)位取反~ :1变0,0变1
   
//将二进制中的某一位0变成1:将a与1(向左移动到要改变的位上)按位或(|)得到b
//00000000000000000000000000000011  3
//00000000000000000000000000000100    
//00000000000000000000000000000111  7

//int main()
//{
//    int a = 3;
//    int b = a | (1 << 2);
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}

//将二进制中的某一位1变为0: 将a与1(左移后按位取反)按位和(&)得到b
//00000000000000000000000000000111  7
//11111111111111111111111111111011    
//00000000000000000000000000000011  3
//
//00000000000000000000000000000100
//11111111111111111111111111111011

//int main()
//{
//    int a = 7;
//    int b = a & (~(1 << 2));
//    printf("%d\n", a);
//    printf("%d\n", b);
//    return 0;
//}

//3.比较大小:

//1>整数/字符比较:==

//if ("abc" == "abcdef")//这样写是在比较2个字符串的首字符的地址

//int main()
//{
//    /*int a = 1;
//    int b = 1;*/
//    char a = 'a';
//    char b = 'a';
//    if (a == b)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}

//2>字符串比较:strcmp()
//strcmp()函数用于比较两个字符串。
//如果第一个字符串小于第二个字符串，函数返回小于0的值；
//如果第一个字符串大于第二个字符串，返回大于0的值；
//如果两个字符串相等，返回0

//int main()
//{
//    char arr_1[] = "abc";
//    char arr_2[] = "abc";
//    int ret=strcmp(arr_1, arr_2);
//    if (ret == 0)
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}


//3>浮点数比较:判断两个浮点数差值的绝对值是否近似为0

//#include<math.h>   /* fabs()求绝对值的函数*/
//int main()
//{
//    double a = 3.14;
//    double b = 3.13;
//    if (fabs(a-b) < 1e-7)        /*1e-3 -->0.001*/
//    {
//        printf("hehe\n");
//    }
//    return 0;
//}


//4.逻辑操作符: &&(逻辑与)  ||(逻辑或)
//只关注真假, 不关注二进制位, 若为真, 返回1;若为假,返回0

//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("%d", a && b);
//    return 0;
//}

//逻辑短路:若&& 前为假, 整个结果必为假, 不再计算后面的表达式
//         若||前为真, 整个结果必为真, 不再计算后面的表达式

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	/*i = a++ && ++b && d++;*/
//
//	i = a++ || ++b || d++;
//
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}
//

//5.条件操作符:exp1 ? exp2 :exp3
// 
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
    //int b=(a > 5 ?  3 :  -3);    直接写a>5?b=3:b=-3 会报错,每个表达式加括号则不会
//    printf("%d", b);
//    return 0;
//}


//6.结构体成员访问操作符: ->  .

//1> 结构体指针->成员 == *(结构体指针).成员
//2> 结构体对象.成员

//struct stu
//{
//    char name[20];
//    int age;
//    double score;
//};
//
//void stu_set(struct stu* ps)
//{
//    strcpy(ps->name , "zhangsan");
//    ps->age = 19;
//    ps->score = 100.0;
//}
//
//void print_stu(struct stu s)
//{
//    printf("%s\n%d\n%f\n", s.name, s.age, s.score);
//}
//
//int main()
//{
//    struct stu s = { 0 };
//    stu_set(&s);
//    print_stu(s);
//    return 0;
//}

//注意:不能直接将字符串赋给数组, 因为数组名是首元素的地址,是个常量,不能改变,且类型不统一
//     应该使用strcpy(a,b) 把b赋给a


//7.表达式求值:
//整型提升:

//表达式的整型运算要在CPU的相应运算器件内执行，CPU内整型运算器(ALU)的操作数的字节长度
//一般就是int的字节长度，同时也是CPU的通用寄存器的长度。
//因此，即使两个char类型的相加，在CPU执行时实际上也要先转换为CPU内整型操作数的标准长度

//有符号整形提升是按照变量的数据类型的符号位来提升的
//无符号整形提升，高位补0

//int main()
//{
//    char a = 5;
//    char b = 126;
//    char c = a + b;
//    printf("%d", c);
//    return 0;
//}
//
//00000000000000000000000000000101  5
//00000101  a
//00000000000000000000000001111110  126
//01111110  b
//a + b运算时整型提升:
//00000000000000000000000000000101   a
//00000000000000000000000001111110   b
//00000000000000000000000010000011   c
//10000011                           char c
//打印时因为是%d,进行整型提升
//11111111111111111111111110000011    c  补码
//11111111111111111111111110000010       反码
//10000000000000000000000001111101       原码 -> -125
// 
// 
//注意:char 是有符号整型,范围为-128到127, ASCII码范围为0到127


//10.26
//作业：
//1.小乐乐走台阶（递归）-->斐波那契数
//int fib(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else if (n == 2)
//    {
//        return 2;
//    }
//    else if (n > 2)
//    {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int ret=fib(n);
//    printf("%d", ret);
//    return 0;
//}

//2.
//int main()
//{
//    //输入
//    int n;
//    scanf("%d", &n);
//
//    int arr[50] = { 0 };
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int k;
//    scanf("%d", &k);
//    int count = 0;
//    //处理
//    for (i = 0; i < n; i++)
//    {
//        if (k == arr[i])
//        {
//            int j;
//            for (j = i; j < n; j++)
//            {
//                arr[j] = arr[j + 1];
//            }
//            count++;
//        }
//        
//    }
//
//    //输出
//    for (i = 0; i < n-count; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}


//改进：
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int dele = 0;
//    scanf("%d", &dele);
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != dele)
//        {
//            arr[j] = arr[i];
//            j++;
//        }
//    }
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//3.
//int main()
//{
//    //输入
//    int n;
//    scanf("%d", &n);
//    int arr[10000] = { 0 };
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    //计算
//    int max = arr[0];
//    int min = arr[0];
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//    }
//    for (i = 1; i < n; i++)
//    {
//        if (arr[i]<min)
//        {
//            min = arr[i];
//        }
//    }
//    int m = max - min;
//    //输出
//    printf("%d", m);
//    return 0;
//}


//改进:
//int main()
//{
//    //输入
//    int n;
//    scanf("%d", &n);
//    int arr[10000] = { 0 };
//    int i;
//    //计算(规定数值在0~100）
//    int max = 0;
//    int min = 100;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > max)
//            max = arr[i];
//        if (arr[i] < min)
//            min = arr[i];
//    }
//    //输出
//    printf("%d", max - min);
//    return 0;
//}


//4.大小写字符转换：
//知识点：scanf()的返回值：
//scanf读取成功的时候，返回的是读取的数据的个数
//scanf函数在读取失败的时候返回EOF

//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch >= 'a' && ch <= 'z')
//        {
//            printf("%c\n", ch - 32);
//        }
//        else if (ch >= 'A' && ch <= 'Z')
//        {
//            printf("%c", ch + 32);
//        }
//    }
//    return 0;
//}


//5.
#include<ctype.h>
//islower()判断一个字符是不是小写字母
//isupper()判断一个字符是不是大写字母

//int main()
//{
//    char ch = 0;
//    while (scanf("%c", &ch) == 1)
//    {
//        if (islower(ch) || isupper(ch))
//        {
//            printf("%c is an alphabet\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet\n", ch);
//        }
//        getchar();
//    }
//    return 0;
//}

//也可以在scanf(" %c") %c前加空格：表示跳过下一个字符前的空白字符（小众）

//int main()
//{
//    char ch = 0;
//    while (scanf(" %c", &ch) == 1)
//    {
//        if (islower(ch) || isupper(ch))
//        {
//            printf("%c is an alphabet\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet\n", ch);
//        }
//        /*getchar();*/
//    }
//    return 0;
//}

//6.
//int is_lily(int x)
//{
//    int sum = 0;
//    int i;
//    for (i = 10; i <= 10000; i *= 10)
//    {
//        sum = sum + (x / i) * (x % i);
//    }
//    if (sum == x)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//int main()
//{
//    int i;
//    for (i = 10000; i < 100000; i++)
//    {
//        if (is_lily(i))
//        {
//            printf("%d\n", i);
//        }
//    }
//    return 0;
//}

//注意：i++规定等价于i = i + 1,所以i++后i的值改变了
//      而i*10或i+2等没有赋值时，i本身不变
     


//知识点：
//指针：
//1.指针类型的意义：
//1>
//指针类型决定了指针在被解引用的时候访问几个字节
//如果是int*的指针，解引用访问4个字节
//如果是char*的指针，解引用访问1个字节
//推广到其他类型

//int main()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    char* pc = &a;
//    //*pa = 0;
//    *pc = 0;
//    return 0;
//}

//2>
//指针的类型决定了指针 + /- 1操作的时候，跳过几个字节
//决定了指针的步长
//int* 跳过4个字节
//char* 跳过1个字节

//int main()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    char* pc = &a;
//    printf("%p\n", pa);
//    printf("%p\n", pa+1);
//    printf("%p\n", pc);
//    printf("%p\n", pc+1);
//    return 0;
//}

//注意:指针变量所占内存大小和所能访问和跳过的内存大小没有关系
//        指针变量的大小取决与系统是32位平台还是64位平台，是用来存放地址的
//        所能访问和跳过的内存大小取决于指针类型
//        例如：int* 表示能从a的地址开始往后访问4个内存单元



//10.27
// 
//知识点：
// 
// 指针：
// 
//一. 野指针：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
   
    //1.成因：
       //1>指针未初始化：
       
//int main()
//{
//    int* p;
//    *p = 20;       /*此处的p为野指针*/
//    return 0;
//}
//

       //2>指针越界访问：

//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr; /*相当于&arr[0]*/
//    int i;
//    for (i = 0; i <= 10; i++)
//    {
//        *p = i;
//        p++;          /*指针访问到了数组外的内存空间*/
//    }
//    return 0;
//}
 
       //3>指针指向的空间释放：

//int* test()
//{
//    int a = 10;          
//    return &a;
//}
//int main()
//{
//    int* p=test();
//    /*printf("hehe\n");*/
//    printf("%d\n", *p);
//    return 0;
//}

//注意：a为临时变量，test()函数调用结束时，a申请的空间还给了系统
//      再调用p就是野指针
       
    //2.规避野指针：
        //1> 指针初始化
        //2> 小心指针越界
        //3> 指针指向空间释放即使置NULL
        //4> 避免返回局部变量的地址
        //5> 指针使用之前检查有效性

//int main()
//{
//    int* p = NULL;
//    //...
//    int a = 10;
//    p = &a;
//    if (p != NULL)
//    {
//        printf("%d", *p);
//    }
//    return 0;
//}


//二.指针运算：

    //1.指针+ -整数：

//int main()
//{
//    int arr[10] = { 0 };
//    int* p = arr;
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        *p = 1;
//        p++;
// //     *(p+i)=1;
//    }
//    return 0;
//}

    //2.指针-指针：指针-指针的绝对值等于指针之间的元素个数
              //注意：指向同一块空间的指针才能相减

//int main()
//{
//    int arr[10] = { 0 };
//    printf("%d", &arr[9] - arr);
//    return 0;
//}

//1>
//int my_strlen(char* p)
//{
//    int count = 0;
//    while (*p != '\0')   /*注意：字符一定要加单引号！！！！！*/
//    {
//        count++;
//        p++;
//    }
//    return count;
//}

//2>
//int my_strlen(char* p)
//{
//    char* start = p;
//    while (*p != '\0')
//    {
//        p++;
//    }
//    return p - start;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    printf("%d", my_strlen(arr));
//    return 0;
//}


//三.二级指针：存放一级指针变量的地址

//int main()
//{
//    int a = 10;
//    int* pa = &a;     /*pa为一级指针变量*/
//    *pa = 20;
//    printf("%d\n", a);
//    int** ppa = &pa;       /*ppa为二级指针变量*/
//    **ppa = 30;
//    printf("%d\n", a);
//    return 0;
//}

//int* pa : *代表为指针；int代表pa所指的对象a为int类型
//int** ppa : *代表为指针；int*代表ppa所指的对象pa为int*类型


//四.指针数组：存放指针的数组就是指针数组
//int main()
//{
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    int* parr[3] = { &a,&b,&c };
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d\n", *(parr[i]));
//    }
//    return 0;
//}
//
// 
//用指针数组表示二维数组：
//int main()
//{
//    int arr1[4] = { 1,2,3,4 };
//    int arr2[4] = { 2,3,4,5 };
//    int arr3[4] = { 3,4,5,6 };
//    int* parr[3] = { arr1,arr2,arr3 };
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        int j;
//        for (j = 0; j < 4; j++)
//        {
//            printf("%d ",parr[i][j]);   /*注意：arr[i]<==>*(arr+i)!!!!*/
//        }
//        printf("\n");
//    }
//    return 0;
//}



//结构体：创建以及初始化
//struct peo
//{
//    char name[20];
//    char tele[12];
//    char sex[5];
//    int height;
//}/*p1,p2*/;   /* 此处的p1,p2为全局变量*/
//
//void print1(struct peo p)
//{
//    printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.height);
//}
//
//void print2(struct peo* p)
//{
//    printf("%s %s %s %d\n", p->name, p->tele, p->sex, p->height);
//}
//
//struct stu
//{
//    struct peo p;
//    int score;
//    float weight;
//};
//
//int main()
//{
//    struct peo p1 = { "张三","13416088820","男",158 };   /*此处p1为局部变量*/
//    print1(p1);
//    print2(&p1);
//    struct stu s = { {"张三","13416088820","男",158},100,44.9f };
//    printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.height, s.score, s.weight);
//    return 0;
//}


//作业：
//1.
//b = ++c, c++, ++a, a++;
//因为逗号表达式的优先级最低，所以b=++c是逗号表达式中的一个

//2.
//int get_count(int n)
//{
//    int count = 0;
//    int i;
//    for (i = 1; i <=32; i++)
//    {
//        if (n & 1 == 1)
//        {
//            count++;
//        }
//        n >>= 1;
//    }
//    return count;
//}
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int ret=get_count(num);
//    printf("%d", ret);
//    return 0;
//}

//常规方法：由十进制中1234通过%10，/10操作得到每一位推广到二进制

//int get_count(int n)      /* 注意：int n 时负数无法得到正确结果（算的时补码的1的个数
//int get_count(unsigned int n)   /*使用unsigned int把负数看成很大的整数
//{
//    int count = 0;
//    int i;
//    for (i = 0; i < 32; i++)
//    {
//        if (n % 2 == 1)
//        {
//            count++;
//        }
//        n = n / 2;
//    }
//    return count;
//}
//int main()
//{
//    int num;
//    scanf("%d", &num);
//    int ret=get_count(num);
//    printf("%d", ret);
//    return 0;
//}

//改进：进行一次&操作就减少一个1
//1111  n
//1110  n-1
//------
//1110  n
//1101  n-1
//------
//1100  n
//1011  n-1
//------
//1000  n
//0111  n-1
//------
//0000

//int get_count(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & n - 1;
//        count++;
//    }
//    return count;
//}

//应用：判断一个数是不是2的n次方(二进制只有一个1）
//10      2
//100     2*2
//1000    2*2*2
 
//if (n & (n - 1) == 0)
//{
//    printf("%d是2的n次方"，n);
//}


//3.
//int get_count(int a)
//{
//    int count = 0;
//    while (a)
//    {
//        a = a & (a - 1);
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int m, n;
//    scanf("%d%d", &m, &n);
//    int a = m ^ n;
//    int ret = get_count(a);
//    printf("%d", ret);
//    return 0;
//}


//4.
//void print1(int n)
//{
//    int i;
//    for(i=0;i<16;i++)
//    {
//        printf("%d ", n & 1);
//        n = n >> 2;
//    }
//}
//
//void print2(int n)
//{
//    int i;
//    for (i = 0; i < 16; i++)
//    {
//        printf("%d ", n & 1);
//        n = n >> 2;
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    print1(n);
//    printf("\n");
//    print2(n >> 1);
//    return 0;
//}
//

//改进：
//void print(int n)
//{
//    int i;
//    for (i = 30; i >= 0; i-=2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//    for (i = 31; i >= 1; i-=2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    print(n);
//    return 0;
//}

//5.
//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0
//局部变量，是放在栈区，不初始化，默认值是随机值
//

//int i;//0
//int main()
//{
//    i--;//-1
//    //sizeof这个操作符计算返回的结果是size_t类型的，是无符号整型的
//    //-1发生算数转换，由有符号到无符号，变为一个很大的数
//    if (i > sizeof(i))//-1 > 4
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");//
//    }
//    return 0;
//}

//-1
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111

//算术转换:由低向高转换
//long double
//double
//float
//unsigned long int
//long int
//unsigned int
//int
//


//6.关键：看成一个二维数组
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        int j;
//        for (j = 0; j < n; j++)
//        {
//            if (i == j || i + j == n - 1)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}


//7.
//int main()
//{
//    int y, m;
//    scanf("%d%d", &y, &m);
//    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
//    {
//        switch (m)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        case 2:
//            printf("29\n");
//            break;
//        }
//    }
//    else
//    {
//        switch (m)
//        {
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            printf("31\n");
//            break;
//        case 4:
//        case 6:
//        case 9:
//        case 11:
//            printf("30\n");
//            break;
//        case 2:
//            printf("28\n");
//            break;
//        }
//    }
//    return 0;
//}


//改进：
//int main()
//{
//    int y, m, d;
//    scanf("%d%d", &y, &m);
//    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };  /*控制下标和月份数相对应*/
//    d = days[m];
//    if( (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) && m==2 )
//    {
//        d++;
//    }
//    printf("%d", d);
//    return 0;
//}

//注意：逻辑操作符&& || !的结果如果是真就返回1，如果是假就返回0



//10.28
//课上作业：
//1.打印梯形：
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i;
//    for (i = 1; i <= n; i++)
//    {
//        int j;
//        for (j = 1; j <= n - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i + 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < 2 * n + 1; j++)
//        {
//            if (i + j >= n - 1 && j - i <= n + 1)
//            {
//                printf("*");
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//


//2.百鸡百钱（穷举法）
//int main()
//{
//    int a, b, c;
//    for (a = 0; a <= 20; a++)
//    {
//        for (b = 0; b <= 33; b++)
//        {
//            c = 100 - a - b;
//            if (15 * a + 9 * b + 1 * c == 300)
//            {
//                printf("%d %d %d\n", a, b, c);
//            }
//        }
//    }
//    return 0;
//}
//


//3.判断一个数是不是回文数(逆序数）
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int m = n;
//    int rn = 0;
//    if (n < 0 || n % 10 == 0 && n != 0)
//    {
//        printf("%d is not a palindrome\n",m);
//    }
//    else
//    {
//        while (n > rn)
//        {
//            rn = rn * 10 + n % 10;
//            n = n / 10;
//        }
//        if (n == rn || n == rn / 10)
//        {
//            printf("%d is a pailndrom\n",m);
//        }
//        else
//        {
//            printf("%d is not a palindrome\n",m);
//        }
//    }
//    return 0;
//}



//10.29
//知识点：调试

//1.const:
// 以 int* p 为例：
//const 在 * 左边时，*p（p指向的对象）不能改变，p可以改变
//const 在 * 右边时，* p（p指向的对象）能改变，p不可以改变


//int main()
//{
//    //int n = 10;
//    //n = 20;
//
//    //通过指针修改被const修饰的值
//    //const int n = 10;
//    //int* p = &n;
//    //*p = 20;
//
//    //通过二级指针修改被const修饰的值
//    //const int n = 10;
//    //const int* p = &n;
//    //int** pp = &p;
//    //**pp = 20;
//
//    const int n = 10;
//    int* const p = &n;
//    *p = 20;
//    printf("%d", n);
//    return 0;
//}

//2.assert():表达为真，没有报错；表达为假，发生报错

//#include<assert.h>
//void my_strcpy(char m[],const char n[])
//{
//    while (*m++ = *n++)
//    {
//        ;
//    }
//}
//int main()
//{
//    char m[20] = { 0 };
//    char n[] = "abcdef";
//    my_strcpy(m, n);
//    printf("%s\n", m);
//    return 0;
//}


//void my_strcpy(char m[], char* n)
//{
//    assert(n!=NULL);
//    while (*m++=*n++)
//    {
//        ;
//    }
//}
//int main()
//{
//    char m[20] = { 0 };
//    char n[] = "abcdef";
//    my_strcpy(m, NULL);
//    printf("%s\n", m);
//    return 0;
//}


//作业：
//1.
//int main()
//{
//    int a, b, c;
//    while (scanf("%d%d%d", &a, &b, &c) == 3)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && a == c)
//            {
//                printf("Equilateral triangle\n");
//            }
//            else if (a == b || a == c || b == c)
//            {
//                printf("isosceles triangle\n");
//            }
//            else
//            {
//                printf("ordinary triangle\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle\n");
//        }
//    }
//    
//    return 0;
//}

//注意：当题目要求有多组输入时，使用（while(scanf()==n)来控制一直输入
        //scanf的返回值为合法读取数据的个数


//2.
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    int i;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int* p = arr;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", *(arr + i));
//    }
//    return 0;
//}


//3.字符串逆序
//int main()
//{
//    char arr[10000] = { 0 };
//    int i = 0;
//    while (1)
//    {
//        scanf("%c", &arr[i]);
//        if (arr[i] == '\n')
//        {
//            break;
//        }
//        i++;
//    }
//    int left = 0;
//    int right = i - 1;
//    while (left < right)
//    {
//        char n = arr[left];
//        arr[left] = arr[right];
//        arr[right] = n;
//        left++;
//        right--;
//    }
//    int k;
//    for (k = 0; k < i; k++)
//    {
//        printf("%c", arr[k]);
//    }
//    printf("\n");
//    return 0;
//}

//注意：scanf读取字符串（%s)时遇到空格会停下，读取字符(%c)时则不会

//改进：gets(n)函数-->接受字符串并放入n
//int main()
//{
//    char arr[10001] = { 0 };
//    gets(arr);
//    printf("%s", arr);
//}
//

//4.
//int main()
//{
//    int a;
//    int b;
//    scanf("%d%d", &a,&b);
//    int i;
//    int n = 0;
//    int sum = 0;
//    for (i = 1; i <= b; i++)
//    {
//        n = n * 10 + a;
//        sum += n;
//    }
//    printf("%d", sum);
//    return 0;
//}


//10.30
// 作业：
//1.
// #include<math.h>
//int count(int n)
//{
//    int count = 1;
//    while (n=n / 10)      /*注意：n/10时n本身没有改变，要再赋值给n（调试了好久）*/
//    {
//        count++;
//    }
//    return count;
//}

//int is_lily(int n)
//{
//    int k = n;
//    int ret = count(n);
//    int i, j, a = 0, b = 1, sum = 0;
//    for (i = 0; i < ret; i++)
//    {
//        a = n % 10;
//        b = 1;
//        for (j = 0; j < ret; j++)
//        {
//            b *= a;
//        }
//        sum += b;
//        n = n / 10;
//    }
//    if (k == sum)
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//}
//改进：使用库函数--------------------------
//int is_lily(int n)
//{
//    int k = n;
//    int ret = count(n);
//    int sum = 0;
//    while (n)
//    {
//        sum += pow(n % 10, ret);
//        n = n / 10;
//    }
//    return sum == k;
//}
//------------------------------------------
// 
//int main()
//{
//    int i;
//    for (i = 0; i <= 100000; i++)
//    {
//        if (is_lily(i))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//算某个数的n次方时有库函数pow(a,b)-->a的b次方，返回值为double类型

//2.
//int main()
//{
//    int n;
//    printf("请输入一个正的奇数：");
//    while (scanf("%d", &n)==1)
//    {
//        if (n % 2 == 1 && n > 0)
//        {
//            int k = (n - 1) / 2;
//            int i, j;
//            for (i = 0; i < k; i++)
//            {
//                for (j = 0; j < k - i; j++)
//                {
//                    printf(" ");
//                }
//                for (j = 0; j < 2*i + 1; j++)
//                {
//                    printf("*");
//                }
//                printf("\n");
//            }
//            for (i = 0; i < 2 * k + 1; i++)
//            {
//                printf("*");
//            }
//            printf("\n");
//            for (i = 0; i < k; i++)
//            {
//                for (j = 0; j < i+1; j++)
//                {
//                    printf(" ");
//                }
//                for (j = 0; j < 2 * (k-i) - 1; j++)
//                {
//                    printf("*");
//                }
//                printf("\n");
//            }
//            printf("\n");
//            break;
//        }
//        else
//        {
//            printf("输入非法，请再次输入\n");
//        }
//    }
//    return 0;
//}


//3.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）
// 
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int sum = n;
//    int add = 0;
//    while (n!=1)
//    {
//        if (n % 2 == 0)
//        {
//            sum += n / 2;
//            n /= 2;
//        }
//        else if (n % 2 == 1)
//        {
//            sum += n / 2;
//            n /= 2;
//            add++;
//        }
//
//        if (add ==2 )
//        {
//            sum++;
//            add = 1;
//        }
//    }
//    if (add == 1)
//    {
//        sum++;
//    }
//    printf("%d", sum);
//    return 0;
//}

//改进：
//int main()
//{
//    int money;
//    scanf("%d", &money);
//    int total = money;
//    int empty = money;
//    while (empty >= 2)
//    {
//        total += empty / 2;
//        empty = empty / 2 + empty % 2;
//    }
//    printf("%d", total);
//    return 0;
//}


//10.31
//初阶测评：
//1.求两个数的最小公倍数：
//int main()
//{
//    int x, y;
//    scanf("%d%d", &x, &y);
//    //求最大公约数：辗转相除法
//    int a = x, b = y, c=0;
//    do
//    {
//        c = a % b;
//        a = b;
//        b = c;
//    } while (c != 0);
//    int max = a;
//    //求最小公倍数：
//    int min = x*y/max;
//    printf("%d", min);
//    return 0;
//}

//其他方法：
//1>
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int m = (a > b ? a : b);
//    while (1)
//    {
//        if (m % a == 0 && m % b == 0)
//        {
//            break;
//        }
//        m++;
//    }
//    printf("%d", m);
//    return 0;
//}

//2> a*i=b*j=m
//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    int i;
//    for (i = 1;; i++)
//    {
//        if ((a * i) % b == 0)
//        {
//            break;
//        }
//    }
//    printf("%d", a*i);
//    return 0;
//}


//2.把字符串逆序：i like Beijing.-->Beijing. like i
//void reverse()
//{
//    char ch[20];
//    scanf("%s", ch);
//    if (getchar() != '\n')
//    {
//        reverse();
//    }
//    printf("%s ", ch);
//}
//
//int main()
//{
//    reverse();
//    printf("\n");
//    return 0;
//}


//月月鸟的思路：先将整个字符串逆序，再将每小块字符串逆序
//void reverse(char* left,char*right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main()
//{
//    char arr[101];
//    gets(arr);
//    char* left = arr;
//    int len = strlen(arr);
//    char* right = arr + len - 1;
//    reverse(left, right);
//    char* start = arr;
//    while (*start)
//    {
//        char* end = start;
//        while (*end != ' ' && *end!='\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if (*end != '\0')
//        {
//            start = end + 1;
//        }
//        else
//        {
//            start = end;
//        }
//    }
//    printf("%s\n", arr);
//    return 0;
//}



//初阶完结撒花，进入c语言进阶啦！------------------------------------------------------------------------------------


//数据存储：
//1.整型存储：
//整数的2进制表示有三种表示形式：
// 1. 正的整数：原码、反码、补码相同
// 2. 负的整数：原码、反码、补码是需要计算的
//原码：直接通过正负的形式写出的二进制序列就是原码
//反码：原码的符号位不变，其他位按位取反得到的就是反码
//补码：反码+1就是补码

//整数内存中存放是补码的二进制序列
//在计算机系统中，数值一律用补码来表示和存储。原因在于，使用补码，可以将符号位和数值域统一处理；
//同时，加法和减法也可以统一处理（CPU只有加法器）
// 此外，补码与原码相互转换，其运算过程是相同的，不需要额外的硬件电路。
    //(补码可通过取反并+1得到原码)


//大小端字节序存储：取决于硬件(当存储数据超过1个字节时才有顺序）

//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中；（相异）
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, ，保存在内存的高地址中。（相同）

//补充：内存中先从高地址开辟空间

//判断大小端：(指针类型的应用）
//int main()
//{
//    int a = 1;
//    if (*((char*)&a) == 1)
//    {
//        printf("小端");
//    }
//    else
//    {
//        printf("大端");
//    }
//    return 0;
//}


//11.1
//练习：
//1.
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	
//	return 0;
//}
//打印的结果为a = b = -1; c = 255
//此处char 为有符号类型（由编译器决定）

//-1
//10000000000000000000000000000001  原码
//11111111111111111111111111111110  反码
//11111111111111111111111111111111  补码

//%d为有符号的整型，故此处发生整型提升
//（有符号位的高位补符号位，无符号位的高位补0）
//11111111  a
//11111111111111111111111111111111   补码 ->原码  -1

//11111111  c
//00000000000000000000000011111111   补码（正数）->原码  255   


//2.
//int main()
//{
//    char a = -128;
//    printf("%u", a);
//    return 0;
//}

//10000000000000000000000010000000  -128
//11111111111111111111111101111111
//11111111111111111111111110000000
//
//10000000   a
//a为有符号char,整型提升为：
//11111111111111111111111110000000  a
//%u以无符号整型看待：补码等于原码
//4294967168



//11.2
//作业：
//1.
//int my_strlen(char arr[])
//{
//    int count = 0;
//    int i = 0;
//    while (arr[i])
//    {
//        count++;
//        i++;
//    }
//    return count;
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int ret=my_strlen(arr);
//    printf("%d", ret);
//    return 0;
//}

//2.
//void my_strcpy(char arr1[],const char arr2[])
//{
//    int i = 0;
//    while (arr2[i])
//    {
//        arr1[i] = arr2[i];
//        i++;
//    }
//}
//int main()
//{
//    char arr1[10] = { 0 };
//    char arr2[] = "abcdef";
//    my_strcpy(arr1, arr2);
//    printf("%s", arr1);
//    return 0;
//}

//3.
//void sort(int arr[], int sz)
//{
//    int i;
//    int m = 0, n = sz - 1;
//    int arr1[100];
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] % 2 == 1)
//        {
//            arr1[m] = arr[i];
//            m++;
//        }
//        else
//        {
//            arr1[n] = arr[i];
//            n--;
//        }
//    }
//    for (i = 0; i < sz ; i++)
//    {
//        arr[i] = arr1[i];
//    }
//}

//void sort(int arr[],int sz)
//{
//    int i, j;
//    for (i = 0; i < sz; i++)
//    {
//        if (arr[i] % 2 == 1)
//        {
//            ;
//        }
//        else
//        {
//            for (j = i; j < sz-1; j++)
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j+ 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    sort(arr,sz);
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//月月鸟的代码
//void sort(int arr[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        //从左开始找偶数，找到偶数就停下来
//        while ((left<right) && arr[left] % 2 == 1)
//        {
//            left++;
//        }
//        //从右开始找奇数，找到奇数停下来
//        while ((left < right) && arr[right] % 2 == 0)
//        {
//            right--;
//        }
//        //奇数偶数进行交换
//        if ((left < right) && left < right)
//        {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    int arr[10];
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    sort(arr, sz);
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


//4.将两个有序数组合并为一个有序数组
// 
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr1[1000];
//    int arr2[1000];
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d",&arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    int a = 0, b = 0, j = 0;
//    int arr[2000];
//    for (j = 0; j < m + n; j++)
//    {
//        if (a < n && b < m)
//        {
//            if (arr1[a] > arr2[b])
//            {
//                arr[j] = arr2[b];
//                b++;
//            }
//            else if (arr1[a] < arr2[b])
//            {
//                arr[j] = arr1[a];
//                a++;
//            }
//            else
//            {
//                arr[j] = arr1[a];
//                a++;
//                arr[j + 1] = arr2[b];
//                b++;
//                j++;
//            }
//        }
//        else if (a >=n && b < m)
//        {
//            while (b<m)
//            {
//                arr[j++] = arr2[b];
//                b++;
//            }
//        }
//        else if (a<n && b>=m)
//        {
//            while (a < n)
//            {
//                arr[j++] = arr1[a];
//                a++;
//            }
//        }
//    }
//    for (i = 0; i < n + m; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//改进：
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000];//c99 - 变长数组
//    int arr2[1000];
//    int arr3[2000];
//    //输入n个整数
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    //输入m个整数
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //合并打印
//    int j = 0;
//    int k = 0;
//    int r = 0;
//    while (j < n && k < m)
//    {
//        if (arr1[j] < arr2[k])
//        {
//            arr3[r++] = arr1[j++];
//        }
//        else
//        {
//            arr3[r++] = arr2[k++];
//        }
//    }
//    if (j < n)
//    {
//        while (j < n)
//        {
//            arr3[r++] = arr1[j++];
//        }
//    }
//    else
//    {
//        while (k < m)
//        {
//            arr3[r++] = arr2[k++];
//        }
//    }
//    for (i = 0; i < m + n; i++)
//    {
//        printf("%d ", arr3[i]);
//    }
//    return 0;
//}


//知识点：
//指针的进阶：
//1.字符指针：
//int main()
//{
//    /*char ch = 'a';
//    char* pc = &ch;
//    *pc = 'b';
//    printf("%c", *pc);*/
//    char arr[] = "abcdef";
//    char* p = arr;
//    printf("%s\n", p);
//    printf("%c\n", *p);
//    return 0;
//}

//2.指针数组：
//二维数组的创建：
//int main()
//{
//    int arr1[5] = { 1,2,3,4,5 };
//    int arr2[5] = { 2,3,4,5,6 };
//    int arr3[5] = { 3,4,5,6,7 };
//    int* parr[3] = { arr1,arr2,arr3 };
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        int j;
//        for (j = 0; j < 5; j++)
//        {
//            printf("%d ", parr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//3.数组指针：存放数组地址的指针变量
//arr通常指的是数组首元素的地址
//但有两个例外：
//1>sizeof(数组名)表示整个数组的大小
//2>&arr -->表示整个数组的地址

//int main()
//{
//    int arr[10] = { 0 };
//    int* p1 = arr;      //整型指针
//    int(*pa)[10] = &arr;  //数组指针
//    return 0;
//}

//应用：二维数组
// 注意：1>对二维数组来说，arr表示首元素地址时表示的是第一行的地址，也就是一个一维数组的地址，
//       要用数组指针来接受
//       2>p为数组指针时，*p表示整个数组，而整个数组又可以用数组名来代替，数组名又表示首元素的地址，
//         所以*p表示所指向的数组的首元素地址
// 
//void print1(int arr[3][5], int r, int c)
//{
//    int i, j;
//    for (i = 0; i < r; i++)
//    {
//        for (j = 0; j < c; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//}
//void print2(int(*p)[5],int r,int c)
//{
//    int i, j;
//    for (i = 0; i < r; i++)
//    {
//        for (j = 0; j < c; j++)
//        {
//            printf("%d ", *(*(p + i) + j));
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//    //print1(arr, 3, 5);
//    print2(arr, 3, 5);
//    return 0;
//}

//4.函数指针：存放函数的地址
   // 形式：返回类型(*指针名)（形参类型，形参类型，。。。）
      
//int add(int x, int y)
//{
//    return x + y;
//}
//
//int main()
//{
//    //对于函数来说，& 函数名和函数名都是函数的地址
//    int(*p)(int,int) = &add;
//    //int(*p)(int, int) = add;     //注意：定义时必须有*
//    //int ret = (*p)(2, 3);        //注意：此处*可有可无
//    int ret = p(2, 3);
//    //int ret = (****p)(2, 3);
//    //int ret = add(2, 3);
//    printf("%d", ret);
//    return 0;
//}



//11.3
//函数指针的应用：
//1.
//int add(int x, int y)
//{
//    return x + y;
//}
//void calc(int(*pf)(int, int))
//{
//    int ret=pf(3, 5);
//    printf("%d", ret);
//}
//int main()
//{
//    calc(add);
//    return 0;
//}


//2.
//int test(int x, int y)
//{
//    return x + y;
//}
//int main()
//{
//    int ret = sizeof(&test);
//    printf("%d", ret);
//    return 0;
//}

//3.
//int main()
//{
//    (*(void (*)())0)();
//    return 0;
//}

//说明：此处代码为一次函数调用，void (*)()为一个函数指针类型，在0前面加（类型），
//相当于强制类型转换（类似（int）a），对一个函数指针*相当于函数本身，并传参（）。
 
//4.
//typedef void (*)(int) pf_t   注意：这是错误的声明
//typedef void (*pf_t)(int);
//int main()
//{
//    void (*signal(int, void(*)(int)))(int);
//    pf_t signal(int, pf_t);
//    return 0;
//}

//说明：此代码是一个函数声明，signal先与（）结合，故为函数名，括号内是函数的两个参数的类型，
//去掉signal(int, void(*)(int))函数后，剩下了void (*)(int)，为函数的返回值类型，
//类似int add(int, int);

//5.写一个计算器：
//void menu()
//{
//    printf("*********************************************************\n");
//    printf("*******************   1.Add   2.Sub   *******************\n");
//    printf("*******************   3.Mul   4.Dev   *******************\n");
//    printf("*******************   0.exit          *******************\n");
//    printf("*********************************************************\n");
//
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Dev(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int input;
//    int x, y;
//    int ret;
//    do
//    {
//        menu();
//        printf("请输入：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("请输入两个整数；");
//            scanf("%d%d", &x, &y);
//            ret=Add(x,y);
//            printf("%d\n", ret);
//            break;
//        case 2:
//            printf("请输入两个整数；");
//            scanf("%d%d", &x, &y);
//            ret = Sub(x, y);
//            printf("%d\n", ret);
//            break; 
//        case 3:
//            printf("请输入两个整数；");
//            scanf("%d%d", &x, &y);
//            ret = Mul(x, y);
//            printf("%d\n", ret);
//            break;
//        case 4:
//            printf("请输入两个整数；");
//            scanf("%d%d", &x, &y);
//            ret = Dev(x, y);
//            printf("%d\n", ret);
//            break;
//        case 0:
//            printf("退出计算器\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}
// 
//重复代码多，代码冗杂

//改进：（回调函数）
//void menu()
//{
//    printf("*********************************************************\n");
//    printf("*******************   1.Add   2.Sub   *******************\n");
//    printf("*******************   3.Mul   4.Dev   *******************\n");
//    printf("*******************   0.exit          *******************\n");
//    printf("*********************************************************\n");
//
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Dev(int x, int y)
//{
//    return x / y;
//}
//void calc(int (*pf)(int, int))
//{
//    int x, y;
//    int ret;
//    printf("请输入两个整数；");
//    scanf("%d%d", &x, &y);
//    ret = pf(x, y);
//    printf("%d\n", ret);
//}
//int main()
//{
//    int input;
//    do
//    {
//        menu();
//        printf("请输入：");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            calc(Add);
//            break;
//        case 2:
//            calc(Sub);
//            break; 
//        case 3:
//            calc(Mul);
//            break;
//        case 4:
//            calc(Dev);
//            break;
//        case 0:
//            printf("退出计算器\n");
//            break;
//        default:
//            printf("输入错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}


//知识点：
//1.函数指针数组：（转移表）
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Dev(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int (*parr[4])(int,int) = {Add, Sub, Mul, Dev};
//    return 0;
//}

//应用：
//void menu()
//{
//    printf("*********************************************************\n");
//    printf("*******************   1.Add   2.Sub   *******************\n");
//    printf("*******************   3.Mul   4.Dev   *******************\n");
//    printf("*******************   0.exit          *******************\n");
//    printf("*********************************************************\n");
//
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//int Sub(int x, int y)
//{
//    return x - y;
//}
//int Mul(int x, int y)
//{
//    return x * y;
//}
//int Dev(int x, int y)
//{
//    return x / y;
//}
//int main()
//{
//    int input;
//    int x, y;
//    int ret;
//    int(*parr[])(int, int) = { 0,Add,Sub,Mul,Dev };
//    do
//    {
//        menu();
//        printf("请输入：");
//        scanf("%d", &input);
//        if (input == 0)
//        {
//            printf("退出计算器\n");
//        }
//        else if (input >= 1 && input <= 4)
//        {
//            printf("请输入两个整数；");
//            scanf("%d%d", &x, &y);
//            ret = parr[input](x, y);
//            printf("%d\n", ret);
//        }
//        else
//        {
//            printf("输入错误\n");
//        }
//    } while (input);
//    return 0;
//}


//2.指向函数指针数组的指针：
//int main()
//{
//    int (*parr[4])(int, int) = { Add, Sub, Mul, Dev };
//    int (*(*pparr)[4])(int,int) = &parr;
//    return 0;
//}
        

//******3.回调函数：
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
//函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。

//引例：冒泡排序：(只能对整型排序）
//void double_sort(int arr[], int sz)
//{
//    int i;
//    int flag = 1;  //假设本来就是升序
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j;
//        for (j = 0; j<sz-1-i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                flag = 0;
//            }
//        }
//        if (flag)
//        {
//            break;
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    double_sort(arr, sz);
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


//qsort - 这个函数可以排序任意类型的数据
//void qsort(void* base,//你要排序的数据的起始位置
//	       size_t num,//待排序的数据元素的个数
//	       size_t width,//待排序的数据元素的大小（单位是字节）
//	       int(* cmp)(const void* e1, const void* e2)//函数指针-->要自定义一个比较函数
//          );

//__cdecl - 函数调用约定
// 
//比较2个整型元素
//e1指向一个整数
//e2指向另外一个整数

//qsort函数规定（默认为升序），e1<e2 返回值 <0,  e1=e2 返回值 =0,  e1>e2 返回值 >0

// void* 是无具体类型的指针，可以接受任意类型的地址
//void*是无具体类型的指针，所以不能解引用操作，也不能+-整数
// 
// 
//1>整型排序：
// #include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//    //return *((int*)e1) - *((int*)e2);  //升序
//    return *((int*)e2) - *((int*)e1);   //降序
//}
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int s = sizeof(arr[0]);
//    qsort(arr, sz, s, cmp_int);
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//2>结构体排序：
//注意：strcmp函数比较时一对一对字符比较，相同就比较下一对，比较的时字符的ASCII码值

//#include<stdlib.h>
//#include<string.h>
//
//struct stu
//{
//    char name[20];
//    int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//    return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//int main()
//{
//    struct stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",20}};
//    int sz = sizeof(s) / sizeof(s[0]);
//    //qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//    return 0;
//}



//11.4
//利用qsort改写冒泡排序：

//一个一个字节进行交换
//void Swap(char* e1, char* e2, int width)
//{
//    int i;
//    for (i = 0; i < width; i++)
//    {
//        char tmp = *e1;
//        *e1 = *e2;
//        *e2 = tmp;
//        e1++;
//        e2++;
//    }
//}
//
//void double_sort(void* base, int num, int width, int(*cmp)(const void* e1, const void* e2))
//{
//    int i;
//    for (i = 0; i < num-1; i++)
//    {
//        int j;
//        for (j = 0; j < num - 1 - i; j++)
//        {
//            if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
//            {
//                Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//            }
//        }
//    }
//}
//
//int cmp_int(const void* e1, const void* e2)
//{
//    return *((int*)e1) - *((int*)e2);
//}
//
//void test1()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    double_sort(arr,sz,sizeof(arr[0]),cmp_int);
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//
//struct stu
//{
//    char name[20];
//    int age;
//};
//
//int cmp_s_by_name(const void*e1,const void*e2)
//{
//    return strcmp(((struct stu*)e1)->name , ((struct stu*)e2)->name);
//}
//
//int cmp_s_by_age(const void* e1, const void* e2)
//{
//    return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//
//void test2()
//{
//    struct stu s[] = { {"zhangshan",15},{"lisi",30},{"wangwu",25} };
//    int sz = sizeof(s) / sizeof(s[0]);             //注意：sizeof求结构体大小时使用结构体名
//    double_sort(s,sz,sizeof(s[0]),cmp_s_by_age);          //不用指出对象
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%s %d\n", s[i].name, s[i].age);
//    }
//}
//
//int main()
//{
//    //test1();
//    test2();
//    return 0;
//}


//小结：
//1.当sizeof()括号中只有数组名时，才代表整个数组
//int main()
//{
//    int arr[] = { 1,2,3,4 };
//    printf("%zu\n", sizeof(arr + 0));
//    printf("%zu\n", sizeof(1));
//    return 0;
//}


//2.二维数组中：例如：int arr[3][4]={0}中
   //arr[0],arr[1]可以看作是一维数组的数组名
   //遵循【不是单独放在sizeof()内部，也没有取地址&，就代表首元素的地址】的原则



//11.5
//1.
//int main()
//{
//    int a[3][2] = { (2,3),(1,5),(3,4) };   //注意：由于是括号，此处为逗号表达式，
//                                            // 表达式的值为最后一个表达式的值，
//                                            // 故数组中的元素为 3 5 4 0 0 0
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        int j;
//        for (j = 0; j < 2; j++)
//        {
//            printf("%d ", a[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//
//}

//********2.(难点）
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}

//知识点：字符串函数：
//1.模拟strlen函数：
//1>计算器方法：

//size_t my_strlen(char* str)
//{
//    size_t count = 0;
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    size_t n = my_strlen(arr);
//    printf("%u", n);
//    return 0;
//}

//2>指针-指针：

//size_t my_strlen(char* left, char* right)
//{
//    return right - left;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    int left = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int right = sz - 1;
//    size_t n = my_strlen(&arr[left],&arr[right]);
//    printf("%u", n);
//    return 0;
//}

//3>递归：

//size_t my_strlen(char* str)
//{
//    if (*str != '\0')
//    {
//        return 1 + my_strlen(str + 1);
//    }
//    return 0;
//}
//
//int main()
//{
//    char arr[] = "abcdef";
//    size_t n = my_strlen(arr);
//    printf("%u", n);
//    return 0;
//}


//11.6
//字符串函数：
//1.模拟strcpy:

//void my_strcpy(char* arr2, char* arr1)
//{
//    while (*arr1 != '\0')
//    {
//        *arr2 = *arr1;
//        arr1++;
//        arr2++;
//    }
//    *arr2 = '\0';
//}
// 
//改进：

//#include<assert.h>
//char* my_strcpy(char* arr2, const char* arr1)
//{
//    assert(arr1 && arr2);
//    char* ret = arr2;
//    while (*arr2++ = *arr1++)
//        ;
//    return ret;
//}
//
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[10] = { 0 };
//    printf("%s\n",my_strcpy(arr2, arr1));
//    return 0;
//}


//2.模拟strcat函数：
//#include<assert.h>
//char* my_strcat(char* dest, const char* sour)
//{
//    assert(dest && sour);
//    char* ret = dest;
//    while (*dest != '\0')
//    {
//        dest++;
//    }   
//    while (*dest++ = *sour++)
//        ;
//    return ret;
//}
//
//int main()
//{
//    char arr[20] = "hello ";
//    printf("%s\n", my_strcat(arr, "world"));
//    return 0;
//}

//注意：该函数不能自己给自己追加字符串，会陷入死循环

//3.模拟strcmp函数：

//int my_strcmp(const char* str1, const char* str2)
//{
//    while (*str1 == *str2)
//    {
//        if (*str1 == '\0')
//            return 0;
//        str1++;
//        str2++;
//    }
//    return *str1 - *str2;
//}
//
//
//int main()
//{
//    char arr1[] = "abcd";
//    char arr2[] = "abcd";
//    int ret = my_strcmp(arr1, arr2);
//    if (ret < 0)
//    {
//        printf("<\n");
//    }
//    if (ret == 0)
//    {
//        printf("==\n");
//    }
//    if (ret > 0)
//    {
//        printf(">\n");
//    }
//    return 0;
//}


//4.长度受限制的字符串函数：strcpy,strcat,strcmp
//长度不受限制的字符串函数：strncpy,strncat,strncmp

//int main()
//{
//    char arr1[20] = "abcdef";
//    char arr2[] = "abd";
//    //strncpy(arr1, arr2, 4);
//    //strncat(arr1, arr2, 3);
//    int ret = strncmp(arr1, arr2, 2);
//    if (ret == 0)
//    {
//        printf("==\n");
//    }
//    if (ret > 0)
//    {
//        printf(">\n");
//    }
//    if (ret < 0)
//    {
//        printf("<\n");
//    }
//    //printf("%s", arr1);
//    return 0;
//}


//******5.模拟strstr函数，查找字符串中的子字符串
#include<string.h>

//char* my_strstr(const char* str1,const char* str2)
//{
//    const char* s1 = str1;
//    const char* s2 = str2;
//    const char* p = str1;
//    //外层循环：遍历arr1中的元素
//    while (*p)
//    {
//        s1 = p;
//        s2 = str2;
//        //内层循环：判断元素是否相同
//        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//        {
//            s1++;
//            s2++;
//        }
//        if (*s2 == '\0')
//        {
//            return p;
//        }
//        p++;
//    }
//    return NULL;
//}
//
//int main()
//{
//    char arr1[] = "rock thr world";
//    char arr2[] = "world";
//    char* p = my_strstr(arr1, arr2);   //返回值是相同元素中第一个的地址,否则返回空指针
//    if (p == NULL)
//    {
//        printf("字串找不到\n");
//    }
//    else
//    {
//        printf("%s\n", p);
//    }
//    //printf("%s\n", p);
//    return 0;
//}


//6.strtok函数：切割字符串 ***(for循环新用法）
//int main()
//{
//    char arr[] = "liaoyilin@163.com";
//    char cp[30] = { 0 };
//    strcpy(cp, arr);
//    const char* sep = "@.";
// 
//    //***(for循环新用法）
//    /*for (char* ret = strtok(cp, sep); ret != NULL; ret = strtok(NULL, sep))
//    {
//        printf("%s", ret);
//    }*/
// 
//    /*char* ret = strtok(cp, sep);
//    if(ret!=NULL)
//       printf("%s\n", ret);
//    ret = strtok(NULL, sep);
//    if (ret != NULL)
//       printf("%s\n", ret);
//    ret = strtok(NULL, sep);
//    if (ret != NULL)
//       printf("%s\n", ret);
//    ret = strtok(NULL, sep);
//    if (ret != NULL)
//        printf("%s\n", ret);*/
//    return 0;
//}


//7.strerror函数：
// C语言的库函数，在执行失败的时候，都会设置错误码（例如：0 1 2 3...)
//而strerror函数的功能是把错误码转化为对应的错误码

//errno - C语言设置的一个全局的错误码存放的变量
//如果有多个错误，errno中存放的是最新的错误码

//#include<errno.h>
//int main()
//{
//    /*printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));*/
//    FILE* pf = fopen("test.txt", "r");  //以只读形式打开文件test.txt
//    //fopen打开文件成功返回文件地址，打开失败则返回NULL
//    if (pf == NULL)
//    {
//        printf("%s", strerror(errno));
//    }
//    return 0;
//}

//8.字符分类函数：如果为真就返回非0值，如果为假就返回0
//int main()
//{
//    //int ret = isspace(' ');
//    int ret = isdigit('5');
//    printf("%d", ret);
//}


//9.字符转化函数：int tolower ( int c )   int toupper(int c);
//int main()
//{
//    printf("%c", tolower('B'));
//    return 0;
//}


//10.内存函数：
//1>memcpy函数：内存拷贝，能拷贝各种类型的数据

//void* my_memcpy(void* dest, const void* scr, size_t num)
//{
//    char* d = dest;
//    char* s = scr;
//    int i;
//    for (i = 0; i < num; i++)
//    {
//        *d = *s;
//        d++;
//        s++;
//    }
//    return dest;
//}
//
//int main()
//{
//    int arr1[] = { 1,2,3,4,5 };
//    int arr2[5] = { 0 };
//    my_memcpy(arr2, arr1, 20);
//    return 0;
//}

//memcpy 负责拷贝两块独立空间中的数据


//11.7
//课上作业：递归函数
//1.10进制转换为其他进制：
//void trans(int n, int b)
//{
//    if (n)
//    {
//        trans(n / b, b);
//        printf("%d\n", n % b);
//    }
//    
//}
//int main()
//{
//    int n, b;
//    scanf("%d%d", &n, &b);
//    trans(n, b);
//    return 0;
//}


//2.***************************************汉诺塔问题：
//int count = 0;
//void hanoi(int n, char sour,char mid,char dest)
//{
//    if (n == 1)
//    {
//        printf("圆盘1从%c移动到%c\n", sour, dest);
//        count++;
//        return;
//    }
//    hanoi(n - 1, sour, dest, mid);
//    printf("圆盘%d从%c移动到%c\n", n, sour, dest);
//    count++;
//    hanoi(n - 1, mid, sour, dest);
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    hanoi(n, 'A', 'B', 'C');
//    printf("%d\n", count);
//    return 0;
//}



//课下作业：
//1.
//#include<stdio.h>
//#include<math.h>
//const double pi = 3.14;
//double V(double r, double h)
//{
//    return (1.0 / 3) * pi * r * r * h;
//}
//double S(double r, double h)
//{
//    return  pi * r * (r + sqrt(r * r + h * h));
//}
//int main()
//{
//    double r, h;
//    scanf("%lf%lf", &r, &h);
//    double v = V(r, h);
//    double s = S(r, h);
//    printf("radius=%lf, height=%lf, Area of surface=%lf, Volume=%lf\n", r, h, s, v);
//    return 0;
//}

//2.
//#include<stdio.h>
//#include<math.h>
//int is_prime(int j)
//{
//    int n;
//    for (n = 2; n <= sqrt(j); n++)
//    {
//        if (j % n == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//int prime(int i)
//{
//    int j;
//    for (j = 2; j < i ; j++)
//    {
//        if (is_prime(j) && is_prime(i-j))
//        {
//            return j;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    int i;
//    int count = 0;
//    for (i = 4; i <= 2000; i += 2)
//    {
//        count++;
//        if (count % 4 != 0)
//        {
//            printf("%4d=%4d+%4d ", i, prime(i), i - prime(i));
//        }
//        if (count % 4 == 0)
//        {
//            printf("%4d=%4d+%4d", i, prime(i), i - prime(i));
//            printf("\n");
//        }
//    }
//    return 0;
//}


//头文件为<string.h>
// 
//1.模拟memmove函数：可以拷贝重叠的部分
//#include<string.h>
//#include<assert.h>
//void* my_memmove(void* dest, const void* scr, size_t num)
//{
//    assert(dest && scr);
//    void* ret = dest;
//    //从前往后拷贝
//    if (dest < scr)
//    {
//        while (num--)
//        {
//            *((char*)dest) = *((char*)scr);
//            dest = (char*)dest + 1;
//            scr = (char*)scr + 1;
//        }
//    }
//    //从后往前拷贝
//    else
//    {
//        while (num--)
//        {
//            *((char*)dest + num) = *((char*)scr + num);
//        }
//    }
//    return ret;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    my_memmove(arr, arr + 2, 20);
//    return 0;
//}


//2.memcmp函数：一个一个字节比较大小
//int main()
//{
//    int arr1[] = { 1,2,3,4,5 }; // 01 00 00 00 02 00 00 00 03 00 00 00
//    int arr2[] = { 1,3,2 };   // 01 00 00 00 03 00 00 00 02 00 00 00
//    int ret = memcmp(arr1, arr2, 12);
//    printf("%d", ret);
//    return 0;
//}


//3.memset函数：一个一个字节设置值
//int main()
//{
//    //char arr[] = "hello world";
//    ////memset(arr, '*', 5);
//    //memset(arr + 6, '*', 5);
//    //printf("%s", arr);
//
//    //错误用法：
//    int arr[10] = { 0 };
//    memset(arr, 1, 40);
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//作业：
//1.
//int main()
//{
//    char arr[20] = { 0 };
//    int n = 0;
//    do
//    {
//        scanf("%c", &arr[n]);
//        n++;
//    } while (arr[n - 1] != '\n');
//    int i;
//    for (i = 0; i <= n - 2; i++)
//    {
//        if (arr[i] % 2)
//        {
//            arr[i] = '1';
//        }
//        else
//        {
//            arr[i] = '0';
//        }
//    }
//    printf("%s", arr);
//    return 0;
//}


//月月鸟的低语：
//#include<math.h>
//int main()
//{
//    int input = 0;
//    scanf("%d", &input);
//    int sum = 0;
//    int i = 0;
//    while (input)
//    {
//        int bit = input % 10;
//        input /= 10;
//        if (bit % 2)
//        {
//            sum += 1 * pow(10, i);
//            i++;
//        }
//        else
//        {
//            sum += 0 * pow(10, i);
//            i++;
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}



//11.8
//作业：
//1.
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i;
//    for (i = 1; i <= n; i++)
//    {
//        int j;
//        for (j = 1; j <= n-i; j++)
//        {
//            printf("  ");
//        }
//        for (j = 1; j <= i; j++)
//        {
//            printf("* ");
//        }
//        printf(" \n");
//    }
//    return 0;
//}

//月月鸟的低语：
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i + j < n - 1)
//            {
//                printf("  ");
//            }
//            else
//            {
//                printf("* ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}


//2.
//int main()
//{
//    double val;
//    int month, day, discount;
//    double sum;
//    //确保数据合理性
//    do
//    {
//        printf("请输入：");
//        scanf("%lf %d %d %d", &val, &month, &day, &discount);
//    } while (month != day && day != 11 || month != day && day != 12);
//    if (day == 11)
//    {
//        sum = val * 0.7 - discount * 50;
//    }
//    else
//    {
//        sum = val * 0.8 - discount * 50;
//    }
//    /*if (discount == 1)
//    {
//        sum -= 50;
//    }*/
//    if (sum >= 0)
//    {
//        printf("%.2f\n", sum);
//    }
//    else
//    {
//        printf("%.2f\n", 0);
//    }
//    return 0;
//}


//3.**************
//5 位运动员参加了 10 米台跳水比赛，有人让他们预测比赛结果：
//A 选手说：B 第二，我第三；
//B 选手说：我第二，E 第四；
//C 选手说：我第一，D 第二；
//D 选手说：C 最后，我第三；
//E 选手说：我第四，A 第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//    int a, b, c, d, e;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if (   ((b == 2) + (a == 3)) == 1     //表达式为正返回1，为假返回0
//                            && ((b == 2) + (e == 4)) == 1
//                            && ((c == 1) + (d == 2)) == 1
//                            && ((c == 5) + (d == 3)) == 1
//                            && ((e == 4) + (a == 1)) == 1)
//                        {
//                            if (a * b * c * d * e == 120)
//                            {
//                                printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}


//4.
//某地发生了一件谋杀案, 警察通过排查确定杀人凶手必为4个嫌疑犯中的一个.
//以下为4个人的供词： A说：不是我.   B说：是C.    C说：是D.    D说：C在胡说.
//已知3个人说了真话, 1个人说了假话, 根据这个信息怎么编辑网页程序来确定到底谁是凶手

//int main()
//{
//    int a, b, c, d;
//    for (a = 0; a <= 1; a++)
//    {
//        for (b = 0; b <= 1; b++)
//        {
//            for (c = 0; c <= 1; c++)
//            {
//                for (d = 0; d <= 1; d++)
//                {
//                    if (((a == 0) + (c == 1) + (d == 1) + (d == 0)) == 3)
//                    {
//                        if (a + b + c + d == 1)
//                        {
//                            printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}

//月月鸟的低语：
//int main()
//{
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if (((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')) == 3)
//        {
//            printf("%c", killer);
//        }
//    }
//    return 0;
//}


//5.打印杨辉三角：
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[20][20] = { 0 };
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i + 1; j++)
//        {
//            if (j == 0 || j == i)
//            {
//                arr[i][j] = 1;
//            }
//            else
//            {
//                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < i + 1; j++)
//        {
//            printf("%-6d", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}


//6.左旋字符串：

//void left(char* arr, int k)
//{
//    char* str = arr;
//    int n = 0;
//    while (*str++)
//    {
//        n++;
//    }
//    int i;
//    for (i = 0; i < k; i++)
//    {
//        arr[n + i] = arr[i];
//    }
//}
//
//int main()
//{
//    char arr[20] = { 0 };
//    int k;
//    scanf("%s%d", arr, &k);
//    left(arr, k);
//    printf("%s\n", arr+k);
//    return 0;
//}


//月月鸟的低语：

//void left_resolve(char arr[], int k)
//{
//    int len = strlen(arr);
//    k %= len;
//    while (k--)
//    {
//        char tmp = arr[0];
//        int i;
//        for (i = 0; i < len - 1; i++)
//        {
//            arr[i] = arr[i + 1];
//        }
//        arr[len - 1] = tmp;
//    }
//}

//abcdef左旋两个数时，可以看作先逆序ab,再逆序cdef，最后整体逆序
//bafedc --> cdefab

//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//void left_resolve(char arr[], int k)
//{
//    int len = strlen(arr);
//    k %= len;
//    reverse(arr, arr + k - 1);
//    reverse(arr + k, arr + len - 1);
//    reverse(arr, arr + len - 1);
//}
//int main()
//{
//    char arr[] = "abcdef";
//    int k;
//    scanf("%d", &k);
//    left_resolve(arr, k);
//    printf("%s", arr);
//    return 0;
//}


//******************6.杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//注意：右上角（左下角）的数既是所在行的最大值，也是所在列的最小值

//struct point
//{
//    int x ;
//    int y ;
//};
//
//struct point find_num(int arr[3][3], int row, int col, int k)
//{
//    int x = 0;
//    int y = col - 1;
//    struct point p = { -1,-1 };
//    while (x < row && y >= 0)
//    {
//        if (k > arr[x][y])
//        {
//            x++;
//        }
//        else if (k < arr[x][y])
//        {
//            y--;
//        }
//        else
//        {
//            p.x = x;
//            p.y = y;
//            return p;
//        }
//    }
//    return p;
//}
//
//int main()
//{
//    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//    int k;
//    scanf("%d", &k);
//    struct point ret = find_num(arr, 3, 3, k);
//    printf("%d %d", ret.x, ret.y);
//    return 0;
//}

//小tips:想要返回类似坐标的值时，可以使用结构体

//返回型参数：

//int find_num(int arr[3][3], int* pa, int* pb, int k)
//{
//	int x = 0;
//	int y = *pb - 1;
//	while (x<=*pa-1 && y>=0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//            *pa = x;
//            *pb = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//    int k;
//    scanf("%d", &k);
//    int a = 3;
//    int b = 3;
//    int ret = find_num(arr, &a, &b, k);
//    if (ret == 1)
//    {
//        printf("%d %d\n", a, b );
//    }
//    else
//    {
//        printf("找不到\n");
//    }
//    return 0;
//}


//7.
//#include<string.h>
//int is_resolve(char* s1, const char* s2)
//{
//    int len = strlen(s1);
//    int i;
//    for (i = 1; i <= len; i++)
//    {
//        char tmp = s1[0];
//        int j;
//        for (j = 0; j < len - 1; j++)
//        {
//            s1[j] = s1[j + 1];
//        }
//        s1[len - 1] = tmp;
//        if (strcmp(s1, s2) == 0)
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//    char s1[] = "abcdef";
//    char s2[] = "cdefab";
//    int ret=is_resolve(s1, s2);
//    printf("%d", ret);
//    return 0;
//}


//改进：使用库函数
//abcdef自己给自己追加后得到的是所有可能的旋转情况：abcdefabcdef

//#include<string.h>
//int is_resolve(char* s1, const char* s2)
//{
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//    if (len1 != len2)
//    {
//        return 0;
//    }
//    strncat(s1, s1, len1);
//    char* c = strstr(s1, s2);
//    if (c == NULL)
//    {
//        return 0;
//    }
//    else
//    {
//        return 1;
//    }
//}
//
//int main()
//{
//    char s1[20] = "abcdef";
//    char s2[] = "cdefab";
//    int ret=is_resolve(s1, s2);
//    printf("%d", ret);
//    return 0;
//}



//11.9
//作业：
//1.矩阵转置：

//void trans(int arr[10][10], int n, int m)
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (i < m && j < n)
//            {
//                if (i < j)
//                {
//                    int tmp = arr[i][j];
//                    arr[i][j] = arr[j][i];
//                    arr[j][i] = tmp;
//                }
//            }
//            else
//            {
//                int tmp = arr[i][j];
//                arr[i][j] = arr[j][i];
//                arr[j][i] = tmp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    printf("\n");
//    trans(arr, n, m);
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//改进：
//int main()
//{
//    int n, m;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    printf("\n");
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%d ", arr[j][i]);      //注意理解！！
//        }
//        printf("\n");
//    }
//    return 0;
//}


//2.
//int is_up_matrices(int arr[10][10],int n )
//{
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i > j && arr[i][j] != 0)
//            {
//                return 0;
//            }
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i, j;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int ret = is_up_matrices(arr, n);
//    if (ret == 1)
//    {
//        printf("Yes\n");
//    }
//    else
//    {
//        printf("No\n");
//    }
//    return 0;
//}


//3.

//int is_sorted(int arr[], int n)
//{
//    int i;
//    if (arr[0] <= arr[1])
//    {
//        for (i = 1; i < n-1 ; i++)
//        {
//            if (arr[i] > arr[i + 1])
//            {
//                return 0;
//            }
//        }
//    }
//    else
//    {
//        for (i = 1; i < n-1 ; i++)
//        {
//            if (arr[i] < arr[i + 1])
//            {
//                return 0;
//            }
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int ret = is_sorted(arr, n);
//    if (ret)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
//}

//月月鸟的低语：
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[50] = { 0 };
//    int i;
//    int flag1 = 0;
//    int flag2 = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i > 0)
//        {
//            if (arr[i] > arr[i - 1])
//            {
//                flag1 = 1;
//            }
//            else if (arr[i] < arr[i - 1])
//            {
//                flag2 = 1;
//            }
//            else
//            {
//                ;
//            }
//        }
//    }
//    if (flag1 + flag2 <= 1)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//    return 0;
//}


//知识点：
//自定义类型：结构体，联合，枚举

//一.结构体---------------------------------------------------------------------------

//1.匿名结构体：（没有命名）只能使用一次
//struct
//{
//	int a;
//	char b;
//	float c;
//} x;

//2.结构的自引用：
//链表:数据在内存中零散存放时,需要在元素间建立联系(通过地址)
//struct node
//{
//    int data;
//    struct node* next;
//};

//3.**************************结构体内存对齐:（空间换时间）

//结构体的对齐规则：
//1> 第一个成员在与结构体变量偏移量为0的地址处。
//   (偏移量=所占字节数-1)
// 
//2> 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//   (对齐数 = 编译器默认的一个对齐数与该成员大小之间的较小值)
//   (VS中默认的值为8,有些编译器没有默认对齐数,则是成员本身所占字节数)
// 
//3> 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。
// 
//4> 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处
// 
//5> 结构体的整体大小(字节数) 就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。



//addition:offsetof(type,number)函数可以返回结构体成员在内存中的偏移量
           //头文件为<stddef.h>

//#include<stddef.h>
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//int main()
//{
//    struct S1 s1;
//
//    printf("%d\n", sizeof(struct S1));//
//
//    printf("%d\n", offsetof(struct S1, c1));
//    printf("%d\n", offsetof(struct S1, i));
//    printf("%d\n", offsetof(struct S1, c2));
//    return 0;
//}

//4.修改结构体的默认对齐数：#pragma pack(n)-->对齐数为 n
//#pragma pack(1)   //一般设置成2的n次方
//struct S
//{
//    char a;
//    int b;
//};
//#pragma pack()  //回复默认对齐数（8）
//int main()
//{
//    struct S s;
//    printf("%d", sizeof(s));
//    return 0;
//}

//5.结构体传参：1>传值  2>传址
//    注意：函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
//    如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。
// 
//    因此，结构体传参时传地址。
//struct S
//{
//    int data[10];
//    char a;
//};
//
//void print1(struct S ss)
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", ss.data[i]);
//    }
//    printf("%c\n", ss.a);
//}
//
//void print2(struct S* ps)
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        printf("%d ", ps->data[i]);
//    }
//    printf("%c\n ", ps->a);
//}
//
//int main()
//{
//    struct S s = { {1,2,3},'a' };
//    print1(s);
//    print2(&s);
//    return 0;
//}

//二.位段-------------------------------------------------------------------------------
//1.位段类型:基于结构体类型（为了节省空间）
//   1>位段的成员必须是 int unsigned int signed int 或者是 char （属于整形家族）类型
//   2>位段的成员名后边有一个冒号和一个数字（数字必须小于本身比特位数，如int 后的数字要< 32）
//   3>位段中的位指的是比特位

//struct S
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//int main()
//{
//    struct S s;
//    printf("%d", sizeof(s));
//    return 0;
//}

//2.位段的内存分配：
// 位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。
// 位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。

//上面的代码中，因为是int类型，首先开辟4个字节（32个比特位）的空间，a,b,c共占用17个比特位
//d要占用30个比特位，原本开辟的空间不够用，所以又开辟了4个字节的空间，
//所以S占用的空间位8个字节

//开辟了的空间中：剩余的空间是否使用不确定，
//数据从左向右存放还是从右向左存放不确定

//3.位段的应用：
//网络中传输数据时：各种数据整合为一个数据包，大部分数据只占用几个比特位，
// 如果使用int等类型太占用空间，故使用位段


//实战：通讯录
//1>静态版   2>动态版    3>文件版



//11.10
//知识点：
//1.枚举：（关键字：enum )
//enum day
//{
//    //枚举常量
//    //默认为0，1，2，3 ...
//    Mon,//0
//    Tues,//1
//    Wed,//2
//    Thur,//3
//    Fri,//4
//    Sat,//5
//    Sun//6
//};
//
//enum day
//{
//    //可以给枚举常量赋值
//    Mon = 1,//1
//    Tues,//2
//    Wed,//3
//    Thur,//4
//    Fri,//5
//    Sat,//6
//    Sun//7
//};
//int main()
//{
//    enum day d = Fri;  //使用枚举常量给枚举变量赋值
//    //printf("%d", d);
//    printf("%d\n", Mon);
//    printf("%d\n", Tues);
//    printf("%d\n", Wed);
//    printf("%d\n", Thur);
//}


//2.联合(共用体）：（关键字:union )
//1>定义：联合的成员是共用同一块内存空间的
// 
//2>特点：联合中的成员变量一次只能使用一个，给不同成员变量赋值时原先的值会被覆盖
// 
//union Un
//{
//    int a;
//    char b;
//};
//
//int main()
//{
//    union Un u;
//    printf("%d\n", sizeof(u));
//    printf("%p\n", &u);
//    printf("%p\n", &(u.a));
//    printf("%p\n", &(u.b));
//    return 0;
//}

//判断当前计算机的大小端存储

//1>
//int check_sys()
//{
//    int a = 1;
//    return *(char*)(&a);
//}
//
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//    {
//        printf("小端\n");
//    }
//    else
//    {
//        printf("大端\n");
//    }
//    return 0;
//}

//2>
//int check_sys()
//{
//    union Un
//    {
//        int a;
//        char b;
//    };
//    union Un u;
//    u.a = 1;
//    return u.b;
//}
//
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//    {
//        printf("小端\n");
//    }
//    else
//    {
//        printf("大端\n");
//    }
//    return 0;
//}

//3>计算大小：
//联合的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//成员是数组时：对齐数是数组中元素类型所占字节数，而不是整个数组所占的字节数

//union Un
//{
//    char arr[5];
//    int i;
//};
//
//int main()
//{
//    printf("%d", sizeof(union Un));
//    return 0;
//}


//********************************************动态内存管理*************************************************：
//一.动态内存函数：
// 
//1.malloc(开辟内存空间)和free（释放内存空间）:
//  1> void* malloc(size_t size);
//    这个函数向内存申请一块连续可用的空间，并返回指向这块空间的指针。
//    如果开辟成功，则返回一个指向开辟好空间的指针。
//    如果开辟失败（空间不够），则返回一个NULL指针，因此malloc的返回值一定要做检查。
//    返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，
//    具体在使用的时候使用者自己来决定。
//    如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器。
// 
//  2> void free(void* ptr);
//     free函数用来释放动态开辟的内存。
//     如果参数 ptr 指向的空间不是动态开辟的，那free函数的行为是未定义的。
//     如果参数 ptr 是NULL指针，则函数什么事都不做。
// 
//  3> malloc和free都声明在 stdlib.h 头文件中。

//#include<stdlib.h>
//#include<errno.h>
//#include<string.h>
//
//int main()
//{
//    int arr[10];
//    //动态内存开辟
//    int* p = (int*)malloc(40);
//    if (p == NULL)
//    {
//        printf("%s", strerror(errno));
//
//        return 1;   //表示程序不正常
//    }
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间的
//    //但如果程序一直运行，则会造成内存泄露（也就是内存开辟但不释放，造成该内存不能再使用）
//
//    free(p);     //只有此代码，则p的地址没有改变，以后能通过p再次找到这块内存空间，造成野指针
//    p = NULL;
//
//    return 0;  //表示程序正常
//}

//注意：内存中有内核空间, 栈区，内存映射段, 堆区，(数据段)静态区，代码段
// 内核空间:用户无法读写
// 栈区:局部变量，形式参数
// 堆区:动态内存函数相关
//静态区:全局变量,静态变量
//代码段:可执行代码,只读常量



//2.calloc函数：
//void* calloc(size_t num, size_t size);
//函数的功能是为 num 个大小为 size 的元素开辟一块空间，并且把空间的每个字节初始化为0。
//calloc=malloc+memset

//#include<string.h>
//#include<errno.h>
//#include<stdlib.h>
//
//int main()
//{
//    int* p = (int*)calloc(10, sizeof(int));
//    if (p == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}


//3.realloc函数：
//void* realloc(void* ptr, size_t size);
// 
//这个函数调整原内存空间大小的基础上，还会将原来内存中的数据移动到新的空间。
//ptr 是要调整的内存地址
//size 调整之后新大小
//返回值为调整之后的内存起始位置。
// 
//realloc在调整内存空间的是存在两种情况：
//1>情况1：原有空间之后有足够大的空间
//         要扩展内存就直接在原有内存之后直接追加空间，原来空间的数据不发生变化。
// 
//2>情况2: 原有空间之后没有足够多的空间
//         在堆空间上另找一个合适大小的连续空间来使用,这样函数返回的是一个新的内存地址。

//#include<string.h>
//#include<errno.h>
//#include<stdlib.h>
//int main()
//{
//    //开辟
//    int* p = (int*)malloc(40);
//    if (p == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i + 1;
//    }
//    //调整(扩容)
//    int* ptr = realloc(p, 44);
//    if (ptr != NULL)
//    {
//        p = ptr;
//    }
//    //释放
//    free(p);
//    p = NULL;
//    return 0;
//}

//用realloc实现malloc功能:

//int main()
//{
//    realloc(NULL, 40);   //相当于malloc(40);
//    return 0;
//}

//通讯录:动态增长版

//练习:
//1.printf函数的实质:
//int main()
//{
//    printf("hello world\n");  //传的其实是h的地址(字符串的首地址)
//    char* p = "hello world\n";
//    printf(p);
//    return 0;
//}

//2.
//int main()
//{
//    int n, m, k;
//    scanf("%d%d", &n, &m);
//    int a = n, b = m;
//    while (m)
//    {
//        k = n % m;
//        n = m;
//        m = k;
//    }
//    int sum = n + (a * b) / n;
//    printf("%d\n", sum);
//    return 0;
//}

//月月鸟的低语:
//int main()
//{
//    int n, m, r;
//    while (scanf("%d%d", &n, &m) == 2)
//    {
//        int a = n, b = m;
//        while (r = n % m)
//        {
//            n = m;
//            m = r;
//        }
//        printf("%d\n", m + a * b / m);
//    }
//    return 0;
//}

//3.
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        int i, j;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    if (j == 0 || j == n - 1)
//                    {
//                        printf("* ");
//                    }
//                    else
//                    {
//                        printf("  ");
//                    }
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//知识点:柔性数组
//1.定义:结构体中的最后一个元素允许是未知大小的数组，这就叫做『柔性数组』成员

//2.特点:
//    1>结构体中的柔性数组成员前面必须至少一个其他成员。
//    2>sizeof 返回的这种结构大小不包括柔性数组的内存。
//    3>包含柔性数组成员的结构用malloc()函数进行内存的动态分配，
//      并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小。

//struct S
//{
//    int i;
//    int arr[];   //柔性数组
//};
//
//int main()
//{
//    printf("%d", sizeof(struct S));
//    return 0;
//}

//3.使用:
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//
//struct S
//{
//    int i;
//    int arr[];   
//};
//
//int main()
//{
//    struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//    if (ps == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    ps->i = 10;
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", ps->arr[i]);
//    }
//    struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//    if (ptr != NULL)
//    {
//        ps = ptr;
//    }
//    free(ps);
//    ps = NULL;
//    return 0;
//}


//******************************文件******************************：
//1.概念：一般分为程序文件、数据文件（从文件功能的角度来分类的）。
//    1> 程序文件:
//       包括源程序文件（后缀为.c）, 目标文件（windows环境后缀为.obj）, 
//       可执行程序（windows环境后缀为.exe）。
//    2> 数据文件
//       文件的内容不一定是程序，而是程序运行时读写的数据，
//       比如程序运行需要从中读取数据的文件，或者输出内容的文件。

//2.打开和关闭：
//  1> 每个被使用的文件都在内存中开辟了一个相应的文件信息区，用来存放文件的相关信息
//    （如文件的名字，文件状态及文件当前的位置等）
//     这些信息是保存在一个结构体变量中的, 该结构体类型是有系统声明的，取名FILE.
// 
//  2> 可以使用文件指针（内存中文件信息区的地址）与文件进行关联
// 
//  3> 打开文件：
//     FILE* fopen(const char* filename, const char* mode);
//     关闭文件
//     int fclose(FILE* stream);

//#include<string.h>
//#include<errno.h>
//#include<stdlib.h>
//
//int main()
//{
//    FILE* pf = fopen("test.c", "r");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//11.11
#include<string.h>
#include<errno.h>

//一.文件的顺序读写：
// 1.读写字符：
//写字符：fputc函数:  int fputc(int character, FILE* stream)
//int main()
//{
//    //打开文件：
//    FILE* pf = fopen("test.txt", "w");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //写字符：
//    //fputc('a', pf);
//    char i;
//    for (i = 'a'; i <= 'g'; i++)
//    {
//        fputc(i, pf);
//    }
//    //关闭文件：
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//读字符：fgetc函数： int fgetc ( FILE * stream )
//int main()
//{
//    //打开文件
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    //读字符
//    /*int ch = fgetc(pf);
//    printf("%c", ch);
//    ch = fgetc(pf);
//    printf("%c", ch);
//    ch = fgetc(pf);
//    printf("%c", ch);
//    ch = fgetc(pf);
//    printf("%c", ch);
//    ch = fgetc(pf);
//    printf("%c", ch);
//    ch = fgetc(pf);
//    printf("%c", ch);
//    ch = fgetc(pf);
//    printf("%c", ch);*/
//    int ch = 0;
//    while ((ch= fgetc(pf)) != EOF)
//    {
//        printf("%c ", ch);
//    }
//    //关闭文件
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//注意：在“w”模式下，每次写入都会清空上此写入的数据，
//      在“a”追加模式下，才能保存上次写入的数据，并新写入数据

//2.读写一行数据（字符串）：
//写一行数据：fputs函数： int fputs ( const char * str, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("test.txt", "w");
//    if (pf == NULL)
//    {
//        //printf("%s\n", strerror(errno));
//        perror("fopen");   //perror函数找到错误并打印，括号内是自定义的提示内容
//        return 1;
//    }
//    fputs("hello world", pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}
//读一行数据： fgets函数： char * fgets ( char * str, int num, FILE * stream )
//int main()
//{
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    char ch[10];
//    fgets(ch, 10, pf);   //此处的10包括了‘\0’,因此只有9个字符
//    printf("%s\n", ch);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//3.读写格式化数据：（int ,float ,struct ...）
//写格式化数据：fprintf函数： int fprintf ( FILE * stream, const char * format, ... )
//struct S
//{
//    char name[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "zhangshan",25,100.0 };
//    FILE* pf = fopen("test.txt", "w");
//    if (pf == NULL)
//    {
//        perror(pf);
//        return 1;
//    }
//    //printf("%s %d %f\n", s.name, s.age, s.score);
//    fprintf(pf, "%s %d %f\n", s.name, s.age, s.score);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//读格式化数据：fscanf函数： int fscanf(FILE* stream, const char* format, ...)
//int main()
//{
//    struct S s;
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    //scanf("%s %d %f", s.name, &(s.age), &(s.score));
//    fscanf(pf,"%s %d %f", s.name, &(s.age), &(s.score));
//    //printf("%s %d %f\n", s.name, s.age, s.score);
//    fprintf(stdout, "%s %d %f\n", s.name, s.age, s.score);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//任何一个C程序，只要运行起来就会默认打开3个流：
//FILE* stdin - 标准输入流（键盘） 
//FILE* stdout - 标准输出流（屏幕）
//FILE* stderr - 标准错误流（屏幕）
// 
//-->可用fscanf,fprintf实现scanf,printf的功能


//11.12
//4.二进制输入/输出：
//二进制输出：fwritr函数： size_t fwrite ( const void * ptr, size_t size, size_t count, FILE * stream )
//struct S
//{
//    char name[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "zhangshan",25,100.0 };
//    FILE* pf = fopen("test.txt", "wb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    fwrite(&s, sizeof(struct S), 1, pf);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//二进制输出：
//int main()
//{
//    struct S s = { 0 };
//    FILE* pf = fopen("test.txt", "rb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//    fread(&s, sizeof(struct S), 1, pf);
//    printf("%s %d %f\n", s.name, s.age, s.score);
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//5.sscanf，sprintf 函数：应用于将网页前端字符串形式的数据转化为格式化数据放在后台
//struct S
//{
//    char name[20];
//    int age;
//    float score;
//};
//int main()
//{
//    struct S s = { "zhangshan",25,100.0 };
//    char buf[100];
//    //把格式化数据转化为字符串
//    sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//    printf("%s\n", buf);
//    //把字符串转化为格式化数据
//    struct S tmp = { 0 };
//    sscanf(buf, "%s %d %f", tmp.name, &tmp.age, &tmp.score);
//    printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);
//    return 0;
//}

//实战：通讯录：文件版


//二. 文件的随机读写：fseek,ftell rewind函数 -->定位文件指针

//1.fseek函数：根据文件指针的位置和偏移量来定位文件指针  
       //int fseek(FILE* stream, long int offset, int origin);
       //其中：origin:SEEK_SET	Beginning of file
       //             SEEK_CUR	Current position of the file pointer
       //             SEEK_END	End of file*

//2.ftell函数：返回文件指针相对于起始位置的偏移量
       //long int ftell(FILE* stream);

//3.rewind函数：让文件指针的位置回到文件的起始位置
       //void rewind(FILE* stream);

//随机读取：
//int main()
//{
//    FILE* pf = fopen("test.txt", "r"); //abcdefg
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    char ch = 0;
//    fseek(pf, 2, SEEK_SET);
//    ch = fgetc(pf);  //读取完字符后，文件指针向后移一位
//    printf("%c\n", ch); //c
//    printf("%d\n", ftell(pf));
//
//    fseek(pf, 0, SEEK_CUR);
//    ch = fgetc(pf);
//    printf("%c\n", ch); //d
//    printf("%d\n", ftell(pf));
//
//    fseek(pf, -1, SEEK_END);
//    ch = fgetc(pf);
//    printf("%c\n", ch); //g
//    printf("%d\n", ftell(pf));
//
//    rewind(pf);
//    printf("%d\n", ftell(pf));
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}


//三.文件缓冲区
//ANSIC 标准采用“缓冲文件系统”处理的数据文件的，所谓缓冲文件系统是指系统自动地在内存中为程序
//中每一个正在使用的文件开辟一块“文件缓冲区”。从内存向磁盘输出数据会先送到内存中的缓冲区，装
//满缓冲区后才一起送到磁盘上。如果从磁盘向计算机读入数据，则从磁盘文件中读取数据输入到内存缓
//冲区（充满缓冲区），然后再从缓冲区逐个地将数据送到程序数据区（程序变量等）。缓冲区的大小根
//据C编译系统决定的。

//因为有缓冲区的存在，C语言在操作文件的时候，需要做刷新缓冲区或者在文件操作结束的时候关闭文件。
// 如果不做，可能导致读写文件的问题。

//——————————————————————————————————————————————————————————————————————————————————————————————————————————————

//程序环境和预处理：
//1.预定义符号 ：
//比如：
//__FILE__      //进行编译的源文件
//__LINE__     //文件当前的行号
//__DATE__    //文件被编译的日期
//__TIME__    //文件被编译的时间
//__STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义

//int main()
//{
//    int arr[] = { 1,2,3,4,5 };
//    int i;
//    for (i = 0; i < 5; i++)
//    {
//        printf("file=%s line=%d date=%s time=%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//    }
//    return 0;
//}

//2.#define定义标识符：
//#define NUM 100
//#define pi 3.14

//3.#define定义宏：
//#define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义宏（define macro）。
      //#define name( parament-list ) stuff

//#define SQURE(x) ((x)*(x))      //注意：最好加上括号，避免符号优先级问题(因为宏是直接替换，不会运算)
//int main()
//{
//    int r = SQURE(3);
//    r = SQURE(3 + 1);
//    printf("%d\n", r);
//    return 0;
//}

//4.#和##
//1>#: 把一个宏参数变成对应的字符串。
//引入：
//int main()
//{
//    //这两个式子等价
//    printf("hello world\n");
//    printf("hello " "world\n");
//    return 0;
//}

//#define PRINT(n)  printf("the value of "#n" is %d\n", n);
//int main()
//{
//    int a = 10;
//    //printf("the value of a is %d\n", a);
//    PRINT(a);
//    int b = 20;
//    //printf("the value of b is %d\n", b);
//    PRINT(b);
//    return 0;
//}

//2> ##:可以把位于它两边的符号合成一个符号
//#define CAT(a,b) a##b
//int main()
//{
//    int classnum = 10;
//    printf("%d",CAT(class,num));
//    return 0;
//}

//5.带副作用的宏参数
//#define MAX(a, b) ( (a) > (b) ? (a) : (b) )
//int main()
//{
//    int x = 5;//6
//    int y = 8;//9 10
//    int z = MAX(x++, y++);
//    //int z=( (x++) > (y++) ? (x++) : (y++) );
//    //    9    5       8               9
//    printf("x=%d y=%d z=%d\n", x, y, z);
//    return 0;
//}

//6.宏和函数：代码较少，较简单时用宏，反之用函数
//#define MALLOC(num, type) (type *)malloc(num * sizeof(type))
//int main()
//{
//    //malloc(40);
//    MALLOC(10, int);//类型作为参数
//    //预处理器替换之后：
//    (int*)malloc(10 * sizeof(int));
//    return 0;
//}


//7.条件编译：底层代码用的多
//#if （常量表达式） 
//#endif
//表达式为真，进行编译；表达式为假，不进行编译

//1>
//int main()
//{
//#if 1
//    printf("hehe\n");
//#endif
//    return 0;
//}

//2>多个分支的条件编译
//int main()
//{
//    int m = 4;
//#if m<5
//    printf("hehe\n");
//#elif m==5
//    printf("haha\n");
//#else 
//    printf("heihei\n");
//#endif
//    return 0;
//}

//3>判断是否被定义
//#define M 100
//int main()
//{
//#if defined(M)
//    printf("hehe\n");
//#endif
//#ifdef M
//    printf("hehe\n");
//#endif
//
//#if !defined(M)
//    printf("haha\n");
//#endif
//#ifndef M
//    printf("haha\n");
//#endif
//    return 0;
//}

//8.文件包含:
//避免头文件被重复包含：
//1>#pragma once

//2>
//#ifndef __TESR_H__
//#define __TEST_H__
////头文件的内容
//#endif


//练习：offsetof 宏的实现：
//#include<stddef.h>
//当第一个成员的地址为0时，结构体中成员内存的偏移量等于地址
//结构体指针变量->结构体成员名 
//结构体取地址时，获取的时结构体的首地址
//#define OFFSETOF(type,m_name)  (size_t)&(((type*)0)->m_name)
//struct S
//{
//    char c1;
//    int i;
//    char c2;
//};
//int main()
//{
//    //printf("%d\n", offsetof(struct S, c1));
//    //printf("%d\n", offsetof(struct S, i));
//    //printf("%d\n", offsetof(struct S, c2));
//    
//    printf("%d\n", OFFSETOF(struct S, c1));
//    printf("%d\n", OFFSETOF(struct S, i));
//    printf("%d\n", OFFSETOF(struct S, c2));
//    return 0;
//}


//作业：
//1.
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        int i, j;
//        for (i = 0; i < n + 1; i++)
//        {
//            for (j = 0; j < 2 * ( n-i ); j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        for (i = 1; i <= n ; i++)
//        {
//            for (j = 0; j < 2 * i; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j < n-i+1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//2.
//int main()
//{
//    int score;
//    int count = 0;
//    int max = 0;
//    int min = 100;
//    int sum = 0;
//    while (scanf("%d", &score) == 1)
//    {
//        if (score > max)
//        {
//            max = score;
//        }
//        if (score < min)
//        {
//            min = score;
//        }
//        sum += score;
//        count++;
//        if (count % 7 == 0)
//        {
//            double aver = (sum - max - min) / 5.0;
//            printf("%.2f\n", aver);
//            max = 0;
//            min = 100;
//            sum = 0;
//        }
//    }
//    return 0;
//}


//11.16
//1.//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。

//int main()
//{
//    //int nums[] = { 1,1,0,2,2,3 };
//    //int nums[] = { 1,0 };
//    int nums[] = { -1,3,5,9,5,3,-1,4 };
//    int i, j;
//    int sz = sizeof(nums) / sizeof(nums[0]);
//    for (i = 0; i < sz; i++)
//    {
//        for (j = i+1 ; j < sz; j++)
//        {
//            if (nums[i] == 0)
//            {
//                break;
//            }
//            if (nums[i] == nums[j])
//            {
//                break;
//            }
//        }
//        if (nums[i]!=0 && j < sz)
//        {
//            nums[i] = 0;
//            nums[j] = 0;
//        }
//    }
//    int arr[2] = { 0,0 };
//    j = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if (nums[i] != 0)
//        {
//            arr[j] = nums[i];
//            j++;
//        }
//    }
//    printf("%d %d\n", arr[0], arr[1]);
//    return 0;
//}

//改进：
//当只有一个出现次数为1的数字，其余数字都出现两次时，可以将所有数字异或：
//0与任何数字异或还为该数字，相同的数字异或为0
//当有两个出现次数为1的数字时，可以先进行分组，再进行异或
//void find_single_dogs(int arr[], int sz, int* dog1, int* dog2)
//{
//    int i;
//    int ret = 0;
//    //两个只出现一次的数字异或
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    int pos;
//    //找到异或结果为1的二进制位
//    for (pos = 0; pos <= 64; pos++)
//    {
//        if (((ret >> pos) & 1) == 1)
//        {
//            break;
//        }
//    }
//    //分组
//    for (i = 0; i < sz; i++)
//    {
//        if (((arr[i] >> pos) & 1) == 1)
//        {
//            *dog1 ^= arr[i];
//        }
//        else
//        {
//            *dog2 ^= arr[i];
//        }
//    }
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//    //分组：所有数字异或->相当于两个只出现一次的数字异或->找到异或结果为1的二进制位，
//    // 两个数字的该二进制位必一个为1，一个为0->再根据该二进制位为0或1分组->确保两个只出现一次的数字在不同的组
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int dog1 = 0, dog2 = 0;
//    find_single_dogs(arr, sz, &dog1, &dog2);
//    printf("%d %d\n", dog1, dog2);
//    return 0;
//}

//2.模拟atoi函数：把字符串转化为数字
//1. 空指针
//2. 空字符串
//3. 空格
//4. +-
//5. 越界
//6. 非数字字符
//#include<stdlib.h>  //atoi()
//#include<assert.h>
//#include<limits.h>  //INT_MAX  INT_MIN
//#include<ctype.h>  //字符分类函数：isdigit() ...
//enum statu
//{
//    vaild,
//    invaild
//}sta=invaild;
//
//int my_atoi(char* str)
//{
//    long long ret = 0;
//    int flag = 1;
//    assert(str);
//    if (*str == '\0')
//    {
//        return 0;
//    }
//    while (*str == ' ')
//    {
//        str++;
//    }
//    if (*str == '-')
//    {
//        flag = -1;
//        str++;
//    }
//    else if (*str == '+')
//    {
//        str++;
//    }
//    while (*str != '\0')
//    {
//        if (isdigit(*str))
//        {
//            ret = ret * 10 + flag * (*str-'0');
//            if (ret > INT_MAX || ret < INT_MIN)
//            {
//                return 0;
//            }
//            str++;
//        }
//        else
//        {
//            return (int)ret;
//        }
//    }
//    sta = vaild;
//    return (int)ret;
//}
//
//int main()
//{
//    char ch[] = "+123ab56";
//    int ret = my_atoi(ch);
//    if (sta == vaild)
//    {
//        printf("合法输入：%d", ret);
//    }
//    else
//    {
//        printf("非法输入：%d", ret);
//    }
//    return 0;
//}

//3.写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//假设第一位为0，从偶数开始
//通过n&(0xaaaaaaaa)->a:1010-->将保持奇数位不变，将偶数位改为0-->然后>>1,变到偶数位
//通过n&(0x55555555)->5:0101-->将保持偶数位不变，将奇数位改为0-->然后<<1,变到奇数位
//最后按位或->交换完成

//#define SWAP(n) ((n&(0xaaaaaaaa))>>1)|((n&(0x55555555))<<1)
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", SWAP(n));
//    return 0;
//}

//进阶测评：
//1.
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int a = 0, b = 1, c;
//    while (1)
//    {
//        c = a + b;
//        a = b;
//        b = c;
//        if (n >= a && n <= b)
//        {
//            break;
//        }
//    }
//    if (( n-a )>=( b-n ))
//    {
//        printf("%d\n", b - n);
//    }
//    else
//    {
//        printf("%d\n", n - a );
//    }
//    return 0;
//}

//2.
//#include<string.h>
//int main()
//{
//    char ch[50];
//    gets(ch);
//    int len = strlen(ch) + 1;
//    int i;
//    for (i = 0; i < len; i++)
//    {
//        if (ch[i] == ' ')
//        {
//            memmove(ch + i + 3, ch + i + 1, len - i - 1);
//            ch[i] = '%';
//            ch[i + 1] = '2';
//            ch[i + 2] = '0';
//            i = i + 2;
//        }
//        len = strlen(ch) + 1;
//    }
//    printf("%s", ch);
//    return 0;
//}

//月月鸟的低语：
//void replaceSpace(char* str, int length)
//{
//    char* cut = str;
//    int space_count = 0;
//    while (*cut)
//    {
//        if (*cut == ' ')
//        {
//            space_count++;
//        }
//        cut++;
//    }
//    /*int end1 = length - 1;
//    int end2 = length + space_count * 2 - 1;
//    while (end1 != end2)
//    {
//        if (str[end1] != ' ')
//        {
//            str[end2--] = str[end1--];
//        }
//        else
//        {
//            end1--;
//            str[end2--] = '0';
//            str[end2--] = '2';
//            str[end2--] = '%';
//        }
//    }*/
//    char* end1 = str + length - 1;
//    char* end2 = str + length + space_count * 2 - 1;
//    while (end1 != end2)
//    {
//        if (*end1 != ' ')
//        {
//            *end2 = *end1;
//            end1--;
//            end2--;
//        }
//        else
//        {
//            end1--;
//            *end2-- = '0';
//            *end2-- = '2';
//            *end2-- = '%';
//        }
//    }
//}
//
//int main()
//{
//    char ch[30];
//    gets(ch);
//    int len = strlen(ch) + 1;
//    replaceSpace(ch, len);
//    printf("%s\n", ch);
//    return 0;
//}

//***********************************************c语言进阶完结撒花！！！！**********************************************************