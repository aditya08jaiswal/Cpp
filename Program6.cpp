//Reverse each word of a string.

#include<iostream>

int main()
{
	char st[100],kt[100];
	int i,j,k=0,l;

	std::cout<<"Enter the string : ";
	std::cin.getline(st,100);

	for(l=0;st[l]!='\0';l++);
	st[++l]=' ';
	
  
	for(i=0;i<=l;i++)
	{
		if(st[i]==' ')
		{	
		    	kt[k]='\0';
			
			for(j=k;j>=0;j--)
			{
				std::cout<<kt[j];
			}

			k=0;
			std::cout<<" ";
		}

		else
		{
			kt[k]=st[i];
			k++;
		}			
	}

	return 0;
}
