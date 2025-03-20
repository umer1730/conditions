#include<iostream>
using namespace std;
float discount(string day, string month, float amount)
{
    float payable = amount;
    if (day == "Sunday" && (month == "October" || month == "March" || month == "August"))
    {
        payable = amount - (amount * 10) / 100;
    }
    if (day == "Monday" && (month == "November" || month == "December"))
    {
        payable = amount - (amount * 5) / 100;
    }
    return payable;
}
int main()
{
    float amount,payable;
    string day,month;
    cout << "Enter Shopping day:";
    cin>> day;
    cout<<"Enter Discount month:";
    cin>> month;
    cout << "Enter Purchase Amount:";
    cin>> amount;
    payable = discount (day,month,amount);
    cout << "Payable Amount after discount:"<< payable;

}