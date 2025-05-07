#include<iostream>
using namespace std;
class name{
	int x,y,a,b;
	public:void palindrome(int n)
	{
		int r,sum=0,temp;
		temp=y;
		y=n;
		while(y>0)
		{
			r=y%10;
			sum=sum*10+r;
			y/=10;
		}
		if(temp==sum)
		cout<<" palindrome"<<endl;
		else
		cout<<" not palindrome"<<endl;
}
	void prime(int n);
		void swap(int a,int b)
	{
		int temp;
			temp=a;
			a=b;
			b=temp;
		cout<<"after swap:a="<< a<<"b="<< b<<endl;	
}
};

		int main()
		{
			int y,x,a,b;
			name obj1,obj2,obj3;
			    cout<<"enter number:";
		    	cin>>y;
		    	obj1.palindrome(y);
				cout<<"enter number:";
				cin>>x;
				obj2.prime(x);
				cout<<"enter num:";
				cin>>a>>b;
				obj3.swap(a,b);
				return 0;
			}
			void name::prime(int n)
			{
		int i,count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			count++;
			}
			if(count==2)
			cout<<" prime "<<endl;
			else
			cout<<" not prime "<<endl;
			}
		

	
