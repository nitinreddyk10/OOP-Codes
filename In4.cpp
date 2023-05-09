// calling parameterized constructor in inheritance


#include <iostream>
using namespace std;
  
class A

{
 
    private:
 
        int x,y;
 
    public:
 	A()
 	{
 		int m=6;
 		int n=5;
		 	
	}
    A(int m, int n)
    {
 
        x=m;
        y=n;
 
    }
 
    void print(void)
    {
        cout<<" value of x = "<<x<<endl;
        cout<<" value of y = "<<y<<endl;
      
    }
 
};
 
class B : public A
{
 
    private:
 
        float i, j;
 
    public:
 
    	B( float a, float b, int c, int d) : A(c, d) // syntax for passing parameterized constructors
     	{
        	i = a;
         	j = b;
      
    	}
 
    void show(void)
    {
         cout<<" value of i = "<<i<<endl;
         cout<<" Value of j = "<<j<<endl;
      
    }
};
 
main ()

{
 
  B obj(5.2,7.6,29,56);
 
 
 
  obj.show();
  obj.print();
 
 
}
