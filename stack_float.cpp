#include <iostream>
#include <stack>
using namespace std;

main()
{
stack<float> s;
s.push(10.2);
s.push(10.21);
s.push(10.22);
s.push(10.25);

while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }	
}

