//DATA FILE. Use of fstream. Very IMPORTANT.

#include<iostream>
#include<fstream>

class student
{
	public:
	int rno;
	char name[50];
	
	void insert()
	{
		std::fstream objfs;
		
		objfs.open("student.dat", std::ios::out | std::ios::binary);
		
		std::cout<<"\nInput values :\nEnter Roll No. : ";
		std::cin>>rno;
		
		std::cout<<"Enter Name : ";
		std::cin>>name;
		
		objfs.write((char *)this, sizeof(student));
	
		std::cout<<"File created.\n";
		
		objfs.close();
	}
	
	void display()
	{
		std::fstream fs;
		
		fs.open("student.dat", std::ios::in | std::ios::binary);
		
		while(fs.read((char *)this, sizeof(student)))
		{
			std::cout<<"\nOutput values :\nRoll no. : "<<rno<<"\n";
			std::cout<<"Name : "<<name<<"\n";
		}
		
		fs.close();
	}
};

int main()
{
	student detail;
	
	int choice, n=0;
		
	while(n==0)
	{
	
		std::cout<<"\nOPTIONS :\n 1) Insert\n 2) Display\n 3) Exit\nEnter choice : ";
		std::cin>>choice;
		
		switch(choice)
		{
			case 1:
			detail.insert();
			break;
			
			case 2:
			detail.display();
			break;
		
			case 3:
			n=1;
			std::cout<<"\nFile EXIT!\n";
			break;
			
			default:
			std::cout<<"Invalid!";
			break;
		}
	}
	
	return 0;
}
