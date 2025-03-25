#include<iostream>
using namespace std;
void add(int num1,int num2)
{
int sum;
sum = num1 + num2;
cout<<"Sum is:"<<sum;
}
main()
{
    int num1,num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enetr num2:";
    cin>>num2;
    add(num1,num2);
}