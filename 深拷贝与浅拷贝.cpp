#include<iostream>
using namespace std;
class Person
{
	public:
		Person()
		{
			cout<<"Person��Ĭ�Ϲ��캯��"<<endl;
		}
		Person(int age,int hight)
		{
			m_Age=age; 
			m_Hight=new int(hight);
			cout<<"Person���вι��캯��"<<endl;
		}
		Person(const Person &p)
		{
			cout<<"Person�Ŀ������캯���ĵ���"<<endl;
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
			cout<<"Person����������"<<endl;
		}
		int m_Age;
		int *m_Hight;
};
void test01()
{
	Person p1(18,160);
	cout<<"p1������Ϊ��"<<p1.m_Age<<"���Ϊ��"<<*p1.m_Hight<<endl;
	Person p2(p1);
	cout<<"p2������Ϊ��"<<p2.m_Age<<"���Ϊ��"<<*p2.m_Hight<<endl;
}
int main()
{
	test01();
	return 0;
}
