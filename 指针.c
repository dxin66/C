//指针类型的意义：指针类型决定了指针进行解引用操作的时候，能够访问的空间的大小
//int* p: *p能够访问4个字节 char*p:*p能够访问1个字节 double*p ：*p能够访问8个字节 short*p:*p能够访问2个字节
//#include<stdio.h>
//int main(void)
//{
//	//int a = 10;
//	//int*p = &a;//p是一个指针变量，一个存放地址的变量
//	//printf("%d %d %d %d", sizeof(char*), sizeof(int*), sizeof(short*), sizeof(double*));// 8 8 8 8
//	/*int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pb = &a;*/
//	//printf("%p\n%p\n", pa, pb);//地址相同
//}
//指针加减整数的时候:指针类型决定了指针走一步能走多远，即指针的步长，单位是字节
//#include<stdio.h>
//int main(void)
//{
//	int a = 0x11223344;
//	int* pa=&a;
//	char* pc = &a;
//	printf("%p %p %p %p", pa, pa + 1, pc, pc + 1);
//}
//#include<stdio.h>
//{
//	int arr[10] = { 0 };
//	int* p = arr;//数组名，即首元素的地址
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//野指针 野指针成因：1，指针未初始化，2，指针越界访问，3，指针指向的内存空间的释放
//#include<stdio.h>
//int main(void)
//{
//	int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//}
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		p++;//指针越界访问，出现野指针问题
//	}
//}
//#include<stdio.h>
//int* test()
//{
//	int a = 10; //a为局部变量
//	return &a;//局部变量，一退出函数，变量内存空间即被释放，
//}
//int main(void)
//{
//	int* p = test();
//	printf("%d\n",*p);
//}
//int* p=NULL; //初始化指针，NULL，相当于0
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//指针空间释放即放置NULL；
//} 
// 指针的关系运算：指针加减整数
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9]; //首元素的地址
//	for (int i=sz; i>5; i--)
//	{
//		printf("%d ", *p);
//		p-=2;
//	} 
//}
//指针的关系运算：指针加减指针
//#include<stdio.h>
//int main(void)
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]); //指针-指针得到的是两个指针之间的元素个数
//	printf("%d\n",&arr[9]- & ch[0]); //两个指针相减，两个指针指向同一块内存空间
//}
// 模拟实现求字符串长度
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main(void)
//{
//	char arr1[] = "bit";
//	int len=my_strlen(arr1);
//	printf("%d", len);
//}
//二级指针
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; //ppa就是一个二级指针
//	**ppa = 20;//等价于*pa=30->a=30;
//	int*** pppa = &ppa; //三级指针
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}
//指针数组->数组：存放指针的数组；数组指针->指针
#include<stdio.h>
int main(void)
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//int arr1[3];
	int* arr[3]={&a,&b,&c};//指针数组
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n",*arr[i]);
	}
}