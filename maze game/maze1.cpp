#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
void playerMove(int x, int y);
main()
{
    int x = 3, y = 4;
    system("cls");
    printMaze();
    while(true)
    {
    playerMove(x,y);
    x = x+1;
    if(x == 20)
    {
        x = 3;
        
    }
    }
}
void playerMove(int x,int y)
{
    gotoxy(x,y);
    cout<<"P";
    Sleep(200);
    gotoxy(x,y);
    cout<<" ";
}
    
void gotoxy(int x, int y)

    {
    
    COORD coordinates;
    
    coordinates.X = x;
    
    coordinates.Y = y;
    
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);

}
void printMaze()
{         
    cout<<"#######################################"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#                                     #"<<endl;
    cout<<"#######################################"<<endl;
}