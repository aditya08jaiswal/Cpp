//File Position Pointer: Using Beginning.

#include<iostream>
#include<fstream>

int main()
{
	std::fstream object;
	char st[50];
	int l=0;
	
	object.open("file.txt", std::ios::in);
	object.seekg(6,std::ios::beg);
	
	while(!object.eof())
	{
		object.getline(st,50);
		std::cout<<st;	
	
		l=object.tellg();
	}
	
	std::cout<<"\nSize : "<<l<<"\n";
	
	object.close();

	return 0;
}
