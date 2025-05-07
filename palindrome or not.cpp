#include<iostream>
using namespace std;
main()
{
	int sum=0,temp,n=121,r;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(temp==sum)
	cout<<"palindrome";
	else
	cout<<"not a palindrome";
}
