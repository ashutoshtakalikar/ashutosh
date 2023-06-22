#include<iostream>

using namespace std;

class calculus
{
	public:
		int add(int a,int b,int c)
		{
			return a+b+c;
		}	
		
		float add(int a,int b,double c)
		{
			return a+b+c;
		
		}	
		
		int add(float a,int b)
		{
			return a+b;
			
		}	

};

int main(void)
{
	calculus C;

	cout << C.add(125,2534,22.34) << endl;
	cout << C.add(125,227546,0) << endl;
	cout << C.add(12,88.55) << endl;

	return 0;


}	
