#include <iostream>
using namespace std;

main()
{
    int price;
    string brand;
    cout <<"Enter price:";
    cin >> price;
    cout << "Enter name of brand:" << endl;
    cin >> brand;
    
    if(price <= 1500 )
    {
        if (brand == "almirah")
        {
          cout << "Buy the outfit!" << endl;
        }
        else
        {
            cout << "Different brands!" << endl;
        }
        
    }
    else
    {
        cout << "Dont buy outfit!" << endl;
    }
}
