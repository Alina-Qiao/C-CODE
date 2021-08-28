#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//char arr[] = "abcdef";
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0;i < len;i++)
//	//{
//	//	printf("%C\n", arr[i]);
//	//}
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		/*printf("%d ", arr[i]);*/
//		printf("%p\n", &arr[i]);
//
//	}
//	return 0;
//
//}
int main()
{
	int arr[3][4] = { {1,2,3},{4,5} };
	int i = 0;
	for(i=0;i<3;i++)
	{
		int j = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}