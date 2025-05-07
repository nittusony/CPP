#include<iostream>
using namespace std;
class name{
	int n;
	public:name()
	{
		cout<<"enter number:";
		cin>>n;
	}
	int palindrome();
};
main()
{
  name obj;
  cout<<obj.palindrome();	
}
int name ::palindrome()
{
	int temp,r,sum=0;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	if(temp ==sum)
	cout<<"palindrome"<<endl;
	else
	cout<<"not palindrome"<<endl;
}
