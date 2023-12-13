//Created by : Yash Mahesh Khalkar

// Write C++ program using STL for sorting and searching user defined records such as Item
// records (Item code, name, cost, quantity etc) using vector container.






#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Item {
    int Itemcode;
    string Itemname;
    float cost;
    int quantity;
};

void displayItem(const Item& item) {
    cout << "\nItem Code: " << item.Itemcode << " Item Name: " << item.Itemname << " Item Cost: " << item.cost << " Item Quantity: " << item.quantity << endl;
}

int main() {
    vector<Item> items = {
        {101, "Item1", 30, 20},
        {103, "Item2", 50, 10},
        {102, "Item3", 80, 5}
    };

    cout << "\nUnsorted Items: ";
    for (const auto& item : items)
        displayItem(item);

    sort(items.begin(), items.end(), [](const Item& a, const Item& b) { return a.Itemcode < b.Itemcode; });

    cout << "\nSorted Items: ";
    for (const auto& item : items)
        displayItem(item);

    int searchcode;
    cout << "Enter item code to search: ";
    cin >> searchcode;
    
    if (any_of(items.begin(), items.end(), [searchcode](const Item& item) { return item.Itemcode == searchcode; }))
        cout << "\nItem Found";
    else
        cout << "\nItem NOT Found";

    return 0;
}