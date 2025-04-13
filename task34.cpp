#include<iostream>
using namespace std;
int value(int num1,int num2)
{
    int product = num1 * num2;
    cout<<"Product is:"<<product<<endl;
    if (product > 10)
    {
    cout<<"product is greater then 10";
    cout<<"product is greater then 10";
    }
    if (product < 10)
    {
        cout<<"product is less then 10";
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter the num1:";
    cin>>num1;
    cout<<"Enter the num2:";
    cin>>num2;
    int multiply = value(num1,num2);
}