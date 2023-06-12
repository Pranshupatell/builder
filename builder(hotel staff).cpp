#include<iostream>
#include<string.h>
using namespace std;

class Hotel
{
	private :
		int id;
		char name[100];
		char type[100];
		int staff_size;
		int room_size;
		int establish_year;
		char address[100];
        int rating_type;
        char website[100];
	
	  public :
		
		void setData(int id,char name[],char type[],int staff_size,int room_size,int establish_year,char address[],int rating_type,char website[])
		{
			this->id=id;
			strcpy(this->name,name);
			strcpy(this->type,type);
			this->staff_size=staff_size;
			this->room_size=room_size;
			this->establish_year=establish_year;
			strcpy(this->address,address);
			this->rating_type=rating_type;
			strcpy(this->website,website);
			
        }
		
		void getData()
		{
			cout<<"hotel id = "<<id<<endl
                <<"hotel name = "<<name<<endl
                <<"hotel type = "<<type<<endl
				<<"hotel staff size = "<<staff_size<<endl
				<<"hotel room size = "<<room_size<<endl
				<<"hotel establish year = "<<establish_year<<endl
				<<"hotel address = "<<address<<endl
				<<"hotel rating type = "<< rating_type<<endl
				<<"hotel website = "<<website<<endl;			
		}
};

int main()
{
	
  Hotel h;
	
   h.setData(10,"rambagh palace","veg and non.veg",19,90,1835,"jaipur,rajasthan",5,"www.rambaghpalace.com");
   h.getData();
	
}
