//without Exception handling in C++
#include<iostream>
using namespace std;

int main()
{
	int a, b; // if the denominator is zero The program will crash if it is not in try -catch block
	cout<<"Enter numerator and denominator" <<endl;
	cin >> a >>b;
	
	int r = a/b;
	cout <<"Divition is "<< r <<endl;
	
	//more statements 

	
	cout << "addition of two numbers" << a+b << endl;
	cout << "subtraction of two numbers" << a-b <<endl;
	cout<<"The main program gets exit"<< endl <<endl;
	
	
	
	return 0;
	
}
