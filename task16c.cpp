#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int count = 0;
//		for (year = 1000;year <= 2000;year++)
//		{
			/*
			if (year % 4 == 0 && year % 100 != 0)
			{
				printf("%d", year);
				count++;

			}
			else if (year % 400 == 0)
			{
				printf("%d", year);
				count++;
			}*/
			/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
				printf("%d", year);
			count++;
	}
		printf("\ncount=%d\n", count);
	return 0;
}*/
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100;i <= 200;i++)
	{


		for (j = 2;j < i;j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
		{
			printf("%d", i);
		}
	}

	
	return 0;
}