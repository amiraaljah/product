#include<iostream>
#include<string>
#include "Product.h"
using namespace std;


Product::Product() //default constructor that initializes the product id,name  
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
		cout << ob1 << "is greater than " << ob2 << endl;
	}
	
}

bool isSmaller(const Product& p) {
	if (ob1.getId < ob2.getId) {
		cout << ob1 << "is smaller than" << ob2 << endl;
	}

}


bool isEqual(const Product& p) {
	if (ob1.getId == ob2.getId) {
		cout << ob1 << "is equal to "<< ob2 << endl;
	}
}


void Print() const
{
	cout << "Product ID :" << id << "Product name:" << name << "Product price:"<< price << endl;
}
