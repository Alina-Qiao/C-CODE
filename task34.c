#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//冒泡 排序 10个元素9趟冒泡排序 
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0;i < sz - 1;i++)
	{
		int flag = 1;//假设已有序
		int j = 0;

		for (j = 0;j < sz - 1 - i;j++)
		{
			if(arr[j]>arr[j+1])
				{
					int tmp=arr[j];
					arr[j]=arr[j+1];
				    arr[j+1]=tmp;
					flag = 0;//本趟排序的数据其实不完全有序
				}
		}
		  if(flag == 1)
		 {
		   break;
         }
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//传的是数组首元素地址

	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
//int main()                                                                                             
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof(数组名)-数组名表示整个数组，单位是字节
//	//&数组名，数组名代表整个数组，取出的是整个数组的地址
//	/*printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);*/
//	return 0;
//}