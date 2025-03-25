#include<iostream>
using namespace std;
main()
{
    string name1,name2,name3;
    int age1,age2,age3;
    cout<<"Ente the name age of the first brother:";
    cin>>name1>>name1;
    cout<<"Enetr the name and age of the second brother:";
    cin>>name2>>age2;
    cout<<"Enetr the name and age of the third brother:";
    cin>>name3>>age3;
    string youngerbrother;
    int minage;
    youngerbrother=name1;
    minage = 1;
    if (age2 <minage)
    {
        minage = age2;
        youngerbrother=name2;
    }
    if (age3 < minage)
    {
        minage = age3;
        youngerbrother=name3;
    }
    cout<<"The yonger brother is:"<<youngerbrother<<endl;

}