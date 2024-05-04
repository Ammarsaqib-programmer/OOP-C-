#include <iostream>
using namespace std;

class student {

	public:
int z;
		int Rollnumber,year,semester;
		string Name,department;


		void adddetails() {
		

			cout<<"department :";
			cin>> department;
			cout<<"year :";
			cin>>year;
			cout<<"SEMESTER :";
			cin>>semester;


		}
		void showdetails() {

	
			cout<<" department:"" "<<department<<" ";
			cout<<" year :"" "<<year<<" ";
			cout<<" SEMESTER :"" "<<semester<<" ";
		}
};



int main() {
	cout<<"SALU KHAIRPUR "<<endl;
string command;
	student s1;{  cin>>command;
	if(command=="add");
	s1.adddetails();}


{
cin>>command;
if(command=="print")

	s1.showdetails();}




return 0;
}
