#include<iostream>
using namespace std;
string checkpassfail(int marks);
main()
{
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    string result = checkpassfail(marks);
    cout<<"Result:"<<result;
}
string checkpassfail(int marks)
{
    if (marks > 80)
    {
        cout<<"A^+"<<endl;
    }
    if (marks < 80 > 60)
    {
        cout<<"A^-"<<endl;
    }
    if (marks < 60)
    {
        cout<<"Fail";
    }
}