#include <iostream>
using namespace std;
string result(float number)
{
string grade;
if (number > 15){
grade = "Passed";
}
else{
grade = "Failed";
}
return grade;
}
main(){
float stu[130];
for(int x = 0; x < 130; x = x+1){
cin >> stu[x];
}
for(int idx = 0; idx < 130; idx = idx + 1){
string grade = result(stu[idx]);
cout << stu[idx] << ": " << grade << endl;
}
}