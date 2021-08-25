#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000;year <= 2000;year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//
//		}
//	}
//
//	return 0;
//}
//二分查找
//int binary_search(int arr[],int k,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[10]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[10]);
//	int left = 0;
//	int k = 7;
//	int ret=binary_search(arr, k);
//	if (ret = -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	} 
//
//	return 0;
//}
//自增
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//		printf("num=%d\n", num);
//	return 0;
//}
//嵌套调用
//void new_line()
//{
//	printf("hehe\n");
//
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0;i <= 3;i++)
//	{
//		new_line();
//	}
//}
//int main()
//{
//	three_line();
//		return 0;
//}
//链式访问
int main()
{
	printf("%d", printf("%d",printf("%d",43)));
	return 0;
}