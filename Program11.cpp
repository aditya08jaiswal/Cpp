//Create two objects of a class : 1) India 2)Australia. Default constructor: 5 Player names & Score. Main: Who won the match.

#include<iostream>
#include<string.h>

class cricket
{
	public:
	
	char n[10][10],k[10];
	int s[10],i,y,score;
	
	cricket()
	{
		score=0;
		
		for(i=0;i<3;i++)
		{
			std::cout<<"Player : ";
			std::cin>>n[i];
			std::cout<<"Score : ";
			std::cin>>s[i];
			
			score=s[i]+score;
		}
	}
	
	void manofthematch()
	{
		y=s[0];
		
		for(i=0;i<3;i++)
		{
			if(y<s[i])
			{
				y=s[i];
				strcpy(k,n[i]);
			}
		}
		
		std::cout<<"Man of the Match is "<<k<<" with score "<<y<<".\n";
	}
};

int main()
{	
	std::cout<<"India : \n";
	cricket india;
	std::cout<<"India's score : "<<india.score<<"\n";
	
	std::cout<<"\nAustralia : \n";
	cricket australia;
	std::cout<<"Australia's score : "<<australia.score<<"\n";
	
	if(india.score>australia.score)
	{
		std::cout<<"\nIndia WON the match.\n";
		india.manofthematch();
	}
	
	else
	{
		std::cout<<"\nAustralia WON the match.\n";
		australia.manofthematch();
	}
	
	return 0;
}
