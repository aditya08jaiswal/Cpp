//File Position Pointer: Using Ending.

#include<iostream>
#include<fstream>

int main()
{
	std::fstream object;
	char st[50];
	int l=0;
	
	object.open("file.txt", std::ios::in);
	object.seekg(-9,std::ios::end);
	
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
