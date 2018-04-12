//POLYMORPHISM CONCEPT EXPLAINED! This is of RUN TIME : FUNCTION OVERRIDING.
//MUST SEE the application.

#include<iostream>

class parent
{
	public:
	void display()
	{
		std::cout<<"Parent.\n";
	}
};

class child: public parent
{
	public:
	void display()
	{	
		parent::display();			//SPECIAL: use this to call parent function in a child 
		std::cout<<"Child.\n";
	}
};

int main()
{
	child object;
	
	object.display();
	
	return 0;
}
