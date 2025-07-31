#include<iostream>
using namespace std;
main()
{
    string movies[5]={"gladiator","tomrider","starwards","terminator","yoyo"};
    string moviename;
    cout<<"Enter the movie name:";
    cin>>moviename;
    int ticketprice = 500;
    float discount;
    bool isodd=false;
    for (int x = 0; x < 5;x++)
    {
    if (movies[x] == moviename)
    {
       isodd = x % 2;
       break;
    }
}
    if (isodd)
    {
        discount = ticketprice - (ticketprice * 5) / 100;
    }
    else
    {
        discount = ticketprice - (ticketprice * 10) / 100;
    }
    cout<<"The discount on the ticket is:"<<discount<<endl;
}
