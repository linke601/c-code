#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//�������ͷ�ļ�
//ָ��
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);//��ӡa�ĵ�ַ
//	int* p = &a;//p������int*//p��һ��ָ�������������ŵ�ַ��
//	//*��ǰ�����ַ����;���ָ���������ŵ�������ʲô����
//	//printf("%p\n", p);
//	*p = 20;//*p  *�Ŷ�p���н����ò��������ʲ�����p��ֵ
//	//��ӷ��ʲ�����
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
//	//printf("%lf\n", d);//��ӡ����Ӧ����ָ���������ŵı���
//	//ָ������Ĵ�Сʼ�ղ��䣬�����������͸ı�
//  64λ��8 32λ��4
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
//�ṹ��
//�˻����顪���Ӷ���
//��ʾһ����һ������Ҫ������Ϣ������
//���Ӷ��󡪽ṹ�塪�Լ�������һ������
//�ṹ��ؼ��֡�struct
//�����ṹ������
#include <string.h>//strcpy�Ŀ⺯��
//struct BOOK //�����ṹ������
//{
//	char name[20];//�˼�
//	short price;//55
//};
//int main()
//{   //���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct BOOK b1 = {"�˼�",55 };
//	//�ṹ���ԱΪ�ַ��� �丳ֵ��ʽ��strcpy���и�ֵ
//	strcpy(b1.name, "�˼�ʧ��");//strcpy��string copy���ַ����������⺯�� ��Ҫ����ͷ�ļ���string.h
//	printf("%s\n", b1.name);
//	//struct BOOK* pb = &b1;//��ָ��������ṹ�����Ƽ�*�ź�ָ�����ȡ��ַ
//	////����pb��ָ���������ӡ�����ͼ۸�
//	//printf("%s\n", pb->name);//pbָ��Ķ���Ľṹ���Ա
//	//printf("%d\n", pb->price);
//	////printf("%s\n", (*pb).name);
//	////.�Žṹ����ʳ�Ա		�ṹ�����.��Ա
//	//////-> ���ڽṹ��ָ��������ʳ�Ա	�ṹ��ָ��->��Ա
//	////printf("%d\n", (*pb).price);
//	///*printf("����:%s\n", b1.name);
//	//printf("�۸�:%dԪ\n", b1.price);
//	//b1.price = 15;
//	//printf("�޸ĺ�ļ۸�:%d\n", b1.price);*/
//	return 0;
}