//大小写字母转换
#include<iostream>
using namespace std;
int main()
{
//	char a;
//	cout<<"请输入一个大写字母"<<endl;
//	cin>>a;
//	cout<<"小写字母为：";
//	a=a+32;
//	cout<<a; 
//输出字符的ASCII
//char c;
//cin>>c;
// cout<<(int)c<<endl;
//浮点型赋给整型
//int a;
//double b=5.7;
//a=b;
//cout<<"a="<<a<<endl; 
//short int a=1;
//int b;
//b=a;
//cout<<"b="<<b<<endl;
//char ch=256;
//int a=ch+1;
//cout<<"a="<<a;
//cout<<'a';
//
 	char a[50] = "There are 26 girls and 21 boys";
	int result=0;
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] >= '0' && a[i] <= '9')
		{
			int c = a[i] - '0';
			result *= 10;
		    result+=c;
		}
	cout << result;

	return 0;
} 
