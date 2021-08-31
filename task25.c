#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d",& num);
	/*while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}*/
	int i = 0;
	for (i = 0;i < 32;i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n", count);
	return 0;
}