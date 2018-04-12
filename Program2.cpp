//Add three largest digit no.

#include<iostream>

int main()
{
	int a[3],i,n=0;

	for(i=0;i<3;i++)
	{
		std::cout<<"Enter the number a["<<i<<"] : ";
		std::cin>>a[i];

		if(a[i]==999 || a[i]==998 || a[i]==997)
		{
			n=n+a[i];
		}
	}

	if(n==2994)
	{
		std::cout<<"Answer is : "<<n<<"\n";
	}

	else
	{
		std::cout<<"ERROR";
	}

	return 0;
}
