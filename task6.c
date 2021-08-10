#define _CRT_SECURE_NO_WARNINGS 1



#include <stdio.h>
#include<string.h>
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	/*if (num1 > num2)
//		printf("比较大的是：%d\n", num1);
//	else
//		printf("较大的是：%d\n", num2);*/
//	int max = 0;
//	max=Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6, };
//	printf("%d\n",sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
	//int a = 10;
	////int b = a++;
	//int b = ++a;
	//printf("a=%d b=%d\n", a, b);
	//return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 5;
//	int c = a || b;
//	/*int c = a && b;*/
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	printf("%d\n", max);
//	return 0;
//}
int Add(int x, int y)
	{
	int z = 0;
	z = x + y;
      return z;
	}
int main()
{
	/*int arr[10] = { 0 };
	arr[4];*/
	int a = 10;
	int b = 20;
	int sum = Add(a, b);
	return 0;
}