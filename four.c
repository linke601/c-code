#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//输入输出头文件
//指针
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//打印a的地址
//	int* p = &a;//p的类型int*//p是一个指针变量（用来存放地址）
//	//*号前方的字符类型决定指针变量所存放的数据是什么数据
//	//printf("%p\n", p);
//	*p = 20;//*p  *号对p进行解引用操作，访问并更改p的值
//	//间接访问操作符
//	printf("a = %d\n", a);
//	return 0;
//	
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%zd\n", sizeof(pd));
//	//*pd = 1.73;
//	//printf("%lf\n", d);//打印变量应该是指针变量所存放的变量
//	//指针变量的大小始终不变，不受数据类型改变
//  64位是8 32位是4
//	return 0;
//}
//int main()
//{
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(double*));
//	return 0;
//}
//结构体
//人或者书—复杂对象
//表示一个人一本书需要多种信息即变量
//复杂对象—结构体—自己创建的一种类型
//结构体关键字—struct
//创建结构体类型
#include <string.h>//strcpy的库函数
//struct BOOK //创建结构体类型
//{
//	char name[20];//人间
//	short price;//55
//};
//int main()
//{   //利用结构体类型创建一个该类型的结构体变量
//	struct BOOK b1 = {"人间",55 };
//	//结构体成员为字符串 其赋值形式用strcpy进行赋值
//	strcpy(b1.name, "人间失格");//strcpy—string copy—字符串拷贝—库函数 需要调用头文件—string.h
//	printf("%s\n", b1.name);
//	//struct BOOK* pb = &b1;//用指针则输入结构体名称加*号和指针变量取地址
//	////利用pb（指针变量）打印书名和价格
//	//printf("%s\n", pb->name);//pb指向的对象的结构体成员
//	//printf("%d\n", pb->price);
//	////printf("%s\n", (*pb).name);
//	////.号结构体访问成员		结构体变量.成员
//	//////-> 用于结构体指针变量访问成员	结构体指针->成员
//	////printf("%d\n", (*pb).price);
//	///*printf("书名:%s\n", b1.name);
//	//printf("价格:%d元\n", b1.price);
//	//b1.price = 15;
//	//printf("修改后的价格:%d\n", b1.price);*/
//	return 0;
}