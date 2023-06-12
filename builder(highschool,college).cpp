#include<iostream>
#include<string.h>
using namespace std;

class Highschool
{
   public :
   	int id;
   	int stu_roll_no;
	char stu_name[100];
	int stu_std;
	int stu_age;
	int stu_contact;
	char stu_add[100];
	static char stu_edu_institute_name[100];
	
	void setData()
 {
 	cout<<"enter id of student = ";
	cin>>id;
 	cout<<"enter roll no. of student = ";
	 cin>>stu_roll_no;
 	cout<<"enter student name = ";
	 cin>>stu_name;
 	cout<<"enter student standard = ";
	 cin>>stu_std;
 	cout<<"enter age of student = ";
	 cin>>stu_age;
 	cout<<"enter contact of student = ";
	 cin>>stu_contact;
 	cout<<"enter address of student = ";
	 cin>>stu_add;
 
 	
 }
 void getData()
 {
 	cout<<"highschool student id = "<<id<<endl;
 	cout<<"highschool student roll no. of student = "<<stu_roll_no<<endl;
 	cout<<"highschool student name = "<<stu_name<<endl;
 	cout<<"highschool student standard = "<<stu_std<<endl;
 	cout<<"highschool student age = "<<stu_age<<endl;
 	cout<<"highschool student contact = "<<stu_contact<<endl;
 	cout<<"highschool student address = "<<stu_add<<endl;
 }

};

class College
{
   public :
   	int id;
   	int stu_roll_no;
	char stu_name[100];
	int stu_std;
	int stu_age;
	int stu_contact;
static char stu_edu_institute_name[100];
	char stu_add[100];
	
	void setData()
 {
 	cout<<"enter id of student = ";cin>>id;
 	cout<<"enter roll no. of student = ";cin>>stu_roll_no;
 	cout<<"enter student name = ";cin>>stu_name;
 	cout<<"enter student standard = ";cin>>stu_std;
 	cout<<"enter age of student = ";cin>>stu_age;
 	cout<<"enter contact of student = ";cin>>stu_contact;
 	cout<<"enter address of student = ";cin>>stu_add;
 	
 }

void getData()
{
	cout<<"college student id = "<<id<<endl;
 	cout<<"college student name = "<<stu_name<<endl;
 	cout<<"college student standard = "<<stu_std<<endl;
 	cout<<"college student age = "<<stu_age<<endl;
 	cout<<"college student contact = "<<stu_contact<<endl;
 	cout<<"college student address = "<<stu_add<<endl;
}

};

 char Highschool :: stu_edu_institute_name[] = "Kaushal Vidhyabhan";
 char College :: stu_edu_institute_name[] = "RNWIET";
	


int main()
{
	
	Highschool h;
	College c;
	
    h.setData();
    h.getData();
    cout<<"institute name = "<<Highschool :: stu_edu_institute_name<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    c.setData();
    c.getData();
    cout<<"institute name = "<<College :: stu_edu_institute_name<<endl;
    
	return 0;
}
