#include<iostream>
#include<string>
using namespace std;
char board[5][5]={
    {'.', '.', '.', '*', '*'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '*', '.', '.', '.'},
    {'.', '.', '*', '*', '.'}
};
string firetorpedo(string coordinate)
{
    int row=coordinate[1]-'1';
    int col=coordinate[0]-'A';
    if (row < 0 || row >= 5 || col < 0 || col >= 5)
    {
        return "Invalid coordinate";
    }
    if (board[row][col] == '*') {
    return "BOOM"; 
} 
else {
    return "splash"; 
}
}
main()
{
    while(true)   // you may be put here i use it for checking
    {
    string coordinate;
    cout<<"Enter coordinate to fie torpedo(e.g) A1,B3,E5:";
    cin>>coordinate;
    cout<<"Result:"<<firetorpedo(coordinate)<<endl;
}
}