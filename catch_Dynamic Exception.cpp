#include <iostream>
using namespace std;
 
// Here we specify the exceptions that this function throws.

void fun(int *ptr, int x) throw (int *, int) // Dynamic Exception specification
{
    if (ptr == NULL)
        throw ptr;
    if (x == 0)
        throw x;
    /* Some functionality */
}
 
int main()
{
    try {
       fun(NULL, 9);// calling function fun()
    }
    catch(...) {
        cout << "Caught exception from fun()"<<endl;
    }
    cout<<"Exit from main" <<endl;
    return 0;
}
