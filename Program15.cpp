//Volume of cuboid =  l*b*h. Create two objects of a class including two values of l,b,h. Display volume of both individually and also add both l,b,h. Further find volume of cuboid using values of resultant l,b,h.

#include<iostream>

class volume
{
	private:
	int l,b,h;
	
	public:
	
	void get()
	{
		
		std::cout<<"Enter length, breadth & height of object : ";
		std::cin>>l>>b>>h;
	}

	friend void multiply(volume one, volume two);
	
	friend void add(volume one, volume two);
};

void multiply(volume one, volume two)
{
	int x,y,z;
	
	x=one.l;
	y=one.b;
	z=one.h;
	
	std::cout<<"Volume of object one : ";
	std::cout<<x*y*z<<"\n";
	
	x=two.l;
	y=two.b;
	z=two.h;
	
	std::cout<<"Volume of object two : ";
	std::cout<<x*y*z<<"\n";
}

void add(volume one, volume two)
{
	int l=one.l+two.l;
	int b=one.b+two.b;
	int h=one.h+two.h;
	
	std::cout<<"New length, breadth & height : "<<l<<","<<b<<","<<h<<"\n";
	std::cout<<"Volume of new object : ";
	std::cout<<l*b*h<<"\n";	
}

int main()
{
	volume one;
	volume two;
	
	one.get();
	two.get();

	multiply(one,two);
	add(one,two);
	
	return 0;
} 
