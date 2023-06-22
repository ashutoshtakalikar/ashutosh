#include<iostream>
using namespace std;

class BASE
{
	public:
	
	virtual void display(string s1)
	{
	
		cout<<"I am in BASE"<<s1<<endl;
	
	}		

};

class CHILD1:public BASE
{
 public:
 void display(string s1)
 {	
	
		cout<<"I am in child 1"<<s1<<endl;
	
 }		 


};
class CHILD2:public BASE
{
 public:
 void display(string s1)
	{
		cout<<"I am in child 2"<<s1<<endl;

	
	}	 

};	      
int main()
{
	BASE* base;

	BASE b1;
	int choice ;
	string input ;

	CHILD1 c1;
	CHILD2 c2;


	cout<<"Enter 1 for CHILD 1, 2 for CHILD 2";
	cin>>choice;

	cout<<"\n Enter string input";
	cin>>input;

	if(choice == 1)
	{
		base = &c1;
		
	}	
	else if(choice == 2)
	{
		base = &c2;
	
	}	
	else{
		base = &b1;

	}
	base->display(input);


	return 0;
			

}	
