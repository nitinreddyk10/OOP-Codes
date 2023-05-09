// Function Overloading

// Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. 
// When a function name is overloaded with different jobs it is called Function Overloading. 
// In Function Overloading “Function” name should be the same and the arguments should be different. 
// Function overloading can be considered as an example of a polymorphism feature in C++.

#include <iostream>
using namespace std;
 
void add(int a, int b)
{
  cout << "sum = " << (a + b);
}
 
void add(int a, int b, int c)
{
    cout << endl << "sum = " << (a + b + c);
}

 
void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}

void add(int a, double b)
{
    cout<<endl<<"sum = "<<(a+b);
} 
 
void  add(double a, int b)
{
    cout<<endl<<"sum = "<<(a+b);
} 
 
// Driver code
int main()
{
    add(10, 2);
    add(5, 6, 4);
 	add(5.3, 6.2);
    
    add(10,2.5);
    add(5.5,6);
 
    return 0;
}
