//When an exception is thrown, all objects created inside the enclosing try block are destroyed before the control is transferred to the catch block.

#include <iostream>
using namespace std;
 
class Test {
public:
    Test() { cout << "Constructor of Test " << endl; }
    ~Test() { cout << "Destructor of Test " << endl; }
};
 
int main()
{
	try
	{
		Test t1;
		throw 10;
	}
	catch (int i)
	{
		cout << "Caught " << i << endl;
	}	
	cout << " Exit from main";
	
    /*try {
        Test t1;
        throw 10;
    }
    catch (int i) {
        cout << "Caught " << i << endl;
    }*/
}
