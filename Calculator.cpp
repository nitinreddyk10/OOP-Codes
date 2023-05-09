#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
    
    private:
     
     float A, B; // data members
    
    public:
     
    void get() // one feature
    {
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
        cin >> B;
    }
    
    double add() // one more feature
    {
        return A + B;
    }

    double sub() // one more feature
    {
        return A - B;
    }
    double mul() // one more feature
    {
        return A * B;
    }
    double divi() // one more feature
    {
        return A / B;
    }
    double power() // one more feature and so on....
    {
        return pow(A,B);
    }
};

int main()
{
    Calculator cal; // object created
    cal.get();
    
    cout<<cal.add()<<endl;
    cout<<cal.sub()<<endl;
    cout<<cal.mul()<<endl;
    cout<<cal.divi()<<endl;
    cout<<cal.power()<<endl;
    
	// cout<< A; data is hiding
    cout<< (char) 97;
    
    return 1;
}