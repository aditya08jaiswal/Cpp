//FILE HANDLING: Transfer data of one file to another in CAPITAL and SMALL ALPHABETS.

#include<iostream>
#include<fstream>
#include<string.h>
#include<ctype.h>

int main()
{
	std::ifstream objif;
	std::ofstream objof;
		
	char s[50], k[50];
	int i, count=1;

	objif.open("newnewabc.txt");
	objof.open("copiedfile.txt");
	
	while(!objif.eof())
	{
		objif.getline(s,50);
		std::cout<<s;
	
		for(i=0;i<strlen(s);i++)
		{	
			if(isspace(s[i]))
			{
				count++;
			}
			
			if(count%2==0)
			{
				k[i]=tolower(s[i]);
			}
			
			else
			{
				k[i]=toupper(s[i]);
			}
		}	
	}
	
	objof<<k;
	
	std::cout<<"\nFile COPIED! From newnewabc.txt to copiedfile.txt\n";
		
	objof.close();
	objif.close();
	
	return 0;
}


