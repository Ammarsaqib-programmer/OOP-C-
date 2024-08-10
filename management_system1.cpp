#include <iostream>
#include<string>
#include<vector>

using namespace std;
class User{
	private :
		string username,password;
		public:
			User(string name, string pass){
			
			username=name;
			password=pass;
		}
		string getUsername()
		{
			return username;
		}
		string getPassword(){
			return password;
		}
};
class Usermanager{
	private:
		vector<User> users; //create object of vector class
		public:
			
			void regiseruser()
			{
				string username,password;
				cout<<"\t\tEnter User Name : ";
				cin>>username;
				cout<<"\t\tEnter Password : ";
				cin>>password;
					User newUser( username,password);
				users.push_back(newUser);
	
						cout<<"\t\t User Register Successfully ......"<<endl;
				
			}
			bool loginuser(string name,string pass)
			{
			 
		for(int j=0;j<users.size(); j++){
				
				if(users[j].getUsername()==name && users[j].getPassword()==pass)
				{
					cout<<"\t\t Login Successfully....."<<endl;
					return true;
				}
				
				}
				cout<<"\t\tInvali User Name or Password...."<<endl;
			}
	void showuser()
	{
	     cout<<"\t\t......Users List........"<<endl;
		for(int i=0;i<users.size();i++)
		{
			cout<<"\t\t"<<users[i].getUsername()<<endl;
		}
	}
	void searchUser(string username)
	{
		for(int i=0;i<users.size();i++)
		{
			if(users[i].getUsername() == username)
			{
				cout<<"\t\t User Found"<<endl;
			}
			
				}
			

	}
	void deleteuser(string username)
	{
		for(int i=0;i<users.size();i++)
		{
			if(users[i].getUsername()==username)
			{
				users.erase(users.begin() + i);
				cout<<"\t\t User Remove Successfully......."<<endl;
			}
		}
	}
 } usermanager;
int main()
{
int op;
char choice;
do {
system("cls");
cout<<"\n\n\t\t1. Register User "<<endl;
cout<<"\t\t2.Login "<<endl;
cout<<"\t\t3.Show User List "<<endl;
cout<<"\t\t4.Search User "<<endl;
cout<<"\t\t5.delete User"<<endl;
cout<<"\t\t6. Exit"<<endl;
cout<<"\t\t Enter Your Choice : ";
cin>>op;

switch(op)
{
	case 1:
		{
			usermanager.regiseruser();
			break;
		}
		case 2:
		{
			string username,password;
			cout<<"\t\t Enter User : ";
			cin>>username;
			cout<<"\t\t Enter Password :";
			cin>>password;
			usermanager.loginuser(username,password);
			break;
		}
		case 3:
			{
				usermanager.showuser();
				break;
			}
			case 4:
				{
					string username;
					cout<<"\t\t Enter User Name : ";
					cin>>username;
					usermanager.searchUser(username);
					break;
				}
				case 5:
					{
					
					string username;
					cout<<" Enter User Name Which you want to delete : ";
					cin>>username;
					usermanager.deleteuser(username);
					break;
				}
				case 6:
					exit(1);
}

cout<<"\t\tDo You Want To Continue [Yes/No] ? :";
cin>>choice;
}
while(choice== 'y'|| choice=='Y');



return 0;
}

