#include<iostream>
using namespace std;
class name{//class name
int x,y;//data members
public:name()//default constructor syntax;
{
     int x;
	cout<<"enter numbers:";
	cin>>x;
}
int prime();//member function;	
};
main()
{
	name obj;//obj creation;
	cout<<obj.prime();
}
int name ::prime()//outside class syntax;
	{
		int count=0,i,x;
		for(i=1;i<=x;i++)//prime logic;
		{
	 if(x%i==0)
{
	 count++;
}
	}
   if(count==2)
   cout<<"prime";
    else
   cout<<"not prime";
}
