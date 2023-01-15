#include <iostream>
using namespace std;
float ticketPrice(float budget, string category, int people);
main()
{
    float budget;
    string category;
    int people;
    float result;
    cout << "Enter total budget: ";
    cin >> budget;
    cout << "Enter ticket category: ";
    cin >> category;
    cout << "Enter number of people in a group: ";
    cin >> people;
    result= ticketPrice(budget,category,people);
}
float ticketPrice(float budget, string category, int people)
{
    float sharedPrice;
    float ticket;
    float remaining;
    float N;
    float M;
    float result;
    if(people >= 1 && people <= 4)
    {
        sharedPrice = (75 * budget) / 100;
        remaining = budget - sharedPrice;
        if(category == "VIP")
        {
        ticket = 499.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M  << " QR." << endl;  
        }
        }
        else if(category == "Normal")
        {
        ticket = 249.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        {  M = ticket - remaining;
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
        
    }
    
    else if (people >=5 && people <= 9)
    {
        sharedPrice = (60 * budget) / 100;
        remaining = budget - sharedPrice;        
        if(category == "VIP")
        {
        ticket = 499.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
        else if(category == "Normal")
        {
        ticket = 249.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
    }
    
    else if (people >= 10 && people <= 24)
    {
        sharedPrice = (50 * budget) / 100;
        remaining = budget - sharedPrice;     
        if(category == "VIP")
        {
        ticket = 499.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
        else if(category == "Normal")
        {
        ticket = 249.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
    }
     else if (people >=25 && people <= 49)
    {
        sharedPrice = (40 * budget) / 100;
        remaining = budget - sharedPrice;  
        if(category == "VIP")
        {
        ticket = 499.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M  << " QR." << endl;  
        }
        }
        else if(category == "Normal")
        {
        ticket = 249.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
    }
    else if (people >= 50)
    {
        sharedPrice = (25 * budget) / 100;
        remaining = budget - sharedPrice;       
        if(category == "VIP")
        {
        ticket = 499.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M  << " QR." << endl;  
        }
        }
        if(category == "Normal")
        {
        ticket = 249.99 * people;
        N = remaining - ticket;
        M = ticket - remaining;
        if(remaining > ticket)
        {
         cout << "YES ! You have " << N << " QR left." << endl;
        }
        else if(ticket > remaining)
        { 
         cout << "Not enough money! You need " << M << " QR." << endl;  
        }
        }
    }
return result;
} 