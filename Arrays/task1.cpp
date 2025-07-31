#include<iostream>
using namespace std;
main()
{
    int num[5];
    int largest;
    cout<<"Enter 5 numbers:"<<endl;
    for(int i=0;i < 5;i++)
    {
        cout<<"Number"<<i+1<<":";
    cin>>num[i];
}
largest = num[0];
for(int i = 1;i < 5;i++)
{
    if (num[i] > largest)
    {
        largest = num[i];
    }
}
cout<<"The largest number is:"<<largest<<endl;
}