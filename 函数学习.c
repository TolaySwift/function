#include<stdio.h>
#include<string.h>
//��c�����к�����Ϊ���֣��⺯�� �Զ��庯��
//�⺯����c���������ṩ�ĺ��� IO���� �ַ����������� �ַ��������� �ڴ�������� ʱ��/���ں��� ��ѧ���� �����⺯��
//int main()
//{
//	char arr1[10] = { "woaini" };
//	char arr2[5] = { "woai" };
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//} 
//����Դ򿪼��ӿ�һ�� ֻ�ǰ�2������ַ���1�����Ӧλ�ý����滻

//memset  memory-�ڴ� set-����
//int main()
//{
//	char arr1[20] = { "hello word" };//��������԰�20��Ϊ10���պô治��\0
//	memset(arr1, '*', 5);
//	printf("%s", arr1);
//	return 0;
//}


//�Զ��庯���������� �������� �������
//ret_type fun_name(paral, *)
//{
//	ststement;//�����
//}
//ret_type ��������
//fun_name ������
//paral ��������

//дһ������������ֵ�����ֵ
int Max(int a, int b)
{
	//if (a >= b)
	//	return a;
	//else
	//	return b;
	return (a >= b) ? (a):(b);
}

//�����������ͱ����ĵ�����
//int Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;//������н���ʱֻ�ǽ�������������x y��������ַ ���������е�a b�ĵ�ַ������Ĳ�һ�� ��˴ﲻ��Ŀ��
//}
//��ʵ�δ��ݸ��β�ʱ���β�ֻ�Ƕ�ʵ�ε�һ����ʱ���������βεĲ�������ı�ʵ�Σ������������߾��в�ͬ���ڴ�ռ䣩
void Swap2(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
//int a=10��
//int* p=&a�� ��a�ĵ�ַ����ָ��P��
//*p=20�� �����ò��� ͨ��p��ַ�ҵ������� �������滻Ϊ20
int main()
{
	int a;
	int b;
	printf("��������������");
	scanf_s("%d %d", &a, &b);
	int M=Max(a, b);
	/*Swap(a,b);*/
	Swap2(&a, &b);
	printf("���ֵMax=%d\n", M);
	printf("a=%d b=%d", a,b);
	return 0;
}
//��������
//��ֵ���ã�
//��ַ���ã