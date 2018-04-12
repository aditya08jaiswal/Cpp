//Series upto 10 terms - 3 10 29 66 ....

#include<iostream>
#include<math.h>

main()
{
	int n,i;

	for(i=1;i<11;i++)
	{
		n=pow(i,3)+2;
		std::cout<<n<<"\t";
	}
}
