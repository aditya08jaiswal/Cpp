//FILE HANDLING. Reading from file. Checking .fail, same as last program but with different method.

#include<iostream>
#include<fstream>

int main()
{
	std::ifstream objif;
	
	char st[50];
	
	std::cout<<"Enter file name : ";
	std::cin>>st;
	
	objif.open(st);
	
	if(objif.fail())
	{
		std::cout<<"FIle failed to open!\n";
	}
	
	else
	{
		while(!objif.eof())		//eof() is a function in ifstream class in C++. In C, EOF is variable.
		{
			objif.getline(st,50);
			std::cout<<st<<"\n";
		}
	
		objif.close();
	}
	
	return 0;
}
