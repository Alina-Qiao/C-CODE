//��Сд��ĸת��
#include<iostream>
using namespace std;
int main()
{
//	char a;
//	cout<<"������һ����д��ĸ"<<endl;
//	cin>>a;
//	cout<<"Сд��ĸΪ��";
//	a=a+32;
//	cout<<a; 
//����ַ���ASCII
//char c;
//cin>>c;
// cout<<(int)c<<endl;
//�����͸�������
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
