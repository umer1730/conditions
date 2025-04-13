#include<iostream>
using namespace std;
int value(int num1,int num2)
{
    int division = num1 / num2;
    cout<<"Division:"<<division<<endl;
    if (division > 20)
    {
        cout<<"Greater than 20";
    }
    else
    {
        cout<<"Less than 20";
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter the num1:";
    cin>>num1;
    cout<<"Enter the num2:";
    cin>>num2;
    int answer = value(num1,num2);
}