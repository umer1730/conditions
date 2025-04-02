#include<iostream>
using namespace std;
main()
{
    int test,odi,t20;
    cout<<"Enter Virat's test scores:";
    cin>>test;
    cout<<"Enter the Virat's Odi scores:";
    cin>>odi;
    cout<<"Enter Virat's t20 scores:";
    cin>>t20;
    double average = (test + odi + t20) / 3;
    cout<<"Virat kohli's total career average is:"<<average;

}