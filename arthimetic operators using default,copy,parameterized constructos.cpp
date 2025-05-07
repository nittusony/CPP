#include<iostream>
using namespace std;
class name{
	int x,y;
	float z;
	public:name()
	{
		x=10;
		y=30;
		z=3.4;
	}
	name(int a,int b,int c)
	{
		x=a;
		y=c;
		z=b;
	}
	name(name &obj)
	{
		x=obj.x;
		y=obj.y;
		z=obj.z;
	}
	void sum()
	{
		cout<<x+y<<endl;
		}
		void div()
		{
			cout<<x/z<<endl;
		}
		void mul()
		{
			cout<<y*z<<endl;
	}
};
int main()
{
	name obj1,obj2(4,4.5,20),obj3;
	obj1.sum();
	obj3=obj1;
	obj3.div();
	obj3=obj2;
	obj3.mul();
	return 0;
}

