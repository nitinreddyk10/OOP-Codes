// This is an example of function template
#include <iostream>
using namespace std;


template <typename T> // syntax

T add(T x, T y) // function 
{
	return (x+y);
}

int main()
{
	cout<<"Addition of 2 integers 3 and 4 is"<<		add<int>(3,4) << endl;
	cout<<"Addition of 2 floats 3.4 and 4.2 is"<<	add<float>(3.4,4.2) << endl;
	cout<<"Addition of 2 double 3.4 and 4.2 is"<<	add<double>(3.45,4.23) << endl;
	return 0;
}
