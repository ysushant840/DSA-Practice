// #include<iostream>
// using namespace std;

// int main() {

//     int arr[5] = {10, 50, 30, 90, 40};

//     int maximum = arr[0];

//     for(int i = 1; i < 5; i++) {
//         if(arr[i] > maximum) {
//             maximum = arr[i];
//         }
//     }

//     cout << "Maximum = " << maximum;

//     return 0;
// }


// Reverse of an Array
#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    int start = 0;
    int end = 4;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}