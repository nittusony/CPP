#include<iostream>
using namespace std;
void sum( int x=5,int y=10,int z=20)
{
	cout<<(x+y+z)<<endl;
}
main()
{
	sum();
	sum(100,500);
	sum(100,200,300);
}
