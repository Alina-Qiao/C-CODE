#include<iostream>
#include<string>
using namespace std;
class Phone
{
	public:
		Phone(string pName)
		{
			m_PName=pName;
		}
		string m_PName;
};
class Person
{
	public:
		Person(string name,string pName):m_Name(name),m_Phone(pName)
		{
			
		}
		string m_Name;
		Phone m_Phone;
};
void test01()
{
	Person p("����","ƻ��MAX");
	cout<<p.m_Name<<"����"<<p.m_Phone. m_PName<<endl;
}
int main()
{
	test01();
	return 0;
}
