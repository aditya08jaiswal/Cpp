//ABSTRACT CLASS! Virtual Function.

#include<iostream>

class input					//Abstract class
{
	protected:
	char fname[10],mname[10],lname[10];

	public:
	
	input()					//we can use function too
	{
		std::cout<<"Enter first name : ";
		std::cin>>fname;
	
		std::cout<<"Enter middle name : ";
		std::cin>>mname;
		
		std::cout<<"Enter last name : ";
		std::cin>>lname;
	}
	
	virtual void display() = 0;		//override
	
};

class concatenate: public input
{
	public:
	
	void display()				//override	
	{
		std::cout<<"Full name : "<<fname<<"."<<mname[0]<<"."<<lname<<"\n";
	}
};

int main()
{
	concatenate name;
	
	name.display();	

	return 0;
}
