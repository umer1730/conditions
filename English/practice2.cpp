#include<iostream>
using namespace std;
main()
{
    int score1;
    int score2;
    cout<<"Enter Babar's t20 score:";
    cin>>score1;
    cout<<"Enter Babar's odi score:";
    cin>>score2;
    float average;
    average = (score1+score2) / 2;
    cout<<"Average is:"<<average;
}