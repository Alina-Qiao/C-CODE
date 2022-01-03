#include<iostream>
using namespace std;
class Person
{
	public:
		Person()
		{
			cout<<"Person 无参(默认)构造函数的调用"<<endl;
		}
		~Person()
		{
			cout<<"Person 析构函数的调用"<<endl;
		}
		Person(int a)
		{
			age=a;
			cout<<"Person 有参构造函数的调用"<<endl;
		}
		Person(const Person &p)
		{
			cout<<"Person 拷贝构造函数的调用"<<endl;
			age=p.age;
		}
		int age;

};
void test01()
{
//	Person p1;//栈，释放 
//	Person p2(10);
//	Person p3(p2);
//	cout<<"p2的年龄："<<p2.age<<endl; 
//	cout<<"p3的年龄："<<p3.age<<endl;
    Person(10);
	Person p1;
	Person p2=Person(10);//有参构造 
	Person p3=Person(p2); //拷贝构造 
}
int main()
{
	test01();
	
	return 0;
} 
