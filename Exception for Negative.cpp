//Exception handling for negative values

#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter any value"<<endl;
	cin>>x;
	try
	{
		if (x<0)
		{
			throw x;
			cout << "After throw (Never executed) \n";
		}
	}
	catch (int ex)
	{
		cout<<"Exception caught"<<ex<<endl;
	}
	cout << "After catch (Will be executed) \n";
	return 0;
}
