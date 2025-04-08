#include<iostream>
using namespace std;
main()
{
    float temp;
    while(true)
    {
    cout<<"Temperature of patient:";
    cin>>temp;
    if (temp == 98)
    {
        cout<<"Normal"<<endl;
    }
    if (temp != 98)
    {
        cout<<"Program ends"<<endl;
    }
}
}