#include<iostream>
using namespace std;

class triangle
{
private:
    int row;
    int col;
public:
    void display_numtri()
    {
        int j=1;
        for(int i=1;i<4;i++)
        {
            for(int k=1;k<=i;k++)
            {
                cout<<j<<" ";
                j++;
            }
            cout<<endl;
        }
    }
    void display_alphatri()
    {
        char j='a';
        for(int i=1;i<4;i++)
        {
            for(int k=1;k<=i;k++)
            {
                cout<<j<<" ";
                j++;
            }
            cout<<endl;
        }
    }
};

int main()
{
    triangle t1;
    t1.display_numtri();
    t1.display_alphatri();

    return 0;
}