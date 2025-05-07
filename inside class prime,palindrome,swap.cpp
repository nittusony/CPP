#include<iostream>
using namespace std;
class name{
	int x,y,a,b;
	public:void palindrome(int y)
	{
		int r,sum=0,temp;
		temp=y;
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
	void prime(int n)
	{
		int i,count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
			count++;
			}
		}
			if(count==2)
			cout<<" prime "<<endl;
			else
			cout<<" not prime "<<endl;
	}
		void swap(int a,int b)
		{
		int temp;
			temp=a;
			a=b;
			b=temp;
		cout<<"after swaping:a="<< a<<"b="<< b<<endl;	
	}
};
		 main()
		{
			name obj;
			int x,y,a,b;
			    cout<<"enter number:";
		    	cin>>y;
		    	obj.palindrome(y);
				cout<<"enter number:";
				cin>>x;
				obj.prime(x);
				cout<<"enter number:";
				cin>>a>>b;
				obj.swap(a,b);
			}
		
		
	
