#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
//int my_strlen(char* str)
//{                                                                    
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//µİ¹é
//int my_strlen(char* str)
//{
//	if£¨* str != '\0')
//	return 1 + my_strlen(str + 1);
//	else
//	return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}
//Ñ­»·
//int Facl(int n)
//{
//	int i = 0;
//	for (i = 1;i <= n;i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//µİ¹é
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d\n", ret);
//	return 0;
//}
//Fib(int n)
//{
//	if (n <= 2);
//	return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
int Fob(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		return c;
	}
}
int main()                                                                                                                                                       
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib(n);
	ret = ("%d\n", ret);
	return 0;
}