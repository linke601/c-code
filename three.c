#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int g_val = 2020;//ȫ�ֱ���
//static int add(int x, int y)//����һ������
////static����һ������Ҳ��ʹ���Դ�ļ���ʧЧ���ı��˺�����������
////static�ı��˺�������������
////���������ⲿ��������static�����ⲿ�������Ա�Ϊ�ڲ�
//{
//	int z = x + y;
//	return z;
//}\
//static Ҳ����ȫ�ֱ�����ȫ�ֺ���
//�ı��˱�����������ʹ��̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//��Դ�ļ�����ʧЧ
//int main()
//{
//	extern int g_val;//extern�����ⲿ����
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
//#define MAX 100//define�����ʶ������
//����ꡪ������
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
////�������Ժ���ʽ���
//int main()
//{
//	/*int a = MAX;*/
//	int a = 10;
//	int b = 20;//������ʽ
//	int max = MAX(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = (a>b?a:b)
//	printf("max = %d\n",max);
//	return 0;
//}
//ָ��
//�ڴ�
//�ڴ汻����Ϊһ�����ڴ浥Ԫ
//��β�����ַ
//32λ 32����ַ�� ͨ��������͸���
//����		����
// 1		 0
//���һ���ڴ浥Ԫ��һ��bitλ�������Է���0.5G�ڴ�
//һ���ڴ浥Ԫ��һ���ֽ�Ϊ��λ
//Ϊa����4���ֽڵĿռ�
//int main()
//{
//	int a = 10;//ȡ��ַ�밴λ�������
//	int* p = &a;//p���������ַ �˴�pΪָ�����
//	//ȡ��ַ&Ϊ��Ŀ������
//	//��λ��&Ϊ˫Ŀ������
//	//������ŵ�ַ�ı�����ָ�����
//	//printf("%p\n",&a);//%p��ӡ��ַ
//	//printf("%p\n", p);
//	*p = 20;//* �������ò�����
//	printf("a = %d\n", a);
//	return 0;
//}
//int a = 10
//int* p = &a//ָ�����*p�������a�ĵ�ַ
//*p = 20//*p *�Ŷ�p���н����ò��������ʲ�����p�ĵ�ַ���ݣ�a��
//����a=20
//int main()
//{
//	char ch = 'w';//char�Է�����ʽ��ӡ
//	char* pc = &ch;
//	*pc = 'a';//*pc��a��ֵ��ch�ĵ�ַ
//	printf("%lld\n", sizeof(pc));
//	//printf("%zd\n", sizeof(char));
//	//64λ
//	//%d���4�ֽ�
//	//%ld���8�ֽ�
//	//%lld���8�ֽ�
//	//printf("%c\n", ch);
//	return 0;
//}
//ָ������Ĵ�С
//32λƽ̨��һ��ָ������Ĵ�С����4���ֽ�
//64λƽ̨��һ��ָ������Ĵ�С����8���ֽ�
