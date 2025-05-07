#include<iostream>
using namespace std;
class name{
	int x,y,z;
	public:void sum(int a=0,int b=-1,int c=3,int d=4)
	{
		x=a;
		y=b;
        z=d;
        cout<<x+y+z<<endl;
	}
};
main()
{
	name obj,obj1,obj2;
	obj.sum();
	obj.sum(3,4);
	obj.sum(-1,3,5);
}
