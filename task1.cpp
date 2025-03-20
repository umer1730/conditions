#include<iostream>
using namespace std;
float discount(string day, float amount)
{
    float payable = amount;
    if (day == "Sunday")
    {
        payable = amount - (amount *10) / 100;
    }
    if (day == "Monday")
    {
        payable = amount - (amount * 8) / 100;
    }
    if (day == "tuesday")
    {
        payable = amount - (amount * 5) / 100;
    }
    return payable;
}
int main()
{
    float amount, payable;
    string day;
    cout<< "Enter Shopping Day:";
    cin >> day;
    cout<< "Enter Purhase Amount:";
    cin >> amount;
    payable = discount (day, amount);
    cout << "Payable Amount after discount:"<< payable;
}