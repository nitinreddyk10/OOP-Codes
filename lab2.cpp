#include<bits/stdc++.h>
using namespace std;

class time1 {
    int hours,minutes,seconds;
public:
    time1(int hr,int min,int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }
    ~time1()
    {
        //delete hours;
    }
    
    //1.void setTime
    
    void set_time(int hour,int min,int sec)
    {
        hours = hour;
        minutes = min;
        seconds = sec;
    }
    //GETTERS
    int get_Hour(){
        return hours;
    }
    int get_Minutes(){
        return minutes;
    }
    int get_Seconds(){
        return seconds;
    }
};

//2.PrintStandardTime

void Print_Standard_Time(time1 x){
    cout<<"Standard Time: "<<endl;
    int hours = x.get_Hour();
    int minutes = x.get_Minutes();
    int seconds = x.get_Seconds();
    if(hours>12)
    {
        cout<<"PrintStandardTime: ";
        cout<<hours-12<<":"<<minutes<<":"<<seconds<<"PM"<<endl;
    }
    else
    {
        cout<<"PrintStandardTime: ";
        cout<<hours<<":"<<minutes<<":"<<seconds<<"AM"<<endl;
    }
}

//3.PrintUniversalTime

void Print_Universal_Time(time1 x)
{
    cout<<"UniversalTime"<<endl;
    int hours = x.get_Hour();
    int minutes = x.get_Minutes();
    int seconds = x.get_Seconds();
    cout<<"hours: "<<hours<<" Minutes: "<<minutes<<" Seconds: "<<seconds<<endl;
}

//4.Print IndianStandardTime

void Print_Indian_Standard_Time(time1 x)
{
    cout<<"IndianStandardTime: "<<endl;
    int hours = x.get_Hour();
    int minutes = x.get_Minutes();
    int seconds = x.get_Seconds();
    int Hours = hours+5;
    int Minutes = minutes+30;
    int Seconds = seconds;
    if(Minutes > 60)
    {
        if(Hours >= 24)
        {
            Hours -= 23;
        }
        cout<<"hours: "<<Hours<<" Minutes: "<<Minutes<<" Seconds: "<<Seconds<<endl;
    }
    else{
        if(Hours >= 24)
        {
            Hours -= 24;
        }
        cout<<"hours: "<<Hours<<" Minutes: "<<Minutes<<" Seconds: "<<Seconds<<endl;
    }

}

//5. Print PacificStandardTime

void Print_Pacific_Standard_Time(time1 x){
    int hours = x.get_Hour();
    int minutes =x.get_Minutes();
    int seconds = x.get_Seconds();
    if(hours > 8)
    
    {
        cout<<"hours: "<<hours-8<<" Minutes: "<<minutes<<" Seconds: "<<seconds<<endl;
    }
    else
    {
        cout<<" hours: "<<hours+16<<" Minutes: "<<minutes<<" Seconds: "<<seconds<<endl;
    }
}

void display_Menu()
{
    cout<<"Enter 1 to setTime"<<endl;
    cout<<"Enter 2 to Print Standard Time"<<endl;
    cout<<"Enter 3 to print Universal Time"<<endl;
    cout<<"Enter 4 to print indian standard Time"<<endl;
    cout<<"Enter 5 to print pacific standard Time"<<endl;
    cout<<"Enter 6 to print exit"<<endl;
}
int main(){
    cout<<"Enter input in 24-hour format"<<endl;
    int h,m,s;
    cout<<"Enter hours: "<<endl;
    cin>>h;
    cout<<"Enter minutes: "<<endl;
    cin>>m;
    cout<<"Enter seconds: "<<endl;
    cin>>s;
    time1 x = time1(h,m,s);
    display_Menu();
    int ch;
    cin>>ch;
    while(ch){
        switch(ch){
            case 1:
                int hour,sec,min;
                cout<<"Enter hours you want to set"<<endl;
                cin>>hour;
                cout<<"Enter minutes you want to set"<<endl;
                cin>>min;
                cout<<"Enter seconds you want to set"<<endl;
                cin>>sec;
                x.set_time(hour,min,sec);
                display_Menu();
                cin>>ch;
                break;
            case 2:
                Print_Standard_Time(x);
                display_Menu();
                cin>>ch;
                break;
            case 3:
                Print_Universal_Time(x);
                display_Menu();
                cin>>ch;
                break;
            case 4:
                Print_Indian_Standard_Time(x);
                display_Menu();
                cin>>ch;
                break;
            case 5:
                Print_Pacific_Standard_Time(x);
                display_Menu();
                cin>>ch;
                break;
            case 6:
                return 0;
        }
    }

}