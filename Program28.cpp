//Find sum of total salary of three employes after working int two companies for a year per. Use OPERATOR OVERLOADING.

#include<iostream>

class company
{
	char name[3][20];
	int sal[6],i,k;
	
	public:
	void get()
	{
		for(i=0;i<3;i++)
		{
			std::cout<<"Enter Name of employ "<<i+1<<" : ";
			std::cin>>name[i];
			
			std::cout<<"Enter Salary of employ "<<i+1<<" : ";
			std::cin>>sal[i];		
		}	
	}
	
	void display()
	{
		k=0;
		for(i=0;i<3;i++)
		{
			k=k+sal[i];				
		}	
	
		std::cout<<"Salary total : "<<k<<"\n"; 
	}	
	
	company operator + (company apple)
	{
		company sum;
		
		for(i=0;i<3;i++)
		{
			sum.sal[i]=this->sal[i] +  apple.sal[i];		//this.sal[i] takes parameter passed i.e. microsoft here	
		}
		
		return sum;
	}	
}; 

int main()
{
	company apple, microsoft, sum;
	
	std::cout<<"\nApple:\n";
	apple.get();
	apple.display();
	
	std::cout<<"\nMicrosoft:\n";
	microsoft.get();
	microsoft.display();
	
	std::cout<<"\nTotal:\n";
	sum=apple +microsoft;
	sum.display();

	return 0;
}
