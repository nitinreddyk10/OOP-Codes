/*
returntype operator symbol(arguments)
{
code
}
*/
#include<iostream>
using namespace std;
class complex
{
	int real, img;
	public:
	complex()
	{
		real = 0;
		img = 0;
	}
	void set(int real, int img)
	{
	this->real = real;
	this->img = img;	
	}
	complex operator + (complex com)
	{
		complex temp;
		temp.real = real + com.real;
		temp.img = img + com.img;
		return temp;
	}
	complex operator + (int real)
	{
		complex temp;
		temp.real = this->real + real;
		temp.img = img;
		return temp;
	}
	
	void operator ++ ()
	{
		++real;
		++img;
	}
	
	void operator ++ (int)
	{
		real++;
		img++;
	}
	
	friend ostream& operator << (ostream &out, complex com);

	void display()
	{
	cout << real << " + " << img << "i" <<endl;	
	}	
};

ostream& operator << (ostream &out, complex com)
{
	 out << com.real << " + " << com.img << "i" <<endl;		
}

int main()
{
	complex com1, com2, com3;
	com1.set(10,20);
	com2.set(5,15);
	++com1;
	com1++;
	com3 =  com1 + com2 + 10;
	cout << "Addition of two complex numbers is: " << com3; 
//	com3.display();
// com1.add(com2);
}
