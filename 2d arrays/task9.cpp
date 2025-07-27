#include<iostream>
using namespace std;
bool isIdentityMatrix(int matrix[3][3]) 
{
    for (int i = 0; i < 3;i++) 
    {
        for (int j = 0; j <3;j++) 
        {
            if ((i == j && matrix[i][j] != 1) || (i != j && matrix[i][j] != 0)) {
                return false;  // not identity matrix
            }
        }
    }
    return true;     // identity matrix
}
int main() 
{
    int matrix[3][3];
    cout << "Enter the elements of the matrix:"<<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    if (isIdentityMatrix(matrix)) 
    {
        cout<<"The matrix is an Identity Matrix."<<endl;
    } 
    else{
        cout<<"The matrix is NOT an Identity Matrix."<<endl;
    }
    return 0;
}