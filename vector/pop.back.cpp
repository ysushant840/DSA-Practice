#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr;

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    cout << "Before Erase: ";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // 30 ko delete karega (index 2)
    arr.erase(arr.begin() + 2);

    cout << "After Erase: ";

    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}