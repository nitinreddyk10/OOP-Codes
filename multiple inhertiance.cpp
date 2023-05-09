//Multiple Inheritance

#include <iostream>
using namespace std;

class Mammal {
  public:
    Mammal() {
      cout << "Mammals can give direct birth." << endl;
    }
};

class WingedAnimal {
  public:
    WingedAnimal() {
      cout << "Winged animal can flap." << endl;
    }
};

class Bat:  public WingedAnimal, public Mammal
{
	// empty class
}; // derived class

int main() {
    Bat b1; // it calls constructor
    return 0;
}
