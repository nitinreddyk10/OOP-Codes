// addition of complex number  and return using this pointer


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
		void displayData()
		{
			cout<< real << "+" << imaginary << "i" <<endl;
		}
		
		int getRealPart()
		{
			return real;
		}
		float getImaginaryPart()
		{
			return imaginary;
		}
		complexNumbers add2numbers(complexNumbers n1, complexNumbers n2) // member function
        {
        	this->real = n1.getRealPart()+n2.getRealPart();
        	this->imaginary = n1.getImaginaryPart()+n2.getImaginaryPart();
        	return (*this); // function returning objects
        }
};




int main()
{
	complexNumbers comb1(4,5), comb2(5,2), comb3; // parametrized constructor
	comb1.displayData();//4+5i
	comb2.displayData();//5+2i
	
	comb3.add2numbers(comb1,comb2).displayData(); // passing objects as arguments 
	//comb3.displayData();
	
	comb3=comb1+comb2; // operator overloading
	
	
	//int a=5, b=5;
//	int c=a+b;
	//cout<< "C is ="<<c;
	
	complexNumbers *ptr;
	ptr=&comb3;
	
	cout<< "ptr is pointing to comb3";
	cout<<ptr<<endl; // address of comp 3
	ptr->displayData();
	
	return 0;
}
