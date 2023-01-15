#include <iostream>
#include <cmath>
using namespace std;
float Volleyball(string year, float holidays, int weekends);
main()
{
    string year;
    int holidays;
    int weekends;
    float result;
    cout << "Enter year i.e is normal or leap: ";
    cin >> year;
    cout << "Enter number of holidays in year:";
    cin >> holidays;
    cout << "Enter number of weekends:";
    cin >> weekends;
    result = Volleyball(year, holidays, weekends);
    cout << "Number of times he played football is:" << floor(result) << endl;

}
float Volleyball(string year, float holidays, int weekends)
{
    float playHoliday;
    float playWeekend;
    float total;
    float result;
    float leap;
    playHoliday = (2 * holidays) / 3;
    playWeekend = (3 * 48) /4;
    total = playHoliday + playWeekend;
    result = total;
    if(year =="leap")
    {
        leap = (15 * total) /100;
        result= leap + total;
    }
    return result;
}