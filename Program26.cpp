//COMPILE TIME POLYMORPHISM : OPERATOR OVERLOADING : without parameter.

#include<iostream>

class demo
{
	int a;
	
	public:
	void operator + ()
	{
		a=101;
		std::cout<<a<<"\n";
	}
	
	void operator - ()
	{
		a=102;
		std::cout<<a<<"\n";
	}
	
	void operator * ()
	{
		a=103;
		std::cout<<a<<"\n";
	}
	
	void operator ! ()
	{
		a=104;
		std::cout<<a<<"\n";
	}
		
	void operator ++ ()
	{
		a=105;
		std::cout<<a<<"\n";
	}
	
	void operator -- ()
	{
		a=106;
		std::cout<<a<<"\n";
	}
};

int main()
{
	demo d;
	
	+d;				//calling class's function
	-d;
	*d;
	!d;
	++d;
	--d;
	
	return 0;
}
