/*算术运算符*/
//#include<stdio.h>
//int main(void)
//{
//	double a = 5 / 2.0;//整除和精确除
//	printf("%lf",a);
//}
/*右移操作符 \2--1：算术右移,右边丢弃，左边补原符号位；2：逻辑右移，右边丢弃，左边补0*/
//#include<stdio.h>
//int main(void)
//{
//	int a = -1;
//	int b = a >> 1;//右移操作符，移动的是二进制位数
//	printf("%d", b);
//}
//整数的二进制表示为：原码、反码（符号位不变，其他位按位取反）、补码（反码加1），存储在内存中的是补码
//#include<stdio.h>
//int main(void)
//{
//	int a = 5;
//	int b = a << 1;//左移操作符 *2
//	printf("%d", b);
//}
/*位操作符：按位与，按位或，按位抑或*/
//&-按位与   |按位或  ^按位抑或(相同为0，相异为1)
//#include<stdio.h>
//int main(void)
//{
//	int a = 3; //11
//	int b = 5;//101
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d %d %d",c,d,e); //c=1,d=7,e=6
//}
/*加减法：不创建临时变量，实现两个数的交换*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//	a = a + b;//缺点：两个数相加，极易溢出
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//}
/*抑或交换两数的值:不会进位，所以不会溢出*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 3;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//}
/*求整数在内存二进制位中1的个数*/
//#include<stdio.h>
//int main(void)
//{
//	int n;
//	int i = 0;
//	int count=0;
//	scanf_s("%d",&n);
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((n >> i) & 1)) //向右移位
//			count++;
//	}
//	printf("%d", count);
//}
/*求整数在内存二进制中1的个数*/
/*赋值操作符*/
/*复合赋值符*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	a += 2;//复合赋值符
//	a >>= 1;
//	a &= 1;
//}
/*单目操作符:只有一个操作数*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int* p = &a; //取地址操作符
//	*p; //解引用操作符
//}
//#include<stdio.h>
//int main(void)
//{
//	short s = 0;
//	int a = 10;
//	char c = 'r';
//	char* p = &c;
//	int arr[10] = { 0 };
//	printf("%d %d %d %d %d %d", sizeof(a), sizeof(c), sizeof(p), sizeof(arr),sizeof(s=a+5),s);// 4 1 8 40 2 0
////sizeof计算变量空间所占空间的大小，单位为字节;sizeof内部的表达式不参与运算，其中的s取值不变
//}
//#include<stdio.h>
//int main(void)
//{
//	int a = 0; //00000000000000000000000000000000-补码
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110 反码
//	//10000000000000000000000000000001 原码：最前面一位为符号位，1为负数，0为正数
//	printf("%d", ~a); // ~ 按位取反（二进制位）
//}
//#include<stdio.h>
//int main(void)
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d ", a);
//	a = a & (~(1 << 2));
//	printf("%d ", a);
//	//00000000000000000000000000001011;
//	//00000000000000000000000000000100;  1<<2
//	//1<<2;
//	//00000000000000000000000000001111; &(~（1<<2));
//	//11111111111111111111111111111011; ~(1<<2)
//	//00000000000000000000000000000100; 1<<2
//	//00000000000000000000000000001011;
//}
//前置++和后置++，前置--和后置--
//#include<stdio.h>
//int main(void)
//{
//	int a = 1;
//	printf("%d ",++a);// 2 a=2
//	printf("%d ",a++);// 2 a=3
//	printf("%d ",a--);//3 a=2
//	printf("%d ", --a);// 1 a=1
//}
/*强制类型转换*/
//#include<stdio.h>
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch)); //数组传参，以数组名进行传参是，传递的是首元素的地址，而地址是指针类型，所以默认4或8，由于本操作系统为64位操作系统，所以输出8
//}
//void main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//}
/*关系操作符*/
/*逻辑操作符 && || & |*/
//#include<stdio.h>
//void main()
//{
//	int i = 0, a = 0/1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//a为0，式子为假，b，c，d不用计算
//	//printf("%d %d %d %d\n", a, b, c, d);// 1 2 3 4
//	i = a++ || ++b || d++;// a为1，为真+b,c,d后面都没算
//	printf("%d %d %d %d\n", a, b, c, d);
//}  
/*三目操作符，条件操作符，*/
//#include<stdio.h>
//void main()
//{
//	/*int a = 0;
//	int b = 0;
//	b=a > 5 ? 3 : -3;
//	printf("%d", b);*/
//	int a = 10;
//	int b = 20;
//	int max=a > b ? a : b;
//	printf("%d", max);
//}
/*逗号表达式：以逗号分隔的表达式，从左至右依次计算，表达式的结果为最后一个表达式的值*/
//#include<stdio.h>
//int main(void)
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d", c);
//}
/*下标引用操作符，函数调用操作符,访问一个结构的成员*/
//#include<stdio.h>
//struct Stu //创建结构体类型
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//void main()
//{
//	int a = 10;
//	//使用Struct Stu这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = { "张三",20,"2019010131" };
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);//解引用操作符
//	printf("%s\n%d\n%s\n", ps->name,ps->age,ps->id);
//	//左边结构体指针，右边成员变量名
//	printf("%s\n%d\n%s\n", s1.name, s1.age, s1.id);
//	//结构体变量.成员变量
//}
/*整型提升:按照变量的数据类型的符号位来提升的*/
//CPU内整型运算器的操作数一般就是int的字节长度，所以，表达式中各种小于int长度的整型值，都必须先转换为int或unsigned int，然后再送进CPU中去执行运算
//char是有符号为的char
//#include<stdio.h>
//int main(void)
//{
//	char a = 3;
//	//00000000000000000000000000000011;
//	//00000011;
//	char b = 127;
//	//00000000000000000000000001111111;
//	//01111111;
//	//a+b如何相加？
//	//00000000000000000000000000000011;
//	//00000000000000000000000001111111;
//	//00000000000000000000000010000010;
//	//10000010;
//	//11111111111111111111111110000010;补码
//	//11111111111111111111111110000001;反码
//	//10000000000000000000000001111110;原码
//	//01111110 -126 
//	char c = a + b;
//	printf("%d\n", c);//隐式类型转换
//}
//#include<stdio.h>
//int main(void)
//{
//	char c = 1;
//	printf("%u %u %u", sizeof(c), sizeof(+c), sizeof(!c)); //+c发生了整型提升
//}
/*算术转换 long double,double,float,unsigned long int ,long int ,unsigned int ,int*/
//一些问题表达式 a*b+c*d+e*f; c+--c(有歧义)，要求写出的表达式的计算顺序唯一

