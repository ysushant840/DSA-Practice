#include <iostream>
using namespace std;

int main()
{
    int arr[500];
    int n;

    cout << "How many array elements do you want to enter?" << endl;
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Print double of each element
    cout << "Double: ";
    for (int i = 0; i < n; i++)
    {
        cout << 2 * arr[i] << " ";
    }

    return 0;
}