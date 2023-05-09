#include <bits/stdc++.h>
using namespace std;

class Coordinate
{
    private:
    float xnum;
    float ynum;
    public:
    Coordinate()            // default constructor--------
    {
        xnum = 0;
        ynum = 0;
    }
    // Coordinate(int xnum,int ynum)           // parameterized constructor
    // {
    //     this->xnum = xnum;
    //     this->ynum = ynum;
    // }
   
    void operator ~() // operator overloading -1
    {
    if(xnum<0)
    this->xnum=-xnum;
    if(ynum<0)
    this->ynum=-ynum;
    }
   

    void set(float xnum ,float ynum)
    {
        this->xnum = xnum;
        this->ynum = ynum;
    }

    void display_pt()
    {
        cout<<"("<<this->xnum<<",";
        cout<<this->ynum<<")"<<endl;
    }
   
    Coordinate operator -(Coordinate c)             // operator overloading - 2
    {
    Coordinate temp;
    temp.xnum = xnum - c.xnum;
    temp.ynum = ynum - c.ynum;
    return temp;
    }
    Coordinate operator +(Coordinate c)             // operator overloading - 4
    {
    Coordinate temp;
    temp.xnum = xnum + c.ynum;
    //temp.ynum = ynum + c.xnum;
    return temp;
    }
   
    Coordinate operator *(Coordinate c)             // operator overloading - 3
    {
    Coordinate temp;
    temp.xnum = xnum*c.xnum;
    temp.ynum = ynum*c.ynum;
    return temp;
    }

    int display_len(Coordinate a, Coordinate b)
    {
    Coordinate c;
    c = a - b;
    c=c*c;
    c=c+c;
        float z = c.xnum+c.ynum;
        float y = z;
        z = sqrt(z);
        cout<<z<<endl;
        return y;
    }
   
    bool check(float x, float y, float z)
    {
    int a = max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b = y;
        c = z;
    }
    else if(a==y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if(a == b+c)
    return true;
    else
    return false;
    }
};

int main()
{
    int ch;
    float xnum,ynum;
    Coordinate c1;
    Coordinate c2;
    Coordinate c3;
    while(1)
    {
    cout<<"1. set point "<<endl;
    cout<<"2. display point "<<endl;
    cout<<"3. display length "<<endl;
    cout<<"4. check right angled triangle  "<<endl;
    cout<<"5. exit "<<endl;

    cout<<"enter the choice : ";
    cin>>ch;
        switch(ch)
        {
            case 1:
            {
            cout<<"enter first coordinates"<<endl;
            cin>>xnum>>ynum;
            c1.set(xnum,ynum);
            ~c1;
            cout<<"enter second coordinates"<<endl;
            cin>>xnum>>ynum;
            c2.set(xnum,ynum);
            ~c2;
            cout<<"enter third coordinates"<<endl;
            cin>>xnum>>ynum;
            c3.set(xnum,ynum);
            ~c3;
            break;
            }

            case 2:
            {
                c1.display_pt();
                c2.display_pt();
                c3.display_pt();
                break;
            }

            case 3:
            {
                cout<<"lenght of 1 st side "<<endl;
                c1.display_len(c1,c2);
                cout<<"lenght of 2 nd side "<<endl;
                c2.display_len(c2,c3);
                cout<<"lenght of 3 rd side "<<endl;
                c3.display_len(c3,c1);
                break;
            }

            case 4:
            {
                if(c1.check(c1.display_len(c1,c2),c2.display_len(c2,c3),c3.display_len(c3,c1)))
                cout<<"it is a right angled triangle --"<<endl;
                else
                cout<<"it is not a right angled triangle --"<<endl;
                break;
            }

            case 5:
            {
                exit(0);
            }
            default:
            cout<<"enter the numbers from 1 to 5 only";
            break;
        }
    }
    return 0;
}