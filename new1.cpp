#include<iostream>
using namespace std;

main()
{
	// declare an int pointer
	int *i;
	
	// declare a float pointer
	float *f;
	
	// dynamically allocate memory
	i = new int;
	f = new float;
	
	// assign values to the memory
	*i= 45;
	*f= 56.78;
	
	cout<< "i=" << *i;
	cout<< "f=" << *f;
	
	// deallocate the memoery
	delete i;
	delete f;
}
