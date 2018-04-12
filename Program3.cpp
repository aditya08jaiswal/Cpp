//Series upto 10 terms - 1 2 4 7 ....

#include<iostream>

int main()
{
	int n=1,i;

	for(i=0;i<10;i++)
	{
		n=n+i;
		std::cout<<n<<"\t";
	}
	return 0;
}
