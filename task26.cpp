#include<iostream>
using namespace std;
int main() 
{
    string name;
    int marks;
    while(true)
    {
    cout << "Enter the student's name: ";
    cin>>name;
    cout << "Enter the student's marks out of 100: ";
    cin >> marks;
    float percentage = (static_cast<float>(marks) / 100) * 100;
    cout << "Percentage is: " << percentage << "%" << endl;
    cout << "Grade: ";
    if (percentage >= 90) 
    {
        cout << "A+";
    } 
    else if (percentage >= 80) 
    {
        cout << "A";
    } 
    else if (percentage >= 70) 
    {
        cout << "B+";
    } 
    else if (percentage >= 60) {
        cout << "B";
    } 
    else if (percentage >= 50) 
    {
        cout << "C";
    }
    else if (percentage >= 40) 
    {
        cout << "D";
    }
    else
    {
        cout << "F";
    }
    cout << endl;
    return 0;
}
}