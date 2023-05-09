// new an delete for arrays

// If we don't know the size of the array until rum time

#include<iostream>
using namespace std;

main()
{
	int num;
	cout << "Enter the number of students";
	cin >> num;
	
	int *p;
	
	p = new int[num];
	
	cout << "Enter the rollno of students" << endl;
	
	for (int i=0; i<num ; i++)
	{
		cout<< "student"<< i+1;
		cin >> *(p+i);
	}
	
	for (int i=0; i<num ; i++)
	{
		cout << "content="<< *(p+i) << endl;
		cout<< "address="<<(p+i) << endl;
	}
	
	delete[] p;	
}