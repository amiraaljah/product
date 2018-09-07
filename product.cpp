#include<iostream>
#include<string>
#include "Product.h"
using namespace std;


Product::Product()  
{
	int id = 0;
	string name = "0";
	double price = 0.0;
}

//product class constructor 
Product::Product(int P_id, string P_name, double P_price)
{
	id = P_id;
	name = P_name;
	price = P_price;
}

void Product::setPrice(double price) const
{
	this->price = price;
}


// Getter fucnction
int getId() const 
{
	return id;
}


bool isGreter(const Product& p) {
	if (ob1.getId > ob2.getId) {
		// rest of the code
	}
}

bool isSmaller(const Product& p) {
	if (ob1.getId < ob2.getId) {
		// rest of the code
	}
}


bool isEqual(const Product& p) {
	if (ob1.getId == ob2.getId) {
		// rest of the code
	}
}


void Print() const
{
	cout << "Product ID :" <<  id << "Product name:" << name << "Product price:"<< price << endl;

}

