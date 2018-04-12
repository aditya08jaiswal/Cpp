//Function with object. Add two distance. Enter using km and meter.

#include<iostream>

class distance
{
	public:

	int a,b;
	float c;
	
	void get()
	{
		std::cout<<"\n"<<"Enter distance in Kilometer : ";
		std::cin>>a;
		
		std::cout<<"Enter distance in meter : ";
		std::cin>>b;
	}

	void display()
	{
		c=(a+(float)b/1000);
		std::cout<<c<<"\n";
	}

	void add(distance d1, distance d2)
	{
		a=d1.a+d2.a;
		b=d1.b+d2.b;
	}
};


int main()
{
	distance d1,d2,d3;
	
	std::cout<<"\nDistance D1 :";
	d1.get();
	std::cout<<"Total D1 distance in km is : ";
	d1.display();
	
	std::cout<<"\nDistance D2 :";
	d2.get();
	std::cout<<"Total D2 distance in km is : ";
	d2.display();
	
	d3.add(d1,d2);
	std::cout<<"\nTotal distance is : ";
	d3.display();

	return 0;
}




