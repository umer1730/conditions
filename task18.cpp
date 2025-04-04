#include<iostream>
using namespace std;
main()
{
    string name;
    int obtainedmarks,totalmarks;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your obtainedmarks:";
    cin>>obtainedmarks;
    cout<<"Enter your totalmarks:";
    cin>>totalmarks;
    int marks = obtainedmarks / totalmarks; 
    if (obtainedmarks > '50%')
    {
    cout<<name<<" "<<"has passed the examination with"<<" "<<obtainedmarks<<" "<<"out of"<<" "<<totalmarks; 
    }
    if (obtainedmarks < '50%')
    {
    cout<<name<<" "<<"has failed the examination with"<<" "<<obtainedmarks<<" "<<"out of"<<" "<<totalmarks;
    }
}