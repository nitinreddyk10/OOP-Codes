// Inline funtions and Default parameters
// Inline function is a function that is expanded in line when it is called. 
// When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.

//when inline function is used? 
//Using inline functions saves time to transfer the control of the program from the 
//calling function to the definition of the called function. 

// Inline functions are commonly used when the function definitions are small, 
// and the functions are called several times in a program.

#include<iostream>
using namespace std;

inline int add(int a, int b) // inline functions
{
	return (a+b);
}

//Default parameters
int sum(int a, int b=3, int c=9 , int d=0)
{
	return (a+b+c+d);
}

int main()
{

cout<<"addition of 4 and 5="<< add(4,5)<<endl;
cout<<"addition of 1,2,3,4=,"<<sum(1,2,3,4)<<endl;
cout<<"addition of 1,2,0, 5="<<sum(1)<<endl;
return 0;	
}