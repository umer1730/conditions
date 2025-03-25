#include<iostream>
using namespace std;
main()
{
    float temperature;
    while(true)
    {
    cout<<"Enter your temperature in fahrenheit:";
    cin>>temperature;
    if (temperature == 98)
    {
        cout<<"Normal"<<endl;
    }    
    if (temperature != 98)
    {
        cout<<"program ends"<<endl;
    }
}
}