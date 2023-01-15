#include <iostream>
using namespace std;
int isGreatest(int n1, int n2, int n3);
main()
{
    int n1;
    int n2;
    int n3;
    int greatest;
    cout << "Enter number 1:";
    cin >> n1;
    cout << "Enter number2:";
    cin >> n2;
    cout << "Enter number3:";
    cin >> n3;
    greatest = isGreatest(n1, n2, n3);
    cout << "Gretest number is:" << greatest << endl;

}
int isGreatest(int n1, int n2, int n3)
{
    int greatest;
    if (n1 > n2 && n1 > n3)
    {
     greatest = n1;
    }
   else if(n2 > n3 && n2 > n1)
    {
     greatest = n2;
    }
    else if(n3 > n1 && n3 > n2)
    {
     greatest = n3;
    }
    else
    {
        greatest = n1;
    }
    return greatest;

}