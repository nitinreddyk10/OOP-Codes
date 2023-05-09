/ constructor, parameterized constructor
#include <iostream>
using namespace std;

class cars
{
	private:
		
		string company_Name; // memeber variable
		string model_Name;
		string fuel_Type;
		float mileage;
		double price;
	
	public:
		
		cars() // special memeber function and it is called as constructor
		{
			cout<<"\n Default Constructor";
			company_Name= "maruti";
			model_Name ="Baleno";
			fuel_Type ="Pertrol";
			mileage =45.6;
			price	= 800000;   // it is used to initilize the object varible
		}
		
		cars(string cname, string mname, string ftype, float m, double p) // parametrized constructor
		{
			cout<<"\n parametrized constructor";
			company_Name= cname;
			model_Name =mname;
			fuel_Type =ftype;
			mileage = m;
			price	= p; 
					
		}
		
		
		
		void display() // member function
		{
			cout<<"company name" << company_Name << endl;
			cout<<"model name" << model_Name << endl;
			cout<<"fuel type" << fuel_Type << endl;
			cout<<"mileage" << mileage << endl;
			cout<<"price" << price << endl;
		}
		
		
};

int main()
{
	cars c1; // object creation, implicit call to default constructor
	
	c1.display(); // explicit call to the member function
	
	cars c2("Hyudai", "I10", "Petrol", 89.7, 700000); //calls parametrized constructor
	
	c2.display();
	
	
}