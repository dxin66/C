//�ж����꣺���ܱ�4�������ܱ�100���������ܱ�400����
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
//�ж�����:�Գ���-����2~i-1������
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
//				break; //��break������Ƕ��ѭ����ʱ��ֻ�������ڲ�ѭ��
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
//��9�ĸ���
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
//�������
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
//��10�����е����ֵ
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
// ����žų˷���
//#include<stdio.h>
//int main(void)
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j); //�����Ҷ��룻��������룻"2"��ʾռ2λ
//		}
//		printf("\n");
//	}
//}
//���ֲ����㷨
//#include<stdio.h>
//int main(void)
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};//����дarr��10������д������Ϊ��������10��Ԫ�أ�����Ԫ�ص��±�Ϊ��0��9��ʹ��arr��10����������Խ�����⣬������ɳ����������
//	int left = 0;//���±�
//	int right = sizeof(arr[]) / sizeof(arr[0]) - 1;//���±�=����Ԫ�ظ���-1
//	int k;
//	scanf_s("%d", &k);
//	while (left <= right)
//	{
//		int	mid = (left + right) / 2; //�м��±�
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
//			printf("�ҵ��ˣ��±���%d", mid);
//			break;
//		}
//	}
//	if (right < left)
//	{
//		printf("�Ҳ���");
//	}
//}
//Ѱ���������е���Сֵ��ʹ����Ŀ�������
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
//	char arr1[] = "Welcome to New York!";//��д�ַ�����ʹ������
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;//strlen()�����ַ������ȣ���ͷ�ļ�Ϊ<string.h>
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);//C���Ե�Sleep������ͷ�ļ�<windows.h>�У���SҪ��д����������Ϊunsigned long���ͣ����޷��ų����ͣ���λΪms��
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//	}
//}
//��������Ϸ:1,���Ի�����һ���������2,������   //�������������أ�rand������ͷ�ļ�Ϊ<stdlib.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu() //�����Զ��庯��ʱ����Ҫ��main����֮ǰ����
//{
//	printf("*******************\n");
//	printf("***1,play 0,exit***\n");
//	printf("*******************\n");
//}
//
//void game() //1������һ���������2��������
//{ 
//	int guess;
//	int ret = rand() % 100 + 1;//���ܰ�ret����ѭ������
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf_s("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main(void)
//{
//	srand((unsigned int)time(NULL)); //ʱ��� timeΪlong�ͣ�srandΪunsigned int����--ǿ������ת��
//	int input=0;
//	do//do-whileѭ������ִ��һ��
//	{
//		menu();
//		printf("��ѡ��");
//		scanf_s("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//}
//goto��䣺�����goto����������ȥ�����״��ҳ���Ľ���
//#include<stdio.h>
//int main(void)
//{ 
//again:
//	printf("Hello Bite!");
//	goto again;
//}
//#include<string.h>//strcmp��ͷ�ļ�
//#include<stdlib.h>//system��ͷ�ļ�
//#include<stdio.h>
//int main(void)
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Լ����ػ�");
//	scanf_s("%s\n", &input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ��� -strcmp
//	{
//		system("shutdown -a");  //system()ִ��ϵͳ����
//	}
//	else
//	{
//		goto again; //goto���
//	}
//}  