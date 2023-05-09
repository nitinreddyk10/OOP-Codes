// function overloading

#include <iostream>
using namespace std;

int add(int x, int y)
{
	return (x+y);
}

float add(float x, float y)
{
	return (x+y);
}

double add(double x, double y)
{
	return (x+y);
}

int main()
{
	cout<<"Addition of 2 integers 3 and 4 is"<<		add(3,4) << endl;
	cout<<"Addition of 2 floats 3.4 and 4.2 is"<<	add(3.4,4.2) << endl;
	cout<<"Addition of 2 double 3.4 and 4.2 is"<<	add(3.45,4.23) << endl;
	return 0;
}

