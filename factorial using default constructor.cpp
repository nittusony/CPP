#include<iostream>
using namespace std;
class name {//clss syntax
	int x,y;
	public:name()//default 
	{
		cout<<"enter num:";
		cin>>x;
	}
 int fact()//data member
 {
 	int fact=1;
 	for(int i=1;i<=x;i++)//logic 
 	{
 	fact=fact*i;
}
return fact;
 }
};
 main()
 {
 	name obj;//obj creation
 	cout<<obj.fact();
}
