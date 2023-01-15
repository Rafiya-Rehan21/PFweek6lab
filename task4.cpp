#include <iostream>
using namespace std;
string speedCheck(float speed);
main()
{
    float speed ;
    string speedStatus;
    cout << "Enter speed:";
    cin >> speed;
    speedStatus = speedCheck(speed);
    cout << "Speed satus is: " << speedStatus << endl;
}
string speedCheck(float speed)
{
    string speedStatus;
    if(speed <=10)
    {
        speedStatus="SLOW";
    }
    else if(speed > 10 && speed <= 50)
    {
        speedStatus= "AVERAGE";
    }
    else if(speed > 50 && speed <=150)
    {
        speedStatus= "FAST";
    }
    else if(speed > 150 && speed <=1000)
    {
        speedStatus= "ULTRA-FAST";
    }
    return speedStatus;
}