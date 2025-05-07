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
	name(int a)
	{
		y=a;
	}
	name(int a,double b)
	{
		x=a;
		z=b;
	}
	name(float b,int a)
	{
		z=b;
		x=a;
	}
void dis()
{
	cout<<y<<endl;
}
void sum1()
{
	cout<<x+y<<endl;
}
		void sum2()
		{
			cout<<x+z<<endl;
		}
		void sum3()
		{
			cout<<z+x<<endl;
		}
	};
	main()
	{
		name obj(5),obj1(3,4.5),obj2(4,2),obj3(1,2);
		obj.dis();
		obj1.sum2();
		obj2.sum3();
		obj3.sum1();
};

