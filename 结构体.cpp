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
//	cout<<"子函数中 姓名："<<stu.name<<"年龄："<<stu.age<<" 分数："<<stu.score<<endl; 
//}
//void printStudent2(student *stu)
//{
//	stu->age=28;
//    cout<<"子函数中 姓名："<<stu->name<<"年龄："<<stu->age<<" 分数："<<stu->score<<endl;
//}
//int main()
//{
//	student stu={"张三",18,100};
//	printStudent(stu);
//	cout<<"主函数中 姓名："<<stu.name<<"年龄："<<stu.age<<" 分数："<<stu.score<<endl; 
//	printStudent2(&stu);
//	cout<<"主函数中 姓名："<<stu.name<<"年龄："<<stu.age<<"分数："<<stu.score<<endl; 
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
//		cout<<"老师姓名："<<tArray[i].tName<<endl;
//		for(int j=0;j<5;j++)
//		{
//			cout<<"\t学生姓名："<<tArray[i].sArray[j].sName; 
//			cout<<" 考试分数："<<tArray[i].sArray[j].score<<endl;
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
		cout<<"姓名："<<heroArry[i].name<<"年龄："<<heroArry[i].age<<"性别："<<heroArry[i].sex<<endl; 
	}
}
int main()
{
	struct Hero herroArray[5]=
	{
		{"刘备",23,"男"}, 
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	bubble(herroArray,5);
	printHero(herroArray,5);
	return 0;
}
