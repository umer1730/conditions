#include<iostream>
using namespace std;
int marks(int eng,int math)
{
    int total = eng + math;
    cout<<"Total is:"<<total<<endl;
    if (total >= 50)
    {
        cout<<"Pass"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
}
int main()
{
    int eng,math;
    cout<<"English marks:";
    cin>>eng;
    cout<<"Math marks:";
    cin>>math;
    int result = marks(eng,math);
}