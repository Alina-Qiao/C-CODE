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
	cout<<"������һ����"<<endl; 
	while(1)
	{
		cin>>user;
		if(user<NPC)
		{
			cout<<"����ƫС"<<endl; 
		}
		else if(user>NPC)
		{
			cout<<"����ƫ��"<<endl; 
		}
		else
		{
			cout<<"��ϲ�¶�"<<endl; 
			break;
		}
	}
	return 0;
}
