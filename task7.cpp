#include <iostream>
using namespace std;
string evenishorOddish(int number);
main()
{
    int number;
    string type;
    cout << "Enter number:";
    cin >> number;
    type = evenishorOddish(number);
    cout << "Number is: " << type << endl;

}
string evenishorOddish(int number)
{
    string type;
    if(number % 2 ==0)
    {
        type = "evenish";
    }
    else if(number % 2 != 0)
    {
        type = "oddish";
    }
return type;
}