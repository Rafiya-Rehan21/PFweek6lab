#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string title;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your gender:";
    cin >> gender;
    title = checkTitle(age, gender);
    cout << "Title is:" << title << endl;

}
string checkTitle(int age, char gender)
{
    string title;
    if(age >= 16 && gender =='M')
    {
       title = "Mr.";
    }
    else if(age < 16 && gender =='M')
    {
        title ="Master";
    }
    else if(age >=16 && gender =='F')
    {
        title = "Ms.";
    }
    else if(age <16 && gender == 'F')
    {
        title = "Miss";
    } 
    return title;
}