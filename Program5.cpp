//Count the no. of duplicate value in an array.

#include<iostream>

int main()
{
	int i,j,k,temp=0,n,a[50],count,b;

	std::cout<<"Enter the number of values to be taken : ";
	std::cin>>n;

	for(i=0;i<n;i++)
	{
		std::cout<<"a["<<i<<"]=";
		std::cin>>a[i];
	}

	for(i=0;i<n;i++)
	{
		count=1;
		b=a[i];
		temp=0;
		for(k=0;k<i;k++)		//checking from start
		{
			if(b==a[k])
			{
				temp=1;
			}
		}

		for(j=i+1;j<n;j++)		//comparing from further no.
		{
			if(a[i]==a[j] && temp==0)
			{
				count++;
			}
		}

		if(temp==0)
		{
			std::cout<<"Number : "<<a[i]<<" & "<<"Frequency : "<<count<<std::endl;
		}	
	}

	
	return 0;
}
