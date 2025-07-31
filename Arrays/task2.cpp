#include<iostream>
#include<string>
using namespace std;
int main() 
{
    int ticketPrice = 500;
    string movies[5] = {"Gladiator", "Starwars", "Terminator", "Takinglives", "Tomrider"};
    string userMovie;
    bool movieFound = false;
    cout << "Available movies:"<<endl;
    for (int i = 0; i < 5; i++) {
        cout << "- " << movies[i] << endl;
    }
    cout << "\nEnter the movie name: ";
    getline(cin, userMovie);

    for (int i = 0; i < 5; i++) {
        if (movies[i] == userMovie) {
            movieFound = true;
            float discount;
            if (i % 2==0)
            {
                discount = 0.10;
            }
            else{
                discount = 0.5;
            }
            float finalPrice = ticketPrice - (ticketPrice * discount);
            cout << "You got a " << (discount * 100) << "% discount!" << endl;
            cout << "Final ticket price for \"" << movies[i] << "\": " << finalPrice << " PKR" << endl;
            break;
        }
    }
    if (!movieFound) 
    {
        cout << "Sorry, the movie "\" << userMovie << "\" is not available." << endl;
    }
    return 0;
}