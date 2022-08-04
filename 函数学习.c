#include<stdio.h>
#include<string.h>
//在c语言中函数分为两种：库函数 自定义函数
//库函数：c语言自身提供的函数 IO函数 字符串操作函数 字符操作函数 内存操作函数 时间/日期函数 数学函数 其他库函数
//int main()
//{
//	char arr1[10] = { "woaini" };
//	char arr2[5] = { "woai" };
//	strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//} 
//你可以打开监视看一下 只是把2里面的字符在1里面对应位置进行替换

//memset  memory-内存 set-设置
int main()
{
	char arr1[20] = { "hello word" };
	memset(arr1, '*', 5);
	printf("%s", arr1);
	return 0;
}