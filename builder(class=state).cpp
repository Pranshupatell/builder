#include<iostream>
#include<string.h>
using namespace std;

class State
{
	public:
		static char s_name[100];
		char s_capital[100];
		char s_population[100];
		char s_language[100];
		
		void setData()
		{
			cout<<"Enter State Capital = ";
			cin>>s_capital;
			cout<<"Enter State Population = ";
			cin>>s_population;
			cout<<"Enter State Language = ";
			cin>>s_language;
		}
		void getData()
		{
			cout<<"Gujarat Capitals = "<<s_capital<<endl;
			cout<<"Gujarat Population = "<<s_population<<endl;
			cout<<"Gujarat Language = "<<s_language<<endl;
		}
		
		static void S_name()
		{
			cout<<s_name<<endl;
		}
};
char State::s_name[100]="[Gujarat]";

int main()
{
	State s1;
	
	s1.S_name();
	s1.setData();
	
	s1.getData();
}

