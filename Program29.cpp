//Using pointer in inheritence. Take the input in a function in a parent class. Check if they are perfect square or not. If not, then what should be added to make it a perfect square. Make child class, in that add those numbers which should be added to make perfect square and display. 

#include<iostream>

class check
{
	protected:
	int s[2],n[2],i,j,sum;
	
	public:
	
	void get()
	{
		for(i=0;i<2;i++)
		{
			std::cout<<"Enter number "<<i+1<<" : ";
			std::cin>>s[i];
		}
	
		for(i=0;i<2;i++)
		{
			for(j=1;j<=(s[i]/2);j++)
			{
				if(j*j==s[i])
				{
					std::cout<<"Perfect square!\n";
					break;	
				}	
	
				else if(j*j>s[i])
				{
					n[i]=j*j-s[i];
					std::cout<<"Number added to make "<<s[i]<<" a Perfect square : "<<n[i]<<".\n";
					break;		
				}
			}
		}
	}
};

class add: public check
{
	public:
	
	void display()
	{
		sum=0;
		for(i=0;i<2;i++)
		{
			sum=sum+n[i];	
		}
		
		std::cout<<"Sum of numbers to be added : "<<sum<<".\n";
	}
};

int main()
{
	check call, *p;
	add callchild, *q;
	
	p=&call;
	p->get();
	
	q=&callchild;
	q->display();		//callho raha hai but answer ni aayega kyo ki do alag alag pointer object h

	return 0;
}
