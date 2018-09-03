class Product 
{
public:
//constructors
product(); // default constructor; 
product(int id, string name ,double price); //parameterized contructor (3 arg constr)
  
// setters and getters  
void setPrice(double price) const; //sets the price field 
int getId() const; // returns const id by value
  
//These functions receive an unmodifiable reference to a Product object and
//copies the object referenced to the current object 
bool isEqual(const Product& p) const; 
bool isGreater(const Product& p) const;
bool isSmaller(const Product& p) const;
  
void Print() const; //display product information

private:
 //member variables
int id; //product id 
string name; // product name
double price; //product price
};





