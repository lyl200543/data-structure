//#include<iostream>
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	std::cin.get();
//}

//11.30
//1.引用：& -->常用在函数参数传递，使代码易于阅读
// 
//  -->特点:
//1>别名：引用通常是为一个已有变量提供另一个名字，直接操作引用就等同于操作原变量
//2>指向内存地址：引用指向变量在内存中的地址，而非值本身
//3>共享修改：通过引用修改数据时，原始变量会同步变化
//4>声明时需要初始化，且之后无法更改指向
//5>引用不是变量，不在内存中创建空间

//#include<iostream>
//#define LOG(x) std::cout<<x<<std::endl
//
//void increment(int& ref)
//{
//	ref = 2;
//}
//
//int main()
//{
//	int a = 5;
//	//int& ref = a;
//	//ref = 2;
//	increment(a);
//	LOG(a);
//}

//2.类：class  -->使代码简洁易懂
//  是C++中面向对象编程（OOP）的核心概念,它是用户自定义的类型
//  由类类型组成的变量称为对象
// 
//  -->类的基本组成:
//
//   1>数据成员（成员变量）：
//      用于存储对象的属性或状态
//      可以是基本数据类型、类类型或指针
// 
//   2>成员函数：（也叫作方法）
//      操作数据成员的函数，定义对象的行为
//      包括普通函数和构造函数、析构函数等特殊成员函数
// 
//   3>访问权限：
//      控制类成员的访问范围
//       有三种访问修饰符：
		//public: 公有成员，类外可以访问。
		//private: 私有成员，仅类内部可以访问（默认）。
		//protected: 受保护成员，仅类及其派生类可以访问。

//#include<iostream>
//class player
//{
//public:  //默认为private
//	int x, y;
//	int speed;
//
//	void move(int xa, int ya)  //方法
//	{
//		x += xa * speed;
//		y += ya * speed;
//	}
//};
//
//int main()
//{
//	player player;
//	player.x = 4;
//	player.y = 2;
//	player.speed = 1;
//	player.move(1, -1);
//}

//3.struct vs class:
// 在c++中，struct和class只有可见性的区别，struct的可见性默认为public,而class的可见性默认为private
//          但通常，当只有若干个成员变量时用struct，涉及函数（方法）时用class
// 
//在c中：stuct只能表示变量
//在c++中，struct能包含函数及其他功能（与class相同 )


//12.1
//1.如何写一个c++类：( log类 )
//#include<iostream>
//class Log
//{
//public:
//	const int LogLevelError = 0;
//	const int LogLevelWarning = 1;
//	const int LogLevelInfo = 2;
//private:
//	int m_LogLevel = 2;
//public:
//	void SetLevel(int level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if(m_LogLevel>=LogLevelError)
//		    std::cout << "[Error]:" << message << std::endl;
//	}
//	void Warn(const char* message)
//	{
//		if(m_LogLevel >= LogLevelWarning)
//		   std::cout <<"[Warning]:"<< message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= LogLevelInfo)
//		    std::cout << "[Info]:" << message << std::endl;
//	}
//};
//
//int main()
//{
//	Log log;
//	log.SetLevel(log.LogLevelWarning);
//
//	log.Error("hello!");
//	log.Warn("hello!");
//	log.Info("hello!");
//	std::cin.get();
//}


//2.关键字static:(修饰变量或函数)

//1>在类和结构体之外:
      //表示变量或函数是内部链接的,不能在另一个c++文件中使用
      //在头文件中包含 static 变量，会导致每个包含头文件的编译单元都创建一个独立的变量实例
      
//补充:实例:<1>类:类是模板,而实例是具体实现,一个类可以有多个实例
         // <2>变量:一个变量在程序运行时分配了存储空间并存储了实际值，这被称为变量实例



//2>*****在类和结构体之内:
     //static 修饰变量:表示它们属于整个类，而不属于某个对象
         //<1>所有类的实例共享同一份 x 和 y 的存储空间
         //<2>在类中声明后，必须在类外定义和初始化

    //static 修饰函数:静态函数不依赖于任何类的实例，可以直接通过类名调用
         // **只能访问类的静态成员，不能直接访问非静态成员


//1.无static修饰:
//#include<iostream>
//struct Entity
//{
//    int x, y;
//    
//    void print()
//    {
//        std::cout << x << "," << y << std::endl;
//    }
//};
//
//int main()
//{
//    Entity e;
//    e.x = 2;
//    e.y = 3;
//
//    Entity e1;
//    e1.x = 5;
//    e1.y = 8;
//
//    e.print();
//    e1.print();
//
//}

