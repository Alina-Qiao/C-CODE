//#include<iostream>
//using namespace std;
//int a;
//int prime(int x)
//{
//	for(a=2;a<=x-1;a++)
//	{
//		if(x%a!=0)
//		return 1;
//		else
//		return 0;
//	
//	}
//}
//int i;
//int main()
//{
//	for(i=100;i<=200;i++)
//	if(prime(i)==1)
//	cout<<i<<'\t';
//	return 0;
//	
//} 
#include<iostream>
using namespace std;
int z;
int r;
int gys(int x,int y)
{
	if(x<y)
	{
		r=x;x=y;y=r;
	}
	z=x%y;
	if(z!=0)
	x=y;
	y=z;
	return y;
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<gys(x,y)<<endl;
	return 0;
}
