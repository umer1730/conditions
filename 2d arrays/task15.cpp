#include<iostream>
using namespace std;
void showInventory(const int *inventoryptr,int size)
{
    cout<<"\nCurrent inventory:\n";
    for (int i = 0; i < size; ++i, ++inventoryptr)
    {
        cout<< "  Product " << i << ": " << *inventoryptr <<endl;
    }
}
main()
{
    int inventory[5] = {10, 25, 15, 30, 5};
    const int SIZE = 5;
    showInventory(inventory, SIZE);
    int id, change;
    cout << "\nEnter product ID (0-4): ";
    cin >> id;
    cout << "Enter quantity to add (+) or remove (-): ";
    cin >> change;
    if (id < 0 || id >= SIZE)
    {
        cout << "Error: Invalid product ID. ID Must be between 0 and 4."<<endl;
        return 1;
    }
    int &stock = inventory[id];
    if (stock + change < 0)
    {
        cout<<"Error: Cannot reduce stock below 0. "
             <<"Current stock: " << stock << ", attempted change: " << change <<endl;
        return 1;
    }
    stock += change;
    cout<<"\nInventory updated successfully!\n";
    showInventory(inventory, SIZE);
    return 0;
}
