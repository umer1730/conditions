#include <iostream>
using namespace std;

int IncludeMarksOfProject(int *marksInPF, int value) {
 
 int Totalmarks = value * (*marksInPF);
 *marksInPF = 60;
  return Totalmarks;
}

int main() {
    int StudentGrade = 10;
    int InitialMarksInPF = 50;
    int MyResult = 0;
    MyResult = IncludeMarksOfProject( &InitialMarksInPF, StudentGrade);
    
    cout << "StudentGrade: " << StudentGrade << endl;
    cout << "InitialMarksInPF: " << InitialMarksInPF << endl;
    cout << "MyResult: " << MyRes