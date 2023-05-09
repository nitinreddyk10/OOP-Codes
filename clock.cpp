#include <iostream>
using namespace std;

class time1{
    private:
    int hour, minutes, seconds;

    public:

    time1(){
        hour = 0;
        minutes = 0;
        seconds = 0;
    }

    time1(int u_hour, int u_minutes, int u_seconds){
        hour = u_hour;
        minutes = u_minutes;
        seconds = u_seconds;
    }

    void set(int hr, int min, int sec){
        hour = hr;
        minutes = min;
        seconds = sec;

        return;
    }

    void get(int *hr, int* min, int* sec){
        *hr = hour;
        *min = minutes;
        *sec = seconds;

        return;
    }

    ~time1()
    {}
};

void menu(){
    cout << "1. Set time" << endl;
    cout << "2. Print standard time" << endl;
    cout << "3. Print Universal time" << endl;
    cout << "4. Print Indian Standard time" << endl;
    cout << "5. Printf Pacific Standard time" << endl;
    cout << "0. Exit" << endl;

    return;
}

void print_t(int hr, int min, int sec){
    if(hr<10){
        cout << "0" << hr << ":";
    }
    else cout << hr << ":";

    if(min<10){
        cout << "0" << min << ":";
    }
    else cout << min << ":";

    if(sec < 10){
        cout << "0" << sec << " ";
    }
    else cout << sec << " ";

    return;
}

void set_clock(time1* t){
    int hr, min, sec;
    cout << "Enter the time: **24 hour format**" << endl << "hour: ";
    cin >> hr;
    cout << "minutes: ";
    cin >> min;
    cout << "seconds: ";
    cin >> sec;

    if(hr>23 || hr<0 ||sec > 59||sec < 0||min < 0||min>59){
        printf("*** Invalid clock entered ***\n");
        return ;
    }

    (*t).set(hr, min, sec);
    return;
}

void std_time(int hr, int min, int sec){
    int flg = 0;
    if(hr >= 12){
        flg = 1;
    }
    if(hr > 12){
        hr-= 12; 
    }
    if(hr == 0 ){
        hr =12;
    }
    print_t(hr, min, sec);

    if(flg){
        cout << "PM" ;
    }
    else cout << "AM" ;

    return;
}

void univ_st_time(time1* t){
    int hr, min, sec;
    (*t).get(&hr, &min, &sec);
    std_time(hr, min, sec);

    return;
}

void univ_time(time1* t){
    int hr, min, sec;
    (*t).get(&hr, &min, &sec);
    print_t(hr, min, sec);

    return;
}

void ist(time1* t){
    int hr, min, sec;
    (*t).get(&hr, &min, &sec);
    hr+=5;
    min+=30;
    if(min>59) {
        min-=60;
        hr++;
    }
    if(hr>23) hr-=24;
    print_t(hr, min, sec);

    return;
}

void pst(time1* t){
    int hr, min, sec;
    (*t).get(&hr, &min, &sec);
    hr-=8;
    if(hr<0){
        hr+=24;
    }
    
    std_time(hr, min, sec);

    return;
}

void clock(time1* t){
    int choice;
     while(1){
        menu();
        cout << "Enter your choice" << endl;
        scanf("%d", &choice);
        if(choice == 1){
            set_clock(t);
        }
        else if(choice == 2){
            univ_st_time(t);
        }
        else if(choice == 3){
            univ_time(t);
        }
        else if(choice == 4){
            ist(t);
        }
        else if(choice == 5){
            pst(t);
        }
        else if(choice == 0){
            cout << "Thankyou" << endl;
            break;
        }
        else{
            cout << endl << "Invalid choice, try again" << endl;
        }
        cout << endl;
    }
    return ;
}

int main(void){
    int choice;

    cout << "1. Create a clock starting at midnight" << endl << "2. Set the clock time on creation" << endl;
    scanf("%d", &choice);

    if(choice == 1){
        time1 t;
        clock(&t);
    }
    else if(choice == 2){
        int hr, min, sec;
        cout << "Enter the time: **24 hour format**" << endl << "hour: ";
        cin >> hr;
        cout << "minutes: ";
        cin >> min;
        cout << "seconds: ";
        cin >> sec;

        if(hr>23 || hr<0 ||sec > 59||sec < 0||min < 0||min>59){
            printf("*** Invalid time entered ***\n setting clock to 00:00:00\n");
            time1 t;

            clock(&t);
            return 0;
        }
        time1 t(hr, min, sec);
        clock (&t);
    }
    else{
        printf("invalid input\n setting the clock to 00:00:00");
        time1 t;
        clock(&t);
    }
    return 0;
}