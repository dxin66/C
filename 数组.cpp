//������һ����ͬ��������Ԫ�صļ��ϣ�����Ĵ������ʼ��
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //sizeof�������飨���������ͣ�������ռ�ռ�Ĵ�С,�߸�Ԫ�أ�����\0 ������ ��λΪ�ֽ�
//	printf("%d\n", strlen(arr)); //strlen�����ַ�������,����\�ͽ������⺯����ʹ��strlen()��Ҫ���ò�����<string.h>	 
//}
//�ַ������������뷽ʽ===��X��
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr1 [] = "abc"; //�������������\0
//	char arr2 [] = {'a','b','c'};//�����������û��\0;���������Ե����ַ������ַ���ʱ��ʹ�õ����ţ������ַ�����˫���ţ��ַ�����
//	printf("%d\n",sizeof(arr1));//������
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));//�����ַ������ȣ�����\��ֹͣ
//	printf("%d\n", strlen(arr2)); //������Ϊ���ֵ
//}
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	char arr[] = "abcdef";
//	for(int i=0;i<strlen(arr); i++)//strlen���ص���unsigned int
//		printf("%c\n", arr[i]);//[]Ϊ�±����òٲ�����
//}
//һά�������ڴ��еĴ洢���������ڴ��������洢��  
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//������Ԫ�ظ���
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]); //������Ԫ�������洢��ÿ������Ԫ��ռ�ڴ�4���ֽ�
//	}
//}
// ��ά����Ĵ����ͳ�ʼ�����п���ʡ�ԣ��в�����ʡ�� 
//��ά����ķ��ʣ�ͨ���±꣬���о���0��ʼ
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
//ð�������㷨���������ڵ�Ԫ�ؽ��бȽ�
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������,9��ð������
//		int j;
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 }; //��arr����������������
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);//ð�������� arr�����飬������arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//����������Ԫ�ص�ַ����������� �������⣺1��sizeof(������)-��������ʾ�������飬���������������Ĵ�С����λ���ֽ�
// 2��&�������������������������飬ȡ��������������ĵ�ַ
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);//������--������Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);//������Ԫ�ص�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", *arr); //������Ԫ��ָ��
//	printf("%p\n",*arr+1);
//	printf("%p\n", &arr); //ȡ����������ĵ�ַ
//	printf("%p\n", &arr+1);
//}

