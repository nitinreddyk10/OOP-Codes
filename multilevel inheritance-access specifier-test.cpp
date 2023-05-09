// what type of inhertiace? Multilevel inheritance
// test the access specifier

#include <iostream>
using namespace std;

class A
{
    private:
        void Hello()
        {
            cout << "One";
        }
    protected:
        void Today()
        {
            cout << "Two";
        }
    public:
        void World()
        {
            cout << "Three";
        }
};

class B : private A
{
    public:
    void fun()
    {
        World();
    }
    
};

class C: public B
{
    void fun1()
    {
        World();
    }

};
int main()
{
    C sample;
    sample.fun1();
    return 0;
}
