#include<iostream>
using namespace std;
class Person
{
	public:
		Person()
		{
			cout<<"Person的默认构造函数"<<endl;
		}
		Person(int age,int hight)
		{
			m_Age=age; 
			m_Hight=new int(hight);
			cout<<"Person的有参构造函数"<<endl;
		}
		Person(const Person &p)
		{
			cout<<"Person的拷贝构造函数的调用"<<endl;
			m_Age=p.m_Age;
			//m_Hight=p.m_Hight;
			m_Hight=new int(*p.m_Hight);
		}
		~Person()
		{
			if(m_Hight!=NULL)
			{
				delete m_Hight;
				m_Hight=NULL;
			}
			cout<<"Person的析构函数"<<endl;
		}
		int m_Age;
		int *m_Hight;
};
void test01()
{
	Person p1(18,160);
	cout<<"p1的年龄为："<<p1.m_Age<<"身高为："<<*p1.m_Hight<<endl;
	Person p2(p1);
	cout<<"p2的年龄为："<<p2.m_Age<<"身高为："<<*p2.m_Hight<<endl;
}
int main()
{
	test01();
	return 0;
}
