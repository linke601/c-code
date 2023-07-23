#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//C语言语言结构
//语句：由分号;隔开
//顺序结构
//选择结构
//分支语句
//if语句
//if(表达式)
// 语句;
//if(表达式)
//语句1;
// 否则不执行
//else
//语句2;
//if(表达式1)
//语句1;
//else if(表达式2)
//语句2;
//else
//语句3;
// if语句的两种形式
//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 28)//&&逻辑与两边同时为真则输出语句
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//	}
//		return 0;
//}
//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 28)//&&逻辑与两边同时为真则输出语句
//		printf("青年\n");
//	else if (age >= 28 && age < 50)
//		printf("壮年\n");
//	else if (age >= 50 && age < 90)
//		printf("老年\n");
//	return 0;
//}
// if语句如果需要控制多条语句包括else则都需要代码块{}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else//悬空else
//			printf("haha\n");
//		return 0;//else会与最近的if组合
//}
//if()
// {
// return x;
// }
// return y;//避免这种写法
// if()
// {
// return x;
// }
// else
// {
// return y;
// }
//int main()
//{
//	int num = 4;
//	if (5 == num)//为防止程序错误不采用赋值形式
//	{
//		printf("呵呵\n");
//	}
//	/*if (num = 5)
//	{
//		printf("呵呵\n");
//	}*/
//	return 0;
//}
//练习
//int main()
//{
//	int a = 10;
//	if ((a % 2) == 1)
//	{
//		printf("为奇数\n");
//	}
//	else
//	{
//		printf("a不为奇数\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	while (num<=100)//判断范围//条件为真则执行
//	{
//		
//		if (num % 2 == 1)
//		{
//			printf("%d\n",num);
//		}
//		num++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for( i = 0; i < 100; i++)
//	{
//		i = i++;
//		if (i % 2 == 1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	return 0;
//}
//分支switch语句
//switch:用于实现多分支的情况
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf_s("%d", &day);
//	//switch(整形表达式)括号内必须为整形
//	//{
//		//语句项
//	//}
//	//switch (day)//switch case确定入口
//	//	//break确定出口
//	//{
//	//case 1://case用整形常量表达式
//	//	printf("星期一\n");
//	//	break;
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//	//}
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");//多个整形表达同一结果时只需要一个出口
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://如果无法进入任何入口则进入默认
//		//default 默认 可不写 顺序不做要求
//		printf("输入错误\n");
//		break;
//	}
	/*if (1 == day)
	{
		printf("星期一\n");
	}
	else if (2 == day)
	{
		printf("星期二\n");
	}
	else if (3 == day)
	{
		printf("星期三\n");
	}
	else if (4 == day)
	{
		printf("星期四\n");
	}
	else if (5 == day)
	{
		printf("星期五\n");
	}*/
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	default://默认入口
//	case 1:m++;//m=3//没遇到break继续执行
//	case 2:n++;//n=2
//	case 3:
//		switch (n)
//		{//switch允许嵌套使用
//		default:
//		case 1:n++;//n=2不执行
//		case 2:m++; n++;//n=3 m=4
//			break;
//		}
//	case 4:m++;//m=5
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
// }
//循环结构
//循环语句
//expr:表达式
//stmt:语句
//while(条件为真执行语句)
//int main()
//{
//	while(1)//1为真0为假  条件为真则执行
//		//完成循环返回到while若条件仍为真则继续执行
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;//continue：继续(终止本次循环中continue之后的代码)
//		//continue用于终止本次循环，即满足前置条件时continue后方的代码不执行
//		//而后直接跳转至while的判断部分进行下一次循环的判断
//		//break;//循环中遇到break直接停止 break永久终止循环
//		printf("%d\n", i);//先输出后增加
//		i++;//先赋值后增加
//	}
//	return 0;
//}
// getchar()接收键盘输入一个字符 !=//不等于
int main()
{
	//int ch = getchar();//输入（接收）一个字符
	//putchar(ch);//输出字符
	//printf("%c\n", ch);
	//return 0;
	//int ch = 0;
	//while ((ch = getchar()) != EOF)//判断条件//EOF：文件结束标志
	//{//getchar遇到CTRL+Z结束
	//	//EOF =end of file 值 -1
	//	//ctrl+z获取getchar的条件 条件为假结束循环
	//	putchar(ch);
	//}
	char password[20] = { 0 };
	printf("输入密码:>");
	scanf("%s", password);//输入密码然后存放到password中
	printf("请确认(Y/N):>");
	return 0;
}
//for(三个表达式)
//do while