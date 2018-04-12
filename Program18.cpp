// Inheritance. Single Level.

#include<iostream>

class base
{
	protected:			//Now, it can only be accessed by it's child.
	int a,b,c;
	
	public:				//Now, it can be accessed my main fuction.
	void get()
	{
		std::cout<<"Enter three input a,b,c : ";
		std::cin>>a>>b>>c;	//a,b,c are in same class, so get() function can access this.
	}
};

class sub : public base			//sub is the child of base. It inherited the property of base.
{
	int x,y;
	
	public:
	void display()
	{
		x=a+b+c;
		y=a*b*c;
		
		std::cout<<"Summation : "<<x<<"\n"<<"Multiplication : "<<y<<"\n";
	}
};

int main()
{
	sub object;
	
	object.get();
	object.display();

	return 0;
}
		
