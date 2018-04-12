//FILE HANDLING. Copy a content of two files in one.

#include<iostream>
#include<fstream>
#include<ctype.h>

int main()
{
	std::ifstream read1, read2;
	std::ofstream write1;
		
	char st[50],pt;
	int i;
	
	read1.open("abc.txt");
	read2.open("newabc.txt");
	write1.open("newnewabc.txt");
	
	while(!read1.eof())
	{
		read1.getline(st,50);
		write1<<st;
	}
	
	while(!read2.eof())
	{
		read2.getline(st,50);
		
		for(i=0;st[i]!='\0';i++)
		{
			if(islower(st[i]))
			{
				pt=toupper(st[i]);	
				write1<<pt;
				std::cout<<pt;
			}
			else
			{
				write1<<st[i];
				std::cout<<st[i];
			}
		}
	}
	
	std::cout<<"\nTwo files copied in one!\n";
	
	read1.close();	
	read2.close();
	write1.close();
	
	return 0;
}
