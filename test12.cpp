//#include<iostream> 
//using namespace std;
//float max(float x,float y)
//{
//	float z;
//	z=(x>y)?x:y;
//	return z;
//}
//int main()
//{
//	float a,b,c;
//	cin>>a>>b;
//	c=max(a+b,a*b);
//	cout<<"max="<<c;
//  	return 0;
//} 
#include<iostream>
using namespace std;
int main()
{
	float s=1;
	float x;
	float t=1;
	do{
		t=t/x;
		s+=t;
	}while(t>0.00001);
	return 0;
}
