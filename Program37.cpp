//FILE HANDLING: Count no. of words, symbols and digits. Using ctype header file.

#include<iostream>
#include<fstream>
#include<string.h>
#include<ctype.h>

int main()
{
	std::ifstream objif;
	
	char s[50];
	int i, digits=0, words=1, symbols=0;

	objif.open("newnewabc.txt");
	
	while(!objif.eof())
	{
		objif.getline(s,50);
		std::cout<<s;
	
		for(i=0;i<strlen(s);i++)
		{
			if(isdigit(s[i]))
			{
				digits++;
			}
		
			else if(isspace(s[i]))
			{
				words++;
			}
		
			else if(!isalpha(s[i]))
			{
				symbols++;
			}
		}
	}
	
	objif.close();
	
	std::cout<<"\nDigits : "<<digits<<"\nWords : "<<words<<"\nSymbols : "<<symbols<<"\n";
	
	return 0;
}


