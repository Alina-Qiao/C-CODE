#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ��
//	char arr2[5] = {'a','b',98};
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));
//	printf("%d\n", strlen(arr4));
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}
////strlen��sizeofûʲô����
////strlen-�⺯��-ʹ�õ���ͷ�ļ�
////sizeof-������
//int main()
//{
//	char arr[] = "abcdef";
//	//printf("%c\n", arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0;i < len;i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,0}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
		//1 2 3 0
		//4 5 0 0 
		//0 0 0 0

	int i = 0;
	for (i = 0;i < 3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			//printf("%d ", arr[i][j]);
			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}