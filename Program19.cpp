//Heirarchy. WAP that defines a shape class with a constructor that gives value to width & height. Then define two sub-classes triangle and rectangle, that calculate the area of the shape area(). In the main, define two varibles a triangle and a rectangle and then call the area() function in this two variables.

#include<iostream>

class shape
{
	protected:
	int a,b,area;
	
	public:
	shape()
	{
		std::cout<<"\nEnter two values : ";
		std::cin>>a>>b;
	}
};

class triangle: public shape
{
	public:
	void display()
	{
		area=0.5*a*b;
		std::cout<<"Triangle's area : "<<area<<"\n";	
	}
};

class rectangle: public shape
{
	public:
	void display()
	{
		area=a*b;
		std::cout<<"Rectangle's area : "<<area<<"\n";	
	}
};

int main()
{
	triangle ta;
	ta.display();
	
	rectangle ra;
	ra.display();

	return 0;
}
