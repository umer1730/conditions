#include<iostream>
using namespace std;
void howmanywalls(int n,int w,int h);
main()
{
    int n,w,h;
    cout<<"n";
    cin>>n;
    cout<<"w";
    cin>>w;
    cout<<"h";
    cin>>h;
    int areaperwall = w * h;
    int walls = (areaperwall == 0) ? 0 : (n / areaperwall);
    cout<<"walls"<<walls;
}