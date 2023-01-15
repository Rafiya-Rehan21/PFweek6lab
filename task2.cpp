#include <iostream>
using namespace std;
float amount(string day, string month, int price);
main()
{
  string day;
  string month;
  int price;
  float payableAmount;
  cout << "Enter month:";
  cin >> month;
  cout << "Enter day:";
  cin >> day;
  cout << "Enter price:";
  cin >> price;
  payableAmount =amount(day,month,price);
  cout << "Price is:" << payableAmount << endl;
}
float amount(string day, string month, int price)
{
    float discount;
    float payableAmount;
    payableAmount = price;
    if(day == "Sunday" && month == "October"|| month == "March" || month == "August")
    {
    discount = (10 * price)/100;
    payableAmount = price - discount;
    }
   else if (day == "Monday" && month == "November" || month == "December")
   {
    discount = (5 * price ) /100;
    payableAmount = price - discount;
   }
        return payableAmount;
}
