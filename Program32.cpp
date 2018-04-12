//FILE HANDLING. Writing in a file.

#include<iostream>
#include<fstream>

int main()
{
	std::ofstream objof;			//Directly making object as I declared header file of class at the top
	
	char st[50];
	
	objof.open("abc.txt");
	
	std::cout<<"Enter content to write in file : ";
	std::cin.getline(st,50);
	
	objof<<st;
	
	std::cout<<"File created!\n";
	objof.close();
	
	return 0;
}
