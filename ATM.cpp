#include<iostream>
using namespace std;
void test3()
{
	system("cls");
	cout<<" �˳�ϵͳ"<<endl; 
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
		cout<<"*   ��ѡ��ȡ����Ǯ��             *"<<endl; 
		cout<<"*    1.$100                      *"<<endl;
		cout<<"*    2.$200                      *"<<endl;
		cout<<"*    3.$300                      *"<<endl;
		cout<<"*    4.����                      *"<<endl;
		for(i=0;i<=25;i++)
			{
				cout<<'*';
			}
		cout<<"*   ��ѡ��:                      *"<<endl; 
	int r=1000;
	int a;
	cin>>a;
	switch(a)
	{
		case 1: cout<<"��ʣ�� $"<<r-100;
		                         break;
		case 2: cout<<"��ʣ�� $"<<r-200;
								 break;
        case 3: cout<<"��ʣ�� $"<<r-300;
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
	cout<<"���������룺"<<endl; 
	for(j=1;j<=3;j++)
	{
		cin>>p;
	    if(p==password)
		   {
			cout<<"������ȷ";
			test2();
		   }
	    else
		cout<<"���������������������:"<<endl; 
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
	cout<<"*   ��ѡ��             *"<<endl; 
	cout<<"*    1.��������          *"<<endl;
	cout<<"*    2.ȡǮ              *"<<endl;
	cout<<"*    3.�˳�ϵͳ          *"<<endl;
	for(i=0;i<=25;i++)
		{
			cout<<'*';
		}
	cout<<endl;
	cout<<"��������Ҫ���еĲ�����"<<endl; 
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
