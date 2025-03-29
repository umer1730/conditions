#include<iostream>
using namespace std;

void add();

int main()
{
    add();
}
void add ()
{
    int i;
    int j;
    cout<<"Enter:";
    cin>>i;
    cout<<"Enter:";
    cin>>j;
    int sum;
    sum = i + j;
    cout<<"sum;"<<sum;
}