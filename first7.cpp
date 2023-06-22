#include<iostream>
using namespace std;

class Car
{
		string name;
	public:

		void display()
		{
			cout<<"\n your name is \n"<< name;	
		
		}

		void set_name(string new_name)
		{
			this->name = new_name;
		}		
};

int main()
{
	Car c1,c2 ;

	string new_name;

	cout<<"\n Enter New name ";
	cin>>new_name;

	c2.set_name(new_name);
	cout<<"\n Enter New name ";
	cin>>new_name;
	c1.set_name(new_name);

	c1.display();
	c2.display();	
	
	return 0;


}
