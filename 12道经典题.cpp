#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
//1.底长5高三的等腰字符三角形 
//int i;
//int j;
//int k;
//int main()
//{
//	for(i=1;i<=3;i++)
//	{
//			for(j=1;j<=3-i;j++)
//				cout<<' ';
//			for(k=1;k<=2*i-1;k++)
//				cout<<'*';
//			cout<<'\n';
//	}
//	
//	return 0;
//} 
//2.求一元二次方程的根
//int main()
//{
//	int a;
//	int b;
//	int c;
//	cout<<"请输入a b c"<<endl;
//	cin>>a>>b>>c;
//	float delta;
//	delta=b*b-4*a*c;
//	if(delta<0)
//	cout<<"无实根"<<endl; 
//    if(delta>0)
//	{
//	 cout<<"x1"<<"="<<(-b+sqrt(delta))/2/a<<endl;
//	 cout<<"x2"<<"="<<(-b-sqrt(delta))/2/a<<endl;
//	}
//	if(delta==0)
//	cout<<"x1=x2="<<-b/2/a;
//	return 0;
//} 
//3.判断闰年 
//int main()
//{
//	int year;
//	while(1)
//	{
//			cout<<"请输入年份"<<endl;
//			cin>>year; 
//			if(year%4==0&&year%100!=0)
//			cout<<"yes"<<endl;
//			else if(year%400==0)
//			cout<<"yes"<<endl;
//			else
//			cout<<"No"<<endl;
//	}
//
//	return 0;
//}
//4.判断绝对值奇偶性 
//int main()
//{
//	int i;
//	cin>>i;
//	if(i<0)
//	i=-i;
//    else
//    i=i;
//if(i%2==0)
//cout<<"偶数"<<endl;
//else
//cout<<"奇数"<<endl; 
//	
//	return 0;
//}
//5.收款程序 
//int main()
//{
//	float money;
//	float kilo;
//	cout<<"kilo=";
//	cin>>kilo;
//	if(kilo>=5&&kilo<10)
//	money=5*kilo*0.9;
//	if(kilo>=10&&kilo<20)
//	money=5*kilo*0.8;
//	if(kilo>=20&&kilo<50)
//	money=5*kilo*0.7;
//	if(kilo>=50&&kilo<100)
//	money=5*kilo*0.6;
//	else
//	money=5*kilo*0.5;
//	cout<<"money="<<money;
//	return 0;
//}
// 6.成绩 
//int main()
//{
//	float grade;
//	cout<<"成绩为：";
//	cin>>grade;
//	if(grade>=90)
//	cout<<"A";
//	if(grade>80&&grade<=89)
//	cout<<"B";
//	if(grade>70&&grade<=79)
//	cout<<"C";
//	if(grade>=60&&grade<=69)
//	cout<<"D";
//	if(grade<60)
//	cout<<"E";
//	return 0;
//}
//7.求平均年龄 
//int main()
//{
//	int a;
//	int b;
//	int c;
//	double equal;
//	cout<<"输入学生年龄a b c"<<endl; 
//	cin>>a>>b>>c;
//	cout<<"平均年龄为：";
//	cout<<fixed<<setprecision(2);
//	equal=(a+b+c)/3.0; 
//	cout<<equal;
//
//	return 0;
//}
//8.四位数，个位-千位-百位-十位>0的数字个数
//int main()
//{
//	int i1,i2,i3,i4;
//	int i=1000;
//	while(i<1500)
//	{
//		i1=i/1000;
//		i2=i%1000/100;
//		i3=i%1000%100/10;
//		i4=i%1000%100%10;
//		if(i4-i1-i2-i3>0)
//        cout<<i<<' ';
//		i++;
//	}
//	 
//	return 0;
//} 
//9.输入正整数n,判断是否同时含有奇偶数字
//int F(int n)
//{
//	if(n<10)
//	cout<<n<<' ';
//	{
//			if(n%2==0)
//			cout<<"是偶数"<<' ';
//			if(n%2!=0)
//			cout<<"是奇数"<<' '; 
//	}
//
//	if(n>=10)
//	{
//		F(n/10);
//		cout<<n%10<<' ';
//		if(n%2==0)
//		cout<<"是偶数"<<' ';
//		if(n%2!=0)
//		cout<<"是奇数"<<' '; 
//	}
//}
//int main()
//{
//	int a;
//	cin>>a;
//    F(a);
//	return 0;
//} 
//10.九九乘法表
//int main()
//{
//	int i,j;
//	for(i=1;i<=9;i++)
//	{
//	  for(j=1;j<=i;j++)	
//	  {
//	  	  cout<<i<<"*"<<j<<"="<<i*j<<' ';
//	  }
//	  cout<<'\n'; 
//	}
//    
//     
//	return 0;
//} 
//11.百钱买百鸡
//int main()
//{
//	int a,b,c;
//	for(a=1;a<=20;a++)
//	{
//		for(b=1;b<=33;b++)
//		{
//			c=100-a-b;
//			if((c%3==0)&&(5*a+3*b+c/3==100))
//			{
//				cout<<"a="<<a<<" b="<<b<<" c="<<c;
//			}
//		}
//		cout<<' ';
//	}
//	
//	return 0;
//} 
//int main()
//{
//	int a,b,i;
//	int temp=0;
//	cout<<"输入两个整数";
//	cin>>a>>b; 
//	if(a>b)
//	{
//		temp=a;a=b;b=temp;
//	}
//	for(i=a;i<=b;i++)
//	{
//		if(i%3==0&&i%5==0)
//		cout<<i<<' ';
//	}
//	return 0;
//}
