// scope resolution operator
// friend function

#include <iostream>
using namespace std;

/*class className {
    ... .. ...
    friend returnType functionName(arguments);
    ... .. ...
}*/

class myclass
{
	private:
		
		int data ; // member variable
		
	public:
		
		void setvalue(); // member function
		void putvalue();
		
		friend void print(myclass); // function declaration		
};

void myclass :: setvalue()
{
	data = 10;
}

void myclass :: putvalue()
{
	cout<< data;
}

void print(myclass m) //not a member function
{
	cout<< m.data;
//	cout<<m.putvalue();
}


int main() // main() is not a member function
{
	myclass m;
	//m.data = 10; // not possible
	
	m.setvalue();
	
	m.putvalue();
	
	//m.print(); // it is not valid call
	
	print(m); // Calling friend fucntion 
	
	return 0;
}