#include<iostream>
using namespace std;
class Person
{
	public:
		Person()
		{
			cout<<"Person �޲�(Ĭ��)���캯���ĵ���"<<endl;
		}
		~Person()
		{
			cout<<"Person ���������ĵ���"<<endl;
		}
		Person(int a)
		{
			age=a;
			cout<<"Person �вι��캯���ĵ���"<<endl;
		}
		Person(const Person &p)
		{
			cout<<"Person �������캯���ĵ���"<<endl;
			age=p.age;
		}
		int age;

};
void test01()
{
//	Person p1;//ջ���ͷ� 
//	Person p2(10);
//	Person p3(p2);
//	cout<<"p2�����䣺"<<p2.age<<endl; 
//	cout<<"p3�����䣺"<<p3.age<<endl;
    Person(10);
	Person p1;
	Person p2=Person(10);//�вι��� 
	Person p3=Person(p2); //�������� 
}
int main()
{
	test01();
	
	return 0;
} 
