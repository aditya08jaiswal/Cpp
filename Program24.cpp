//POLYMORPHISM. Calculate the area of circle, rectangle & triangle using FUNCTION OVERLOADING.

#include<iostream>

class calculate
{
	public:
	
	float area;
	
	void shape(int r)
	{
		area=3.14*r*r;
		std::cout<<"Area of Circle is "<<area<<"\n";
	}
	
	void shape(int l, int b)
	{
		area=l*b;
		std::cout<<"Area of Rectangle is "<<area<<"\n";	
	}
	
	
	void shape(float l, int b)
	{
		area=0.5*l*b;
		std::cout<<"Area of Triangle is "<<area<<"\n";
	}
};

int main()
{
	float tri=5;

	calculate object;
	
	object.shape(2);
	object.shape(5,2);
	object.shape(tri,2);	

	return 0;
}
