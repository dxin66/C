//ָ�����͵����壺ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʵĿռ�Ĵ�С
//int* p: *p�ܹ�����4���ֽ� char*p:*p�ܹ�����1���ֽ� double*p ��*p�ܹ�����8���ֽ� short*p:*p�ܹ�����2���ֽ�
//#include<stdio.h>
//int main(void)
//{
//	//int a = 10;
//	//int*p = &a;//p��һ��ָ�������һ����ŵ�ַ�ı���
//	//printf("%d %d %d %d", sizeof(char*), sizeof(int*), sizeof(short*), sizeof(double*));// 8 8 8 8
//	/*int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pb = &a;*/
//	//printf("%p\n%p\n", pa, pb);//��ַ��ͬ
//}
//ָ��Ӽ�������ʱ��:ָ�����;�����ָ����һ�����߶�Զ����ָ��Ĳ�������λ���ֽ�
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
//	int* p = arr;//������������Ԫ�صĵ�ַ
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//Ұָ�� Ұָ�����1��ָ��δ��ʼ����2��ָ��Խ����ʣ�3��ָ��ָ����ڴ�ռ���ͷ�
//#include<stdio.h>
//int main(void)
//{
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//}
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//	{
//		p++;//ָ��Խ����ʣ�����Ұָ������
//	}
//}
//#include<stdio.h>
//int* test()
//{
//	int a = 10; //aΪ�ֲ�����
//	return &a;//�ֲ�������һ�˳������������ڴ�ռ伴���ͷţ�
//}
//int main(void)
//{
//	int* p = test();
//	printf("%d\n",*p);
//}
//int* p=NULL; //��ʼ��ָ�룬NULL���൱��0
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//ָ��ռ��ͷż�����NULL��
//} 
// ָ��Ĺ�ϵ���㣺ָ��Ӽ�����
//#include<stdio.h>
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9]; //��Ԫ�صĵ�ַ
//	for (int i=sz; i>5; i--)
//	{
//		printf("%d ", *p);
//		p-=2;
//	} 
//}
//ָ��Ĺ�ϵ���㣺ָ��Ӽ�ָ��
//#include<stdio.h>
//int main(void)
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]); //ָ��-ָ��õ���������ָ��֮���Ԫ�ظ���
//	printf("%d\n",&arr[9]- & ch[0]); //����ָ�����������ָ��ָ��ͬһ���ڴ�ռ�
//}
// ģ��ʵ�����ַ�������
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
//����ָ��
//#include<stdio.h>
//int main(void)
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa; //ppa����һ������ָ��
//	**ppa = 20;//�ȼ���*pa=30->a=30;
//	int*** pppa = &ppa; //����ָ��
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//}
//ָ������->���飺���ָ������飻����ָ��->ָ��
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
	int* arr[3]={&a,&b,&c};//ָ������
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n",*arr[i]);
	}
}