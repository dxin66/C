//判断闰年：Ⅰ：能被4整除不能被100整除；Ⅱ：能被400整除
//#include<stdio.h>
//int main(void)
//{
//	int year;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//}
//判断素数:试除法-产生2~i-1的数字
//#include<stdio.h>
//int main()
//{
//	int i;
//	int count = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j*j< i; j++)
//		{
//			if (i % j == 0)
//			{
//				break; //当break出现在嵌套循环中时，只跳出最内层循环
//			}
//		}
//		if (j *j> i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//}
//数9的个数
//#include<stdio.h>
//int main(void)
//{
//	int i;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9 )
//		    { 
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//}
//分数求和
//#include<stdio.h>
//int main(void)
//{
//	int m;
//	double sum = 0.0;
//	for (m = 1; m <= 100; m++)
//	{
//		if (m % 2 == 1)
//			sum += 1.0 / m;
//		else
//			sum -= 1.0 / m;
//	} 
//	printf("%lf", sum);
//}
//求10个数中的最大值
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int max = arr[0];
//	int i;
//	for (i = 0; i < 9; i++)
//	{
//		scanf_s("%d ", &arr[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//}
// 输出九九乘法表
//#include<stdio.h>
//int main(void)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j); //正号右对齐；负号左对齐；"2"表示占2位
//		}
//		printf("\n");
//	}
//}
//二分查找算法
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//不能写arr【10】这种写法，因为数组中有10个元素，数组元素的下标为从0到9，使用arr【10】属于数组越界问题，容易造成程序崩溃问题
//	int left = 0;//左下标
//	int right = sizeof(arr[]) / sizeof(arr[0]) - 1;//右下标=数组元素个数-1
//	int k;
//	scanf_s("%d", &k);
//	while (left <= right)
//	{
//		int	mid = (left + right) / 2; //中间下标
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//	if (right < left)
//	{
//		printf("找不到");
//	}
//}
//寻找两个数中的最小值（使用三目运算符）
//#include<stdio.h>
//int main(void)
//{
//	int a, b;
//	int min;
//	scanf_s("%d %d", &a, &b);
//	min = (a > b) ? b : a;
//	printf("min=%d ", min);
//}
//#include<stdio.h>
//#include<windows.h>
//#include<string.h>  
//int main(void)
//{
//	char arr1[] = "Welcome to New York!";//书写字符串，使用引号
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen()计算字符串长度，且头文件为<string.h>
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);//C语言的Sleep函数在头文件<windows.h>中，且S要大写；参数类型为unsigned long类型，即无符号长整型，单位为ms；
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//}
//猜数字游戏:1,电脑会生成一个随机数；2,猜数字   //如何生成随机数呢：rand（），头文件为<stdlib.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu() //声明自定义函数时，需要在main函数之前声明
//{
//	printf("*******************\n");
//	printf("***1,play 0,exit***\n");
//	printf("*******************\n");
//}
//
//void game() //1、生成一个随机数，2、猜数字
//{ 
//	int guess;
//	int ret = rand() % 100 + 1;//不能把ret放在循环里面
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main(void)
//{
//	srand((unsigned int)time(NULL)); //时间戳 time为long型，srand为unsigned int类型--强制类型转换
//	int input=0;
//	do//do-while循环至少执行一次
//	{
//		menu();
//		printf("请选择：");
//		scanf_s("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}
//goto语句：放哪里，goto就跳到哪里去，容易打乱程序的节奏
//#include<stdio.h>
//int main(void)
//{ 
//again:
//	printf("Hello Bite!");
//	goto again;
//}
//#include<string.h>//strcmp的头文件
//#include<stdlib.h>//system的头文件
//#include<stdio.h>
//int main(void)
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑即将关机");
//	scanf_s("%s\n", &input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串 -strcmp
//	{
//		system("shutdown -a");  //system()执行系统命令
//	}
//	else
//	{
//		goto again; //goto语句
//	}
//}  