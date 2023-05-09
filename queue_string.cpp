// CPP program to illustrate
// Implementation of push() function
#include <iostream>
#include <queue>
using namespace std;
  
int main()
{
    // Empty Queue
    queue<string> myqueue;
    myqueue.push("A");
    myqueue.push("B");
    myqueue.push("C");
    
    
  
    // Printing content of queue
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front();
        myqueue.pop();
    }
}
