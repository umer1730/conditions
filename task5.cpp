#include<iostream>
using namespace std;
string grade(int marks)
{
    if (marks >= 80)
    {
        cout<<"A^+";
    }
    if (marks >= 60)
    {
        cout<<"A^-";
    }
    if (marks < 60)
    {
        cout<<"Fail";
    }
}
main()
{
    int studentmarks;
    cout<<"Enter student marks:";
    cin>>studentmarks;
    string result = grade(studentmarks);
    cout<<""<<result;
    return 0;
}