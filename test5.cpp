#include<iostream> 
#include<iomanip>
using namespace std;
int main()
{
//	int x;
//    cout<<"请输入一个数"<<endl;
//	cin>>x;
//	if(x%2==0)
//	{
//		cout<<"yes"<<endl;
//		
//	}
//	else
//	cout<<"No"<<endl;
//	
int a;
cout<<"请输入你的成绩"<<endl; 
cin>>a;
	if(a>=90)
	{
		cout<<"优秀"<<endl; 
	}
	else if(a>=80&&a<=90)
	{
		cout<<"良好"<<endl; 
	}
	else if(a>=70&&a<=80)
	{
		cout<<"中等"<<endl;
	}
	else
	{
		cout<<"不及格"<<endl; 
	}
	return 0;
}