//2. static 修饰变量
//#include<iostream>
//struct Entity
//{
//    static int x, y;  //只是声明,没有定义和初始化
//
//    void print()
//    {
//        std::cout << x << "," << y << std::endl;
//    }
//};
//
////****在类外部定义静态变量时，需要加上类的作用域限定符 Entity::
////这里是定义,没有初始化
//int Entity::x;
//int Entity::y;
//
//int main()
//{
//    /*Entity e;
//    e.x = 2;
//    e.y = 3;*/
//    Entity::x = 2;   //这里是初始化
//    Entity::y = 3;
//
//    /*Entity e1;
//    e1.x = 5;
//    e1.y = 8;*/
//    Entity::x = 5;
//    Entity::y = 8;
//
//    //如果一个类中存在静态变量和非静态方法，
//    //要在类外引用非静态方法，必须先创建该类的实例，然后通过该实例调用非静态方法
//    Entity e;
//    e.print();
//
//}

//3.static 修饰方法:
// 
//静态方法无法直接访问非静态变量，因为静态方法没有实例上下文
//如果需要在静态方法中访问非静态变量，必须通过将实例对象作为参数传递给静态方法来实现
//#include<iostream>
//struct Entity
//{
//    int x, y;
//    
//    static void print(Entity& e)
//    {
//        std::cout << e.x << "," << e.y << std::endl;
//    }
//};
//
//int main()
//{
//    Entity e;
//    e.x = 2;
//    e.y = 3;
//
//    Entity e1;
//    e1.x = 5;
//    e1.y = 8;
//
//    Entity::print(e);
//    Entity::print(e1);
//}


//12.2
//1.enum(枚举类型）：本质上是一组数值（整数）的集合，使代码易于管理和阅读
// 
//#include<iostream>
//enum example: unsigned char  //可以指定底层类型（必须是整型家族，默认是int） -->节约空间，满足特定需求
//{
//    A,  //如果不初始化，默认值为0，并依次递增
//    B,
//    C
//};
//
//int main()
//{
//    int value1 = A;
//    example value2 = A; //使用enum类型定义变量时，只能赋enum中的值
//}

//改写log类：
//#include<iostream>
//class Log
//{
//public:
//	enum level
//	{
//		levelError=0,
//		levelWarning,
//		levelInfo
//	};
//private:
//	level m_LogLevel = levelInfo;
//public:
//	void SetLevel(level level)
//	{
//		m_LogLevel = level;
//	}
//
//	void Error(const char* message)
//	{
//		if (m_LogLevel >= levelError)
//			std::cout << "[Error]:" << message << std::endl;
//	}
//	void Warn(const char* message)
//	{
//		if (m_LogLevel >= levelWarning)
//			std::cout << "[Warning]:" << message << std::endl;
//	}
//	void Info(const char* message)
//	{
//		if (m_LogLevel >= levelInfo)
//			std::cout << "[Info]:" << message << std::endl;
//	}
//};
//
//int main()
//{
//	Log log;
//	log.SetLevel(Log::levelWarning); 
//	//在 C++ 中，enum 类型（枚举）成员被视为类的静态成员，
//	// 属于整个类而不是某个具体的对象,这意味着它们在类的所有实例中都是共享的
//	// 因此，访问枚举成员时需要通过类名（Log::levelError）而不是实例对象（log.levelError）来进行
//
//	//但是，某些情况下，log.levelError也可以，
//	//enum level 是一个普通的枚举类型（没有使用 enum class）
//	// 在 C++ 中，普通的枚举会把它的成员提升到类的作用域中
//	// 因此，尽管你在类 Log 内部定义了 enum level，
//	// 编译器会把 levelError、levelWarning 和 levelInfo 当作类的成员来处理
//	// 
//	//但如果是强类型枚举（enum class）：其成员会被严格限定在枚举的作用域内，
//	// 不能通过对象或类名直接访问，必须使用 Log::levelWarning。
//
//
//	log.Error("hello!");
//	log.Warn("hello!");
//	log.Info("hello!");
//	std::cin.get();
//}


//12.4
//1.构造函数：
// 一种类中的特殊的方法，只有在创建了类的实例时才运行，主要用途是初始化类
//当类中没有显式定义构造函数时，编译器会自动生成一个默认构造函数，使得类能够被实例化
//如果显式地删除（= delete）构造函数，就无法通过默认构造实例化对象
//构造函数可以有多个

