#include <iostream>
using namespace std;
float lowestPrice(int n, string period);
main()
{
    int n;
    string period;
    float fare;
    cout << "Enter number of kilometers: ";
    cin >> n;
    cout << "Enter the time you want to travel: ";
    cin >> period;
    fare = lowestPrice(n,period);
    cout << "Lowest price is: " << fare << endl;

}
float lowestPrice(int n, string period)
{
    float fare;
    if(n >= 20 && period == "Day" || period == "Night")
    {
        fare = n * 0.09;
    } 
    if(n >= 100 && period == "Day" || period == "Night")
    {
        fare = n * 0.06;
    }
    else if(n <=20 && period =="Day")
    {
        fare = 0.70 + (n * 0.79);
    }
    else if(n <= 20 && period =="Night")
    {
        fare = 0.70 + (n * 0.9);
    }
    return fare;
}
    
    
    
    
    
    