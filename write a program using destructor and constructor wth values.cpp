#include<iostream>
using namespace std;
class name{
	int x,y;
	float z;
	public:name(int a,int b)
	{
		x=a;
		y=b;
	}
	name()
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
		z=c;
	}
	void add()
	{
		cout<<x+y<<endl;
	}
	void add1()
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
	name obj1;
	obj1.add();
	name obj3(1,1.5);
	obj3.add1();
	name obj4(1.5,1);
	obj4.add1();
	name obj5(1,2,3);
	obj5.add();
	return 0;
}
