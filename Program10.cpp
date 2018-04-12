//Constructor example.

#include<iostream>

class demo
{
	public:
	
	int a,b,c;

	demo()			//constructor
	{
		std::cout<<"Enter three numbers : ";
		std::cin>>a>>b>>c;
	}	

	demo(int x, int y)	//constructor
	{
		a=x+y;
		b=x-y;
		c=x*y;
	}	

	void display()
	{
		std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n";	
	}	
};

int main()
{
	demo d1;		//d1 is object
	demo d2(50,20);

	std::cout<<"Display 1 : \n";
	d1.display();

	std::cout<<"Display 2 : \n";
	d2.display();

	return 0;
}
