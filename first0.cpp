#include<iostream>
using namespace std;

class car
{
	int roll_num;

	public:

	string name;

	void display()
	{
		cout <<"\n Name :"<< name;
		cout <<"\n Roll no.:" <<roll_num;
	}
	 void  set_roll_num(int n)
	 {
		 roll_num = n;
	 }
	 car()
	 {
		 roll_num = 1;
		 name = "balck";
	 }
	 car(int r)
	 {
		 roll_num = r;
		 name = "yellow black";
	 }
	 car(string c)
	 {
		 name = c;
		 roll_num = 00;
	 }
	 car(int r, string n)
	 {
		 roll_num = r;
		 name = n;
	 }
};

int main()
{
	car c1,c2;
	car c3(50);
	car c4(60978,"max");
	car c5 ("hissssss");

	c1.name = "mark";
	c1.set_roll_num(1000);

	c1.display();
	c2.display();
	c3.display();
	c4.display();
	c5.display();

	return 0;
}

		 

		
	


		
