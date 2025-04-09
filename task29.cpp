#include <iostream>
using namespace std;
void century(int year)
{
    int cent = (year - 1) / 100 + 1;
    string suffix;
    if (cent % 10 == 1 && cent % 100 != 11)
        suffix = "st";
    else if (cent % 10 == 2 && cent % 100 != 12)
        suffix = "nd";
    else if (cent % 10 == 3 && cent % 100 != 13)
        suffix = "rd";
    else
        suffix = "th";
    cout << cent << suffix << " century" << endl;
}
int main() {
    int year;
    cout << "Enter a year between 1000 and 2010: ";
    cin >> year;
    if (year >= 1000 && year <= 2010) 
    {
        century(year);
    } 
    else 
    {
        cout << "Year out of valid range!" << endl;
    }
}