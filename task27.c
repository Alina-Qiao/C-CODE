#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
	/*int i = 0;
	for (i = 0;i < 32;i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}*/
	/*return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count=%d\n", count);

	return 0;
}*/
//int get_diff_bit(int m, int n)
//{
//	int tmp = m ^ n;
//	return int count_bit_one(tmp);
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m, n);
//	printf("count=%d\n", count);
//	return 0;
//}
	//void print(int m)
	//{
	//	int i = 0;
	//	printf("����λ��\n");
	//	for (i = 30;i >= 0;i -= 2)
	//	{
	//		printf("%d ", (m >> i) & 1);
	//	}
	//	printf("\n");
	//	printf("ż��λ��\n");
	//	for (i = 31;i >= 1;i -= 2)
	//	{
	//		printf("%d ", (m >> i) & 1);
	//	}
	//	printf("\n");
	//}
	//int main()
	//{
	//	int m = 0;
	//	scanf("%d", &m);
	//		print(m);
	//	return 0;
	//}
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//		return 0;
//}
//#include<string.h>
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
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right =my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("ret=%d\n", ret);
//	return 0;
//}
double Pow(int n, int k)
{
	if (k < 0)
		return(1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n * Pow(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
double ret = Pow(n, k);
	printf("ret=%lf\n", ret);
	return 0;
}