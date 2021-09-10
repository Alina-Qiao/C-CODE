#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	//char* p = (char*)&a;
//	//return *p;
//	///*if (*p == 1)
//	//	return 1;
//	//else
//	//	return 0;*/
//}
//int main()
//{
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("Ð¡¶Ë\\n");
//	}
//	else 
//	{
//		printf("´ó¶Ë\n");
//	}
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0;i < 1000;i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//int main()
//{
//unsigned char i = 0;
//	for (i = 0;i <= 255;i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}
int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n=%d\n", n);
	printf("*pFloat=%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num=%d\n",n);
	printf("*pFloat=%f\n", *pFloat);
	return 0;
}