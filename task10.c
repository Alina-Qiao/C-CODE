#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1\n");
//	case 2:
//		printf("����2\n");
//	case 3:
//		printf("����3\n");
//		break;
//	case 4:
//		printf("����4\n");
//	case 5:
//		printf("����5\n");
//	case 6:
//		printf("����6\n");
//	case 7:
//		printf("����7\n");
//		break;
//	default:
//		printf("�������\n");
//
//	}
//	return 0;
//}
int main()
{
	int n = 1;
	int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
		switch (n)
		{
            case 1:n++;
	        case 2:m++;
		           n++;
		         break;
		}
	case 4:m++;
		break;
	default:
		break;
	}
	printf("m=%d\n,n=%d\n", m, n);

	return 0;
}