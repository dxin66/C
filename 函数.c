//实现a+b
//#include<stdio.h>
//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main(void)
//{
//	int a = 20;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d", sum);
//}
/*strcpy example*/
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr1[] = { "bit" };
//	char arr2[] = "########";
//	strcpy(arr2, arr1);
//	printf("%s\n%s\n", arr2, arr1);
//}
/*memset example*/
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char str[] = "almost every programmer shoud know memset! ";
//	memset(str, "-", 6);
//	puts(str);
//}
/*自定义get_max函数*/
/*#include<stdio.h>
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main(void)
{
	int a = 10;
	int b = 20;
	int max=get_max(a, b);
	printf("%d", max);
}*/	 
/*无用交换：x，y和a，b没有关系*/
//#include<stdio.h>
//void Swap(int* x,int* y) //void代表没有返回值
//{
//	int tmp;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main(void)
//{
//	int a = 10, b = 20;
//	Swap(&a, &b);
//	printf("%d %d",a,b);
//}
/*利用指针进行交换*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;//pa指针变量 //传址调用
//	*pa = 20; //解引用操作
//	printf("%d", a);
//}
/*函数的参数:实参和形参-函数的调用（传值调用）当实参传给形参的时候，形参其实是实参的一份临时拷贝，对形参的改变不会改变实参的*/
/*书写函数判断素数*/
//#include<stdio.h>
//int isPrime(int a)
//{
//	int i;
//	for (i = 1; i * i <= a; i++)
//		if (a % i == 0)
//			 return 0;
//	if (i*i > a)
//		return 1;
//		
//}
//int main(void)
//{	
//	int x;
//	scanf_s("%d", &x);
//	int s=isPrime(x);
//	if (s == 1)
//		printf("是素数");
//	else
//		printf("不是素数");
//}
/*书写函数判断闰年*/
//#include<stdio.h>
//int IsRyear(int x)
//{
//	if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main(void)
//{
//	int i;
//	scanf_s("%d", &i);
//	int s = IsRyear(i);
//	if (s == 1)
//		printf("是闰年");
//	else
//		printf("不  是闰年");
//}
/*写一个函数，实现一个整型有序数组的二分查找*/
//#include<stdio.h>
//int binary_search(int arr[],int right,int k)
//{
//	int	left = 0;
//	while (left <= right)//while循环的条件应该是left<=right
//	{
//		int mid = (left + right) / 2; //mid时刻发生变化，所以需要放在循环里面
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
// 			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//			break;
//		}
//	}
//	if (left > right)
//		return -1;
//}
//int main(void)
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr,sz,k);//数组传参，不能再计算数组中元素个数
//	if (ret == -1)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//}


/*写一个函数，每次调用该函数，num值加1*/
//#include<stdio.h>
//void Add(int*p) //定义了一个子函数Add 其中变量使用了指针
//{
//	(*p)++;//*p++,++的优先级比*高
//}
//int main(void)
//{
//	int num = 0;
//	Add(&num);
//	printf("%d", num);
//}

/*函数的嵌套调用和链式访问：把一个函数的返回值作为另一个函数的参数*/
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	printf("%d", strlen("123"));
//}
//#include<stdio.h>
//int main(void)
//{
//	printf("%d",printf("%d", printf("%d",43)));
//}
/*函数的声明和定义*/
//int Add(int x, int y) //函数的声明.h和定义.c,函数先声明，后使用
//{
//	return x + y;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 20;
//	int sum = Add(a, b);//函数的调用
//	printf("%d", sum);
//}
/*函数递归--常见错误：Stack Overflow*/
//#include<stdio.h>
//int main(void)
//{
//	printf("hehe\n");
//	main();//函数递归--Stack Overflow
//}
/*函数递归实例*/
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main(void)
//{
//	unsigned int num=0; //无符号整型
//	scanf_s("%d", &num);
//	print(num); //函数递归
//}
/*使用函数，不借助临时变量，求字符串的长度*/
//#include<stdio.h>
//int my_strlen(char* str) //计算字符串的长度
//{
//	int count = 0;
//	while (*str != '\0')//单个字符用单引号，字符串用双引号
//	{
//		count++;
//		str++;
//	}
//	return count;
//} 
//int main(void)
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("%d\n",len);
//}
//#include<stdio.h> //递归的思想求字符串长度，避开了临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main(void)
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//}
/*递归和迭代*/
/*求n的阶乘*/
//#include<stdio.h>
//int Fac1(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++) //循环
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n-1); //迭代
//}
//int main(void)
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac2(n);
//	printf("%d", ret);
//}
/*求第n个斐波那契数列*/
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return  Fib(n-2) + Fib(n - 1);
//}
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//} 
//#include<stdio.h>
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c; //通过找规律
//		n--;
//	}
//	return c;
//}
//int main(void)
//{
//	int n;
//	scanf_s("%d", &n);
//	int ret=Fib(n);
//	printf("%d", ret);
//}
/*汉诺塔问题*/
//#include<stdio.h>
//int count = 0; //定义了一个全局变量count，在所有子函数中都能使用
//void move(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//	count++; //全局变量在子函数中的使用
//}
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a,c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//int main(void)
//{
//	int n = 0;
//	printf("请输入盘子数量（n）：");
//	scanf_s("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	printf("\n");
//	printf("总共进行%d次运输",count); //输出定义的全局变量
//}
/*青蛙跳台阶问题:找规律，数据类似Fibonacci数列*/
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main(void)
//{
//	int n;
//	printf("请输入台阶数：");
//	scanf_s("%d", &n);
//	int s=Fib(n);
//	printf("%d", s);
//}
/*青蛙跳台阶问题升级版本*/
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 1;
//	else
//		return 2 * Fib(n - 1);
//}
//int main(void)
//{
//	int n;
//	printf("请输入台阶数：", &n);
//	scanf_s("%d", &n);
//	int s=Fib(n);
//	printf("%d", s);
//}
