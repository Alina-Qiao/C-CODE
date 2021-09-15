#define _CRT_SECURE_NO_WARNINGS 1
int main()
{
	char arr[] = "abcdef";
	printf("%d\n",strlen(arr));//6
	printf("%d\n",strlen(arr + 0));
	printf("%d\n",strlen(*arr));
	printf("%d\n",strlen(arr[1]));
	printf("%d\n",strlen(&arr));
	printf("%d\n",strlen(&arr + 1));
	printf("%d\n",strlen(&arr[0] + 1));
	char arr[] = "abcdef";
	printf("%d\n",sizeof(arr));//数组大小
	printf("%d\n",sizeof(arr+0));
	printf("%d\n",sizeof(*arr));
	printf("%d\n",sizeof(arr[1]));
	printf("%d\n",sizeof(&arr));
	printf("%d\n",sizeof(&arr+1));
	printf("%d\n",sizeof(&arr[0]+1));
	return 0;
	char* p = "abcdef";
	printf("%d\n", sizeof(p));
	printf("%d\n", sizeof(p+1));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(p[0]));
	printf("%d\n", sizeof(&p));
	printf("%d\n", sizeof(&p+1));
	printf("%d\n", sizeof(&p[0]+1));
	printf("%d\n", strlen(p));
	printf("%d\n", strlen(p + 1));
	printf("%d\n", strlen(*p));
	printf("%d\n", strlen(p[0]));
	printf("%d\n", strlen(&p));
	printf("%d\n", strlen(&p + 1));
	printf("%d\n", strlen(&p[0] + 1));
}