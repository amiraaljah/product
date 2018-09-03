class Product 
{

public:
product(); // default constructor; 
product(int id, string name ,double price); //parameterized contructor (3 arg constr)
void setPrice(double price) const; //sets the price field 
int getId() const; // returns const id by value
bool isEqual(const Product& p) const;
bool isGreater(const Product& p) const;
bool isSmaller(const Product& p) const;
void Print() const; //display product information

private:
int id; //product id 
string name; // product name
double price; //product price
};





