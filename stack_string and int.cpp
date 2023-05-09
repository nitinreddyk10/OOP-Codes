#include<iostream>
#include <stack>
using namespace std;

main()
{
	stack<string> s; //  creating object for class template
	stack<int> s1;
	
	s.push("Ant");
	s.push("Boy");
	s.push("Cat");
	s.push("Dad");
	s.push("Ent");

	s1.push(2);
	s1.push(3);
	
    while( ! s.empty() )
    {
    	cout<< " " << s.top();
    	s.pop();
	}
	
	while( ! s1.empty() )
    {
    	cout<< " " << s1.top();
    	s1.pop();
	}
	
	
}
