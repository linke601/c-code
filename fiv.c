#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//C�������Խṹ
//��䣺�ɷֺ�;����
//˳��ṹ
//ѡ��ṹ
//��֧���
//if���
//if(���ʽ)
// ���;
//if(���ʽ)
//���1;
// ����ִ��
//else
//���2;
//if(���ʽ1)
//���1;
//else if(���ʽ2)
//���2;
//else
//���3;
// if����������ʽ
//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("δ����\n");
//	else
//	{
//		if (age >= 18 && age < 28)//&&�߼�������ͬʱΪ����������
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//	}
//		return 0;
//}
//int main()
//{
//	int age = 80;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 28)//&&�߼�������ͬʱΪ����������
//		printf("����\n");
//	else if (age >= 28 && age < 50)
//		printf("׳��\n");
//	else if (age >= 50 && age < 90)
//		printf("����\n");
//	return 0;
//}
// if��������Ҫ���ƶ���������else����Ҫ�����{}
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else//����else
//			printf("haha\n");
//		return 0;//else���������if���
//}
//if()
// {
// return x;
// }
// return y;//��������д��
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
//	if (5 == num)//Ϊ��ֹ������󲻲��ø�ֵ��ʽ
//	{
//		printf("�Ǻ�\n");
//	}
//	/*if (num = 5)
//	{
//		printf("�Ǻ�\n");
//	}*/
//	return 0;
//}
//��ϰ
//int main()
//{
//	int a = 10;
//	if ((a % 2) == 1)
//	{
//		printf("Ϊ����\n");
//	}
//	else
//	{
//		printf("a��Ϊ����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	while (num<=100)//�жϷ�Χ//����Ϊ����ִ��
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
//��֧switch���
//switch:����ʵ�ֶ��֧�����
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf_s("%d", &day);
//	//switch(���α��ʽ)�����ڱ���Ϊ����
//	//{
//		//�����
//	//}
//	//switch (day)//switch caseȷ�����
//	//	//breakȷ������
//	//{
//	//case 1://case�����γ������ʽ
//	//	printf("����һ\n");
//	//	break;
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//	//}
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");//������α��ͬһ���ʱֻ��Ҫһ������
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://����޷������κ���������Ĭ��
//		//default Ĭ�� �ɲ�д ˳����Ҫ��
//		printf("�������\n");
//		break;
//	}
	/*if (1 == day)
	{
		printf("����һ\n");
	}
	else if (2 == day)
	{
		printf("���ڶ�\n");
	}
	else if (3 == day)
	{
		printf("������\n");
	}
	else if (4 == day)
	{
		printf("������\n");
	}
	else if (5 == day)
	{
		printf("������\n");
	}*/
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	default://Ĭ�����
//	case 1:m++;//m=3//û����break����ִ��
//	case 2:n++;//n=2
//	case 3:
//		switch (n)
//		{//switch����Ƕ��ʹ��
//		default:
//		case 1:n++;//n=2��ִ��
//		case 2:m++; n++;//n=3 m=4
//			break;
//		}
//	case 4:m++;//m=5
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
// }
//ѭ���ṹ
//ѭ�����
//expr:���ʽ
//stmt:���
//while(����Ϊ��ִ�����)
//int main()
//{
//	while(1)//1Ϊ��0Ϊ��  ����Ϊ����ִ��
//		//���ѭ�����ص�while��������Ϊ�������ִ��
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;//continue������(��ֹ����ѭ����continue֮��Ĵ���)
//		//continue������ֹ����ѭ����������ǰ������ʱcontinue�󷽵Ĵ��벻ִ��
//		//����ֱ����ת��while���жϲ��ֽ�����һ��ѭ�����ж�
//		//break;//ѭ��������breakֱ��ֹͣ break������ֹѭ��
//		printf("%d\n", i);//�����������
//		i++;//�ȸ�ֵ������
//	}
//	return 0;
//}
// getchar()���ռ�������һ���ַ� !=//������
//int main()
//{
//	//int ch = getchar();//���루���գ�һ���ַ�
//	//putchar(ch);//����ַ�
//	//printf("%c\n", ch);
//	//return 0;
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF)//�ж�����//EOF���ļ�������־
//	//{//getchar����CTRL+Z����
//	//	//EOF =end of file ֵ -1
//	//	//ctrl+z��ȡgetchar������ ����Ϊ�ٽ���ѭ��
//	//	putchar(ch);
//	//}
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//���뺯��
//	//scanf���뵽���뻺���� Ȼ����ȡ�������е�ֵ�����ո��\nֹͣ
//	//scanfֻ�ܶ�ȡ�ո�ǰ��ֵ
//	// ���뻺�����������ֵ�Ĵ�ŵ�
//	//��������Ȼ���ŵ�password��
//	//������ʣ��һ��\n
//	//��ȡһ��\n ������
//	//ʹgetchar���еȴ�����Ҫ������뻺����
//	//getchar();//���������б���һ��getchar����
//	//getcharֻ�ܶ�ȡһ���ַ�
//	while ((ch = getchar()) != '\n')//����Ϊ������ѭ��
//	{
//		;//�����
//	}
//	printf("��ȷ��(Y/N):>");
//	ret = getchar();
//	//getchar�����뻺������ȡʣ���ֵ\n
//	// scanf����\nֹͣ
//	//���뺯��
//	//��ʱretȡ��\n��ֵ���س�ֵascIIֵΪ10
//	if (ret == 'Y')
//	{
//		printf("ȷ��\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//
//	return 0;
//	
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')//һ��Ϊ����Ϊ��
//			//ֻ������������ַ�
//			continue;//�����˴�ѭ����Ĵ���
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i<=10)
//	{
//		if (i == 5)
//			continue;
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//for(���ʽ1����ʼ��ѭ�������������ʽ2�������жϲ��֣������ʽ3���������֣�����ѭ������������)
//ѭ�����
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)//һ���ڵ�����
//		//��ʼ������
//		//�ж����ִ���������߱��ʽ3������Ϊ�ٽ���
//	{
//		if (i == 5)
//		continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//whileѭ���������޸�ʱ�鷳���׳���
//int main()
//{
//	int i = 0;//��ʼ��
//	while (i < 10)//�ж�
//	{
//		//
//		i++//ѭ�������ĵ���
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10; i++)//for���ѭ�����Ʊ���ȡֵ��ȡǰ�պ�����д��
//	{
//		if (i == 5)//i = 5 ��ѭ��������ѭ�����ڸ��ģ�������ѭ��
//			printf("haha\n");
//		printf("hehe\n");//else���
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0; i < 10; i++)//i = 0; i < 10��ǰ�պ�����
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)��ʼ��û�У��ж�Ҳû�����Բ�����ʼ�����ж�ֱ�ӽ���ѭ��
//	{
//		printf("hehe\n");//��ѭ��
//	}
//	return 0;
//}forѭ����ʼ�����ж϶���ʡ��
// �����жϱ�ʡ����������Ϊ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 10; i++)
//	{//j����10��i�ż�һ,ÿһ��i�Ӷ���10��j
//		//�����Ϊ10*10
//		for (j = 0; j < 10; j++)//ѭ������δ��ʼ����Ϊѭ���ⲿ����ʱ����������ѭ��������
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
int main()
{
	int x, y;
	for (x = 0, y = 0;x<=2 && y<5; ++x,y++)
	{

	}printf("hehe\n");
	return 0;
}
//do while