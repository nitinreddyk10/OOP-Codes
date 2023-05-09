
#include <iostream>
#include <stack>
using namespace std;

main()
{
stack<string> s;
s.push("A");
s.push("B");
s.push("C");
s.push("D");

while (!s.empty()) {
        cout << ' ' << s.top();
        s.pop();
    }	
}


