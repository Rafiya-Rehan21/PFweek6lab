#include <iostream>
using namespace std;
float totalIncome(string screen, int rows, int columns);
main()
{
    string screen;
    int rows;
    int columns;
    float price;
    cout << "Enter type of screen i.e is  premiere, normal or discount:";
    cin >> screen;
    cout << "Enter number of rows:";
    cin >> rows;
    cout << "Enter number of columns:";
    cin >> columns;
    price = totalIncome(screen,rows,columns);
    cout << "Total Price is: " << price << endl;

}
float totalIncome(string screen, int rows, int columns)
{
    float price ;
    if(screen =="Premiere")
    {
        price = 12.00 * rows * columns;
    }
    if(screen == "Normal")
    {
        price = 7.50 * rows * columns;
    }
    if(screen == "Discount")
    {
        price = 5.00 * rows * columns;
    }
    return price;
}

