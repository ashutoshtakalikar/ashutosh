#include<iostream>

using namespace std;

class Car
{
	public:
		string name;
		void display()
		{
			cout<<"\n your name is \n"<<name;


		}

		
};

int main()
{
	Car c1,c2;

	c1.name ="\n ashutosh\n";
	c2.name ="\njay shree ram\n";

	c1.display();
	c2.display();

	return 0;


}	
