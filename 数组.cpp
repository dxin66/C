//数组是一组相同数据类型元素的集合：数组的创建与初始化
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //sizeof计算数组（变量，类型）计算所占空间的大小,七个元素，包括\0 操作符 单位为字节
//	printf("%d\n", strlen(arr)); //strlen计算字符串长度,遇到\就结束，库函数，使用strlen()需要引用操作符<string.h>	 
//}
//字符串的两种输入方式===‘X’
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr1 [] = "abc"; //这种输出后面有\0
//	char arr2 [] = {'a','b','c'};//这种输出后面没有\0;向数组中以单个字符输入字符串时，使用单引号（单个字符），双引号（字符串）
//	printf("%d\n",sizeof(arr1));//操作符
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));//计算字符串长度，遇到\才停止
//	printf("%d\n", strlen(arr2)); //输出结果为随机值
//}
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr[] = "abcdef";
//	for(int i=0;i<strlen(arr); i++)//strlen返回的是unsigned int
//		printf("%c\n", arr[i]);//[]为下标引用操操作符
//}
//一维数组在内存中的存储：数组在内存中连续存储，  
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//数组中元素个数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]); //数组中元素连续存储，每个整型元素占内存4个字节
//	}
//}
// 二维数组的创建和初始化：行可以省略，列不可以省略 
//二维数组的访问：通过下标，行列均从0开始
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i - 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n ",i,j, &arr[i][j]);
//		}
//	}
//}
//冒泡排序算法：两两相邻的元素进行比较
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序,9次冒泡排序
//		int j;
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数字其实不完全有序
//			}
//		}
//		if(flag==1)
//		{
//			break; 
//		}
//	}
//}
//int main(void)
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 }; //对arr进行排序，升序排列
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//冒泡排序函数 arr是数组，对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//数组名是首元素地址（绝大多数） 两个例外：1，sizeof(数组名)-数组名表示整个数组，计算的是整个数组的大小，单位是字节
// 2，&数组名：数组名代表整个数组，取出的是整个数组的地址
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);//数组名--数组首元素地址
//	printf("%p\n", &arr[0]);//数组首元素地址
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", *arr); //数组首元素指针
//	printf("%p\n",*arr+1);
//	printf("%p\n", &arr); //取出的是数组的地址
//	printf("%p\n", &arr+1);
//}

