#include <iostream>
using namespace std;
string result(int marks)
 {
    if (marks > 60)
        cout<<"Pass";
    else
        cout<<"Fail";
}
int main() 
{
    int studentMarks;
    cout << "Enter marks of the student: ";
    cin >> studentMarks;
    string studentresult = result (studentMarks) ;
    cout <<" "<<studentresult << endl; 
    return 0;
}