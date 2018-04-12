//Customer details using fstream. Insert, Display, Update and Delete. See Append!

#include<iostream>
#include<fstream>
#include<stdio.h>

class customer
{
	public:
	int id, price;
	char name[50], product[50];
	
	void insert()
	{
		std::fstream objins;
		objins.open("customer.dat", std::ios::out | std::ios::binary | std::ios::app);		//new
	
		std::cout<<"Enter customer id : ";
		std::cin>>id;
		std::cout<<"Enter customer name : ";
		std::cin>>name;
		std::cout<<"Enter product name : ";
		std::cin>>product;
		std::cout<<"Enter price : ";
		std::cin>>price;
		
		objins.write((char *)this, sizeof(customer));
		
		std::cout<<"File CREATED!\n";
		objins.close();
	}

	void display()
	{
		std::fstream objdis;
		objdis.open("customer.dat", std::ios::in | std::ios::binary);
		
		while(objdis.read((char *)this, sizeof(customer)))
		{
			std::cout<<"\nID : "<<id;
			std::cout<<"\nName : "<<name;
			std::cout<<"\nProduct : "<<product;
			std::cout<<"\nPrice : "<<price;
		}
			
		objdis.close();
	}
	
	void deletedata()
	{
		int option;
	
		std::fstream objdel, objnew;
		
		objdel.open("customer.dat", std::ios::in | std::ios::binary);
		objnew.open("updatedcustomer.dat", std::ios::out | std::ios::binary);
		
		std::cout<<"Enter the ID to delete : ";
		std::cin>>option;
		
		while(objdel.read((char *)this, sizeof(customer)))
		{
			if(option!=id)
			{
				objnew.write((char *)this, sizeof(customer));
			}			
		}
		
		objnew.close();
		objdel.close();
		
		remove("customer.dat");
		rename("updatedcustomer.dat","customer.dat");
		
		std::cout<<"Data DELETED!\n";
	}
	
	void update()
	{
		int option;
	
		std::fstream objup, objupnew;
		
		objup.open("customer.dat", std::ios::in | std::ios::binary);
		objupnew.open("newupdatedcustomer.dat", std::ios::out | std::ios::binary | std::ios::app);
		
		std::cout<<"Enter customer id : ";
		std::cin>>option;
		
		while(objup.read((char *)this, sizeof(customer)))
		{
			if(option!=id)
			{
				objupnew.write((char *)this, sizeof(customer));
			}			

			else
			{
				std::cout<<"Enter customer name : ";
				std::cin>>name;
				std::cout<<"Enter product name : ";
				std::cin>>product;
				std::cout<<"Enter price : ";
				std::cin>>price;
			
				objupnew.write((char *)this, sizeof(customer));
			}	
		}
		
		objup.close();	
		objupnew.close();
		
		remove("customer.dat");
		rename("newupdatedcustomer.dat","customer.dat");
		
		std::cout<<"Data UPDATED!\n";
	}

};

int main()
{
	customer info;
	
	int choice;
	char a;
	
	do
	{
		std::cout<<"\nEnter your choice :\n1) Insert\n2) Display\n3) Delete\n4) Update\n";
		std::cin>>choice;
		
		switch(choice)
		{
			case 1:
			info.insert();
			break;
	
			case 2:
			info.display();
			break;
			
			case 3:
			info.deletedata();
			break;
			
			case 4:
			info.update();
			break;			
		}
		
		std::cout<<"\nDo you wanna CONTINUE? YES(Y) or NO(N)\n";
		std::cin>>a;
	}
	while(a=='y' || a=='Y');

	return 0;
}
