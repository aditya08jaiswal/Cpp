//FILE HANDLING. Banking System. 1) Create account. 2) Deposit. 3) Withdraw. 4) Balance Enquiry.

#include<iostream>
#include<fstream>
#include<stdio.h>

class bank
{
	public:
	long accno, inibal;
	char name[50];

	void create()
	{
		std::fstream objcre;
		objcre.open("bank.dat", std::ios::out | std::ios::binary | std::ios::app);
		
		std::cout<<"\nEnter Name : ";
		std::cin>>name;
		std::cout<<"Enter Account number : ";
		std::cin>>accno;
		std::cout<<"Enter Initial balance : ";
		std::cin>>inibal;
	
		objcre.write((char *)this, sizeof(bank));
		
		std::cout<<"Account CREATED!\n";
		objcre.close();
	}
	
	void deposit()
	{
		long add, accde;
	
		std::fstream objdep, objdepnew;
		objdep.open("bank.dat", std::ios::in | std::ios::binary);
		objdepnew.open("newbank.dat", std::ios::out | std::ios::binary);
		
		std::cout<<"Enter the Account number to deposit : ";
		std::cin>>accde;
		
		while(objdep.read((char *)this, sizeof(bank)))
		{
			if(accde!=accno)
			{
				objdepnew.write((char *)this, sizeof(bank));
			}
			
			else
			{
				std::cout<<"Enter the amount to deposit : ";
				std::cin>>add;
			
				inibal=add+inibal;
			
				std::cout<<"Total balance : "<<inibal;	
		
				objdepnew.write((char *)this, sizeof(bank));
			}
		}
		
		objdep.close();
		objdepnew.close();
		
		remove("bank.dat");
		rename("newbank.dat","bank.dat");
		
		std::cout<<"\nAmount of Rs."<<add<<" is deposited SUCCESSFULLY!";
	}
	
	void withdraw()
	{
		long subt, accwi;
	
		std::fstream objwith, objwithnew;
		objwith.open("bank.dat", std::ios::in | std::ios::binary);
		objwithnew.open("newbank.dat", std::ios::out | std::ios::binary);
	
		std::cout<<"Enter the Account number to withdraw from : ";
		std::cin>>accwi;
		
		while(objwith.read((char *)this, sizeof(bank)))
		{
			if(accwi!=accno)
			{
				objwithnew.write((char *)this, sizeof(bank));
			}
		
			else
			{
				std::cout<<"\nEnter the amount to withdraw : ";
				std::cin>>subt;
		
				if(inibal>=subt)
				{
					inibal=inibal-subt;
			
					std::cout<<"Total balance : "<<inibal;	
		
					objwithnew.write((char *)this, sizeof(bank));
				
					std::cout<<"\nAmount of Rs."<<subt<<" is been withdrawn SUCCESSFULLY!";	
				}
			
				else
				{
					std::cout<<"Insufficient balance.";
				
					objwithnew.write((char *)this, sizeof(bank));
				}
			}		
		}
		
		objwith.close();
		objwithnew.close();
		
		remove("bank.dat");
		rename("newbank.dat","bank.dat");
	}
	
	void balance()
	{
		std::fstream objbal;
		objbal.open("bank.dat", std::ios::in | std::ios::binary);
		
		while(objbal.read((char *)this, sizeof(bank)))
		{
			std::cout<<"\nName : "<<name;
			std::cout<<"\nAccount number : "<<accno;
			std::cout<<"\nBalance : "<<inibal;
		}
		
		objbal.close();	
	}
};

int main()
{
	bank system;
	
	int choice;
	char a;
	
	do
	{
		std::cout<<"List of Options :\n1) Create account.\n2) Deposit.\n3) Withdraw.\n4) Balance Enquiry.\n\nEnter option : ";
		std::cin>>choice;
	
		switch(choice)
		{
			case 1:
			system.create();
			break;
			
			case 2:
			system.deposit();
			break;
			
			case 3:
			system.withdraw();
			break;
			
			case 4:
			system.balance();
			break;
			
			default:
			std::cout<<"Enter valid number.\n";
			break;		
		}
		
		std::cout<<"\n\nIf you wanna continue then press Y else N : ";
		std::cin>>a;
		std::cout<<std::endl;
	}
	while(a=='Y' || a=='y');
	
	return 0;
}


