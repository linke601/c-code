#define  _CRT_SECURE_NO_WARNINGS 1
//可用于无视安全性指令 //define:宏定义，预处理命令
#include<stdio.h>//包含一个输入输出的头文件
#include<string.h>//使用求字符长度时
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//用scanf_s而不是scanf，而scanf_s只适用于vs
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//{
	//const-常属性
	/*const int num = 4;*///const修饰的常变量，
	//int定义为变量，const定义为常量，结果为常变量
	//num是变量，也具有常属性，所以num是一个常变量
	//const定义的量不可变
	//printf("%d\n", num);
	//num = 8;
	//printf("%d\n", num);
	//300;字面常量
	/*	return 0; 
}*/
//define定义的标识符常量
//#define MAX = 10
//int main()
//{
//	int arr[MAX] = { 0 };//arr数组
//	printf("%d\n", MAX);
//	return 0;
//}
//枚举常量：一一列举
//enum Sex//性别枚举
////enum：枚举数据类型
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE FEMALE SECRET - 枚举常量
//int main()
//{
//	//enum Sex s = MALE;
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//	return 0;
//}
//enum Color
//{
//	RED,//0
//	YELLOW,//1//大括号中所有量为枚举类型的所有可能取值
//	BULE//2
//};
//int main()
//{
//	enum Color color = BULE;
//	color = YELLOW;
//	//BLUE = 6//大括号内枚举常量不可更改
//	printf("%d\n", color);
//	return 0;
//}
//int main()
//{
//	//数据在计算机中存储时，存储的是二进制
//	//'a'-97 ASCII码值
//	//A-65 ASCII码值
//	//...
//	//ASCII编码表
//	char arr1[] = "abc";//数组存储字符串用%s,以字符串形式输入存在0
//	//"abc" -- 中有'a' 'b' 'c' '\0',\0是字符串的结束标志，终止字符
//	char arr2[] = { 'a','b','c',0 };//字符在数组中也用%s，但存在乱码，加入0乱码消失
//	
//	//加入0与字符串结果相同，终止字符，\0的值是0
//	extern int g;
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", g);//此处a位于外部文件，extern用于引入外部定义
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";//abc\0
//	char arr2[] = { 'a','b','c','\0' };//abc随机数\0
//	//c之后存在随机值，strlen统计随机值直至\0，\0可以更改为0
//	//加入\0之后字符长度为3，即abc之后读取到\0
//	printf("%d\n",strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15，随机值
//	//strlen - string lenght 计算字符串长度
//	return 0;
//}
//转义字符
//转变原来的意思
//int main()
//{
//	printf("abc\n");//\n:换行
//	return 0;
//}
//int main()
//{
//	//printf("c:\test\32\\test.c");
//	//\t水平制表符，tab的功能及在字符间插入等同tab的空间
//	// \\：用于表示一个反斜杠，防止被解析为转义字符
//	/*printf("%c\n",'a');*///双引号单引号都可限定字符内容
//	printf("%s\n", "\"");/*\反斜杠用于独立字符内容*/
//	//\"用于表示一个字符串内部的双引号，用%s进行打印
//
//	return 0;
//}
//int main()
//{
//	printf("%d\n",strlen("c:\test\32\test.c"));
//	//32 8进制转换10进制
//	//3*8^1+2*8^0=26 26作为ASCII码值代表的字符
//
//	return 0;
//}
//int main()
//{
//	/*printf("%c\n", '\x61');*/
//	//61 6*16^1+1*16^0=97
//	printf("%c\n", '\x54');
//	//%c以字符形式打印
//	//%d以十进制数打印
//	return 0;
//}
//int main()
//{
//	printf("%d\n", '\x15');
//	return 0;
//}
//\ddd 八进制
//\xdd dd表示两个十六进制的数字
//int main()
//{
//	int input = 0;
//	printf("mark计划\n");
//	printf("是否执行？(1/0)>:");//>:提示符，后输入数字
//	scanf_s("%d", &input);
//	if (input == 1)//1/0
//	{//if 选择语句 如果1则，否则
//		printf("执行中\n");
//	}
//	else
//	{
//		printf("已取消\n");
//	}		
//	return 0;
//}//打印后进行数值输入
//循环语句
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line<20000)//加入判断条件
//	//whlie语句创建循环，重复执行
//	{
//		
//		printf("敲代码;%d\n",line);
//		line++;//line=line+1
//	}
//	if (line>=20000)
//		{
//		printf("好offer\n");
//		}
//	return 0;
//}
//int Add(int x, int y)//自定义函数
//{   //int Add(int x, int y)
//	//add为函数名，int x和int y为函数的参数
//	//int代表函数值的返回类型
//	int z = x + y;
//	return z;  //z为一个整形，定义add函数为一个整形函数
//	//大括号内为函数体
//}//全局函数
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	sum = Add(num1,num2);//值在add函数中计算返回为z而后输出到sum
//	printf("%d\n", sum);
//
//	return 0;
//}
//数组
//int main()//数组：一组相同类型元素的集合
////数组用来存储数据，一个数组只能存储同一类型的数据
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//存放10个整形数据的数组
//	//元素下标为   0 1 2 3 4 5 6 7 8 9
//	//下标从0开始，依次递增1往后进行
//	//char ch[20];//存放20个字符数据的数组
//	//float arr2[5];//存放5个单精度浮点值数据的数组
//	//printf("%d\n",arr[0]);//arr[下标]的元素是数据的下标
//	//下标可用于访问元素
//	int i = 0;//初始值
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);//%d空格使数据以十进制空格形式打印
//		i++;
//	}
//	return 0;
//}
//操作符
//算术操作符 +加 -减 *乘 /除 %取模
//移位操作符 >> <<
//取模
//int main()
//{
//	int a = 5%2;//取模:取余数
//	printf("%d", a);
//	return 0;
//}
//移位操作符
//int main()
//{
//	//移位（2进制位）
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整形占32个bit位
//	//32bit:00000000000000000000000000000001
//	a << 2;
//	//1向左移一位
//	//00000000000000000000000000000010
//	//int b = a << 1;
//	//printf("%d\n",b);
//	//二进制打印向左移一位数字变为10
//	//移位移动二进制位
//	//以十进制打印：1*2^1+0*2^0= 2
//	int b = a << 2;
//	//1*2^2+0*2^1+0*2^0= 4
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	//(2进制)位操作
//	//& 按位与
//	//| 按位或
//	//^ 按位异或
//按位与&
//	int a = 3;
//	//3的2进制位011
//	//5的2进制位101
//	//c语言中0为假，与：相同位置合并
//	//一个假则为假，同时为真则1
//	int b = 5;
//	int c = a & b;
//	//011 101 = 001 =1
//	printf("%d\n", c);
//	
//	return 0;
//}
//按位或|
//int main()
//{
//	//int a = 3;//011
//	//int b = 4;//100
//	//int c = a | b;//111
//	//或：有1则1
//按位异或^
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//不是次方
//	//计算规律：对应的二进制位相同，则为0
//	//对应二进制位相异，则为1
//	//011
//	//101
//	//110 1*2^2+1*2^1=6
//	printf("%d\n", c);
//	
//	return 0;
//}
//赋值操作符
// = += *= /= %= <<= >>= |= ^=
//复合操作符
//int main()
//{
//	int a = 10;//一个=赋值，两个等号==判断相等
//	a = a + 10; a += 10;
//	a = a - 20;
//	a & 2;
//	a &= 2;
//	return 0;
//}
//单目操作符 
//双目操作符
//三目操作符
//!逻辑反操作 -负值 +正值
//int main()
//{
//	int a = -2;//-对2进行操作
//	int b = -a;
//	int c = +3;//正号通常省略
//	return 0;
//
//} 
//&取地址
//sizeof 操作数的类型长度
//~ 对一个数的二进制按位取反
//--前置，后置--
//++前置，后置++
//*间接访问操作符（解引用操作符）
//（类型）强制类型转换
//int main()
//{
//	//int a = 10;
//	//int b = 20;
//	//a + b;//两个操作对象：双目操作符
//	int a = 10;
//	printf("%d\n",a);
//	printf("%d\n", !a);//逻辑反操作
//	//逻辑反操作将真改变为0
//	//0为假 非0为真
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//sizeof计算变量或类型所占的大小
//	printf("%d\n",sizeof(a));//a占四个字节
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof int);//不可省略
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };//10个整形元素的数组
//	//10个整形值的字节等于40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	//个数=数组总大小除以每个元素的大小
//	sz = sizeof(arr) / sizeof(arr[10]);
//	printf("sz = %d\n", sz);sz=10
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };//6*4=24//arr数组可以根据元素内容确定数组大小
//	printf("%d\n", sizeof(a));//4个字节
//	printf("%d\n", sizeof (arr));//计算数组大小
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组第一元素下标为0
//	return 0;
//}
//~对一个数的二进制按位取反
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	//a 32bit 00000000000000000000000000000000 
//	//按位取反11111111111111111111111111111111 按位取反为补码
//	只要是整数，内存中存储的都是二进制的补码

