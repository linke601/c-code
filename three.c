#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int g_val = 2020;//全局变量
//static int add(int x, int y)//定义一个函数
////static修饰一个函数也会使其出源文件后失效（改变了函数的作用域）
////static改变了函数的链接属性
////函数具有外部链接属性static修饰外部链接属性变为内部
//{
//	int z = x + y;
//	return z;
//}\
//static 也修饰全局变量和全局函数
//改变了变量的作用域，使静态的全局变量只能在自己所在的源文件内部使用
//出源文件后则失效
//int main()
//{
//	extern int g_val;//extern声明外部符号
//	printf("g_val = %d\n", g_val);
//	return 0;
//}
//extern int add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}
//#define MAX 100//define定义标识符常量
//定义宏—带参数
//#define MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//		
//	else
//	{
//		return y;
//	}
//}
//#define MAX(X,Y) (X>Y?X:Y)
////定义宏会以后方形式表达
//int main()
//{
//	/*int a = MAX;*/
//	int a = 10;
//	int b = 20;//函数形式
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = (a>b?a:b)
//	printf("max = %d\n",max);
//	return 0;
//}
//指针
//内存
//内存被划分为一个个内存单元
//如何产生地址
//32位 32个地址线 通电有正电和负电
//正电		负电
// 1		 0
//如果一个内存单元是一个bit位，最多可以访问0.5G内存
//一个内存单元以一个字节为单位
//为a申请4个字节的空间
//int main()
//{
//	int a = 10;//取地址与按位与的区别
//	int* p = &a;//p用来储存地址 此处p为指针变量
//	//取地址&为单目操作符
//	//按位与&为双目操作符
//	//用来存放地址的变量：指针变量
//	//printf("%p\n",&a);//%p打印地址
//	//printf("%p\n", p);
//	*p = 20;//* —解引用操作符
//	printf("a = %d\n", a);
//	return 0;
//}
//int a = 10
//int* p = &a//指针变量*p用来存放a的地址
//*p = 20//*p *号对p进行解引用操作，访问并更改p的地址内容（a）
//所以a=20
//int main()
//{
//	char ch = 'w';//char以符号形式打印
//	char* pc = &ch;
//	*pc = 'a';//*pc将a赋值给ch的地址
//	printf("%lld\n", sizeof(pc));
//	//printf("%zd\n", sizeof(char));
//	//64位
//	//%d输出4字节
//	//%ld输出8字节
//	//%lld输出8字节
//	//printf("%c\n", ch);
//	return 0;
//}
//指针变量的大小
//32位平台中一个指针变量的大小等于4个字节
//64位平台中一个指针变量的大小等于8个字节
