//Destructor.

#include<iostream>

int count=0;

class demo
{
	public:
	
	int a,b;
	
	demo()
	{
		std::cout<<"Enter two numbers : ";
		std::cin>>a>>b;
		std::cout<<"Sum : "<<a+b<<"\n";	
	}
	
	~demo()
	{
		count++;
		std::cout<<count<<" Destructed!\n";
	}
	
	demo(int a, int b)
	{
		std::cout<<"Sum of 5 & 10 : "<<a+b<<"\n";	
	}
};

int main()
{
	demo object;
	demo object1(10,5);
	
	return 0;
}
