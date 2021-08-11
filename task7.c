#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0;i < 10;i++)
//	{
//		test();
//	}
//	return 0;
//}
//void test()
//{
//	static int i = 0;
//	i++;
//		printf("%d\n", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("%d\n", g_val);
//	return 0;
//}
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	return 0;
//}
//int Max(int x, int y)
//	{
//	if (x > y)
//		return x;
//	else
//		return y;
//
//	}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//
//}
#define MAX(x,y) (x>y?x:y)
int main()
{
	int a = 10;
	int b = 20;
	int max = MAX(a, b);
	printf("max=%d\n", max);
    return 0;
}