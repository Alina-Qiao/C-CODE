#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n",max)
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "ÕÅÈý",20,"200210222143" };
//	struct Stu* ps = &s1;
//	printf(" % s\n", (*ps).name);
//	prinf("%s\n", ps->name);
//	printf("%s\n", s1.name);
//	return 0;
//}
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}