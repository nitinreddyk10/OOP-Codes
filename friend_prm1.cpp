// Add members of two different classes using friend functions

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA {
	
	private:
        int numA;
         
    public:
        
        ClassA() : numA(12) {}  // constructor to initialize numA to 12
        
   		// friend function declaration
         friend int add(ClassA, ClassB);
};

class ClassB {

    private:
        int numB;
     
	public:
        // constructor to initialize numB to 1
        ClassB() : numB(1) {}
       
    
		// friend function declaration
        friend int add(ClassA, ClassB);
};

// access members of both classes
int add(ClassA objectA, ClassB objectB) {
	
    return (objectA.numA + objectB.numB);
}

int main() {
    ClassA objectA;
    ClassB objectB;
    cout << "Sum: " << add(objectA, objectB);
    return 0;
}