//#include<iostream>
//#include<iomanip>  //std::fixed  -->将浮点数的输出格式设置为固定的小数点格式
//                  //std::setprecision(2)：设置输出的浮点数精度为 2，即保留 2 位小数         
//class Entity
//{
//public:
//    float X, Y;
//
//    //显式定义构造函数，函数名是类名，没有返回值类型
//    Entity()
//    {
//        X = 0.0f;
//        Y = 0.0f;
//    }
//
//    //函数重载：即多个函数名相同，但参数类型，顺序，数量不同（返回值类型不能区分函数重载）
//    Entity(float x, float y)
//    {
//        X = x;
//        Y = y;
//    }
//
//    void print()
//    {
//     /*   std::cout << X << " " << Y << std::endl;*/  //std::cout默认以int格式输出
//        std::cout << std::fixed << std::setprecision(2) << X << " " << Y << std::endl;
//    }
//};
//int main()
//{
//    //Entity e;
//    //std::cout << e.X << std::endl;  //e.X没有初始化，会报错
//
//    //使用Entity()构造函数
//    Entity e;
//    e.print();
//    //使用Entity(float x, float y)构造函数
//    Entity e1(10.0f, 5.0f);
//    e1.print();
//}


//如果想要只能通过Log::print()调用函数，有两种方法
//#include<iostream>
//class Log
//{
////1>将构造函数设为private,类不能实例化
////private:
////    Log();
//
////2>删除默认构造函数，无法实例化
////    Log() = delete;
//
//public:
//    static void print()
//    {
//        std::cout << "hello" << std::endl;
//    }
//};
//
//int main()
//{
//    Log l;
//    l.print();
//}
//


//12.7
//1.析构函数：一种特殊的方法，当对象的生命周期结束时（比如超出作用域或被显式删除时），
//            析构函数会自动被调用，用于清理对象所占用的资源

//#include<iostream>
//class Entity
//{
//public:
//    int x, y;
//    //构造函数：
//    Entity()
//    {
//        x = 0;
//        y = 0;
//        std::cout << "Created Entity!" << std::endl;
//    }
//    //析构函数：
//    ~Entity()
//    {
//        std::cout << "Destroyed Entity!" << std::endl;
//    }
//    void print()
//    {
//        std::cout << x << "," << y << std::endl;
//    }
//};
//
//void function()
//{
//    Entity e;
//    e.print();
//}
//
//int main()
//{
//    function();
//    return 0;
//}

//总结：构造函数和析构函数可以省略，编译器会生成默认的版本
//      默认构造函数和析构函数适合简单的类，
//      但如果类需要动态内存管理或特定的初始化 / 清理操作，就需要显式定义它们


//2.继承：通过继承，一个类（派生类/父类）可以从另一个类（基类/子类）中
//        继承属性（成员变量）和行为（成员函数），实现代码复用和功能扩展 
//            --》减少代码重复

//#include<iostream>
//class Entity
//{
//public:
//    float x, y;
//    void move(float xa, float ya)
//    {
//        x += xa;
//        y += ya;
//    }
//};
//
////继承：
//class Player :public Entity    //******
//{
//public:
//    const char* name;
//    void printname()
//    {
//        std::cout << name << std::endl;
//    }
//};
//
//int main()
//{
//    Player player;
//    player.x = 0.0f;
//    player.name = "lyl";
//    player.printname();
//    return 0;
//}


//3.虚函数：（virtual）
// 允许派生类重写基类中的虚函数

//#include<iostream>
//#include<string>  //定义了std::string
//
//using namespace std;    //是一条命名空间声明语句，
//                        //它的作用是将【标准库】中的所有成员（如函数、类、变量等）引入到当前作用域中
//                        //这样在使用标准库的成员时就可以省略前缀 std::
//class Entity
//{
//public:
//    virtual std::string GetName()       //std::string是标准库（std 命名空间）提供的一个【类】，
//                                //用于表示和操作【字符串】
//    {
//        return "Entity";
//    }
//};
//
//class Player :public Entity
//{
//private:
//    std::string m_name;
//public:
////成员初始化列表：是 C++ 构造函数的一种特殊语法，用于在构造函数体执行之前初始化类的成员变量
////它通过在构造函数的参数列表后使用冒号（ : ）和括号（()）来实现，成员1（值1），成员2（值2）...
////对于常量成员（const）和引用型成员（&）必须使用成员初始化列表
//    Player(const std::string& name) :m_name(name) 
//    {
//        ;
//    }
//    virtual std::string GetName() override  //当子类定义和基类同名的函数时，基类的函数被隐藏，如果使用虚函数，则被重写
//    {                                       //override关键字：表示函数被重写，并且会规范代码
//        return m_name;
//    }
//};
//
//void print(Entity* e)
//{
//    std::cout << e->GetName() << std::endl;
//}
//int main()
//{
//    Entity* e = new Entity();  //加括号明确表示调用默认构造函数
//    //std::cout << e->GetName() << std::endl;   //打印Entity
//    print(e);   //打印Entity
//
//    Player* p = new Player("lyl");
//    //std::cout << p->GetName() << std::endl;   //打印lyl
//    print(p);    //打印Entity  -->解决方法：使用【虚函数 】
//
//    delete e;
//    delete p;
//    return 0;
//}


