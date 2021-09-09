#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//void my_strcpy(char* dest, const char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++=*src++)
//		{
//			
//		}
//	
//	}
//	
//}

//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest!=NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//
//	}
//    
//
//}
//int main()
//{
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != '\0')
	{
		count++;
		str++;
	}
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n", len);
	return 0;
}