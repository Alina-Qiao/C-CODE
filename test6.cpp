#include<iostream>
using namespace std;
int main()
{
//	float a,b;
//	char u;
//	cout<<"输入数据，格式为：a 运算符 b"<<endl;
//	cin>>a>>u>>b;
//	switch(u)
//	{
//		
//	case '+':
//		cout<<"a+b="<<a+b<<endl;
//		 break;
//	case '-':
//		cout<<"a-b="<<a-b<<endl;
//		 break;
//	case '*':
//			cout<<"a*b="<<a*b<<endl;
//			 break;
//	case '/':
//			cout<<"a/b="<<a/b<<endl;
//			 break;
//	}
    int i=1;
    float t,sum;
    while(i<100)
    {
		t=1.0/i;
		i=i+2;
		sum=sum+t;
	}
	cout<<"sum="<<sum;
	return 0;
} 
