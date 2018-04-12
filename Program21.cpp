//Multilevel inheritence. Bank account details. 

#include<iostream>

class bank
{
	protected:
	char name1[50], place1[50];
	
	public:
	bank()
	{
		std::cout<<"Bank name : ";
		std::cin>>name1;
		
		std::cout<<"Bank city : ";
		std::cin>>place1;
	}
};

class branch : public bank
{
	protected:
	char name2[50], place2[50];
	
	public:
	branch()
	{
		std::cout<<"Branch name : ";
		std::cin>>name2;
		
		std::cout<<"Branch area : ";
		std::cin>>place2;		
	}
};

class loan : public branch
{
	protected:
	int a,r;

	public:
	loan()
	{
		std::cout<<"Amount : ";
		std::cin>>a;
		
		std::cout<<"Rate in % : ";
		std::cin>>r;		
	}
	
	void display()
	{
		std::cout<<"\nBank name : "<<name1;
		std::cout<<"\nBank city : "<<place1;
		std::cout<<"\nBranch name : "<<name2;
		std::cout<<"\nBranch area : "<<place2;
		std::cout<<"\nAmount : "<<a;
		std::cout<<"\nRate in % : "<<r<<"\n";
	}
};

int main()
{
	loan details;
	
	details.display();
	
	return 0;
}


