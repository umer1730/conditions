#include <iostream>
using namespace std;
main()
{
int arr_size = 130;
int stu[arr_size];
for (int x = 0; x < arr_size; x = x + 1)
{
cout << "Enter " << x+1 << " element: ";
cin >> stu[x];
}
}