//12.8
//1.纯虚函数（接口）：
    //1>纯虚函数:是一个没有函数体的虚函数，
    //   --》定义形式为：virtual void functionName() = 0;
    //包含纯虚函数的类称为【抽象类】，抽象类不能直接实例化,必须被子类重写
    // 
    //2>接口:是一种特殊的抽象类，其中：所有成员函数都是纯虚函数。

//#include<iostream>
//#include<string>
//class printable
//{
//public:
//    virtual std::string GetName() = 0;  //纯虚函数
//};
//
//class Entity:public printable
//{
//public:
//    virtual std::string GetName() override
//    {
//        return "Entity";
//    }
//};
//
//class Player :public Entity
//{
//private:
//    std::string m_name;
//public:
//    Player(const char* name) :m_name(name) {}
//    virtual std::string GetName()  override
//    {
//        return m_name;
//    }
//};
//void print(printable* p)
//{
//    std::cout << p->GetName() << std::endl;
//}
//
//int main()
//{
//    Entity* e = new Entity();
//    print(e);
//    Player* p = new Player("lyl");
//    print(p);
//}


//2.可见性:public,protected,private
//1>public:类本身,子类,其他函数(作用域)中都可以调用
//2>protected:类本身和子类可以调用,其他函数(作用域)中不可以调用
//3>private:只有类本身可以调用(特殊:友元),子类和其他函数(作用域)中不可以调用
//
//#include<iostream>
//class Entity
//{
//protected:
//    int x;
//    void print(){}
//public:
//    Entity()
//    {
//        x = 0;
//        print();
//    }
//};
//class Player:public Entity
//{
//public:
//    Player()
//    {
//        x = 2;
//        print();
//    }
//};
//int main()
//{
//    Entity e;
//    e.x = 2;
//    e.print();
//    return 0;
//}


//3.字符串:std::string  类
//#include<iostream>
//#include<string>
//int main()
//{
//    std::string ch = "liaoyilin";
//    //追加字符串(strcat)
//    //std::string ch = "liaoyilin" + "hahah";  //语法错误
//    ch += "hahah";
//    //std::string ch = std::string("liaoyilin") + "hahah";
//    std::cout << ch << std::endl;
//
//    //求字符串长度.size()(strlen)
//    std::cout << ch.size() << std::endl;
//
//    //查找字符串
//    bool contains = ch.find("lin") != std::string::npos;  
//    int i = ch.find("lin");
//    std::cout << i << std::endl;
//    //如果子字符串存在，则返回其起始位置的索引；如果不存在，则返回 std::string::npos
//    //std::string::npos 是一个常量，表示“未找到”,它的值通常是一个大整数（实现依赖）
//}


//4.字符串字面量(字符串常量):
//char* p = "hello";  p是一个指针，直接指向常量区，修改p[0]就是修改常量区的内容，这是不允许的。
//char p[] = "hello"; // 编译器在栈上创建一个字符串p，把"hello"从常量区复制到p，修改p[0]就相当于修改数组元素一样，是可以的。

//#include<iostream>
//int main()
//{
//    using namespace std::string_literals;
//    //可以将 "s" 后缀附加到字符串文字以直接创建 std::string 对象,"example"默认为const char* 类型
//    std::string ch = "hello"s + " world" + "!!";
//    //R:原始字符串文字的使用，()内允许您表示字符串，而无需转义换行符 ( \n ) 或引号等特殊字符
//    const char* example = R"(line1
//line2
//line3)";
//    std::cout << example << std::endl;
//    std::cout << ch << std::endl;
//}
