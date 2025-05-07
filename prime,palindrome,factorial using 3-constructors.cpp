#include<iostream>
using namespace std;
class name{
	int x,y,z;
	public:name()
	{
		x=1232;
		y=7;
		z=6;
	}
	name (int a,int b,int c)
	{
		x=a;
		y=b;
		z=c;
	 } 
	 name(name &obj)
	 {
	 	x=obj.x;
	 	y=obj.y;
	 	z=obj.z;
	 }
	 void palindrome()
	 {
	 	int r,temp,sum=0;
	 	temp=x;
	 	int n=x;
	 	while(x>0)
		 {
	 	r=x%10;
	 	sum=sum*10+r;
	 	x/=10;
	 }
	 if(temp==sum)
	 cout<<"palindrome"<<endl;
	 else
	 cout<<"not palindrome"<<endl;
}
void prime()
{
	int count=0;
	for(int i=1;i<=z;i++)
	{
		if(z%i==0)
		{
		count++;
	}
}
	if(count==2)
	cout<<"prime"<<endl;
	else
	cout<<"not prime"<<endl;
}
void fact()
{
	int f=1;
	for(int i=1;i<=y;i++)
	{
		f=f*i;
	}
	cout<<f<<endl;
}
};
 int main()
 {
 	name obj1,obj2(121,3,7),obj3;
 	obj1.palindrome();
 	
 	obj3=obj1;
 	obj3.prime();
 	
 	obj3=obj2;
 	obj3.fact();
 	return 0;
 }


