#include<iostream>
using namespace std;

class car
{
	public:
		string name;

		void display()
		{
			cout <<"\n your name is \n"<< name;

		}



};

int main()
{
	car c1,c2;

	c1.name ="\n ashutosh \n";
	c2.name ="\n vijay \n";
	
	c1.display();
	c2.display();

	return 0;

}



	
