//FILE HANDLING. Copy a content of one file to another.

#include<iostream>
#include<fstream>

int main()
{
	std::ifstream read;
	std::ofstream write1;
		
	char st[50];
	
	read.open("abc.txt");
	write1.open("newabc.txt");
	
	while(!read.eof())
	{
		read.getline(st,50);
		write1<<st;
		std::cout<<"File copied!\n";
	}
	
	read.close();	
	write1.close();
	
	return 0;
}
