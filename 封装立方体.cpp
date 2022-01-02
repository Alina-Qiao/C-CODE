#include<iostream>
using namespace std;
//int *f()
//{
//	int *p=new int(10);
//	return p;
//}
//int main()
//{
//	int *p=f();
//	cout<<*p<<endl;
//	return 0;
//}
class Cube
{
	public:
		void setL(int l)
		{
			m_L=l;
		}
		int getL()
		{
			return m_L;
		}
		void setW(int w)
		{
			m_W=w;
		}
		int getW()
		{
			return m_W;
		}
		void setH(int h)
		{
			m_H=h;
		}
			int getH()
		{
			return m_H;
		}
		int CubeS()
		{
			return 2*m_L*m_W+2*m_L*m_H+2*m_W*m_H;
		} 
		int CubeV()
		{
			return m_L*m_W*m_H;
		}
		bool isSameByClass(Cube &c)
		{
			if(m_L==c.getL()&&m_W==c.getW()&&m_H==c.getH())
			{
				return true;
			}
			return false;
		}
	private:
		int m_L;
		int m_W;
		int m_H;
};
bool isSame(Cube &c1,Cube &c2)
{
	if(c1.getL()==c2.getL()&&c1.getW()==c2.getW()&&c1.getH()==c2.getH())
				{
					return true;
				}
				return false;
}
int main()
{
	Cube c1;
		c1.setL(10);
		c1.setW(10);
		c1.setH(10);
		cout<<"c1的面积为："<<c1.CubeS()<<endl;
		cout<<"c1的体积为："<<c1.CubeV()<<endl;
	Cube c2;
		c2.setL(10);
		c2.setW(10);
		c2.setH(10);
		bool ret=isSame(c1,c2);
		if(ret)
		{
			cout<<"相等"<<endl;
		}
		else
		{
		    cout<<"不相等"<<endl;	
		}
		ret=c1.isSameByClass(c2);
		if(ret)
				{
					cout<<"相等"<<endl;
				}
				else
				{
				    cout<<"不相等"<<endl;	
				}
	return 0;
}
