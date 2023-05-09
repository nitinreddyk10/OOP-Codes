// passing objects as arguments
// returning object from function
// pointer to object


#include<iostream>
using namespace std;

class complexNumbers
{
	int real;
	float imaginary;
	
	public:
		complexNumbers()
		{
		}
		complexNumbers(int r, float i)
		{
			real=r;
			imaginary=i;
		}
		displayData()
		{
			cout<<real <<"+" <<imaginary<<"i"<<endl;
		}
		
		int getRealPart()
		{
			return real;
		}
		float getImaginaryPart()
		{
			return imaginary;
		}
};

complexNumbers add2numbers(complexNumbers n1, complexNumbers n2) // not a member function
{
	int r;
	float i;
	r = n1.getRealPart()+n2.getRealPart();
	i = n1.getImaginaryPart()+n2.getImaginaryPart();
	complexNumbers temp(r,i);
	return temp; // function trurning objects
}


int main()
{
	complexNumbers comb1(4,5), comb2(5,2), comb3; // parametrized constructor
	comb1.displayData();//4+5i
	comb2.displayData();//5+2i
	
	comb3 = add2numbers(comb1,comb2); // passing objects as arguments 
	
	comb3.displayData();
	
	complexNumbers *ptr;
	ptr=&comb3;
	
	cout<< "ptr is pointing to comb3";
	cout<<ptr<<endl; // address of comp 3
	ptr->displayData();
	
	return 0;
}
