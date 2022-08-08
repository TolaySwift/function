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
//int main()
//{
//	char arr1[20] = { "hello word" };//你可以试试把20改为10，刚好存不下\0
//	memset(arr1, '*', 5);
//	printf("%s", arr1);
//	return 0;
//}


//自定义函数：函数名 返回类型 输入参数
//ret_type fun_name(paral, *)
//{
//	ststement;//语句项
//}
//ret_type 返回类型
//fun_name 函数名
//paral 函数参数

//写一个函数找两个值得最大值
int Max(int a, int b)
{
	//if (a >= b)
	//	return a;
	//else
	//	return b;
	return (a >= b) ? (a):(b);
}

//交换两个整型变量的的内容
//int Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;//这里进行交换时只是将输入的数赋予给x y的两个地址 而主函数中的a b的地址和这里的不一样 因此达不到目的
//}
//当实参传递给形参时，形参只是对实参的一个临时拷贝，对形参的操作不会改变实参！！！！（两者具有不同的内存空间）
void Swap2(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
//int a=10；
//int* p=&a； 把a的地址放在指针P里
//*p=20； 解引用操作 通过p地址找到其内容 并将其替换为20
int main()
{
	int a;
	int b;
	printf("请输入两个数：");
	scanf_s("%d %d", &a, &b);
	int M=Max(a, b);
	/*Swap(a,b);*/
	Swap2(&a, &b);
	printf("最大值Max=%d\n", M);
	printf("a=%d b=%d", a,b);
	return 0;
}
//函数调用
//传值调用：
//传址调用：