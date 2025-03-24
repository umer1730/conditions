#include<iostream>
using namespace std;
main()
{
    int days;
    float dollars;
    float exchangerate;
    float salarypermonth;
    float salaryperyear;
    float salaryafterbonus;
    float salaryaftertax;
    float earningperdayinRps;
    cout<<"Enter working days per month:";
    cin>>days;
    cout<<"Enter earned dollars per day:";
    cin>>dollars;
    cout<<"Enter exchange rate from USD to PKR:";
    cin>>exchangerate;
    salarypermonth = days * dollars;
    salaryperyear = salarypermonth * 12;
    salaryafterbonus = salaryperyear + (salarypermonth * 2.5);
    salaryaftertax = salaryafterbonus - (salaryafterbonus * 25/100);
    earningperdayinRps = (salaryaftertax * exchangerate) / 365;
    cout<<"Average earnings per day:"<<earningperdayinRps;
}