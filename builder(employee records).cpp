#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public :
		int id;
		char name[100];
		char role[100];
		int salary;
		int experience;
		char address[100];
		char email[100];
		int contact ;
		
		void setData()
		{
		  cout<<"enter id of employee=";
		  cin>>id;
		  cout<<"enter name of employee=";
		  cin>>name;
		  cout<<"enter role of employee=";
		  cin>>role;
		  cout<<"enter salary of employee=";
		  cin>>salary;
		  cout<<"enter experience of employee=";
		  cin>>experience;
		  cout<<"enter address of employee=";
		  cin>>address;
		  cout<<"enter email of employee=";
		  cin>>email;
		  cout<<"enter conatact of employee=";
		  cin>>contact;
		}
		
		void getData()
		{
			cout<<"id="<<id<<endl
                <<"name="<<name<<endl
				<<"role="<<role<<endl
				<<"salary="<<salary<<endl
				<<"experience="<<experience<<endl
				<<"address="<<address<<endl
				<<"email="<<email<<endl
				<<"contact="<<contact<<endl;			
		}
};

int main()
{
	
	Employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();
	
}
