#include<iostream>
using namespace std;
class name{
	int x;
	float y,z;
	double p;
	public:name(int a)
	{
		x=a;
	}
	name(float a,float b)
	{
		y=a;
		z=b;
	}
	name(double c)
	{
		p=c;
	}
void prime()
{
	int count=0,i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count++;
	}
	if(count==2){
		cout<<"prime number"<<endl;
	}
		else{
		cout<<"not prime number"<<endl;
	}
}
void swap()
{
	float temp;
	temp=y;
	y=z;
	z=temp;
	cout<<"after swap:"<<"y="<<y<<"\n"<<"z="<<z<<endl;
}
void palindrome()
{
	int r,sum=0,n,temp;
	n=temp=p;
	while(n>0)
	{
	r=n%10;
	sum=sum*10+r;
	n/=10;
}
	if(temp==sum){
	cout<<"palindrome"<<endl;
}
	else{
	cout<<"not palindrome"<<endl;
}
}
};
main()
{
	name obj1(7);
	obj1.prime();
	name obj2(1.2,2.4);
	obj2.swap();
	name obj3(121.0);
	obj3.palindrome();
}

