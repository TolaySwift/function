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
int main()
{
	char arr1[20] = { "hello word" };
	memset(arr1, '*', 5);
	printf("%s", arr1);
	return 0;
}