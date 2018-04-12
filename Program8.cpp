//Basics of Class and Object with Public, Private and Protected.

#include<iostream>

class demo
{
	public:

	int a,b,c;

	void add(int x, int y)
	{
		a=x+y;
		b=x-y;
		c=x*y;	
	}

	void display()
	{
		std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	}

	void test()
	{
		std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	}
};

main()
{
	int x,y;
	
	demo d1;

	std::cout<<"Enter the two numbers : ";
	std::cin>>x>>y;

	d1.add(x,y);

	d1.display();
	
	std::cout<<"Enter the three numbers : ";
	std::cin>>d1.a>>d1.b>>d1.c;

	std::cout<<"Test : \n";
	d1.test();
	
	std::cout<<"Display : \n";
	d1.display();		
}
