//FILE HANDLING. Reading from file.

#include<iostream>
#include<fstream>

int main()
{
	std::ifstream objif;
	
	char st[50];
	
	std::cout<<"Enter file name : ";
	std::cin>>st;
	
	objif.open(st);
	
	if(objif)
	{
		while(!objif.eof())		//eof() is a function in ifstream class in C++. In C, EOF is variable.
		{
			objif.getline(st,50);
			std::cout<<st<<"\n";
		}
	
		objif.close();
	}
	
	else
	{
		std::cout<<"FIle NOT FOUND!\n";
	}
	
	return 0;
}
