#include<iostream>
using namespace std;
class name{
	int x;
	float y,z;
	public:name(int a)
	{
		x=a;
	}
	name(float a,float b)
	{
		y=a;
		z=b;
	}
void prime()
{
	int count=0,i;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		count++;
	}
	if(count==2)
	{
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
};
main()
{
	name obj(7);
	obj.prime();
	name obj2(1.2,2.4);
	obj2.swap();
}

