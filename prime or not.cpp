#include<iostream>
using namespace std;
main()
{
	int i,n,count=0;
	cout<<"enter num:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	count++;
    }
     if(count==2)
    cout<<"prime";
    else
      cout<<"not prime";
	}


