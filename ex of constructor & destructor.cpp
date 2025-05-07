 #include<iostream>
 using namespace std;
 class name{
 	int x;
 	public:name()
 	{
 		cout<<"default constructor"<<endl;
	 }
	 name(int a)
	 {
	 	x=a;
	 	cout<<"parameterized constuctor"<<endl;
	 }
	 ~name()
	 {
	 	cout<<"destructor calling"<<endl;
	 }
 };
 main()
 {
 	name obj,obj1(20);
 }
