#include<iostream>
using namespace std;

inline int add(int a, int b)
{
	return (a+b);
}

int sum(int a, int b, int c=0, int d)
{
	return (a+b+c+d);
}

int main()
{
	cout<<"addition of 4 and 5 is " << add(4,5)<<endl;
	cout<< sum(1,2,3,4)<<endl;
	cout<< sum (1,2)<<endl;
	return 0;
}