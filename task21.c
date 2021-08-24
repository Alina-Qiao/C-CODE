#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#######";
//		strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
// }

//int main()
//{
//	char arr[] = "ºìºì»ð»ð»Ð»Ðã±ã±";
//		memset(arr, '#', 6);
//	printf("%s\n", arr);
//	return 0;
//} 
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("a=%d b=%d\n", a, b); 
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);
//	printf("a=%d b=%d\n", a, b);
//}
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2;j < n;j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	if (j == n)
//		return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100;i <= 200;i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//}