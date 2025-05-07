#include<iostream>
using namespace std;
class name{
	int x;
	public:void fact(int n);
};
		main()
		{
			int a;
			name obj1,obj2;
			obj1.fact(5);
			cout<<"enter number"<<endl;
			cin>>a;
			obj2.fact(a);
		}
		void name::fact(int n)
		{
			x=n;
			int i,f=1;
			for(i=1;i<=x;i++)
			f=f*i;
			cout<<f;
		}

