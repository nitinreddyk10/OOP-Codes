//ambiguity resolution in multiple inhertiance
#include<iostream>
using namespace std;

class low
{
	public:
	void display()
	{
		cout<<"Class low" <<endl;
	}
};

class middle
{
	public:
		void display()
		{
			cout<<"class middle" <<endl;
		}
};

class high : public low, public middle
{
	public:
	void display()	
	{
		cout << "class high" << endl;
		low::display();
		middle::display();
		//display();
	}
};
int main()
{
	high h;
	h.display();// this place
	return 0;
}
