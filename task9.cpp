#include <iostream>
using namespace std;
float checkCost(string product, string city, int quantity);
main()
{
    string product;
    string city;
    int quantity;
    float price;
    cout << "Enter name of product: ";
    cin >> product;
    cout << "Enter name of city: ";
    cin >> city;
    cout << "Enter quantity: ";
    cin >> quantity;
    price =checkCost(product,city,quantity);
    cout << "Price of product in desired city is: " << price << endl;

}
float checkCost(string product, string city, int quantity)
{
    float price;
    if(product == "coffee" && city == "Sofia")
    {
        price = 0.50 * quantity;
    }
    else if(product == "coffee" && city == "Plodiv")
    {
       price = 0.40 * quantity;
    }  
    else if(product == "coffee" && city == "Varna")
    {
       price = 0.45 * quantity;
    }  
    if(product == "water" && city == "Sofia")
    {
        price = 0.80 * quantity;
    }
    else if(product == "water" && (city == "Plodiv" || city == "Varna"))
    {
        price = 0.70 * quantity;
    }
    if(product == "beer" && city == "Sofia")
    {
        price = 1.20 * quantity;
    }
    else if(product == "beer" && city == "Plodiv")
    {
        price = 1.15 * quantity;
    }
    else if(product == "beer" && city == "Varna")
    {
        price = 1.10 * quantity;
    }
    if(product == "sweets" && city == "Sofia")
    {
        price = 1.45 * quantity;
    }
    else if(product == "sweets" && city == "Plodiv")
    {
        price = 1.30 * quantity;
    }
    else if(product == "sweets" && city == "Varna")
    {
        price = 1.35 * quantity;
    }
    if(product == "peanuts" && city == "Sofia")
    {
        price = 1.60 * quantity;
    }
    else if(product == "peanuts" && city == "Plodiv")
    {
        price = 1.50 * quantity;
    }
    else if(product == "peanuts" && city == "Varna")
    {
        price = 1.55 * quantity;
    }
return price;
}
