#include<iostream>
using namespace std;
void add(int num1,int num2)
{
    int sum;
    sum = num1 + num2;
    cout<<"Sum is:"<<sum<<endl;
}
void multiply(int num1,int num2)
{
    int product;
    product = num1 * num2;
    cout<<"Product is:"<<product<<endl;
}
main()
{
    int num1,num2;
    char op;
    cout<<"Enter the num1";
    cin>>num1;
    cout<<"Enter the num2";
    cin>>num2;
    cout<<"Enter '+' to only  add the number or '*' to only multiply the number";
    cin>>op;
    if (op == '+')
    {
        add(num1,num2);
    }
    if (op == '*')
    {
        multiply(num1,num2);
    }
}