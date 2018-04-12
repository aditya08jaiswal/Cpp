//Program to differntiate b/w public and local variable.

#include<iostream>

class abc
{
	public:
	
	int z;			//Public Variable
	
	void test(int z)	//Local Variable
	{
		z=z*z;		//All 'z' here, are local variable
		std::cout<<z;	//Local variable's output
	}

	void display()
	{
		std::cout<<"\n"<<z<<"\n";	//Public variable's output
	}
};

int main()
{
	abc object;
	
	object.test(10);
	object.display();

	return 0;
}
