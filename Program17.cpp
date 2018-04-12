//Program to differntiate b/w public and local variable. Thenafter use of *thispointer*.

#include<iostream>

class abc
{
	public:
	
	int z;				//Public Variable
	
	void test(int z)		//Local Variable
	{
		this->z=z*z;		//Last two 'z' here, are local variable & first 'z' became public. JAVA uses '.' instead of '->'
		std::cout<<z;		//Local variable's output=10
	}

	void display()
	{
		std::cout<<"\n"<<z<<"\n";	//Public variable's output=100
	}
};

int main()
{
	abc object;
	
	object.test(10);
	object.display();

	return 0;
}
