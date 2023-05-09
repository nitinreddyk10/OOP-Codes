// type casting in exception handling

#include <iostream>
using namespace std;
 

int main()
{
	try{
		throw 10; // thorwing int
	}	
	catch (int x)  {
        cout << "Caught " << x<<endl;
    }
    
    try  {
       throw 10.8f;  // throwing float
    }
    catch (float x)  {
        cout << "Caught " << x <<endl;
    }
    
	try{
    	throw "Exception"; // throwing string
	}
    catch (const char* exp)
    {
    	cout<<"caught"<<exp <<endl;
	}
	
	try{
    	throw 'E'; // throwing character, for character string type is not matched, hence default exception gets called
	}
    catch (const char* exp)
    {
    	cout<<"caught"<<exp <<endl;
	}
	catch (...)  { 						// to handle any type of exception
        cout << "Default Exception\n";
    }
    return 0;
}
