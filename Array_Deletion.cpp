#include <iostream>
using namespace std;
int main() 
{
    const int max = 100;
    int arr[max];
    int n;
    int loc;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }
    cout << "Enter the position of the element to delete: ";
    cin >> loc;
    if (loc < 0 || loc >= n) 
    {
        cout << "Invalid position." << endl;
    } 
    else 
    {
        for (int i = loc; i < n - 1; ++i) 
        {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << "Element at position " << loc << " deleted successfully.\n";

        cout << "Updated array:\n";
        for (int i = 0; i < n; ++i) 
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}