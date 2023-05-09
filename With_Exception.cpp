//with Exception handling in C++
#include<iostream>
using namespace std;

int main()
{
	int a, b, r; // if the denominator is zero The program will crash if it is not in try -catch block
	cout<<"Enter numerator and denominator" <<endl;
	cin >> a >>b;
	
	try
	{
		if (b==0)
		{
			throw b;
		}
		r = a/b;	
	}
	catch(int ex)
	{
		cout<< "zero is not valid" << ex << endl;
	}
	
	
	cout <<"Divition is "<< r <<endl;
	
	//more statements 

	
	cout << "addition of two numbers" << a+b << endl;
	cout << "subtraction of two numbers" << a-b <<endl;
	cout<<"The main program gets exit"<< endl <<endl;
	
	
	
	return 0;
	
}
