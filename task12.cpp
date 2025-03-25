#include<iostream>
using namespace std;
main()
{
    int x,y,z;
    int number;
    cout<<"Enter the value:";
    cin>>x;
    cout<<"Enter the value:";
    cin>>y;
    cout<<"Enter the value:";
    cin>>z;
    if (y > z)
    {
        if (x > y)
        number = x;
    else
    number = y;
    }
    else 
    {
        if (x > z)
        number = x;
    else
    number = z;
    }
    cout<<"The largest number is:"<<number;
}