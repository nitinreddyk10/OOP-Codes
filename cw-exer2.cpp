#include<iostream>
using namespace std;

class exchange
{
private:
    int a;
    int b;
public:
    void get_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void put_data()
    {
        cout<<"Num-1: "<<a<<endl;
        cout<<"Num-2: "<<b<<endl;
    }
    void swap()
    {
        int temp=a;
        a=b;
        b=temp;
    }
};

int main()
{
    exchange e1;
    e1.get_data(6,9);
    e1.put_data();
    e1.swap();
    e1.put_data();

    return 0;
}