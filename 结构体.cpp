#include<iostream>
using namespace std;
#include<string>
#include<ctime>
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
//void printStudent(student stu)
//{
//	stu.age=28;
//	cout<<"�Ӻ����� ������"<<stu.name<<"���䣺"<<stu.age<<" ������"<<stu.score<<endl; 
//}
//void printStudent2(student *stu)
//{
//	stu->age=28;
//    cout<<"�Ӻ����� ������"<<stu->name<<"���䣺"<<stu->age<<" ������"<<stu->score<<endl;
//}
//int main()
//{
//	student stu={"����",18,100};
//	printStudent(stu);
//	cout<<"�������� ������"<<stu.name<<"���䣺"<<stu.age<<" ������"<<stu.score<<endl; 
//	printStudent2(&stu);
//	cout<<"�������� ������"<<stu.name<<"���䣺"<<stu.age<<"������"<<stu.score<<endl; 
//	return 0;
//} 
//struct Student
//{
//	string sName;
//	int score;
//};
//struct Teacher
//{
//	string tName;
//	struct Student sArray[5];
//};
//void allocateSpace(struct Teacher tArray[],int len)
//{
//	string nameSeed="ABCDE";
//	for(int i=0;i<len;i++)
//	{
//		tArray[i].tName="Teacher_";
//		tArray[i].tName+=nameSeed[i];
//		for(int j=0;j<5;j++)
//		{
//			tArray[i].sArray[j].sName="student_";
//			tArray[i].sArray[j].sName+=nameSeed[j];
//			int random=rand()%61+40;
//			tArray[i].sArray[j].score=random;
//		}
//		
//	}
//}
//void printInform(struct Teacher tArray[],int len)
//{
//    for(int i=0;i<len;i++)	
//    {
//		cout<<"��ʦ������"<<tArray[i].tName<<endl;
//		for(int j=0;j<5;j++)
//		{
//			cout<<"\tѧ��������"<<tArray[i].sArray[j].sName; 
//			cout<<" ���Է�����"<<tArray[i].sArray[j].score<<endl;
//		} 
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	struct Teacher tArray[3];
//	int len=sizeof(tArray)/sizeof(tArray[0]);
//	allocateSpace(tArray,len);
//	printInform(tArray,len);
//	return 0;
//}
struct Hero
{
	string name;
	int age;
	string sex;
};
void bubble(struct Hero herroArray[],int len)
{
	for(int i=0;i<len-1;i++)
	{
		for(int j=0;j<len-i-1;j++)
		{
			if(herroArray[j].age>herroArray[j+1].age)
			{
				struct Hero temp=herroArray[j];
				herroArray[j]=herroArray[j+1];
				herroArray[j+1]=temp;
			}
		}
	}
}
void printHero(struct Hero heroArry[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<"������"<<heroArry[i].name<<"���䣺"<<heroArry[i].age<<"�Ա�"<<heroArry[i].sex<<endl; 
	}
}
int main()
{
	struct Hero herroArray[5]=
	{
		{"����",23,"��"}, 
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	bubble(herroArray,5);
	printHero(herroArray,5);
	return 0;
}
