//Multiple Inheritence. Students details.

#include<iostream>

class detail
{
	protected:
	char name[50];
	int rno;

	public:
	void getdet()
	{
		std::cout<<"\nEnter name : ";
		std::cin>>name;
		
		std::cout<<"Enter roll No. : ";
		std::cin>>rno;
	}
};

class marks
{
	protected:
	int m1,m2,m3;
	
	public:
	void getmar()
	{
		std::cout<<"Enter three marks m1,m2,m3 : ";
		std::cin>>m1>>m2>>m3;
	}
};

class result : public detail, public marks
{
	public:
	void display()
	{
		std::cout<<"\nName : "<<name<<"\n";
		std::cout<<"Roll no. : "<<rno<<"\n";
		std::cout<<"Total marks : "<<(m1+m2+m3)<<"\n";
		std::cout<<"Average marks : "<<((m1+m2+m3)/3)<<"\n";
	}	
};

int main()
{
	result student[2];
	
	for(int i=0;i<2;i++)
	{
		student[i].getdet();
		student[i].getmar();
	}
	
	for(int i=0;i<2;i++)
	{
		student[i].display();	
	}
	
	return 0;
}

