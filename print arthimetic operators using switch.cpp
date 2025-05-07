#include<iostream>
using namespace std;
class arthimetic {
	int x,y,n;
	public:void name()
	{
	cout<<"enter x,y:";
	cin>>x>>y;
}
void list()
{
	cout<<"select 1 for add\n";
	cout<<"select 2 for sub\n";
	cout<<"select 3 for mul\n";
	cout<<"select 4 for remainder\n";
	cout<<"select 5 for quotient\n";
	cout<<"enter choice:";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<x+y;
	break;
	case 2:
		cout<<x-y;
		break;
	case 3:
		cout<<x*y;
		break;
	case 4:
		cout<<x%y;
		break;
	case 5:
		cout<<x/y;
	break;
	default:
	 cout<<"wrong choice"<<endl;
}
}
};
main()
{
	arthimetic obj;
	obj.name();
	obj.list();
}
