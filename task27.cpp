#include<iostream>
using namespace std;
void animals(int chickens,int cows,int pigs);
main()
{
    int chickens,cows,pigs;
    cout<<"Chickens";
    cin>>chickens;
    cout<<"Cows";
    cin>>cows;
    cout<<"Pigs";
    cin>>pigs;
    int totallegs = (chickens * 2) +  (cows * 4) + (pigs * 4);
    cout<<"Totallegs:"<<totallegs<<endl;
}