#define _CRT_SECURE_NO_WARNINGS 1
//可用于无视安全性指令 //define:宏定义，预处理命令
#include<stdio.h>

//int main(void)
	//#include"stdio.h"
//int main() 
//char age = 20;
//printf ("%d\n", age);
//	return 0;年龄

	//char ch = 'A';
	//printf("%c\n", ch);
	//return 0;字符输出
	//double V = 3.24;
	//printf("%f\n", V);
	//return -1;精度数值输出
	//printf("%d\n", sizeof(char));
	//printf("%d\n", sizeof(short));
	//printf("%d\n", sizeof(long));
	//printf("%d\n", sizeof(long long));
	//printf("%d\n", sizeof(float));
	//printf("%d\n", sizeof(double));	
	//return 0;
	/*short age = 20;
	float weight = 120.6;
	printf("%d\n", age);
	printf("%f\n", weight);
	return 0;*/
//int num2 = 20;//全局变量
//int main()
//{
//	int num1 = 10;//局部变量
//	printf("%d\n", num1);
//	//局部变量和全局变量名称相同时优先局部（不建议相同）
//
//	return 0;
//}
//int a = 10;
//int main()
//{
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{
//	//计算数值之和
//	int num1;
//	int num2;
//	int sum;
//  输入数据 使用输入函数 scanf_s
//	scanf_s("%d%d",&num1,&num2);//&取地址符
//	//c语言语法规定，变量要在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//局部变量的作用域
//变量的作用域和生命周期
//{
//	int num = 0;//变量作用域指大括号范围(局部范围），变量被定义在大括号内
//	{printf("num = %d\n", num);
//	return 0; }
//}
//全局变量的作用域,在函数外定义作用于整个函数中,在另一项目中同样适用（需声明）
//
//int global = 2020;
//void test()
//{
//	printf("test--%d\n", global);
//}
//int main()
//{
//	printf("%d\n",global);
//	return 0;
//}
//int main()
//{
//	extern int g;
//	printf("%d\n", g);
//	return 0;
//}全局变量的作用域是整个工程
//
//int g = 10;