//Multiple inheritence. Which country won the most medals.
//Constructor use kia to sochega ki phele kis class ke pass jaau. Isslie humne functions ka use kia h.
//SEE PREVIOUS PROGRAM TOO.

#include<iostream>

class india
{
	protected:
	int g1,s1,b1;
	
	public:
	void getind()
	{	
		std::cout<<"India:\n"<<"Gold : ";
		std::cin>>g1;
		
		std::cout<<"Silver : ";
		std::cin>>s1;
		
		std::cout<<"Bronze : ";
		std::cin>>b1;
	}
};

class russia
{
	protected:
	int g2,s2,b2;
	
	public:
	void getrus()
	{	
		std::cout<<"\nRussia:\n"<<"Gold : ";
		std::cin>>g2;
		
		std::cout<<"Silver : ";
		std::cin>>s2;
		
		std::cout<<"Bronze : ";
		std::cin>>b2;
	}
};

class germany
{
	protected:
	int g3,s3,b3;
	
	public:
	void getger()
	{	
		std::cout<<"\nGermany:\n"<<"Gold : ";
		std::cin>>g3;
		
		std::cout<<"Silver : ";
		std::cin>>s3;
		
		std::cout<<"Bronze : ";
		std::cin>>b3;
	}
};

class result: public india, public russia, public germany 
{
	public:
	void display()
	{
		if(g1>g2 && g1>g3)
		{
			std::cout<<"MAX Gold is with India : "<<g1<<"\n";
		}
		
		else if(g2>g1 && g2>g3)
		{
			std::cout<<"MAX Gold is with Russia : "<<g2<<"\n";
		}
		
		else
		{
			std::cout<<"MAX Gold is with Germany : "<<g3<<"\n";
		}
		
		if(s1>s2 && s1>s3)
		{
			std::cout<<"MAX Silver is with India : "<<s1<<"\n";
		}
		
		else if(s2>s1 && s2>s3)
		{
			std::cout<<"MAX Silver is with Russia : "<<s2<<"\n";
		}
		
		else
		{
			std::cout<<"MAX Silver is with Germany : "<<s3<<"\n";
		}
		
		if(b1>b2 && b1>b3)
		{
			std::cout<<"MAX Gold is with India : "<<b1<<"\n";
		}
		
		else if(b2>b1 && b2>b3)
		{
			std::cout<<"MAX Gold is with Russia : "<<b2<<"\n";
		}
		
		else
		{
			std::cout<<"MAX Gold is with Germany : "<<b3<<"\n";
		}
	}
};

int main()
{
	result max;
	
	max.getind();
	max.getrus();
	max.getger();
	
	std::cout<<"\n";
	
	max.display();

	return 0;
}
