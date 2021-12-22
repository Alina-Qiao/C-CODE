#include<iostream>
using namespace std;
void test3()
{
	system("cls");
	cout<<" 退出系统"<<endl; 
}
void test1();

void test2()
{
	system("cls");
	int i;
		for(i=0;i<=25;i++)
		{
			cout<<'*';
		}
		cout<<endl;
		cout<<"*   请选择取出的钱：             *"<<endl; 
		cout<<"*    1.$100                      *"<<endl;
		cout<<"*    2.$200                      *"<<endl;
		cout<<"*    3.$300                      *"<<endl;
		cout<<"*    4.返回                      *"<<endl;
		for(i=0;i<=25;i++)
			{
				cout<<'*';
			}
		cout<<"*   请选择:                      *"<<endl; 
	int r=1000;
	int a;
	cin>>a;
	switch(a)
	{
		case 1: cout<<"您剩余 $"<<r-100;
		                         break;
		case 2: cout<<"您剩余 $"<<r-200;
								 break;
        case 3: cout<<"您剩余 $"<<r-300;
				                 break;
        case 4: test1();
	}
		cout<<endl;
}
void test1()
{
	system("cls");
	int password=123456;
	int j,p;
	cout<<"请输入密码："<<endl; 
	for(j=1;j<=3;j++)
	{
		cin>>p;
	    if(p==password)
		   {
			cout<<"密码正确";
			test2();
		   }
	    else
		cout<<"输入密码错误，请重新输入:"<<endl; 
	}
	test3();
}


int main()
{
	int i;
	for(i=0;i<=25;i++)
	{
		cout<<'*';
	}
	cout<<endl;
	cout<<"*   请选择：             *"<<endl; 
	cout<<"*    1.输入密码          *"<<endl;
	cout<<"*    2.取钱              *"<<endl;
	cout<<"*    3.退出系统          *"<<endl;
	for(i=0;i<=25;i++)
		{
			cout<<'*';
		}
	cout<<endl;
	cout<<"请输入您要进行的操作："<<endl; 
	int user;
	cin>>user;
	switch(user)
	{
		case 1:	test1();
		        break;
		case 2: test2();
		        break;
	    case 3: test3();
	            break;
	
	}
	return 0;
} 
