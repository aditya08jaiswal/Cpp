//Display the initials of 3 word name.
// Aditya Vikas Jaiswal == A.V.Jaiswal && A.V.J

#include<iostream>

int main()
{
	char st[50];
	int i,space=0,count=0,times=0;
	
	std::cout<<"Enter the name : ";
	std::cin.getline(st,50);

	for(i=0;st[i]!='\0';i++)
	{

		if(i==0)
		{
			std::cout<<st[i]<<".";
		}		
	
		if(st[i]==' ')
		{
			space++;
		}	
		
		if(count==0)
		{
			if(space==1)
			{
				std::cout<<st[i+1]<<".";
				count++;
			}
		}

		if(space==2)
		{
			std::cout<<st[i+1];
		}
	}

	std::cout<<std::endl;
	
	space=0;
	count=0;

	for(i=0;st[i]!='\0';i++)
	{

		if(i==0)
		{
			std::cout<<st[i]<<".";
		}		
	
		if(st[i]==' ')
		{
			space++;
		}	
		
		if(count==0)
		{
			if(space==1)
			{
				std::cout<<st[i+1]<<".";
				count++;
			}
		}

		if(times==0)
		{		
			if(space==2)
			{
				std::cout<<st[i+1];
				times++;
			}
		}
	}

	std::cout<<std::endl;


	return 0;
}

