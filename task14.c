#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for (i = 1;i <= n;i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d\n", ret);
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		ret = 1;
//           for (i = 1;i <= n;i++)
//	    {
//		   ret = ret * i;
//	     }
//	}
//	scanf("%d", &n);
//	
//	printf("ret=%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0
//		int ret = 1;
//	int sum=0
//		for (n = 1;n <= 3;n++)
//		{
//			ret = ret * n;
//			sum = sum + ret;
//		}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//		int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//
//		int mid = (left + right) / 2;
//		if (arr[mid]> k)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//        printf("找不到\n");
//	}
//		
//	return 0;
//
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//       arr2[left] = arr1[left];
//	   arr2[right] = arr1[right];
//	   printf("%s\n", arr2);
//	   left++;
//	   right--;
//	}
//	
//	return 0;
//}