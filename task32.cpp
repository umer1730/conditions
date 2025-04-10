#include<iostream>
using namespace std;
int addition(int x,int y)
{
    int sum = x + y;
    cout<<"Sum is:"<<sum;
    if (sum > 10){
    cout<<"true";
}
else 
{
    cout<<"false";
}
}
main()
{
    int x,y;
    cout<<"Num 1:";
    cin>>x;
    cout<<"Num 2:";
    cin>>y;
    int result = addition(x,y);
}
