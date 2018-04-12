//COMPILE TIME POLYMORPHISM : OPERATOR OVERLOADING : with parameter.

#include<iostream>

class demo
{
	int l,b,h,v;
	
	public:
	void get()
	{
		std::cout<<"Enter l,b,h : ";
		std::cin>>l>>b>>h;
	}
	
	void display()
	{
		v=l*b*h;
		std::cout<<"Volume of cuboid is : "<<v<<"\n";
	}
	
	demo operator + (demo d1)
	{
		demo d3;
		
		d3.l=this->l+d1.l;
		d3.b=this->b+d1.b;
		d3.h=this->h+d1.h;
		
		return d3;
	}
};

int main()
{
	demo d1,d2,d3;
	
	d1.get();
	d1.display();
	
	d2.get();
	d2.display();
	
	d3=d1 +d2;		//d1 is passed as parameter and +d2 is for calling function
	d3.display();
	
	return 0;
}
