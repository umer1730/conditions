#include <iostream>
using namespace std;

// Function to display inventory using a pointer
void showInventory(const int* inventoryPtr, int totalProducts)
{
    cout << "\nCurrent inventory:\n";
    for (int productIndex = 0; productIndex < totalProducts; ++productIndex, ++inventoryPtr)
    {
        cout << "  Product " << productIndex << ": " << *inventoryPtr << '\n';
    }
}

int main()
{
    int productStock[5] = {10, 25, 15, 30, 5};
    const int TOTAL_PRODUCTS = 5;

    showInventory(productStock, TOTAL_PRODUCTS);

    int productId, quantityChange;
    cout << "\nEnter product ID (0-4): ";
    cin >> productId;

    cout << "Enter quantity to add (+) or remove (-): ";
    cin >> quantityChange;

    // Validate product ID
    if (productId < 0 || productId >= TOTAL_PRODUCTS)
    {
        cout << "Error: Invalid product ID. Must be between 0 and 4." << endl;
        return 1;
    }

    // Reference to the stock quantity of selected product
    int& selectedProductStock = productStock[productId];

    // Validate resulting quantity
    if (selectedProductStock + quantityChange < 0)
    {
        cout << "Error: Cannot reduce stock below 0. "
             << "Current stock: " << selectedProductStock
             << ", attempted change: " << quantityChange << endl;
        return 1;
    }

    // Update inventory
    selectedProductStock += quantityChange;

    cout << "\nInventory updated successfully!\n";
    showInventory(productStock, TOTAL_PRODUCTS);

    return 0;
}
