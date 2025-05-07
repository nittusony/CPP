#include<iostream>
using namespace std;
class name{
	int x,y;
	float z;
	public:name (int a,int b)//parameterized
	{
	x=a;
	y=b;	
	}
	name()//default constructor
	{
		x=10;
		y=20;
	}
	name(int a,double b)
	{
		x=a;
		z=b;
	}
	name(double a,int b)
	{
		x=b;
		z=a;
	}
	name(int a,int b,int c)
	{
		x=a;
		y=b;
		y=c;
	}
	void add()
	{
		cout<<x+z<<endl;
	}
	~name()
	{
		cout<<"destructor calling"<<endl;
	}
};
int main()
{
	name obj(5,20);
	obj.add();
}
