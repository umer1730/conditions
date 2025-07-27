#include<iostream>
using namespace std;
bool isGoalScored(char field[7][16]) 
{
    for (int row = 0; row < 7; row++) 
    {
        for (int col = 0; col < 16; col++) 
        {
            if (field[row][col] == '0') 
            { // Ball found
                return (col >= 7 && col <= 8 && row <= 3); 
            }
        }
    }
    return false; 
}
int main() {
    char field[7][16] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '0', '#', ' ', ' ', ' ', ' ', ' ', ' '}, // Ball placed here
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' '}, // Crossbar
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}
    };
    if (isGoalScored(field)) {
        cout << "Goal! The ball passed through." << endl;
    } 
    else {
        cout << "Missed! Try again." << endl;
    }
    return 0;
}