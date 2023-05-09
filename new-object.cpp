#include <iostream>
using namespace std;

class Emp {
  private:
    int age;

  public:

    // constructor initializes age to 12
    Emp() : age(12) {}

    void displayAge() {
      cout << "Age = " << age << endl;
    }
};

int main() {

  // dynamically declare Student object
  Emp* ptr = new Emp();

  // call getAge() function
  ptr->displayAge();

  // ptr memory is released
  delete ptr;

  return 0;
}
