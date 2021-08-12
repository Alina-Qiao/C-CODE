#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int*p=&a
//	printf("%p\n", &a);
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char*pc =&ch;
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//}
struct Book
{
	char name[20];
	short price;

};
int main()
{
	struct Book b1= { "hhh",55 };
	struct Book* pb = &b1;
	printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	return 0;
}
	