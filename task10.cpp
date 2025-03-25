#include<iostream>
using namespace std;
main()
{
    int price,discount;
    while(true)
    {
    cout<<"Price:";
    cin>>price;    
    if (price == 500)
    {
    discount = (price * 1/20) - price; 
    cout<<"Price after discount:"<<discount;
    }        
    if (price != 500)
    {
        cout<<"Price after discount:"<<price;
        cout<<endl;
    }
}
}