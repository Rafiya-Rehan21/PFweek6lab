#include <iostream>
using namespace std;
bool greaterNumber(int n1, int n2, int n3);
main()
{
    int n1;
    int n2;
    int n3;
    bool greater;
    cout << "Enter 1st number:";
    cin >> n1;
    cout << "Enter 2nd number:";
    cin >> n2;
    cout << "Enter 3rd number:";
    cin >> n3;
    greater = greaterNumber(n1,n2,n3);
    cout << greater << endl;
}
bool greaterNumber(int n1, int n2, int n3)
{
    bool greater;
    if(n1 == n2 && n1 == n3)
    {
        return true;
    }
    else if(n2 == n1 && n2 == n3)
    {
        return true;
    }
    if(n3 == n1 && n3 == n2)
    {
        return true;
    }
    return greater;
}