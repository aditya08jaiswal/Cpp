//Function with object. Add two time. Enter using hr min and sec.

#include<iostream>

class time1
{
	public:

	int a,b,c;
	
	void get()
	{
		std::cout<<"\n"<<"Enter hours : ";
		std::cin>>a;
			
		std::cout<<"Enter minutes : ";
		std::cin>>b;

		std::cout<<"Enter seconds : ";
		std::cin>>c;
	}

	void display()
	{
		
		std::cout<<a<<":"<<b<<":"<<c<<"\n";
	}

	void add(time1 t1, time1 t2)
	{
		a=t1.a+t2.a;
		b=t1.b+t2.b;
		
		if(b>=60)		
		{
			b=b-60;
			a++;
		}
		
		c=t1.c+t2.c;
		do
		{
			if(c>=60)
			{
				c=c-60;
				b++;
			
				if(b>=60)
				{
					b=b-60;
					a++;
				}
			}
		}while(c>=60);
		
	/*	c=t1.c+t2.c;   //second logic
		
		if(c>=60)
		{
			b=b+(c/60);
			c=c%60;
		}
		
		if(b>=60)
		{
			a=a+(b/60);
			b=b%60;		
		}
*/	}
};


int main()
{
	time1 t1,t2,t3;
	
	std::cout<<"\nTime T1 :";
	t1.get();
	std::cout<<"Time T1 : ";
	t1.display();
	
	std::cout<<"\nTime T2 :";
	t2.get();
	std::cout<<"Time T2 : ";
	t2.display();
	
	t3.add(t1,t2);
	std::cout<<"\nTotal time is : ";
	t3.display();

	return 0;
}
