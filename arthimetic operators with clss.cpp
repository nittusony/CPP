#include<iostream>
using namespace std;
class arthimetic {
	int x,y;
	public:void sum()
	{
		x=10;
		y=2;
		cout<<x+y<<endl;
	}
		void sub()
		{
			x=18;
			y=22;
			cout<<x-y<<endl;
		}
};
main()
{
arthimetic obj,obj1,obj2,obj3;
obj.sum();
obj.sub();
obj1.sum();
obj1.sub();	
}
