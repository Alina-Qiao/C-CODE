#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//	case 2:
//		printf("星期2\n");
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//	case 5:
//		printf("星期5\n");
//	case 6:
//		printf("星期6\n");
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");
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