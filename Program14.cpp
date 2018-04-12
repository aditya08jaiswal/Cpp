//Friend function. Sum of three values.

#include<iostream>

class abc
{	
	private:
	int a,b,c;
	
	public:
	void get()
	{
		std::cout<<"Enter three values : ";
		std::cin>>a>>b>>c;
	}
	
	void display()
	{
		std::cout<<"Display of three inputs : ";
		std::cout<<a<<","<<b<<","<<c<<"\n";
	}
	
	friend void add(abc);
};

void add(abc object)
{
	int x,y,z;
	
	x=object.a;
	y=object.b;
	z=object.c;

	std::cout<<"Sum of three values is : ";
	std::cout<<x+y+z<<"\n";
}

int main()
{
	abc object;
	
	object.get();	
	object.display();
	
	add(object);

	return 0;
}
