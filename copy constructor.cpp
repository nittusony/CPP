#include<iostream>
using namespace std;
class name{
	int x,y;
	public:name(int a,int b)
	{
		x=a;
		y=b;
	}
		name(name &obj)
	{
		x=obj.x;
		y=obj.y;
	}
	void sum()
	{
		cout<<x+y<<endl;
	}
};
int main()
{
	name obj1(2,3);
	name obj2(3,7);
	obj1.sum();
	obj2=obj1; 
	obj2.sum();
   /*name obj3;
    obj3.sum();
	obj3=obj2;
return 0;*/
	}
