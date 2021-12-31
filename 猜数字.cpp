#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//int main()
//{
//	char str[]="hello world";
//	cout<<str<<endl;
//	string str2="hello world";
//	cout<<str2<<endl;
//	system("pause");
//	return 0;
//}
int main()
{
	srand((unsigned int)time(NULL));
	int NPC=rand()%1000+1;
	int user=0;
	cout<<"请输入一个数"<<endl; 
	while(1)
	{
		cin>>user;
		if(user<NPC)
		{
			cout<<"输入偏小"<<endl; 
		}
		else if(user>NPC)
		{
			cout<<"输入偏大"<<endl; 
		}
		else
		{
			cout<<"恭喜猜对"<<endl; 
			break;
		}
	}
	return 0;
}