//反码11111111111111111111111111111110
//原码10000000000000000000000000000001
//	//最高位为符号位 0为正数1为负数
//	printf("%d\n",b);//~按（二进制）位取反
//	//打印的是这个数的原码
//正数——原码，反码，补码相同
//负数——
//原码直接按照正负写出的二进制序列
//	//原码
//	//反码 原码符号位不变，其他位按位取反
//	//补码=反码+1
//	return 0;
//}
//++
//int main()
//{
//	int a = 10;
//	int b = ++a;
//	//前置++，先加后用，a值改变赋值b
//	//后置++，先赋值b再增加
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a--;
//	printf("a = %d b = %d", a, b);
//	//前置--先减少再赋值给b
//	//后置--先赋值给b再减少
//	return 0;
//}
//(类型)强制类型转换
//int main()
//{
//	int a = (int)3.21;//强制转换为整形
//	printf("%d\n", a);
//	return 0;
//}
//关系操作符
//> 
//>=
//< 
//<=
//!= 用于测试“不相等”
//== 用于测试“相等”
//int main()//真——非零
////假——0
////&&逻辑与
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = a && b;//逻辑与两端同时为真才为真，真为1
//	//printf("c = %d\n",c);
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//	printf("c = %d\n", c);//两端有一个为假（0），即为假
//	return 0;
//}
//int main()
////||逻辑或 两端有一个为真则为真,两端为假才为假
//{
//	int a = 3;
//	int b = 0;
//	int c = a || b;
//	printf("c = %d\n", c);
//	return 0;
//}
//条件操作符(三目运算符)exp1 ? exp2 : exp3；
//exp1表达一为真 exp2表达二执行
//exp1为假 exp3执行
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? b : a);
//	if (a > b)
//		max = a;
//	else
//	{
//		max = b;
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[4];//[]——下标引用操作符
////函数调用()
//	int a = 10;
//	int b = 20;
//	int sum = add(a,b);//()—函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}
//& * . ->暂时没学
//关键字
//内置关键字
//register 寄存器
//计算机储存数据
//寄存器     访问速度：快
//高速缓存
//内存
//硬盘                 慢
//int main()//auto
//{
//	register int a = 10;//建议把a定义为寄存器变量
//	//register int a 把a定义为寄存器变量，放在寄存器中
//	return 0;
//}
//int main()
//{
//	int a = -10;
//	a = -2;//int 定义的变量是有符号的
//	//signed int == int 常规形式省略signed
//	unsigned int num = 1;//unsigned int定义无符号数
//	return 0;
//}
//typedef 类型定义—类型重定义
//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	
//	return 0;
//}
//static 修饰变量和函数
//修饰局部变量，局部变量生命周期变长了
//也可修饰全局变量
//void test()
//{
//	static int a = 1;//静态局部变量
//	//a未被销毁
//	a++;
//	printf("a = %d\n", a);//加入static后a的值被累积
//	
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();//调用test函数//i<5进入循环
//		i++;//i小于5则调用test//增加
//	}
//	return 0;
//}
//struct 结构体关键字
//union 联合体/共用体
//void 无/空