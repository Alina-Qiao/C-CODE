#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=1000;i++)
	{
		int a=0;
		for(int j=1;j<i;j++)
		if(i%j==0)
		  a+=j;
		if(a==i)
		cout<<a<<endl;
	}
	return 0;
} 
