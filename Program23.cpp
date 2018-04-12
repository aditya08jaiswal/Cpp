//Multilevel Inheritence. Same name can be stored too as student data. Then search and display.

#include<iostream>
#include<string.h>

class student
{
	protected:
	char stud[50][50];			//2-D array for no. of data and name
	int n,i;
	
	public:
	
	student()				//Constructor
	{
		std::cout<<"Enter number of data to take input : ";
		std::cin>>n;
	
		for(i=0;i<n;i++)
		{
			std::cout<<"Enter name "<<(i+1)<<" : ";
			std::cin>>stud[i];
		}
		
		std::cout<<"\n";
	}
};

class marks: public student
{
	protected:
	int m[50];

	public:
	
	marks()
	{	
		for(i=0;i<n;i++)
		{
			std::cout<<"Enter marks of "<<(i+1)<<" : ";
			std::cin>>m[i];
		}
		
		std::cout<<"\n";
	}
};

class search: public marks
{
	private:
	char name[50];
	int c,flag;
	
	public:
	
	search()
	{
		std::cout<<"Enter name to search : ";
		std::cin>>name;
	
		for(i=0;i<n;i++)
		{
			c=strcmp(stud[i],name);
		
			if(c==0)
			{
				
				std::cout<<"Searched name and marks : "<<stud[i]<<" & "<<m[i]<<"\n";
				flag++;
			}		
		}
		
		if(flag==0)
		{
			std::cout<<"Not found!\n";
		}
	}
};

int main()
{
	search data;

	return 0;
}
