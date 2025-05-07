#include<iostream>
using namespace std;
class name{
	int x,y;
	public:name()
	{
		x=10;
		y=5;
	}
	int sum()
	{
		return x+y;
	}
};
main()
{
	name obj;
	cout<<obj.sum();
}
