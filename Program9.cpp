/*
Create a class 'shape' in which make a function TRIANGLE with three arguments to calculate the area of triangle depending on their sides.
Make another function to display the addition and average of the three sides and also display the types of triangle.
Create a function POLYGON with two arguments to decide whether that shape is square or rectangle and find their areas.
*/


#include<iostream>
#include<math.h>

class shape
{
	public:

	void triangle(int a, int b, int c)
	{
		float equi,isosc,scal,s,h;		
		
		if(a==b && b==c && c==a)
		{
			equi=sqrt(3)*pow(a,2)/4;

			std::cout<<"Area of Equilateral Triangle is : "<<equi<<std::endl;
		}

		else if(a!=b && b!=c && c!=a)
		{
			s=(a+b+c)/2;
			scal=sqrt((s*(s-a)*(s-b)*(s-c)));

			std::cout<<"Area of Scalene Triangle is : "<<scal<<std::endl;
		}

		else		//((a!=b || b!=c || c!=a) && (a==b || b==c || c==a))
		{
			if(c==a && b!=a && b!=c)
			{
				h=sqrt(pow(a,2) - pow((b/2),2));
				isosc=0.5*b*h;
			
				std::cout<<"Area of Isoceles Triangle is : "<<isosc<<std::endl;
			}

			else if(b==a && c!=a && c!=b)
			{
				h=sqrt(pow(b,2) - pow((c/2),2));
				isosc=0.5*c*h;
			
				std::cout<<"Area of Isoceles Triangle is : "<<isosc<<std::endl;
			}

			else
			{
				h=sqrt(pow(c,2) - pow((a/2),2));
				isosc=0.5*a*h;
			
				std::cout<<"Area of Isosceles Triangle is : "<<isosc<<std::endl;
			}
		}
	}

	void avg(int a, int b, int c)
	{
		float add,average;

		add=a+b+c;
		average=add/3;
		
		std::cout<<"Addition of three sides is : "<<add<<std::endl;
		std::cout<<"Average of three sides is : "<<average<<std::endl;

		if(a==b && b==c && c==a)
		{
			std::cout<<"Triangle is Equilateral."<<std::endl;
		}

		else if(a!=b && b!=c && c!=a)
		{
			std::cout<<"Triangle is Scalene."<<std::endl;
		}

		else		//((a!=b || b!=c || c!=a) && (a==b || b==c || c==a))
		{
			std::cout<<"Triangle is Isosceles."<<std::endl;
		}
	}

};

int main()
{
	int x,y,z;

	shape s1;
	
	std::cout<<"Enter three sides of triangle : ";
	std::cin>>x>>y>>z;	

	s1.triangle(x,y,z);
	s1.avg(x,y,z);

	return 0;
}
