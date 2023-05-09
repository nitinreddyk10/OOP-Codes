// CPP program to illustrate
// Implementation of push() function
#include <iostream>
#include <queue>
using namespace std;
  
int main()
{
    // Empty Queue
    queue<int> myqueue;
    myqueue.push(0); // enqueue()
    myqueue.push(1); // enqueue()
    myqueue.push(2); // enqueue()
    
    
  
    // Printing content of queue
    while (!myqueue.empty()) {
        cout << ' ' << myqueue.front(); // it points to first element in the queue
        myqueue.pop(); // dequeue()
    }
}
